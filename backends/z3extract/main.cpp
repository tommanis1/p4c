#include <iostream>

#include "backends/p4tools/common/compiler/midend.h"
#include "backends/p4tools/common/core/z3_solver.h"
#include "frontends/common/parseInput.h"
#include "frontends/p4/frontend.h"
#include "ir/ir.h"
#include "lib/crash.h"
#include "lib/error.h"
#include "lib/exceptions.h"
#include "lib/gc.h"
#include "lib/log.h"

using namespace P4;
using namespace P4Tools;

class Z3ExtractOptions : public CompilerOptions {
 public:
    bool listExpressions = false;
    
    Z3ExtractOptions() {
        registerOption("--list", nullptr,
                      [this](const char*) {
                          listExpressions = true;
                          return true;
                      },
                      "List extracted expressions without Z3 conversion");
    }
};

using Z3ExtractContext = P4CContextWithOptions<Z3ExtractOptions>;

/// Expression extractor visitor that collects all expressions from the P4 program
class ExpressionExtractor : public Inspector {
 private:
    std::vector<const IR::Expression*> expressions;
    Z3Solver& solver;
    bool listOnly;
    
 public:
    explicit ExpressionExtractor(Z3Solver& solver, bool listOnly = false) 
        : solver(solver), listOnly(listOnly) {}
    
    bool preorder(const IR::Expression* expr) override {
        // Skip visiting nested expressions for certain node types to avoid duplicates
        if (expr->is<IR::Member>() || expr->is<IR::PathExpression>()) {
            expressions.push_back(expr);
            return false;  // Don't visit children
        }
        
        // For other expressions, collect them but continue visiting
        expressions.push_back(expr);
        return true;
    }
    
    void printResults() const {
        std::cout << "=== Z3Extract Results ===" << std::endl;
        std::cout << "Found " << expressions.size() << " expressions" << std::endl;
        std::cout << std::endl;
        
        for (size_t i = 0; i < expressions.size(); ++i) {
            const auto* expr = expressions[i];
            std::cout << "[" << i + 1 << "] ";
            
            // Print expression type and content
            std::cout << expr->node_type_name() << ": ";
            
            if (listOnly) {
                // Just print the P4 expression
                std::cout << expr << std::endl;
            } else {
                try {
                    // Try to convert to Z3 format
                    Z3Translator translator(solver);
                    auto z3Expr = translator.translate(expr);
                    std::cout << expr << " => " << z3Expr << std::endl;
                } catch (const Util::CompilerBug& bug) {
                    std::cout << expr << " => <conversion failed: " << bug.what() << ">" << std::endl;
                } catch (const std::exception& e) {
                    std::cout << expr << " => <conversion error: " << e.what() << ">" << std::endl;
                }
            }
        }
    }
};

int main(int argc, char* const argv[]) {
    setup_gc_logging();
    setup_signals();
    
    AutoCompileContext autoZ3Context(new Z3ExtractContext);
    auto& options = Z3ExtractContext::get().options();
    
    if (options.process(argc, argv) != nullptr) {
        options.setInputFile();
    }
    
    if (::P4::errorCount() > 0) {
        return 1;
    }
    
    auto hook = options.getDebugHook();
    
    // Parse the P4 file
    const IR::P4Program* program = P4::parseP4File(options);
    
    if (program == nullptr || ::P4::errorCount() > 0) {
        return 1;
    }
    
    try {
        // Run frontend
        P4::FrontEnd frontend;
        frontend.addDebugHook(hook);
        program = frontend.run(options, program);
        
        if (program == nullptr || ::P4::errorCount() > 0) {
            return 1;
        }
        
        // Run P4Tools MidEnd to simplify expressions for Z3 compatibility
        std::cout << "Running P4Tools MidEnd pipeline for Z3 compatibility..." << std::endl;
        P4::P4Tools::MidEnd midend(options);
        midend.addDefaultPasses();
        program = program->apply(midend);
        
        if (program == nullptr || ::P4::errorCount() > 0) {
            std::cerr << "MidEnd processing failed" << std::endl;
            return 1;
        }
        
        std::cout << "P4Tools MidEnd pipeline completed successfully" << std::endl;
        
    } catch (const std::exception& bug) {
        std::cerr << bug.what() << std::endl;
        return 1;
    }
    
    if (program == nullptr || ::P4::errorCount() > 0) {
        return 1;
    }
    
    // Create Z3 solver for expression conversion
    Z3Solver solver;
    
    // Extract expressions and convert them to Z3 format
    ExpressionExtractor extractor(solver, options.listExpressions);
    program->apply(extractor);
    
    // Print results
    extractor.printResults();
    
    if (::P4::Log::verbose()) {
        std::cerr << "Done." << std::endl;
    }
    
    return ::P4::errorCount() > 0 ? 1 : 0;
}