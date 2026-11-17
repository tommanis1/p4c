// file: p4c/backends/desugar/main.cpp

#include <iostream>
#include <fstream>

#include "backends/p4tools/common/compiler/midend.h"
#include "frontends/common/parseInput.h"
#include "frontends/p4/frontend.h"
#include "frontends/p4/toP4/toP4.h"

#include "frontends/common/constantFolding.h"
#include "frontends/p4/strengthReduction.h"
#include "frontends/p4/simplifyParsers.h"
#include "frontends/p4/moveDeclarations.h"

#include "ir/ir.h"
#include "lib/crash.h"
#include "lib/error.h"
#include "lib/exceptions.h"
#include "lib/gc.h"
#include "lib/log.h"
#include "midend/simplifyKey.h"
#include "midend/simplifySelectCases.h"
#include "midend/simplifySelectList.h"
#include "midend/simplifyExternMethod.h"
#include "midend/local_copyprop.h"
#include "midend/eliminateTypedefs.h"
#include "midend/eliminateNewtype.h"
#include "midend/flattenHeaders.h"
#include "midend/copyStructures.h"
#include "midend/nestedStructs.h"
#include "midend/removeUnusedParameters.h"
#include "midend/eliminateTuples.h"
#include "midend/complexComparison.h"
#include "midend/expandEmit.h"
#include "midend/expandLookahead.h"
#include "midend/tableHit.h"
#include "midend/compileTimeOps.h"
#include "midend/convertEnums.h"
#include "midend/eliminateSerEnums.h"
#include "midend/eliminateInvalidHeaders.h"
#include "midend/eliminateSwitch.h"
#include "midend/actionSynthesis.h"
#include "midend/orderArguments.h"
#include "midend/removeLeftSlices.h"
#include "midend/removeMiss.h"
#include "midend/removeSelectBooleans.h"
#include "midend/replaceSelectRange.h"
#include "midend/flattenInterfaceStructs.h"
#include "midend/midEndLast.h"
#include "lib/compile_context.h"

using namespace P4;
using namespace P4Tools;

// Custom options class for the desugar backend
class DesugarOptions : public CompilerOptions {
public:
    std::string outputFile = "";
    
    DesugarOptions() {
        registerOption("--output", "file",
                      [this](const char* arg) { 
                          outputFile = arg; 
                          return true; 
                      },
                      "Write the optimized P4 program to the specified file");
    }
};

using DesugarContext = P4CContextWithOptions<DesugarOptions>;

int main(int argc, char* const argv[]) {
    setup_gc_logging();
    setup_signals();
    
    // // Create and process options FIRST
    AutoCompileContext autoContext(new DesugarContext);
    auto& options = DesugarContext::get().options();
    
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
        
        // Create reference and type maps for midend passes
        P4::ReferenceMap refMap;
        P4::TypeMap typeMap;
        
        // Run MidEnd simplification passes
        PassManager midEnd;
        midEnd.setName("MidEnd");
        
        // Add simplification passes similar to SimpleSwitchMidEnd
        midEnd.addPasses({
            // Initial type checking
            new P4::TypeChecking(&refMap, &typeMap),
            
            // Simplification passes
            new P4::SimplifyExternMethodCalls(&typeMap),
            new P4::RemoveMiss(&typeMap),
            new P4::EliminateNewtype(&typeMap),
            new P4::EliminateInvalidHeaders(&typeMap),
            new P4::EliminateSerEnums(&typeMap),
            // new P4::ConvertEnums(&typeMap, new EnumOn32Bits("v1model.p4"_cs)),
            new P4::OrderArguments(&typeMap),
            new P4::TypeChecking(&refMap, &typeMap),
            new P4::SimplifyKey(&typeMap, 
                               new P4::OrPolicy(new P4::IsValid(&typeMap), new P4::IsMask())),
            new P4::ConstantFolding(&typeMap),
            new P4::StrengthReduction(&typeMap),
            new P4::SimplifySelectCases(&typeMap, true),
            new P4::ExpandLookahead(&typeMap),
            new P4::ExpandEmit(&typeMap),
            new P4::SimplifyParsers(),
            new P4::StrengthReduction(&typeMap),
            new P4::EliminateTuples(&typeMap),
            new P4::SimplifyComparisons(&typeMap),
            new P4::CopyStructures(&typeMap),
            new P4::NestedStructs(&typeMap),
            new P4::SimplifySelectList(&typeMap),
            new P4::RemoveSelectBooleans(&typeMap),
            new P4::FlattenHeaders(&typeMap),
            new P4::FlattenInterfaceStructs(&typeMap),
            new P4::ReplaceSelectRange(),
            new P4::MoveDeclarations(),
            new P4::ConstantFolding(&typeMap),
            new P4::LocalCopyPropagation(&typeMap),
            
            // Additional optimization passes
            new PassRepeated({
                new P4::ConstantFolding(&typeMap),
                new P4::StrengthReduction(&typeMap),
            }),
            
            // new P4::SimplifyKey(&typeMap,
            //                    new P4::OrPolicy(new P4::IsValid(&typeMap), new P4::IsMask())),
            new P4::MoveDeclarations(),
            // new P4::SimplifyControlFlow(&typeMap, true),
            new P4::EliminateTypedef(&typeMap),
            new P4::CompileTimeOperations(),
            new P4::TableHit(&typeMap),
            new P4::EliminateSwitch(&typeMap),
            new P4::RemoveLeftSlices(&typeMap),
            new P4::TypeChecking(&refMap, &typeMap),
            new P4::MidEndLast()
        });
        
        midEnd.setStopOnError(true);
        midEnd.addDebugHook(hook);
        
        // Apply the midend passes
        program = program->apply(midEnd);
        
        if (program == nullptr || ::P4::errorCount() > 0) {
            return 1;
        }
        
        // Convert the optimized IR back to P4 source code
        std::string optimizedP4 = P4::toP4(program);
        
        // // Output the optimized P4 program
        // if (!options.outputFile.empty()) {
        //     // Write to file
        //     std::ofstream outFile(options.outputFile);
        //     if (!outFile.is_open()) {
        //         ::P4::error("Failed to open output file: %s", options.outputFile.c_str());
        //         return 1;
        //     }
        //     outFile << optimizedP4;
        //     outFile.close();
        //     std::cout << "Optimized P4 program written to: " << options.outputFile << std::endl;
        // } else {
            // Write to stdout
            std::cout << optimizedP4;
        // }
        
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
        return 1;
    }
    
    return ::P4::errorCount() > 0 ? 1 : 0;
}