// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.



// First part of user prologue.
#line 148 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
 /* -*-C++-*- */
#include "frontends/parsers/parserDriver.h"
#include "frontends/parsers/p4/p4lexer.hpp"
#include "frontends/parsers/p4/p4parser.hpp"

using namespace P4;

#define YYLLOC_DEFAULT(Cur, Rhs, N)                                             \
    ((Cur) = (N) ? YYRHSLOC(Rhs, 1) + YYRHSLOC(Rhs, N)                          \
                 : Util::SourceInfo(driver.sources, YYRHSLOC(Rhs, 0).getEnd()))

#undef yylex
#define yylex lexer.yylex


#line 57 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"


#include "p4parser.hpp"




#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 23 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
namespace P4 {
#line 155 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"

  /// Build a parser object.
  P4Parser::P4Parser (P4::P4ParserDriver& driver_yyarg, P4::AbstractP4Lexer& lexer_yyarg)
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      driver (driver_yyarg),
      lexer (lexer_yyarg)
  {}

  P4Parser::~P4Parser ()
  {}

  P4Parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------.
  | symbol.  |
  `---------*/



  // by_state.
  P4Parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  P4Parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  P4Parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  P4Parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  P4Parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  P4Parser::symbol_kind_type
  P4Parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  P4Parser::stack_symbol_type::stack_symbol_type ()
  {}

  P4Parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_typeRef: // typeRef
      case symbol_kind::S_namedType: // namedType
      case symbol_kind::S_p4listType: // p4listType
      case symbol_kind::S_tupleType: // tupleType
      case symbol_kind::S_headerStackType: // headerStackType
      case symbol_kind::S_specializedType: // specializedType
      case symbol_kind::S_baseType: // baseType
      case symbol_kind::S_typeOrVoid: // typeOrVoid
      case symbol_kind::S_typeArg: // typeArg
      case symbol_kind::S_realTypeArg: // realTypeArg
      case symbol_kind::S_derivedTypeDeclarationAsType: // derivedTypeDeclarationAsType
        value.YY_MOVE_OR_COPY< ConstType* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_annotation: // annotation
        value.YY_MOVE_OR_COPY< IR::Annotation* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_argument: // argument
        value.YY_MOVE_OR_COPY< IR::Argument* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_objInitializer: // objInitializer
      case symbol_kind::S_parserBlockStatement: // parserBlockStatement
      case symbol_kind::S_controlBody: // controlBody
      case symbol_kind::S_blockStatement: // blockStatement
        value.YY_MOVE_OR_COPY< IR::BlockStatement* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_instantiation: // instantiation
      case symbol_kind::S_objDeclaration: // objDeclaration
      case symbol_kind::S_parserLocalElement: // parserLocalElement
      case symbol_kind::S_valueSetDeclaration: // valueSetDeclaration
      case symbol_kind::S_controlLocalDeclaration: // controlLocalDeclaration
      case symbol_kind::S_tableDeclaration: // tableDeclaration
      case symbol_kind::S_actionDeclaration: // actionDeclaration
      case symbol_kind::S_variableDeclaration: // variableDeclaration
      case symbol_kind::S_variableDeclarationWithoutSemicolon: // variableDeclarationWithoutSemicolon
      case symbol_kind::S_constantDeclaration: // constantDeclaration
      case symbol_kind::S_functionDeclaration: // functionDeclaration
        value.YY_MOVE_OR_COPY< IR::Declaration* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_direction: // direction
        value.YY_MOVE_OR_COPY< IR::Direction > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_entry: // entry
        value.YY_MOVE_OR_COPY< IR::Entry* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_p4rtControllerType: // p4rtControllerType
      case symbol_kind::S_transitionStatement: // transitionStatement
      case symbol_kind::S_stateExpression: // stateExpression
      case symbol_kind::S_selectExpression: // selectExpression
      case symbol_kind::S_keysetExpression: // keysetExpression
      case symbol_kind::S_reducedSimpleKeysetExpression: // reducedSimpleKeysetExpression
      case symbol_kind::S_simpleKeysetExpression: // simpleKeysetExpression
      case symbol_kind::S_switchLabel: // switchLabel
      case symbol_kind::S_forCollectionExpr: // forCollectionExpr
      case symbol_kind::S_actionRef: // actionRef
      case symbol_kind::S_entryPriority: // entryPriority
      case symbol_kind::S_optInitializer: // optInitializer
      case symbol_kind::S_initializer: // initializer
      case symbol_kind::S_lvalue: // lvalue
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_nonBraceExpression: // nonBraceExpression
      case symbol_kind::S_intOrStr: // intOrStr
        value.YY_MOVE_OR_COPY< IR::Expression* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_nonTypeName: // nonTypeName
      case symbol_kind::S_name: // name
      case symbol_kind::S_nonTableKwName: // nonTableKwName
      case symbol_kind::S_annotationName: // annotationName
      case symbol_kind::S_dot_name: // dot_name
        value.YY_MOVE_OR_COPY< IR::ID* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_actionList: // actionList
        value.YY_MOVE_OR_COPY< IR::IndexedVector<IR::ActionListElement>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_parserLocalElements: // parserLocalElements
      case symbol_kind::S_controlLocalDeclarations: // controlLocalDeclarations
        value.YY_MOVE_OR_COPY< IR::IndexedVector<IR::Declaration>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_identifierList: // identifierList
        value.YY_MOVE_OR_COPY< IR::IndexedVector<IR::Declaration_ID>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_kvList: // kvList
        value.YY_MOVE_OR_COPY< IR::IndexedVector<IR::NamedExpression>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_parameterList: // parameterList
      case symbol_kind::S_nonEmptyParameterList: // nonEmptyParameterList
      case symbol_kind::S_optConstructorParameters: // optConstructorParameters
        value.YY_MOVE_OR_COPY< IR::IndexedVector<IR::Parameter>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_parserStates: // parserStates
        value.YY_MOVE_OR_COPY< IR::IndexedVector<IR::ParserState>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_tablePropertyList: // tablePropertyList
        value.YY_MOVE_OR_COPY< IR::IndexedVector<IR::Property>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_specifiedIdentifierList: // specifiedIdentifierList
        value.YY_MOVE_OR_COPY< IR::IndexedVector<IR::SerEnumMember>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_objDeclarations: // objDeclarations
      case symbol_kind::S_parserStatements: // parserStatements
      case symbol_kind::S_statOrDeclList: // statOrDeclList
      case symbol_kind::S_forInitStatements: // forInitStatements
      case symbol_kind::S_forInitStatementsNonEmpty: // forInitStatementsNonEmpty
      case symbol_kind::S_forUpdateStatements: // forUpdateStatements
      case symbol_kind::S_forUpdateStatementsNonEmpty: // forUpdateStatementsNonEmpty
        value.YY_MOVE_OR_COPY< IR::IndexedVector<IR::StatOrDecl>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_structFieldList: // structFieldList
        value.YY_MOVE_OR_COPY< IR::IndexedVector<IR::StructField>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_typeParameterList: // typeParameterList
        value.YY_MOVE_OR_COPY< IR::IndexedVector<IR::Type_Var>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_keyElement: // keyElement
        value.YY_MOVE_OR_COPY< IR::KeyElement* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_functionPrototype: // functionPrototype
      case symbol_kind::S_methodPrototype: // methodPrototype
        value.YY_MOVE_OR_COPY< IR::Method* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_kvPair: // kvPair
        value.YY_MOVE_OR_COPY< IR::NamedExpression* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_fragment: // fragment
      case symbol_kind::S_declaration: // declaration
      case symbol_kind::S_externDeclaration: // externDeclaration
      case symbol_kind::S_matchKindDeclaration: // matchKindDeclaration
        value.YY_MOVE_OR_COPY< IR::Node* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_parameter: // parameter
        value.YY_MOVE_OR_COPY< IR::Parameter* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_parserState: // parserState
        value.YY_MOVE_OR_COPY< IR::ParserState* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_prefixedType: // prefixedType
      case symbol_kind::S_prefixedNonTypeName: // prefixedNonTypeName
        value.YY_MOVE_OR_COPY< IR::Path* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_tableProperty: // tableProperty
        value.YY_MOVE_OR_COPY< IR::Property* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_selectCase: // selectCase
        value.YY_MOVE_OR_COPY< IR::SelectCase* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_specifiedIdentifier: // specifiedIdentifier
        value.YY_MOVE_OR_COPY< IR::SerEnumMember* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_parserStatement: // parserStatement
      case symbol_kind::S_statementOrDeclaration: // statementOrDeclaration
      case symbol_kind::S_declOrAssignmentOrMethodCallStatement: // declOrAssignmentOrMethodCallStatement
        value.YY_MOVE_OR_COPY< IR::StatOrDecl* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_assignmentOrMethodCallStatement: // assignmentOrMethodCallStatement
      case symbol_kind::S_assignmentOrMethodCallStatementWithoutSemicolon: // assignmentOrMethodCallStatementWithoutSemicolon
      case symbol_kind::S_emptyStatement: // emptyStatement
      case symbol_kind::S_exitStatement: // exitStatement
      case symbol_kind::S_returnStatement: // returnStatement
      case symbol_kind::S_conditionalStatement: // conditionalStatement
      case symbol_kind::S_breakStatement: // breakStatement
      case symbol_kind::S_continueStatement: // continueStatement
      case symbol_kind::S_directApplication: // directApplication
      case symbol_kind::S_statement: // statement
      case symbol_kind::S_switchStatement: // switchStatement
      case symbol_kind::S_forStatement: // forStatement
        value.YY_MOVE_OR_COPY< IR::Statement* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_structField: // structField
        value.YY_MOVE_OR_COPY< IR::StructField* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_switchCase: // switchCase
        value.YY_MOVE_OR_COPY< IR::SwitchCase* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_optTypeParameters: // optTypeParameters
      case symbol_kind::S_typeParameters: // typeParameters
        value.YY_MOVE_OR_COPY< IR::TypeParameters* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_controlTypeDeclaration: // controlTypeDeclaration
        value.YY_MOVE_OR_COPY< IR::Type_Control* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_packageTypeDeclaration: // packageTypeDeclaration
      case symbol_kind::S_parserDeclaration: // parserDeclaration
      case symbol_kind::S_controlDeclaration: // controlDeclaration
      case symbol_kind::S_typeDeclaration: // typeDeclaration
      case symbol_kind::S_derivedTypeDeclaration: // derivedTypeDeclaration
      case symbol_kind::S_headerTypeDeclaration: // headerTypeDeclaration
      case symbol_kind::S_structTypeDeclaration: // structTypeDeclaration
      case symbol_kind::S_headerUnionDeclaration: // headerUnionDeclaration
      case symbol_kind::S_enumDeclaration: // enumDeclaration
      case symbol_kind::S_typedefDeclaration: // typedefDeclaration
        value.YY_MOVE_OR_COPY< IR::Type_Declaration* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_errorDeclaration: // errorDeclaration
        value.YY_MOVE_OR_COPY< IR::Type_Error* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_typeName: // typeName
        value.YY_MOVE_OR_COPY< IR::Type_Name* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_parserTypeDeclaration: // parserTypeDeclaration
        value.YY_MOVE_OR_COPY< IR::Type_Parser* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_optAnnotations: // optAnnotations
      case symbol_kind::S_annotations: // annotations
        value.YY_MOVE_OR_COPY< IR::Vector<IR::Annotation>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_annotationBody: // annotationBody
        value.YY_MOVE_OR_COPY< IR::Vector<IR::AnnotationToken>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_argumentList: // argumentList
      case symbol_kind::S_nonEmptyArgList: // nonEmptyArgList
        value.YY_MOVE_OR_COPY< IR::Vector<IR::Argument>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_entriesList: // entriesList
        value.YY_MOVE_OR_COPY< IR::Vector<IR::Entry>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_tupleKeysetExpression: // tupleKeysetExpression
      case symbol_kind::S_simpleExpressionList: // simpleExpressionList
      case symbol_kind::S_expressionList: // expressionList
      case symbol_kind::S_intList: // intList
      case symbol_kind::S_intOrStrList: // intOrStrList
      case symbol_kind::S_strList: // strList
        value.YY_MOVE_OR_COPY< IR::Vector<IR::Expression>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_keyElementList: // keyElementList
        value.YY_MOVE_OR_COPY< IR::Vector<IR::KeyElement>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_methodPrototypes: // methodPrototypes
        value.YY_MOVE_OR_COPY< IR::Vector<IR::Method>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_selectCaseList: // selectCaseList
        value.YY_MOVE_OR_COPY< IR::Vector<IR::SelectCase>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_switchCases: // switchCases
        value.YY_MOVE_OR_COPY< IR::Vector<IR::SwitchCase>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_typeArgumentList: // typeArgumentList
      case symbol_kind::S_realTypeArgumentList: // realTypeArgumentList
        value.YY_MOVE_OR_COPY< IR::Vector<IR::Type>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_declarator: // declarator
        value.YY_MOVE_OR_COPY< NameTypePair > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_optCONST: // optCONST
        value.YY_MOVE_OR_COPY< OptionalConst > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_UNEXPECTED_TOKEN: // UNEXPECTED_TOKEN
      case symbol_kind::S_END_PRAGMA: // END_PRAGMA
      case symbol_kind::S_LE: // "<="
      case symbol_kind::S_GE: // ">="
      case symbol_kind::S_SHL: // "<<"
      case symbol_kind::S_AND: // "&&"
      case symbol_kind::S_OR: // "||"
      case symbol_kind::S_NE: // "!="
      case symbol_kind::S_EQ: // "=="
      case symbol_kind::S_PLUS: // "+"
      case symbol_kind::S_MINUS: // "-"
      case symbol_kind::S_PLUS_SAT: // "|+|"
      case symbol_kind::S_MINUS_SAT: // "|-|"
      case symbol_kind::S_MUL: // "*"
      case symbol_kind::S_INVALID: // "{#}"
      case symbol_kind::S_DIV: // "/"
      case symbol_kind::S_MOD: // "%"
      case symbol_kind::S_BIT_OR: // "|"
      case symbol_kind::S_BIT_AND: // "&"
      case symbol_kind::S_BIT_XOR: // "^"
      case symbol_kind::S_COMPLEMENT: // "~"
      case symbol_kind::S_L_BRACKET: // "["
      case symbol_kind::S_R_BRACKET: // "]"
      case symbol_kind::S_L_BRACE: // "{"
      case symbol_kind::S_R_BRACE: // "}"
      case symbol_kind::S_L_ANGLE: // "<"
      case symbol_kind::S_L_ANGLE_ARGS: // L_ANGLE_ARGS
      case symbol_kind::S_R_ANGLE: // ">"
      case symbol_kind::S_R_ANGLE_SHIFT: // R_ANGLE_SHIFT
      case symbol_kind::S_L_PAREN: // "("
      case symbol_kind::S_R_PAREN: // ")"
      case symbol_kind::S_NOT: // "!"
      case symbol_kind::S_COLON: // ":"
      case symbol_kind::S_COMMA: // ","
      case symbol_kind::S_QUESTION: // "?"
      case symbol_kind::S_DOT: // "."
      case symbol_kind::S_ASSIGN: // "="
      case symbol_kind::S_ASSIGN_PLUS: // "+="
      case symbol_kind::S_ASSIGN_MINUS: // "-="
      case symbol_kind::S_ASSIGN_MUL: // "*="
      case symbol_kind::S_ASSIGN_DIV: // "/="
      case symbol_kind::S_ASSIGN_MOD: // "%="
      case symbol_kind::S_ASSIGN_BIT_AND: // "&="
      case symbol_kind::S_ASSIGN_BIT_OR: // "|="
      case symbol_kind::S_ASSIGN_XOR: // "^="
      case symbol_kind::S_ASSIGN_SHL: // "<<="
      case symbol_kind::S_ASSIGN_SHR: // ">>="
      case symbol_kind::S_ASSIGN_PLUS_SAT: // "|+|="
      case symbol_kind::S_ASSIGN_MINUS_SAT: // "|-|="
      case symbol_kind::S_SEMICOLON: // ";"
      case symbol_kind::S_AT: // "@"
      case symbol_kind::S_PP: // "++"
      case symbol_kind::S_DONTCARE: // "_"
      case symbol_kind::S_MASK: // "&&&"
      case symbol_kind::S_DOTS: // "..."
      case symbol_kind::S_RANGE: // ".."
      case symbol_kind::S_TRUE: // TRUE
      case symbol_kind::S_FALSE: // FALSE
      case symbol_kind::S_THIS: // THIS
      case symbol_kind::S_ABSTRACT: // ABSTRACT
      case symbol_kind::S_ACTION: // ACTION
      case symbol_kind::S_ACTIONS: // ACTIONS
      case symbol_kind::S_APPLY: // APPLY
      case symbol_kind::S_BOOL: // BOOL
      case symbol_kind::S_BIT: // BIT
      case symbol_kind::S_BREAK: // BREAK
      case symbol_kind::S_CONST: // CONST
      case symbol_kind::S_CONTINUE: // CONTINUE
      case symbol_kind::S_CONTROL: // CONTROL
      case symbol_kind::S_DEFAULT: // DEFAULT
      case symbol_kind::S_ELSE: // ELSE
      case symbol_kind::S_ENTRIES: // ENTRIES
      case symbol_kind::S_ENUM: // ENUM
      case symbol_kind::S_ERROR: // ERROR
      case symbol_kind::S_EXIT: // EXIT
      case symbol_kind::S_EXTERN: // EXTERN
      case symbol_kind::S_FOR: // FOR
      case symbol_kind::S_HEADER: // HEADER
      case symbol_kind::S_HEADER_UNION: // HEADER_UNION
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_IN: // IN
      case symbol_kind::S_INOUT: // INOUT
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_KEY: // KEY
      case symbol_kind::S_LIST: // LIST
      case symbol_kind::S_SELECT: // SELECT
      case symbol_kind::S_MATCH_KIND: // MATCH_KIND
      case symbol_kind::S_TYPE: // TYPE
      case symbol_kind::S_OUT: // OUT
      case symbol_kind::S_PACKAGE: // PACKAGE
      case symbol_kind::S_PARSER: // PARSER
      case symbol_kind::S_PRAGMA: // PRAGMA
      case symbol_kind::S_PRIORITY: // PRIORITY
      case symbol_kind::S_RETURN: // RETURN
      case symbol_kind::S_STATE: // STATE
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_STRUCT: // STRUCT
      case symbol_kind::S_SWITCH: // SWITCH
      case symbol_kind::S_TABLE: // TABLE
      case symbol_kind::S_TRANSITION: // TRANSITION
      case symbol_kind::S_TUPLE: // TUPLE
      case symbol_kind::S_TYPEDEF: // TYPEDEF
      case symbol_kind::S_VARBIT: // VARBIT
      case symbol_kind::S_VALUESET: // VALUESET
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_annotationToken: // annotationToken
        value.YY_MOVE_OR_COPY< Token > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INTEGER: // INTEGER
        value.YY_MOVE_OR_COPY< UnparsedConstant > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_TYPE_IDENTIFIER: // TYPE_IDENTIFIER
      case symbol_kind::S_STRING_LITERAL: // STRING_LITERAL
        value.YY_MOVE_OR_COPY< cstring > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  P4Parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_typeRef: // typeRef
      case symbol_kind::S_namedType: // namedType
      case symbol_kind::S_p4listType: // p4listType
      case symbol_kind::S_tupleType: // tupleType
      case symbol_kind::S_headerStackType: // headerStackType
      case symbol_kind::S_specializedType: // specializedType
      case symbol_kind::S_baseType: // baseType
      case symbol_kind::S_typeOrVoid: // typeOrVoid
      case symbol_kind::S_typeArg: // typeArg
      case symbol_kind::S_realTypeArg: // realTypeArg
      case symbol_kind::S_derivedTypeDeclarationAsType: // derivedTypeDeclarationAsType
        value.move< ConstType* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_annotation: // annotation
        value.move< IR::Annotation* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_argument: // argument
        value.move< IR::Argument* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_objInitializer: // objInitializer
      case symbol_kind::S_parserBlockStatement: // parserBlockStatement
      case symbol_kind::S_controlBody: // controlBody
      case symbol_kind::S_blockStatement: // blockStatement
        value.move< IR::BlockStatement* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_instantiation: // instantiation
      case symbol_kind::S_objDeclaration: // objDeclaration
      case symbol_kind::S_parserLocalElement: // parserLocalElement
      case symbol_kind::S_valueSetDeclaration: // valueSetDeclaration
      case symbol_kind::S_controlLocalDeclaration: // controlLocalDeclaration
      case symbol_kind::S_tableDeclaration: // tableDeclaration
      case symbol_kind::S_actionDeclaration: // actionDeclaration
      case symbol_kind::S_variableDeclaration: // variableDeclaration
      case symbol_kind::S_variableDeclarationWithoutSemicolon: // variableDeclarationWithoutSemicolon
      case symbol_kind::S_constantDeclaration: // constantDeclaration
      case symbol_kind::S_functionDeclaration: // functionDeclaration
        value.move< IR::Declaration* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_direction: // direction
        value.move< IR::Direction > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_entry: // entry
        value.move< IR::Entry* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_p4rtControllerType: // p4rtControllerType
      case symbol_kind::S_transitionStatement: // transitionStatement
      case symbol_kind::S_stateExpression: // stateExpression
      case symbol_kind::S_selectExpression: // selectExpression
      case symbol_kind::S_keysetExpression: // keysetExpression
      case symbol_kind::S_reducedSimpleKeysetExpression: // reducedSimpleKeysetExpression
      case symbol_kind::S_simpleKeysetExpression: // simpleKeysetExpression
      case symbol_kind::S_switchLabel: // switchLabel
      case symbol_kind::S_forCollectionExpr: // forCollectionExpr
      case symbol_kind::S_actionRef: // actionRef
      case symbol_kind::S_entryPriority: // entryPriority
      case symbol_kind::S_optInitializer: // optInitializer
      case symbol_kind::S_initializer: // initializer
      case symbol_kind::S_lvalue: // lvalue
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_nonBraceExpression: // nonBraceExpression
      case symbol_kind::S_intOrStr: // intOrStr
        value.move< IR::Expression* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_nonTypeName: // nonTypeName
      case symbol_kind::S_name: // name
      case symbol_kind::S_nonTableKwName: // nonTableKwName
      case symbol_kind::S_annotationName: // annotationName
      case symbol_kind::S_dot_name: // dot_name
        value.move< IR::ID* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_actionList: // actionList
        value.move< IR::IndexedVector<IR::ActionListElement>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_parserLocalElements: // parserLocalElements
      case symbol_kind::S_controlLocalDeclarations: // controlLocalDeclarations
        value.move< IR::IndexedVector<IR::Declaration>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_identifierList: // identifierList
        value.move< IR::IndexedVector<IR::Declaration_ID>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_kvList: // kvList
        value.move< IR::IndexedVector<IR::NamedExpression>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_parameterList: // parameterList
      case symbol_kind::S_nonEmptyParameterList: // nonEmptyParameterList
      case symbol_kind::S_optConstructorParameters: // optConstructorParameters
        value.move< IR::IndexedVector<IR::Parameter>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_parserStates: // parserStates
        value.move< IR::IndexedVector<IR::ParserState>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_tablePropertyList: // tablePropertyList
        value.move< IR::IndexedVector<IR::Property>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_specifiedIdentifierList: // specifiedIdentifierList
        value.move< IR::IndexedVector<IR::SerEnumMember>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_objDeclarations: // objDeclarations
      case symbol_kind::S_parserStatements: // parserStatements
      case symbol_kind::S_statOrDeclList: // statOrDeclList
      case symbol_kind::S_forInitStatements: // forInitStatements
      case symbol_kind::S_forInitStatementsNonEmpty: // forInitStatementsNonEmpty
      case symbol_kind::S_forUpdateStatements: // forUpdateStatements
      case symbol_kind::S_forUpdateStatementsNonEmpty: // forUpdateStatementsNonEmpty
        value.move< IR::IndexedVector<IR::StatOrDecl>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_structFieldList: // structFieldList
        value.move< IR::IndexedVector<IR::StructField>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_typeParameterList: // typeParameterList
        value.move< IR::IndexedVector<IR::Type_Var>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_keyElement: // keyElement
        value.move< IR::KeyElement* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_functionPrototype: // functionPrototype
      case symbol_kind::S_methodPrototype: // methodPrototype
        value.move< IR::Method* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_kvPair: // kvPair
        value.move< IR::NamedExpression* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_fragment: // fragment
      case symbol_kind::S_declaration: // declaration
      case symbol_kind::S_externDeclaration: // externDeclaration
      case symbol_kind::S_matchKindDeclaration: // matchKindDeclaration
        value.move< IR::Node* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_parameter: // parameter
        value.move< IR::Parameter* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_parserState: // parserState
        value.move< IR::ParserState* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_prefixedType: // prefixedType
      case symbol_kind::S_prefixedNonTypeName: // prefixedNonTypeName
        value.move< IR::Path* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_tableProperty: // tableProperty
        value.move< IR::Property* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_selectCase: // selectCase
        value.move< IR::SelectCase* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_specifiedIdentifier: // specifiedIdentifier
        value.move< IR::SerEnumMember* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_parserStatement: // parserStatement
      case symbol_kind::S_statementOrDeclaration: // statementOrDeclaration
      case symbol_kind::S_declOrAssignmentOrMethodCallStatement: // declOrAssignmentOrMethodCallStatement
        value.move< IR::StatOrDecl* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_assignmentOrMethodCallStatement: // assignmentOrMethodCallStatement
      case symbol_kind::S_assignmentOrMethodCallStatementWithoutSemicolon: // assignmentOrMethodCallStatementWithoutSemicolon
      case symbol_kind::S_emptyStatement: // emptyStatement
      case symbol_kind::S_exitStatement: // exitStatement
      case symbol_kind::S_returnStatement: // returnStatement
      case symbol_kind::S_conditionalStatement: // conditionalStatement
      case symbol_kind::S_breakStatement: // breakStatement
      case symbol_kind::S_continueStatement: // continueStatement
      case symbol_kind::S_directApplication: // directApplication
      case symbol_kind::S_statement: // statement
      case symbol_kind::S_switchStatement: // switchStatement
      case symbol_kind::S_forStatement: // forStatement
        value.move< IR::Statement* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_structField: // structField
        value.move< IR::StructField* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_switchCase: // switchCase
        value.move< IR::SwitchCase* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_optTypeParameters: // optTypeParameters
      case symbol_kind::S_typeParameters: // typeParameters
        value.move< IR::TypeParameters* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_controlTypeDeclaration: // controlTypeDeclaration
        value.move< IR::Type_Control* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_packageTypeDeclaration: // packageTypeDeclaration
      case symbol_kind::S_parserDeclaration: // parserDeclaration
      case symbol_kind::S_controlDeclaration: // controlDeclaration
      case symbol_kind::S_typeDeclaration: // typeDeclaration
      case symbol_kind::S_derivedTypeDeclaration: // derivedTypeDeclaration
      case symbol_kind::S_headerTypeDeclaration: // headerTypeDeclaration
      case symbol_kind::S_structTypeDeclaration: // structTypeDeclaration
      case symbol_kind::S_headerUnionDeclaration: // headerUnionDeclaration
      case symbol_kind::S_enumDeclaration: // enumDeclaration
      case symbol_kind::S_typedefDeclaration: // typedefDeclaration
        value.move< IR::Type_Declaration* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_errorDeclaration: // errorDeclaration
        value.move< IR::Type_Error* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_typeName: // typeName
        value.move< IR::Type_Name* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_parserTypeDeclaration: // parserTypeDeclaration
        value.move< IR::Type_Parser* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_optAnnotations: // optAnnotations
      case symbol_kind::S_annotations: // annotations
        value.move< IR::Vector<IR::Annotation>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_annotationBody: // annotationBody
        value.move< IR::Vector<IR::AnnotationToken>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_argumentList: // argumentList
      case symbol_kind::S_nonEmptyArgList: // nonEmptyArgList
        value.move< IR::Vector<IR::Argument>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_entriesList: // entriesList
        value.move< IR::Vector<IR::Entry>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_tupleKeysetExpression: // tupleKeysetExpression
      case symbol_kind::S_simpleExpressionList: // simpleExpressionList
      case symbol_kind::S_expressionList: // expressionList
      case symbol_kind::S_intList: // intList
      case symbol_kind::S_intOrStrList: // intOrStrList
      case symbol_kind::S_strList: // strList
        value.move< IR::Vector<IR::Expression>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_keyElementList: // keyElementList
        value.move< IR::Vector<IR::KeyElement>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_methodPrototypes: // methodPrototypes
        value.move< IR::Vector<IR::Method>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_selectCaseList: // selectCaseList
        value.move< IR::Vector<IR::SelectCase>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_switchCases: // switchCases
        value.move< IR::Vector<IR::SwitchCase>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_typeArgumentList: // typeArgumentList
      case symbol_kind::S_realTypeArgumentList: // realTypeArgumentList
        value.move< IR::Vector<IR::Type>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_declarator: // declarator
        value.move< NameTypePair > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_optCONST: // optCONST
        value.move< OptionalConst > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_UNEXPECTED_TOKEN: // UNEXPECTED_TOKEN
      case symbol_kind::S_END_PRAGMA: // END_PRAGMA
      case symbol_kind::S_LE: // "<="
      case symbol_kind::S_GE: // ">="
      case symbol_kind::S_SHL: // "<<"
      case symbol_kind::S_AND: // "&&"
      case symbol_kind::S_OR: // "||"
      case symbol_kind::S_NE: // "!="
      case symbol_kind::S_EQ: // "=="
      case symbol_kind::S_PLUS: // "+"
      case symbol_kind::S_MINUS: // "-"
      case symbol_kind::S_PLUS_SAT: // "|+|"
      case symbol_kind::S_MINUS_SAT: // "|-|"
      case symbol_kind::S_MUL: // "*"
      case symbol_kind::S_INVALID: // "{#}"
      case symbol_kind::S_DIV: // "/"
      case symbol_kind::S_MOD: // "%"
      case symbol_kind::S_BIT_OR: // "|"
      case symbol_kind::S_BIT_AND: // "&"
      case symbol_kind::S_BIT_XOR: // "^"
      case symbol_kind::S_COMPLEMENT: // "~"
      case symbol_kind::S_L_BRACKET: // "["
      case symbol_kind::S_R_BRACKET: // "]"
      case symbol_kind::S_L_BRACE: // "{"
      case symbol_kind::S_R_BRACE: // "}"
      case symbol_kind::S_L_ANGLE: // "<"
      case symbol_kind::S_L_ANGLE_ARGS: // L_ANGLE_ARGS
      case symbol_kind::S_R_ANGLE: // ">"
      case symbol_kind::S_R_ANGLE_SHIFT: // R_ANGLE_SHIFT
      case symbol_kind::S_L_PAREN: // "("
      case symbol_kind::S_R_PAREN: // ")"
      case symbol_kind::S_NOT: // "!"
      case symbol_kind::S_COLON: // ":"
      case symbol_kind::S_COMMA: // ","
      case symbol_kind::S_QUESTION: // "?"
      case symbol_kind::S_DOT: // "."
      case symbol_kind::S_ASSIGN: // "="
      case symbol_kind::S_ASSIGN_PLUS: // "+="
      case symbol_kind::S_ASSIGN_MINUS: // "-="
      case symbol_kind::S_ASSIGN_MUL: // "*="
      case symbol_kind::S_ASSIGN_DIV: // "/="
      case symbol_kind::S_ASSIGN_MOD: // "%="
      case symbol_kind::S_ASSIGN_BIT_AND: // "&="
      case symbol_kind::S_ASSIGN_BIT_OR: // "|="
      case symbol_kind::S_ASSIGN_XOR: // "^="
      case symbol_kind::S_ASSIGN_SHL: // "<<="
      case symbol_kind::S_ASSIGN_SHR: // ">>="
      case symbol_kind::S_ASSIGN_PLUS_SAT: // "|+|="
      case symbol_kind::S_ASSIGN_MINUS_SAT: // "|-|="
      case symbol_kind::S_SEMICOLON: // ";"
      case symbol_kind::S_AT: // "@"
      case symbol_kind::S_PP: // "++"
      case symbol_kind::S_DONTCARE: // "_"
      case symbol_kind::S_MASK: // "&&&"
      case symbol_kind::S_DOTS: // "..."
      case symbol_kind::S_RANGE: // ".."
      case symbol_kind::S_TRUE: // TRUE
      case symbol_kind::S_FALSE: // FALSE
      case symbol_kind::S_THIS: // THIS
      case symbol_kind::S_ABSTRACT: // ABSTRACT
      case symbol_kind::S_ACTION: // ACTION
      case symbol_kind::S_ACTIONS: // ACTIONS
      case symbol_kind::S_APPLY: // APPLY
      case symbol_kind::S_BOOL: // BOOL
      case symbol_kind::S_BIT: // BIT
      case symbol_kind::S_BREAK: // BREAK
      case symbol_kind::S_CONST: // CONST
      case symbol_kind::S_CONTINUE: // CONTINUE
      case symbol_kind::S_CONTROL: // CONTROL
      case symbol_kind::S_DEFAULT: // DEFAULT
      case symbol_kind::S_ELSE: // ELSE
      case symbol_kind::S_ENTRIES: // ENTRIES
      case symbol_kind::S_ENUM: // ENUM
      case symbol_kind::S_ERROR: // ERROR
      case symbol_kind::S_EXIT: // EXIT
      case symbol_kind::S_EXTERN: // EXTERN
      case symbol_kind::S_FOR: // FOR
      case symbol_kind::S_HEADER: // HEADER
      case symbol_kind::S_HEADER_UNION: // HEADER_UNION
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_IN: // IN
      case symbol_kind::S_INOUT: // INOUT
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_KEY: // KEY
      case symbol_kind::S_LIST: // LIST
      case symbol_kind::S_SELECT: // SELECT
      case symbol_kind::S_MATCH_KIND: // MATCH_KIND
      case symbol_kind::S_TYPE: // TYPE
      case symbol_kind::S_OUT: // OUT
      case symbol_kind::S_PACKAGE: // PACKAGE
      case symbol_kind::S_PARSER: // PARSER
      case symbol_kind::S_PRAGMA: // PRAGMA
      case symbol_kind::S_PRIORITY: // PRIORITY
      case symbol_kind::S_RETURN: // RETURN
      case symbol_kind::S_STATE: // STATE
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_STRUCT: // STRUCT
      case symbol_kind::S_SWITCH: // SWITCH
      case symbol_kind::S_TABLE: // TABLE
      case symbol_kind::S_TRANSITION: // TRANSITION
      case symbol_kind::S_TUPLE: // TUPLE
      case symbol_kind::S_TYPEDEF: // TYPEDEF
      case symbol_kind::S_VARBIT: // VARBIT
      case symbol_kind::S_VALUESET: // VALUESET
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_annotationToken: // annotationToken
        value.move< Token > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INTEGER: // INTEGER
        value.move< UnparsedConstant > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_TYPE_IDENTIFIER: // TYPE_IDENTIFIER
      case symbol_kind::S_STRING_LITERAL: // STRING_LITERAL
        value.move< cstring > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  P4Parser::stack_symbol_type&
  P4Parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_typeRef: // typeRef
      case symbol_kind::S_namedType: // namedType
      case symbol_kind::S_p4listType: // p4listType
      case symbol_kind::S_tupleType: // tupleType
      case symbol_kind::S_headerStackType: // headerStackType
      case symbol_kind::S_specializedType: // specializedType
      case symbol_kind::S_baseType: // baseType
      case symbol_kind::S_typeOrVoid: // typeOrVoid
      case symbol_kind::S_typeArg: // typeArg
      case symbol_kind::S_realTypeArg: // realTypeArg
      case symbol_kind::S_derivedTypeDeclarationAsType: // derivedTypeDeclarationAsType
        value.copy< ConstType* > (that.value);
        break;

      case symbol_kind::S_annotation: // annotation
        value.copy< IR::Annotation* > (that.value);
        break;

      case symbol_kind::S_argument: // argument
        value.copy< IR::Argument* > (that.value);
        break;

      case symbol_kind::S_objInitializer: // objInitializer
      case symbol_kind::S_parserBlockStatement: // parserBlockStatement
      case symbol_kind::S_controlBody: // controlBody
      case symbol_kind::S_blockStatement: // blockStatement
        value.copy< IR::BlockStatement* > (that.value);
        break;

      case symbol_kind::S_instantiation: // instantiation
      case symbol_kind::S_objDeclaration: // objDeclaration
      case symbol_kind::S_parserLocalElement: // parserLocalElement
      case symbol_kind::S_valueSetDeclaration: // valueSetDeclaration
      case symbol_kind::S_controlLocalDeclaration: // controlLocalDeclaration
      case symbol_kind::S_tableDeclaration: // tableDeclaration
      case symbol_kind::S_actionDeclaration: // actionDeclaration
      case symbol_kind::S_variableDeclaration: // variableDeclaration
      case symbol_kind::S_variableDeclarationWithoutSemicolon: // variableDeclarationWithoutSemicolon
      case symbol_kind::S_constantDeclaration: // constantDeclaration
      case symbol_kind::S_functionDeclaration: // functionDeclaration
        value.copy< IR::Declaration* > (that.value);
        break;

      case symbol_kind::S_direction: // direction
        value.copy< IR::Direction > (that.value);
        break;

      case symbol_kind::S_entry: // entry
        value.copy< IR::Entry* > (that.value);
        break;

      case symbol_kind::S_p4rtControllerType: // p4rtControllerType
      case symbol_kind::S_transitionStatement: // transitionStatement
      case symbol_kind::S_stateExpression: // stateExpression
      case symbol_kind::S_selectExpression: // selectExpression
      case symbol_kind::S_keysetExpression: // keysetExpression
      case symbol_kind::S_reducedSimpleKeysetExpression: // reducedSimpleKeysetExpression
      case symbol_kind::S_simpleKeysetExpression: // simpleKeysetExpression
      case symbol_kind::S_switchLabel: // switchLabel
      case symbol_kind::S_forCollectionExpr: // forCollectionExpr
      case symbol_kind::S_actionRef: // actionRef
      case symbol_kind::S_entryPriority: // entryPriority
      case symbol_kind::S_optInitializer: // optInitializer
      case symbol_kind::S_initializer: // initializer
      case symbol_kind::S_lvalue: // lvalue
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_nonBraceExpression: // nonBraceExpression
      case symbol_kind::S_intOrStr: // intOrStr
        value.copy< IR::Expression* > (that.value);
        break;

      case symbol_kind::S_nonTypeName: // nonTypeName
      case symbol_kind::S_name: // name
      case symbol_kind::S_nonTableKwName: // nonTableKwName
      case symbol_kind::S_annotationName: // annotationName
      case symbol_kind::S_dot_name: // dot_name
        value.copy< IR::ID* > (that.value);
        break;

      case symbol_kind::S_actionList: // actionList
        value.copy< IR::IndexedVector<IR::ActionListElement>* > (that.value);
        break;

      case symbol_kind::S_parserLocalElements: // parserLocalElements
      case symbol_kind::S_controlLocalDeclarations: // controlLocalDeclarations
        value.copy< IR::IndexedVector<IR::Declaration>* > (that.value);
        break;

      case symbol_kind::S_identifierList: // identifierList
        value.copy< IR::IndexedVector<IR::Declaration_ID>* > (that.value);
        break;

      case symbol_kind::S_kvList: // kvList
        value.copy< IR::IndexedVector<IR::NamedExpression>* > (that.value);
        break;

      case symbol_kind::S_parameterList: // parameterList
      case symbol_kind::S_nonEmptyParameterList: // nonEmptyParameterList
      case symbol_kind::S_optConstructorParameters: // optConstructorParameters
        value.copy< IR::IndexedVector<IR::Parameter>* > (that.value);
        break;

      case symbol_kind::S_parserStates: // parserStates
        value.copy< IR::IndexedVector<IR::ParserState>* > (that.value);
        break;

      case symbol_kind::S_tablePropertyList: // tablePropertyList
        value.copy< IR::IndexedVector<IR::Property>* > (that.value);
        break;

      case symbol_kind::S_specifiedIdentifierList: // specifiedIdentifierList
        value.copy< IR::IndexedVector<IR::SerEnumMember>* > (that.value);
        break;

      case symbol_kind::S_objDeclarations: // objDeclarations
      case symbol_kind::S_parserStatements: // parserStatements
      case symbol_kind::S_statOrDeclList: // statOrDeclList
      case symbol_kind::S_forInitStatements: // forInitStatements
      case symbol_kind::S_forInitStatementsNonEmpty: // forInitStatementsNonEmpty
      case symbol_kind::S_forUpdateStatements: // forUpdateStatements
      case symbol_kind::S_forUpdateStatementsNonEmpty: // forUpdateStatementsNonEmpty
        value.copy< IR::IndexedVector<IR::StatOrDecl>* > (that.value);
        break;

      case symbol_kind::S_structFieldList: // structFieldList
        value.copy< IR::IndexedVector<IR::StructField>* > (that.value);
        break;

      case symbol_kind::S_typeParameterList: // typeParameterList
        value.copy< IR::IndexedVector<IR::Type_Var>* > (that.value);
        break;

      case symbol_kind::S_keyElement: // keyElement
        value.copy< IR::KeyElement* > (that.value);
        break;

      case symbol_kind::S_functionPrototype: // functionPrototype
      case symbol_kind::S_methodPrototype: // methodPrototype
        value.copy< IR::Method* > (that.value);
        break;

      case symbol_kind::S_kvPair: // kvPair
        value.copy< IR::NamedExpression* > (that.value);
        break;

      case symbol_kind::S_fragment: // fragment
      case symbol_kind::S_declaration: // declaration
      case symbol_kind::S_externDeclaration: // externDeclaration
      case symbol_kind::S_matchKindDeclaration: // matchKindDeclaration
        value.copy< IR::Node* > (that.value);
        break;

      case symbol_kind::S_parameter: // parameter
        value.copy< IR::Parameter* > (that.value);
        break;

      case symbol_kind::S_parserState: // parserState
        value.copy< IR::ParserState* > (that.value);
        break;

      case symbol_kind::S_prefixedType: // prefixedType
      case symbol_kind::S_prefixedNonTypeName: // prefixedNonTypeName
        value.copy< IR::Path* > (that.value);
        break;

      case symbol_kind::S_tableProperty: // tableProperty
        value.copy< IR::Property* > (that.value);
        break;

      case symbol_kind::S_selectCase: // selectCase
        value.copy< IR::SelectCase* > (that.value);
        break;

      case symbol_kind::S_specifiedIdentifier: // specifiedIdentifier
        value.copy< IR::SerEnumMember* > (that.value);
        break;

      case symbol_kind::S_parserStatement: // parserStatement
      case symbol_kind::S_statementOrDeclaration: // statementOrDeclaration
      case symbol_kind::S_declOrAssignmentOrMethodCallStatement: // declOrAssignmentOrMethodCallStatement
        value.copy< IR::StatOrDecl* > (that.value);
        break;

      case symbol_kind::S_assignmentOrMethodCallStatement: // assignmentOrMethodCallStatement
      case symbol_kind::S_assignmentOrMethodCallStatementWithoutSemicolon: // assignmentOrMethodCallStatementWithoutSemicolon
      case symbol_kind::S_emptyStatement: // emptyStatement
      case symbol_kind::S_exitStatement: // exitStatement
      case symbol_kind::S_returnStatement: // returnStatement
      case symbol_kind::S_conditionalStatement: // conditionalStatement
      case symbol_kind::S_breakStatement: // breakStatement
      case symbol_kind::S_continueStatement: // continueStatement
      case symbol_kind::S_directApplication: // directApplication
      case symbol_kind::S_statement: // statement
      case symbol_kind::S_switchStatement: // switchStatement
      case symbol_kind::S_forStatement: // forStatement
        value.copy< IR::Statement* > (that.value);
        break;

      case symbol_kind::S_structField: // structField
        value.copy< IR::StructField* > (that.value);
        break;

      case symbol_kind::S_switchCase: // switchCase
        value.copy< IR::SwitchCase* > (that.value);
        break;

      case symbol_kind::S_optTypeParameters: // optTypeParameters
      case symbol_kind::S_typeParameters: // typeParameters
        value.copy< IR::TypeParameters* > (that.value);
        break;

      case symbol_kind::S_controlTypeDeclaration: // controlTypeDeclaration
        value.copy< IR::Type_Control* > (that.value);
        break;

      case symbol_kind::S_packageTypeDeclaration: // packageTypeDeclaration
      case symbol_kind::S_parserDeclaration: // parserDeclaration
      case symbol_kind::S_controlDeclaration: // controlDeclaration
      case symbol_kind::S_typeDeclaration: // typeDeclaration
      case symbol_kind::S_derivedTypeDeclaration: // derivedTypeDeclaration
      case symbol_kind::S_headerTypeDeclaration: // headerTypeDeclaration
      case symbol_kind::S_structTypeDeclaration: // structTypeDeclaration
      case symbol_kind::S_headerUnionDeclaration: // headerUnionDeclaration
      case symbol_kind::S_enumDeclaration: // enumDeclaration
      case symbol_kind::S_typedefDeclaration: // typedefDeclaration
        value.copy< IR::Type_Declaration* > (that.value);
        break;

      case symbol_kind::S_errorDeclaration: // errorDeclaration
        value.copy< IR::Type_Error* > (that.value);
        break;

      case symbol_kind::S_typeName: // typeName
        value.copy< IR::Type_Name* > (that.value);
        break;

      case symbol_kind::S_parserTypeDeclaration: // parserTypeDeclaration
        value.copy< IR::Type_Parser* > (that.value);
        break;

      case symbol_kind::S_optAnnotations: // optAnnotations
      case symbol_kind::S_annotations: // annotations
        value.copy< IR::Vector<IR::Annotation>* > (that.value);
        break;

      case symbol_kind::S_annotationBody: // annotationBody
        value.copy< IR::Vector<IR::AnnotationToken>* > (that.value);
        break;

      case symbol_kind::S_argumentList: // argumentList
      case symbol_kind::S_nonEmptyArgList: // nonEmptyArgList
        value.copy< IR::Vector<IR::Argument>* > (that.value);
        break;

      case symbol_kind::S_entriesList: // entriesList
        value.copy< IR::Vector<IR::Entry>* > (that.value);
        break;

      case symbol_kind::S_tupleKeysetExpression: // tupleKeysetExpression
      case symbol_kind::S_simpleExpressionList: // simpleExpressionList
      case symbol_kind::S_expressionList: // expressionList
      case symbol_kind::S_intList: // intList
      case symbol_kind::S_intOrStrList: // intOrStrList
      case symbol_kind::S_strList: // strList
        value.copy< IR::Vector<IR::Expression>* > (that.value);
        break;

      case symbol_kind::S_keyElementList: // keyElementList
        value.copy< IR::Vector<IR::KeyElement>* > (that.value);
        break;

      case symbol_kind::S_methodPrototypes: // methodPrototypes
        value.copy< IR::Vector<IR::Method>* > (that.value);
        break;

      case symbol_kind::S_selectCaseList: // selectCaseList
        value.copy< IR::Vector<IR::SelectCase>* > (that.value);
        break;

      case symbol_kind::S_switchCases: // switchCases
        value.copy< IR::Vector<IR::SwitchCase>* > (that.value);
        break;

      case symbol_kind::S_typeArgumentList: // typeArgumentList
      case symbol_kind::S_realTypeArgumentList: // realTypeArgumentList
        value.copy< IR::Vector<IR::Type>* > (that.value);
        break;

      case symbol_kind::S_declarator: // declarator
        value.copy< NameTypePair > (that.value);
        break;

      case symbol_kind::S_optCONST: // optCONST
        value.copy< OptionalConst > (that.value);
        break;

      case symbol_kind::S_UNEXPECTED_TOKEN: // UNEXPECTED_TOKEN
      case symbol_kind::S_END_PRAGMA: // END_PRAGMA
      case symbol_kind::S_LE: // "<="
      case symbol_kind::S_GE: // ">="
      case symbol_kind::S_SHL: // "<<"
      case symbol_kind::S_AND: // "&&"
      case symbol_kind::S_OR: // "||"
      case symbol_kind::S_NE: // "!="
      case symbol_kind::S_EQ: // "=="
      case symbol_kind::S_PLUS: // "+"
      case symbol_kind::S_MINUS: // "-"
      case symbol_kind::S_PLUS_SAT: // "|+|"
      case symbol_kind::S_MINUS_SAT: // "|-|"
      case symbol_kind::S_MUL: // "*"
      case symbol_kind::S_INVALID: // "{#}"
      case symbol_kind::S_DIV: // "/"
      case symbol_kind::S_MOD: // "%"
      case symbol_kind::S_BIT_OR: // "|"
      case symbol_kind::S_BIT_AND: // "&"
      case symbol_kind::S_BIT_XOR: // "^"
      case symbol_kind::S_COMPLEMENT: // "~"
      case symbol_kind::S_L_BRACKET: // "["
      case symbol_kind::S_R_BRACKET: // "]"
      case symbol_kind::S_L_BRACE: // "{"
      case symbol_kind::S_R_BRACE: // "}"
      case symbol_kind::S_L_ANGLE: // "<"
      case symbol_kind::S_L_ANGLE_ARGS: // L_ANGLE_ARGS
      case symbol_kind::S_R_ANGLE: // ">"
      case symbol_kind::S_R_ANGLE_SHIFT: // R_ANGLE_SHIFT
      case symbol_kind::S_L_PAREN: // "("
      case symbol_kind::S_R_PAREN: // ")"
      case symbol_kind::S_NOT: // "!"
      case symbol_kind::S_COLON: // ":"
      case symbol_kind::S_COMMA: // ","
      case symbol_kind::S_QUESTION: // "?"
      case symbol_kind::S_DOT: // "."
      case symbol_kind::S_ASSIGN: // "="
      case symbol_kind::S_ASSIGN_PLUS: // "+="
      case symbol_kind::S_ASSIGN_MINUS: // "-="
      case symbol_kind::S_ASSIGN_MUL: // "*="
      case symbol_kind::S_ASSIGN_DIV: // "/="
      case symbol_kind::S_ASSIGN_MOD: // "%="
      case symbol_kind::S_ASSIGN_BIT_AND: // "&="
      case symbol_kind::S_ASSIGN_BIT_OR: // "|="
      case symbol_kind::S_ASSIGN_XOR: // "^="
      case symbol_kind::S_ASSIGN_SHL: // "<<="
      case symbol_kind::S_ASSIGN_SHR: // ">>="
      case symbol_kind::S_ASSIGN_PLUS_SAT: // "|+|="
      case symbol_kind::S_ASSIGN_MINUS_SAT: // "|-|="
      case symbol_kind::S_SEMICOLON: // ";"
      case symbol_kind::S_AT: // "@"
      case symbol_kind::S_PP: // "++"
      case symbol_kind::S_DONTCARE: // "_"
      case symbol_kind::S_MASK: // "&&&"
      case symbol_kind::S_DOTS: // "..."
      case symbol_kind::S_RANGE: // ".."
      case symbol_kind::S_TRUE: // TRUE
      case symbol_kind::S_FALSE: // FALSE
      case symbol_kind::S_THIS: // THIS
      case symbol_kind::S_ABSTRACT: // ABSTRACT
      case symbol_kind::S_ACTION: // ACTION
      case symbol_kind::S_ACTIONS: // ACTIONS
      case symbol_kind::S_APPLY: // APPLY
      case symbol_kind::S_BOOL: // BOOL
      case symbol_kind::S_BIT: // BIT
      case symbol_kind::S_BREAK: // BREAK
      case symbol_kind::S_CONST: // CONST
      case symbol_kind::S_CONTINUE: // CONTINUE
      case symbol_kind::S_CONTROL: // CONTROL
      case symbol_kind::S_DEFAULT: // DEFAULT
      case symbol_kind::S_ELSE: // ELSE
      case symbol_kind::S_ENTRIES: // ENTRIES
      case symbol_kind::S_ENUM: // ENUM
      case symbol_kind::S_ERROR: // ERROR
      case symbol_kind::S_EXIT: // EXIT
      case symbol_kind::S_EXTERN: // EXTERN
      case symbol_kind::S_FOR: // FOR
      case symbol_kind::S_HEADER: // HEADER
      case symbol_kind::S_HEADER_UNION: // HEADER_UNION
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_IN: // IN
      case symbol_kind::S_INOUT: // INOUT
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_KEY: // KEY
      case symbol_kind::S_LIST: // LIST
      case symbol_kind::S_SELECT: // SELECT
      case symbol_kind::S_MATCH_KIND: // MATCH_KIND
      case symbol_kind::S_TYPE: // TYPE
      case symbol_kind::S_OUT: // OUT
      case symbol_kind::S_PACKAGE: // PACKAGE
      case symbol_kind::S_PARSER: // PARSER
      case symbol_kind::S_PRAGMA: // PRAGMA
      case symbol_kind::S_PRIORITY: // PRIORITY
      case symbol_kind::S_RETURN: // RETURN
      case symbol_kind::S_STATE: // STATE
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_STRUCT: // STRUCT
      case symbol_kind::S_SWITCH: // SWITCH
      case symbol_kind::S_TABLE: // TABLE
      case symbol_kind::S_TRANSITION: // TRANSITION
      case symbol_kind::S_TUPLE: // TUPLE
      case symbol_kind::S_TYPEDEF: // TYPEDEF
      case symbol_kind::S_VARBIT: // VARBIT
      case symbol_kind::S_VALUESET: // VALUESET
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_annotationToken: // annotationToken
        value.copy< Token > (that.value);
        break;

      case symbol_kind::S_INTEGER: // INTEGER
        value.copy< UnparsedConstant > (that.value);
        break;

      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_TYPE_IDENTIFIER: // TYPE_IDENTIFIER
      case symbol_kind::S_STRING_LITERAL: // STRING_LITERAL
        value.copy< cstring > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }

  P4Parser::stack_symbol_type&
  P4Parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_typeRef: // typeRef
      case symbol_kind::S_namedType: // namedType
      case symbol_kind::S_p4listType: // p4listType
      case symbol_kind::S_tupleType: // tupleType
      case symbol_kind::S_headerStackType: // headerStackType
      case symbol_kind::S_specializedType: // specializedType
      case symbol_kind::S_baseType: // baseType
      case symbol_kind::S_typeOrVoid: // typeOrVoid
      case symbol_kind::S_typeArg: // typeArg
      case symbol_kind::S_realTypeArg: // realTypeArg
      case symbol_kind::S_derivedTypeDeclarationAsType: // derivedTypeDeclarationAsType
        value.move< ConstType* > (that.value);
        break;

      case symbol_kind::S_annotation: // annotation
        value.move< IR::Annotation* > (that.value);
        break;

      case symbol_kind::S_argument: // argument
        value.move< IR::Argument* > (that.value);
        break;

      case symbol_kind::S_objInitializer: // objInitializer
      case symbol_kind::S_parserBlockStatement: // parserBlockStatement
      case symbol_kind::S_controlBody: // controlBody
      case symbol_kind::S_blockStatement: // blockStatement
        value.move< IR::BlockStatement* > (that.value);
        break;

      case symbol_kind::S_instantiation: // instantiation
      case symbol_kind::S_objDeclaration: // objDeclaration
      case symbol_kind::S_parserLocalElement: // parserLocalElement
      case symbol_kind::S_valueSetDeclaration: // valueSetDeclaration
      case symbol_kind::S_controlLocalDeclaration: // controlLocalDeclaration
      case symbol_kind::S_tableDeclaration: // tableDeclaration
      case symbol_kind::S_actionDeclaration: // actionDeclaration
      case symbol_kind::S_variableDeclaration: // variableDeclaration
      case symbol_kind::S_variableDeclarationWithoutSemicolon: // variableDeclarationWithoutSemicolon
      case symbol_kind::S_constantDeclaration: // constantDeclaration
      case symbol_kind::S_functionDeclaration: // functionDeclaration
        value.move< IR::Declaration* > (that.value);
        break;

      case symbol_kind::S_direction: // direction
        value.move< IR::Direction > (that.value);
        break;

      case symbol_kind::S_entry: // entry
        value.move< IR::Entry* > (that.value);
        break;

      case symbol_kind::S_p4rtControllerType: // p4rtControllerType
      case symbol_kind::S_transitionStatement: // transitionStatement
      case symbol_kind::S_stateExpression: // stateExpression
      case symbol_kind::S_selectExpression: // selectExpression
      case symbol_kind::S_keysetExpression: // keysetExpression
      case symbol_kind::S_reducedSimpleKeysetExpression: // reducedSimpleKeysetExpression
      case symbol_kind::S_simpleKeysetExpression: // simpleKeysetExpression
      case symbol_kind::S_switchLabel: // switchLabel
      case symbol_kind::S_forCollectionExpr: // forCollectionExpr
      case symbol_kind::S_actionRef: // actionRef
      case symbol_kind::S_entryPriority: // entryPriority
      case symbol_kind::S_optInitializer: // optInitializer
      case symbol_kind::S_initializer: // initializer
      case symbol_kind::S_lvalue: // lvalue
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_nonBraceExpression: // nonBraceExpression
      case symbol_kind::S_intOrStr: // intOrStr
        value.move< IR::Expression* > (that.value);
        break;

      case symbol_kind::S_nonTypeName: // nonTypeName
      case symbol_kind::S_name: // name
      case symbol_kind::S_nonTableKwName: // nonTableKwName
      case symbol_kind::S_annotationName: // annotationName
      case symbol_kind::S_dot_name: // dot_name
        value.move< IR::ID* > (that.value);
        break;

      case symbol_kind::S_actionList: // actionList
        value.move< IR::IndexedVector<IR::ActionListElement>* > (that.value);
        break;

      case symbol_kind::S_parserLocalElements: // parserLocalElements
      case symbol_kind::S_controlLocalDeclarations: // controlLocalDeclarations
        value.move< IR::IndexedVector<IR::Declaration>* > (that.value);
        break;

      case symbol_kind::S_identifierList: // identifierList
        value.move< IR::IndexedVector<IR::Declaration_ID>* > (that.value);
        break;

      case symbol_kind::S_kvList: // kvList
        value.move< IR::IndexedVector<IR::NamedExpression>* > (that.value);
        break;

      case symbol_kind::S_parameterList: // parameterList
      case symbol_kind::S_nonEmptyParameterList: // nonEmptyParameterList
      case symbol_kind::S_optConstructorParameters: // optConstructorParameters
        value.move< IR::IndexedVector<IR::Parameter>* > (that.value);
        break;

      case symbol_kind::S_parserStates: // parserStates
        value.move< IR::IndexedVector<IR::ParserState>* > (that.value);
        break;

      case symbol_kind::S_tablePropertyList: // tablePropertyList
        value.move< IR::IndexedVector<IR::Property>* > (that.value);
        break;

      case symbol_kind::S_specifiedIdentifierList: // specifiedIdentifierList
        value.move< IR::IndexedVector<IR::SerEnumMember>* > (that.value);
        break;

      case symbol_kind::S_objDeclarations: // objDeclarations
      case symbol_kind::S_parserStatements: // parserStatements
      case symbol_kind::S_statOrDeclList: // statOrDeclList
      case symbol_kind::S_forInitStatements: // forInitStatements
      case symbol_kind::S_forInitStatementsNonEmpty: // forInitStatementsNonEmpty
      case symbol_kind::S_forUpdateStatements: // forUpdateStatements
      case symbol_kind::S_forUpdateStatementsNonEmpty: // forUpdateStatementsNonEmpty
        value.move< IR::IndexedVector<IR::StatOrDecl>* > (that.value);
        break;

      case symbol_kind::S_structFieldList: // structFieldList
        value.move< IR::IndexedVector<IR::StructField>* > (that.value);
        break;

      case symbol_kind::S_typeParameterList: // typeParameterList
        value.move< IR::IndexedVector<IR::Type_Var>* > (that.value);
        break;

      case symbol_kind::S_keyElement: // keyElement
        value.move< IR::KeyElement* > (that.value);
        break;

      case symbol_kind::S_functionPrototype: // functionPrototype
      case symbol_kind::S_methodPrototype: // methodPrototype
        value.move< IR::Method* > (that.value);
        break;

      case symbol_kind::S_kvPair: // kvPair
        value.move< IR::NamedExpression* > (that.value);
        break;

      case symbol_kind::S_fragment: // fragment
      case symbol_kind::S_declaration: // declaration
      case symbol_kind::S_externDeclaration: // externDeclaration
      case symbol_kind::S_matchKindDeclaration: // matchKindDeclaration
        value.move< IR::Node* > (that.value);
        break;

      case symbol_kind::S_parameter: // parameter
        value.move< IR::Parameter* > (that.value);
        break;

      case symbol_kind::S_parserState: // parserState
        value.move< IR::ParserState* > (that.value);
        break;

      case symbol_kind::S_prefixedType: // prefixedType
      case symbol_kind::S_prefixedNonTypeName: // prefixedNonTypeName
        value.move< IR::Path* > (that.value);
        break;

      case symbol_kind::S_tableProperty: // tableProperty
        value.move< IR::Property* > (that.value);
        break;

      case symbol_kind::S_selectCase: // selectCase
        value.move< IR::SelectCase* > (that.value);
        break;

      case symbol_kind::S_specifiedIdentifier: // specifiedIdentifier
        value.move< IR::SerEnumMember* > (that.value);
        break;

      case symbol_kind::S_parserStatement: // parserStatement
      case symbol_kind::S_statementOrDeclaration: // statementOrDeclaration
      case symbol_kind::S_declOrAssignmentOrMethodCallStatement: // declOrAssignmentOrMethodCallStatement
        value.move< IR::StatOrDecl* > (that.value);
        break;

      case symbol_kind::S_assignmentOrMethodCallStatement: // assignmentOrMethodCallStatement
      case symbol_kind::S_assignmentOrMethodCallStatementWithoutSemicolon: // assignmentOrMethodCallStatementWithoutSemicolon
      case symbol_kind::S_emptyStatement: // emptyStatement
      case symbol_kind::S_exitStatement: // exitStatement
      case symbol_kind::S_returnStatement: // returnStatement
      case symbol_kind::S_conditionalStatement: // conditionalStatement
      case symbol_kind::S_breakStatement: // breakStatement
      case symbol_kind::S_continueStatement: // continueStatement
      case symbol_kind::S_directApplication: // directApplication
      case symbol_kind::S_statement: // statement
      case symbol_kind::S_switchStatement: // switchStatement
      case symbol_kind::S_forStatement: // forStatement
        value.move< IR::Statement* > (that.value);
        break;

      case symbol_kind::S_structField: // structField
        value.move< IR::StructField* > (that.value);
        break;

      case symbol_kind::S_switchCase: // switchCase
        value.move< IR::SwitchCase* > (that.value);
        break;

      case symbol_kind::S_optTypeParameters: // optTypeParameters
      case symbol_kind::S_typeParameters: // typeParameters
        value.move< IR::TypeParameters* > (that.value);
        break;

      case symbol_kind::S_controlTypeDeclaration: // controlTypeDeclaration
        value.move< IR::Type_Control* > (that.value);
        break;

      case symbol_kind::S_packageTypeDeclaration: // packageTypeDeclaration
      case symbol_kind::S_parserDeclaration: // parserDeclaration
      case symbol_kind::S_controlDeclaration: // controlDeclaration
      case symbol_kind::S_typeDeclaration: // typeDeclaration
      case symbol_kind::S_derivedTypeDeclaration: // derivedTypeDeclaration
      case symbol_kind::S_headerTypeDeclaration: // headerTypeDeclaration
      case symbol_kind::S_structTypeDeclaration: // structTypeDeclaration
      case symbol_kind::S_headerUnionDeclaration: // headerUnionDeclaration
      case symbol_kind::S_enumDeclaration: // enumDeclaration
      case symbol_kind::S_typedefDeclaration: // typedefDeclaration
        value.move< IR::Type_Declaration* > (that.value);
        break;

      case symbol_kind::S_errorDeclaration: // errorDeclaration
        value.move< IR::Type_Error* > (that.value);
        break;

      case symbol_kind::S_typeName: // typeName
        value.move< IR::Type_Name* > (that.value);
        break;

      case symbol_kind::S_parserTypeDeclaration: // parserTypeDeclaration
        value.move< IR::Type_Parser* > (that.value);
        break;

      case symbol_kind::S_optAnnotations: // optAnnotations
      case symbol_kind::S_annotations: // annotations
        value.move< IR::Vector<IR::Annotation>* > (that.value);
        break;

      case symbol_kind::S_annotationBody: // annotationBody
        value.move< IR::Vector<IR::AnnotationToken>* > (that.value);
        break;

      case symbol_kind::S_argumentList: // argumentList
      case symbol_kind::S_nonEmptyArgList: // nonEmptyArgList
        value.move< IR::Vector<IR::Argument>* > (that.value);
        break;

      case symbol_kind::S_entriesList: // entriesList
        value.move< IR::Vector<IR::Entry>* > (that.value);
        break;

      case symbol_kind::S_tupleKeysetExpression: // tupleKeysetExpression
      case symbol_kind::S_simpleExpressionList: // simpleExpressionList
      case symbol_kind::S_expressionList: // expressionList
      case symbol_kind::S_intList: // intList
      case symbol_kind::S_intOrStrList: // intOrStrList
      case symbol_kind::S_strList: // strList
        value.move< IR::Vector<IR::Expression>* > (that.value);
        break;

      case symbol_kind::S_keyElementList: // keyElementList
        value.move< IR::Vector<IR::KeyElement>* > (that.value);
        break;

      case symbol_kind::S_methodPrototypes: // methodPrototypes
        value.move< IR::Vector<IR::Method>* > (that.value);
        break;

      case symbol_kind::S_selectCaseList: // selectCaseList
        value.move< IR::Vector<IR::SelectCase>* > (that.value);
        break;

      case symbol_kind::S_switchCases: // switchCases
        value.move< IR::Vector<IR::SwitchCase>* > (that.value);
        break;

      case symbol_kind::S_typeArgumentList: // typeArgumentList
      case symbol_kind::S_realTypeArgumentList: // realTypeArgumentList
        value.move< IR::Vector<IR::Type>* > (that.value);
        break;

      case symbol_kind::S_declarator: // declarator
        value.move< NameTypePair > (that.value);
        break;

      case symbol_kind::S_optCONST: // optCONST
        value.move< OptionalConst > (that.value);
        break;

      case symbol_kind::S_UNEXPECTED_TOKEN: // UNEXPECTED_TOKEN
      case symbol_kind::S_END_PRAGMA: // END_PRAGMA
      case symbol_kind::S_LE: // "<="
      case symbol_kind::S_GE: // ">="
      case symbol_kind::S_SHL: // "<<"
      case symbol_kind::S_AND: // "&&"
      case symbol_kind::S_OR: // "||"
      case symbol_kind::S_NE: // "!="
      case symbol_kind::S_EQ: // "=="
      case symbol_kind::S_PLUS: // "+"
      case symbol_kind::S_MINUS: // "-"
      case symbol_kind::S_PLUS_SAT: // "|+|"
      case symbol_kind::S_MINUS_SAT: // "|-|"
      case symbol_kind::S_MUL: // "*"
      case symbol_kind::S_INVALID: // "{#}"
      case symbol_kind::S_DIV: // "/"
      case symbol_kind::S_MOD: // "%"
      case symbol_kind::S_BIT_OR: // "|"
      case symbol_kind::S_BIT_AND: // "&"
      case symbol_kind::S_BIT_XOR: // "^"
      case symbol_kind::S_COMPLEMENT: // "~"
      case symbol_kind::S_L_BRACKET: // "["
      case symbol_kind::S_R_BRACKET: // "]"
      case symbol_kind::S_L_BRACE: // "{"
      case symbol_kind::S_R_BRACE: // "}"
      case symbol_kind::S_L_ANGLE: // "<"
      case symbol_kind::S_L_ANGLE_ARGS: // L_ANGLE_ARGS
      case symbol_kind::S_R_ANGLE: // ">"
      case symbol_kind::S_R_ANGLE_SHIFT: // R_ANGLE_SHIFT
      case symbol_kind::S_L_PAREN: // "("
      case symbol_kind::S_R_PAREN: // ")"
      case symbol_kind::S_NOT: // "!"
      case symbol_kind::S_COLON: // ":"
      case symbol_kind::S_COMMA: // ","
      case symbol_kind::S_QUESTION: // "?"
      case symbol_kind::S_DOT: // "."
      case symbol_kind::S_ASSIGN: // "="
      case symbol_kind::S_ASSIGN_PLUS: // "+="
      case symbol_kind::S_ASSIGN_MINUS: // "-="
      case symbol_kind::S_ASSIGN_MUL: // "*="
      case symbol_kind::S_ASSIGN_DIV: // "/="
      case symbol_kind::S_ASSIGN_MOD: // "%="
      case symbol_kind::S_ASSIGN_BIT_AND: // "&="
      case symbol_kind::S_ASSIGN_BIT_OR: // "|="
      case symbol_kind::S_ASSIGN_XOR: // "^="
      case symbol_kind::S_ASSIGN_SHL: // "<<="
      case symbol_kind::S_ASSIGN_SHR: // ">>="
      case symbol_kind::S_ASSIGN_PLUS_SAT: // "|+|="
      case symbol_kind::S_ASSIGN_MINUS_SAT: // "|-|="
      case symbol_kind::S_SEMICOLON: // ";"
      case symbol_kind::S_AT: // "@"
      case symbol_kind::S_PP: // "++"
      case symbol_kind::S_DONTCARE: // "_"
      case symbol_kind::S_MASK: // "&&&"
      case symbol_kind::S_DOTS: // "..."
      case symbol_kind::S_RANGE: // ".."
      case symbol_kind::S_TRUE: // TRUE
      case symbol_kind::S_FALSE: // FALSE
      case symbol_kind::S_THIS: // THIS
      case symbol_kind::S_ABSTRACT: // ABSTRACT
      case symbol_kind::S_ACTION: // ACTION
      case symbol_kind::S_ACTIONS: // ACTIONS
      case symbol_kind::S_APPLY: // APPLY
      case symbol_kind::S_BOOL: // BOOL
      case symbol_kind::S_BIT: // BIT
      case symbol_kind::S_BREAK: // BREAK
      case symbol_kind::S_CONST: // CONST
      case symbol_kind::S_CONTINUE: // CONTINUE
      case symbol_kind::S_CONTROL: // CONTROL
      case symbol_kind::S_DEFAULT: // DEFAULT
      case symbol_kind::S_ELSE: // ELSE
      case symbol_kind::S_ENTRIES: // ENTRIES
      case symbol_kind::S_ENUM: // ENUM
      case symbol_kind::S_ERROR: // ERROR
      case symbol_kind::S_EXIT: // EXIT
      case symbol_kind::S_EXTERN: // EXTERN
      case symbol_kind::S_FOR: // FOR
      case symbol_kind::S_HEADER: // HEADER
      case symbol_kind::S_HEADER_UNION: // HEADER_UNION
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_IN: // IN
      case symbol_kind::S_INOUT: // INOUT
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_KEY: // KEY
      case symbol_kind::S_LIST: // LIST
      case symbol_kind::S_SELECT: // SELECT
      case symbol_kind::S_MATCH_KIND: // MATCH_KIND
      case symbol_kind::S_TYPE: // TYPE
      case symbol_kind::S_OUT: // OUT
      case symbol_kind::S_PACKAGE: // PACKAGE
      case symbol_kind::S_PARSER: // PARSER
      case symbol_kind::S_PRAGMA: // PRAGMA
      case symbol_kind::S_PRIORITY: // PRIORITY
      case symbol_kind::S_RETURN: // RETURN
      case symbol_kind::S_STATE: // STATE
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_STRUCT: // STRUCT
      case symbol_kind::S_SWITCH: // SWITCH
      case symbol_kind::S_TABLE: // TABLE
      case symbol_kind::S_TRANSITION: // TRANSITION
      case symbol_kind::S_TUPLE: // TUPLE
      case symbol_kind::S_TYPEDEF: // TYPEDEF
      case symbol_kind::S_VARBIT: // VARBIT
      case symbol_kind::S_VALUESET: // VALUESET
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_annotationToken: // annotationToken
        value.move< Token > (that.value);
        break;

      case symbol_kind::S_INTEGER: // INTEGER
        value.move< UnparsedConstant > (that.value);
        break;

      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_TYPE_IDENTIFIER: // TYPE_IDENTIFIER
      case symbol_kind::S_STRING_LITERAL: // STRING_LITERAL
        value.move< cstring > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  P4Parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  P4Parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " ("
            << yysym.location << ": ";
        switch (yykind)
    {
      case symbol_kind::S_UNEXPECTED_TOKEN: // UNEXPECTED_TOKEN
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 1967 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_END_PRAGMA: // END_PRAGMA
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 1973 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_LE: // "<="
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 1979 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_GE: // ">="
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 1985 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_SHL: // "<<"
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 1991 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_AND: // "&&"
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 1997 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_OR: // "||"
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2003 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_NE: // "!="
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2009 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_EQ: // "=="
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2015 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_PLUS: // "+"
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2021 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_MINUS: // "-"
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2027 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_PLUS_SAT: // "|+|"
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2033 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_MINUS_SAT: // "|-|"
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2039 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_MUL: // "*"
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2045 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_INVALID: // "{#}"
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2051 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_DIV: // "/"
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2057 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_MOD: // "%"
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2063 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_BIT_OR: // "|"
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2069 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_BIT_AND: // "&"
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2075 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_BIT_XOR: // "^"
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2081 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_COMPLEMENT: // "~"
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2087 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_L_BRACKET: // "["
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2093 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_R_BRACKET: // "]"
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2099 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_L_BRACE: // "{"
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2105 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_R_BRACE: // "}"
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2111 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_L_ANGLE: // "<"
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2117 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_L_ANGLE_ARGS: // L_ANGLE_ARGS
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2123 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_R_ANGLE: // ">"
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2129 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_R_ANGLE_SHIFT: // R_ANGLE_SHIFT
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2135 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_L_PAREN: // "("
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2141 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_R_PAREN: // ")"
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2147 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_NOT: // "!"
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2153 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_COLON: // ":"
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2159 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_COMMA: // ","
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_QUESTION: // "?"
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2171 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_DOT: // "."
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2177 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_ASSIGN: // "="
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2183 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_ASSIGN_PLUS: // "+="
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2189 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_ASSIGN_MINUS: // "-="
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2195 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_ASSIGN_MUL: // "*="
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2201 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_ASSIGN_DIV: // "/="
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2207 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_ASSIGN_MOD: // "%="
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2213 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_ASSIGN_BIT_AND: // "&="
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2219 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_ASSIGN_BIT_OR: // "|="
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2225 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_ASSIGN_XOR: // "^="
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2231 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_ASSIGN_SHL: // "<<="
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2237 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_ASSIGN_SHR: // ">>="
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2243 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_ASSIGN_PLUS_SAT: // "|+|="
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2249 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_ASSIGN_MINUS_SAT: // "|-|="
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2255 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_SEMICOLON: // ";"
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2261 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_AT: // "@"
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2267 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_PP: // "++"
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2273 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_DONTCARE: // "_"
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2279 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_MASK: // "&&&"
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2285 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_DOTS: // "..."
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2291 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_RANGE: // ".."
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2297 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_TRUE: // TRUE
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2303 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_FALSE: // FALSE
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2309 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_THIS: // THIS
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2315 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_ABSTRACT: // ABSTRACT
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2321 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_ACTION: // ACTION
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2327 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_ACTIONS: // ACTIONS
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2333 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_APPLY: // APPLY
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2339 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_BOOL: // BOOL
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2345 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_BIT: // BIT
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2351 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_BREAK: // BREAK
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2357 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_CONST: // CONST
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2363 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_CONTINUE: // CONTINUE
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2369 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_CONTROL: // CONTROL
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2375 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_DEFAULT: // DEFAULT
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2381 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_ELSE: // ELSE
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2387 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_ENTRIES: // ENTRIES
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2393 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_ENUM: // ENUM
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2399 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_ERROR: // ERROR
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2405 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_EXIT: // EXIT
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2411 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_EXTERN: // EXTERN
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2417 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_FOR: // FOR
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2423 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_HEADER: // HEADER
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2429 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_HEADER_UNION: // HEADER_UNION
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2435 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_IF: // IF
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2441 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_IN: // IN
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2447 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_INOUT: // INOUT
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2453 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_INT: // INT
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2459 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_KEY: // KEY
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2465 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_LIST: // LIST
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2471 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_SELECT: // SELECT
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2477 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_MATCH_KIND: // MATCH_KIND
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2483 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_TYPE: // TYPE
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2489 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_OUT: // OUT
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2495 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_PACKAGE: // PACKAGE
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2501 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_PARSER: // PARSER
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2507 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_PRAGMA: // PRAGMA
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2513 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_PRIORITY: // PRIORITY
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2519 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_RETURN: // RETURN
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2525 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_STATE: // STATE
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2531 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_STRING: // STRING
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2537 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_STRUCT: // STRUCT
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2543 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_SWITCH: // SWITCH
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2549 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_TABLE: // TABLE
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2555 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_TRANSITION: // TRANSITION
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2561 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_TUPLE: // TUPLE
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2567 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_TYPEDEF: // TYPEDEF
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2573 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_VARBIT: // VARBIT
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2579 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_VALUESET: // VALUESET
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2585 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_VOID: // VOID
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2591 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 2597 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_TYPE_IDENTIFIER: // TYPE_IDENTIFIER
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 2603 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_STRING_LITERAL: // STRING_LITERAL
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 2609 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_INTEGER: // INTEGER
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < UnparsedConstant > (); }
#line 2615 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_fragment: // fragment
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Node* > (); }
#line 2621 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_p4rtControllerType: // p4rtControllerType
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 2627 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_declaration: // declaration
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Node* > (); }
#line 2633 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_nonTypeName: // nonTypeName
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::ID* > (); }
#line 2639 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_name: // name
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::ID* > (); }
#line 2645 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_nonTableKwName: // nonTableKwName
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::ID* > (); }
#line 2651 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_optCONST: // optCONST
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < OptionalConst > (); }
#line 2657 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_optAnnotations: // optAnnotations
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::Annotation>* > (); }
#line 2663 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_annotations: // annotations
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::Annotation>* > (); }
#line 2669 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_annotation: // annotation
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Annotation* > (); }
#line 2675 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_annotationBody: // annotationBody
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::AnnotationToken>* > (); }
#line 2681 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_annotationName: // annotationName
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::ID* > (); }
#line 2687 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_annotationToken: // annotationToken
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2693 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_kvList: // kvList
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::NamedExpression>* > (); }
#line 2699 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_kvPair: // kvPair
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::NamedExpression* > (); }
#line 2705 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_parameterList: // parameterList
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::Parameter>* > (); }
#line 2711 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_nonEmptyParameterList: // nonEmptyParameterList
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::Parameter>* > (); }
#line 2717 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_parameter: // parameter
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Parameter* > (); }
#line 2723 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_direction: // direction
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Direction > (); }
#line 2729 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_packageTypeDeclaration: // packageTypeDeclaration
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Type_Declaration* > (); }
#line 2735 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_instantiation: // instantiation
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Declaration* > (); }
#line 2741 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_objInitializer: // objInitializer
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::BlockStatement* > (); }
#line 2747 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_objDeclarations: // objDeclarations
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::StatOrDecl>* > (); }
#line 2753 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_objDeclaration: // objDeclaration
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Declaration* > (); }
#line 2759 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_optConstructorParameters: // optConstructorParameters
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::Parameter>* > (); }
#line 2765 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_parserDeclaration: // parserDeclaration
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Type_Declaration* > (); }
#line 2771 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_parserLocalElements: // parserLocalElements
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::Declaration>* > (); }
#line 2777 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_parserLocalElement: // parserLocalElement
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Declaration* > (); }
#line 2783 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_parserTypeDeclaration: // parserTypeDeclaration
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Type_Parser* > (); }
#line 2789 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_parserStates: // parserStates
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::ParserState>* > (); }
#line 2795 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_parserState: // parserState
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::ParserState* > (); }
#line 2801 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_parserStatements: // parserStatements
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::StatOrDecl>* > (); }
#line 2807 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_parserStatement: // parserStatement
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::StatOrDecl* > (); }
#line 2813 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_parserBlockStatement: // parserBlockStatement
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::BlockStatement* > (); }
#line 2819 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_transitionStatement: // transitionStatement
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 2825 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_stateExpression: // stateExpression
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 2831 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_selectExpression: // selectExpression
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 2837 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_selectCaseList: // selectCaseList
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::SelectCase>* > (); }
#line 2843 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_selectCase: // selectCase
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::SelectCase* > (); }
#line 2849 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_keysetExpression: // keysetExpression
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 2855 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_tupleKeysetExpression: // tupleKeysetExpression
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::Expression>* > (); }
#line 2861 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_simpleExpressionList: // simpleExpressionList
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::Expression>* > (); }
#line 2867 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_reducedSimpleKeysetExpression: // reducedSimpleKeysetExpression
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 2873 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_simpleKeysetExpression: // simpleKeysetExpression
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 2879 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_valueSetDeclaration: // valueSetDeclaration
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Declaration* > (); }
#line 2885 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_controlDeclaration: // controlDeclaration
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Type_Declaration* > (); }
#line 2891 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_controlTypeDeclaration: // controlTypeDeclaration
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Type_Control* > (); }
#line 2897 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_controlLocalDeclarations: // controlLocalDeclarations
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::Declaration>* > (); }
#line 2903 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_controlLocalDeclaration: // controlLocalDeclaration
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Declaration* > (); }
#line 2909 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_controlBody: // controlBody
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::BlockStatement* > (); }
#line 2915 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_externDeclaration: // externDeclaration
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Node* > (); }
#line 2921 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_methodPrototypes: // methodPrototypes
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::Method>* > (); }
#line 2927 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_functionPrototype: // functionPrototype
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Method* > (); }
#line 2933 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_methodPrototype: // methodPrototype
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Method* > (); }
#line 2939 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_typeRef: // typeRef
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < ConstType* > (); }
#line 2945 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_namedType: // namedType
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < ConstType* > (); }
#line 2951 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_prefixedType: // prefixedType
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Path* > (); }
#line 2957 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_typeName: // typeName
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Type_Name* > (); }
#line 2963 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_p4listType: // p4listType
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < ConstType* > (); }
#line 2969 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_tupleType: // tupleType
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < ConstType* > (); }
#line 2975 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_headerStackType: // headerStackType
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < ConstType* > (); }
#line 2981 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_specializedType: // specializedType
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < ConstType* > (); }
#line 2987 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_baseType: // baseType
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < ConstType* > (); }
#line 2993 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_typeOrVoid: // typeOrVoid
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < ConstType* > (); }
#line 2999 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_optTypeParameters: // optTypeParameters
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::TypeParameters* > (); }
#line 3005 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_typeParameters: // typeParameters
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::TypeParameters* > (); }
#line 3011 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_typeParameterList: // typeParameterList
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::Type_Var>* > (); }
#line 3017 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_typeArg: // typeArg
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < ConstType* > (); }
#line 3023 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_typeArgumentList: // typeArgumentList
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::Type>* > (); }
#line 3029 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_realTypeArg: // realTypeArg
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < ConstType* > (); }
#line 3035 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_realTypeArgumentList: // realTypeArgumentList
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::Type>* > (); }
#line 3041 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_typeDeclaration: // typeDeclaration
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Type_Declaration* > (); }
#line 3047 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_derivedTypeDeclaration: // derivedTypeDeclaration
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Type_Declaration* > (); }
#line 3053 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_derivedTypeDeclarationAsType: // derivedTypeDeclarationAsType
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < ConstType* > (); }
#line 3059 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_headerTypeDeclaration: // headerTypeDeclaration
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Type_Declaration* > (); }
#line 3065 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_structTypeDeclaration: // structTypeDeclaration
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Type_Declaration* > (); }
#line 3071 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_headerUnionDeclaration: // headerUnionDeclaration
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Type_Declaration* > (); }
#line 3077 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_structFieldList: // structFieldList
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::StructField>* > (); }
#line 3083 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_structField: // structField
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::StructField* > (); }
#line 3089 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_enumDeclaration: // enumDeclaration
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Type_Declaration* > (); }
#line 3095 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_specifiedIdentifierList: // specifiedIdentifierList
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::SerEnumMember>* > (); }
#line 3101 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_specifiedIdentifier: // specifiedIdentifier
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::SerEnumMember* > (); }
#line 3107 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_errorDeclaration: // errorDeclaration
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Type_Error* > (); }
#line 3113 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_matchKindDeclaration: // matchKindDeclaration
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Node* > (); }
#line 3119 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_identifierList: // identifierList
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::Declaration_ID>* > (); }
#line 3125 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_typedefDeclaration: // typedefDeclaration
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Type_Declaration* > (); }
#line 3131 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_assignmentOrMethodCallStatement: // assignmentOrMethodCallStatement
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Statement* > (); }
#line 3137 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_assignmentOrMethodCallStatementWithoutSemicolon: // assignmentOrMethodCallStatementWithoutSemicolon
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Statement* > (); }
#line 3143 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_emptyStatement: // emptyStatement
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Statement* > (); }
#line 3149 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_exitStatement: // exitStatement
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Statement* > (); }
#line 3155 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_returnStatement: // returnStatement
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Statement* > (); }
#line 3161 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_conditionalStatement: // conditionalStatement
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Statement* > (); }
#line 3167 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_breakStatement: // breakStatement
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Statement* > (); }
#line 3173 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_continueStatement: // continueStatement
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Statement* > (); }
#line 3179 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_directApplication: // directApplication
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Statement* > (); }
#line 3185 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_statement: // statement
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Statement* > (); }
#line 3191 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_blockStatement: // blockStatement
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::BlockStatement* > (); }
#line 3197 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_statOrDeclList: // statOrDeclList
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::StatOrDecl>* > (); }
#line 3203 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_switchStatement: // switchStatement
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Statement* > (); }
#line 3209 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_switchCases: // switchCases
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::SwitchCase>* > (); }
#line 3215 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_switchCase: // switchCase
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::SwitchCase* > (); }
#line 3221 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_switchLabel: // switchLabel
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 3227 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_statementOrDeclaration: // statementOrDeclaration
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::StatOrDecl* > (); }
#line 3233 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_forStatement: // forStatement
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Statement* > (); }
#line 3239 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_forInitStatements: // forInitStatements
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::StatOrDecl>* > (); }
#line 3245 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_forInitStatementsNonEmpty: // forInitStatementsNonEmpty
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::StatOrDecl>* > (); }
#line 3251 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_declOrAssignmentOrMethodCallStatement: // declOrAssignmentOrMethodCallStatement
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::StatOrDecl* > (); }
#line 3257 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_forUpdateStatements: // forUpdateStatements
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::StatOrDecl>* > (); }
#line 3263 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_forUpdateStatementsNonEmpty: // forUpdateStatementsNonEmpty
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::StatOrDecl>* > (); }
#line 3269 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_forCollectionExpr: // forCollectionExpr
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 3275 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_tableDeclaration: // tableDeclaration
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Declaration* > (); }
#line 3281 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_tablePropertyList: // tablePropertyList
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::Property>* > (); }
#line 3287 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_tableProperty: // tableProperty
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Property* > (); }
#line 3293 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_keyElementList: // keyElementList
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::KeyElement>* > (); }
#line 3299 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_keyElement: // keyElement
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::KeyElement* > (); }
#line 3305 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_actionList: // actionList
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::ActionListElement>* > (); }
#line 3311 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_actionRef: // actionRef
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 3317 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_entry: // entry
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Entry* > (); }
#line 3323 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_entryPriority: // entryPriority
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 3329 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_entriesList: // entriesList
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::Entry>* > (); }
#line 3335 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_actionDeclaration: // actionDeclaration
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Declaration* > (); }
#line 3341 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_variableDeclaration: // variableDeclaration
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Declaration* > (); }
#line 3347 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_variableDeclarationWithoutSemicolon: // variableDeclarationWithoutSemicolon
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Declaration* > (); }
#line 3353 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_constantDeclaration: // constantDeclaration
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Declaration* > (); }
#line 3359 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_declarator: // declarator
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < NameTypePair > (); }
#line 3365 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_optInitializer: // optInitializer
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 3371 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_initializer: // initializer
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 3377 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_functionDeclaration: // functionDeclaration
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Declaration* > (); }
#line 3383 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_argumentList: // argumentList
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::Argument>* > (); }
#line 3389 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_nonEmptyArgList: // nonEmptyArgList
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::Argument>* > (); }
#line 3395 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_argument: // argument
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Argument* > (); }
#line 3401 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_expressionList: // expressionList
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::Expression>* > (); }
#line 3407 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_prefixedNonTypeName: // prefixedNonTypeName
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Path* > (); }
#line 3413 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_dot_name: // dot_name
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::ID* > (); }
#line 3419 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_lvalue: // lvalue
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 3425 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_expression: // expression
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 3431 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_nonBraceExpression: // nonBraceExpression
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 3437 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_intOrStr: // intOrStr
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 3443 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_intList: // intList
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::Expression>* > (); }
#line 3449 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_intOrStrList: // intOrStrList
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::Expression>* > (); }
#line 3455 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      case symbol_kind::S_strList: // strList
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::Expression>* > (); }
#line 3461 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
        break;

      default:
        break;
    }
        yyo << ')';
      }
  }
#endif

  void
  P4Parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  P4Parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  P4Parser::yypop_ (int n) YY_NOEXCEPT
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  P4Parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  P4Parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  P4Parser::debug_level_type
  P4Parser::debug_level () const
  {
    return yydebug_;
  }

  void
  P4Parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  P4Parser::state_type
  P4Parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  P4Parser::yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  P4Parser::yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yytable_ninf_;
  }

  int
  P4Parser::operator() ()
  {
    return parse ();
  }

  int
  P4Parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex (driver));
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case symbol_kind::S_typeRef: // typeRef
      case symbol_kind::S_namedType: // namedType
      case symbol_kind::S_p4listType: // p4listType
      case symbol_kind::S_tupleType: // tupleType
      case symbol_kind::S_headerStackType: // headerStackType
      case symbol_kind::S_specializedType: // specializedType
      case symbol_kind::S_baseType: // baseType
      case symbol_kind::S_typeOrVoid: // typeOrVoid
      case symbol_kind::S_typeArg: // typeArg
      case symbol_kind::S_realTypeArg: // realTypeArg
      case symbol_kind::S_derivedTypeDeclarationAsType: // derivedTypeDeclarationAsType
        yylhs.value.emplace< ConstType* > ();
        break;

      case symbol_kind::S_annotation: // annotation
        yylhs.value.emplace< IR::Annotation* > ();
        break;

      case symbol_kind::S_argument: // argument
        yylhs.value.emplace< IR::Argument* > ();
        break;

      case symbol_kind::S_objInitializer: // objInitializer
      case symbol_kind::S_parserBlockStatement: // parserBlockStatement
      case symbol_kind::S_controlBody: // controlBody
      case symbol_kind::S_blockStatement: // blockStatement
        yylhs.value.emplace< IR::BlockStatement* > ();
        break;

      case symbol_kind::S_instantiation: // instantiation
      case symbol_kind::S_objDeclaration: // objDeclaration
      case symbol_kind::S_parserLocalElement: // parserLocalElement
      case symbol_kind::S_valueSetDeclaration: // valueSetDeclaration
      case symbol_kind::S_controlLocalDeclaration: // controlLocalDeclaration
      case symbol_kind::S_tableDeclaration: // tableDeclaration
      case symbol_kind::S_actionDeclaration: // actionDeclaration
      case symbol_kind::S_variableDeclaration: // variableDeclaration
      case symbol_kind::S_variableDeclarationWithoutSemicolon: // variableDeclarationWithoutSemicolon
      case symbol_kind::S_constantDeclaration: // constantDeclaration
      case symbol_kind::S_functionDeclaration: // functionDeclaration
        yylhs.value.emplace< IR::Declaration* > ();
        break;

      case symbol_kind::S_direction: // direction
        yylhs.value.emplace< IR::Direction > ();
        break;

      case symbol_kind::S_entry: // entry
        yylhs.value.emplace< IR::Entry* > ();
        break;

      case symbol_kind::S_p4rtControllerType: // p4rtControllerType
      case symbol_kind::S_transitionStatement: // transitionStatement
      case symbol_kind::S_stateExpression: // stateExpression
      case symbol_kind::S_selectExpression: // selectExpression
      case symbol_kind::S_keysetExpression: // keysetExpression
      case symbol_kind::S_reducedSimpleKeysetExpression: // reducedSimpleKeysetExpression
      case symbol_kind::S_simpleKeysetExpression: // simpleKeysetExpression
      case symbol_kind::S_switchLabel: // switchLabel
      case symbol_kind::S_forCollectionExpr: // forCollectionExpr
      case symbol_kind::S_actionRef: // actionRef
      case symbol_kind::S_entryPriority: // entryPriority
      case symbol_kind::S_optInitializer: // optInitializer
      case symbol_kind::S_initializer: // initializer
      case symbol_kind::S_lvalue: // lvalue
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_nonBraceExpression: // nonBraceExpression
      case symbol_kind::S_intOrStr: // intOrStr
        yylhs.value.emplace< IR::Expression* > ();
        break;

      case symbol_kind::S_nonTypeName: // nonTypeName
      case symbol_kind::S_name: // name
      case symbol_kind::S_nonTableKwName: // nonTableKwName
      case symbol_kind::S_annotationName: // annotationName
      case symbol_kind::S_dot_name: // dot_name
        yylhs.value.emplace< IR::ID* > ();
        break;

      case symbol_kind::S_actionList: // actionList
        yylhs.value.emplace< IR::IndexedVector<IR::ActionListElement>* > ();
        break;

      case symbol_kind::S_parserLocalElements: // parserLocalElements
      case symbol_kind::S_controlLocalDeclarations: // controlLocalDeclarations
        yylhs.value.emplace< IR::IndexedVector<IR::Declaration>* > ();
        break;

      case symbol_kind::S_identifierList: // identifierList
        yylhs.value.emplace< IR::IndexedVector<IR::Declaration_ID>* > ();
        break;

      case symbol_kind::S_kvList: // kvList
        yylhs.value.emplace< IR::IndexedVector<IR::NamedExpression>* > ();
        break;

      case symbol_kind::S_parameterList: // parameterList
      case symbol_kind::S_nonEmptyParameterList: // nonEmptyParameterList
      case symbol_kind::S_optConstructorParameters: // optConstructorParameters
        yylhs.value.emplace< IR::IndexedVector<IR::Parameter>* > ();
        break;

      case symbol_kind::S_parserStates: // parserStates
        yylhs.value.emplace< IR::IndexedVector<IR::ParserState>* > ();
        break;

      case symbol_kind::S_tablePropertyList: // tablePropertyList
        yylhs.value.emplace< IR::IndexedVector<IR::Property>* > ();
        break;

      case symbol_kind::S_specifiedIdentifierList: // specifiedIdentifierList
        yylhs.value.emplace< IR::IndexedVector<IR::SerEnumMember>* > ();
        break;

      case symbol_kind::S_objDeclarations: // objDeclarations
      case symbol_kind::S_parserStatements: // parserStatements
      case symbol_kind::S_statOrDeclList: // statOrDeclList
      case symbol_kind::S_forInitStatements: // forInitStatements
      case symbol_kind::S_forInitStatementsNonEmpty: // forInitStatementsNonEmpty
      case symbol_kind::S_forUpdateStatements: // forUpdateStatements
      case symbol_kind::S_forUpdateStatementsNonEmpty: // forUpdateStatementsNonEmpty
        yylhs.value.emplace< IR::IndexedVector<IR::StatOrDecl>* > ();
        break;

      case symbol_kind::S_structFieldList: // structFieldList
        yylhs.value.emplace< IR::IndexedVector<IR::StructField>* > ();
        break;

      case symbol_kind::S_typeParameterList: // typeParameterList
        yylhs.value.emplace< IR::IndexedVector<IR::Type_Var>* > ();
        break;

      case symbol_kind::S_keyElement: // keyElement
        yylhs.value.emplace< IR::KeyElement* > ();
        break;

      case symbol_kind::S_functionPrototype: // functionPrototype
      case symbol_kind::S_methodPrototype: // methodPrototype
        yylhs.value.emplace< IR::Method* > ();
        break;

      case symbol_kind::S_kvPair: // kvPair
        yylhs.value.emplace< IR::NamedExpression* > ();
        break;

      case symbol_kind::S_fragment: // fragment
      case symbol_kind::S_declaration: // declaration
      case symbol_kind::S_externDeclaration: // externDeclaration
      case symbol_kind::S_matchKindDeclaration: // matchKindDeclaration
        yylhs.value.emplace< IR::Node* > ();
        break;

      case symbol_kind::S_parameter: // parameter
        yylhs.value.emplace< IR::Parameter* > ();
        break;

      case symbol_kind::S_parserState: // parserState
        yylhs.value.emplace< IR::ParserState* > ();
        break;

      case symbol_kind::S_prefixedType: // prefixedType
      case symbol_kind::S_prefixedNonTypeName: // prefixedNonTypeName
        yylhs.value.emplace< IR::Path* > ();
        break;

      case symbol_kind::S_tableProperty: // tableProperty
        yylhs.value.emplace< IR::Property* > ();
        break;

      case symbol_kind::S_selectCase: // selectCase
        yylhs.value.emplace< IR::SelectCase* > ();
        break;

      case symbol_kind::S_specifiedIdentifier: // specifiedIdentifier
        yylhs.value.emplace< IR::SerEnumMember* > ();
        break;

      case symbol_kind::S_parserStatement: // parserStatement
      case symbol_kind::S_statementOrDeclaration: // statementOrDeclaration
      case symbol_kind::S_declOrAssignmentOrMethodCallStatement: // declOrAssignmentOrMethodCallStatement
        yylhs.value.emplace< IR::StatOrDecl* > ();
        break;

      case symbol_kind::S_assignmentOrMethodCallStatement: // assignmentOrMethodCallStatement
      case symbol_kind::S_assignmentOrMethodCallStatementWithoutSemicolon: // assignmentOrMethodCallStatementWithoutSemicolon
      case symbol_kind::S_emptyStatement: // emptyStatement
      case symbol_kind::S_exitStatement: // exitStatement
      case symbol_kind::S_returnStatement: // returnStatement
      case symbol_kind::S_conditionalStatement: // conditionalStatement
      case symbol_kind::S_breakStatement: // breakStatement
      case symbol_kind::S_continueStatement: // continueStatement
      case symbol_kind::S_directApplication: // directApplication
      case symbol_kind::S_statement: // statement
      case symbol_kind::S_switchStatement: // switchStatement
      case symbol_kind::S_forStatement: // forStatement
        yylhs.value.emplace< IR::Statement* > ();
        break;

      case symbol_kind::S_structField: // structField
        yylhs.value.emplace< IR::StructField* > ();
        break;

      case symbol_kind::S_switchCase: // switchCase
        yylhs.value.emplace< IR::SwitchCase* > ();
        break;

      case symbol_kind::S_optTypeParameters: // optTypeParameters
      case symbol_kind::S_typeParameters: // typeParameters
        yylhs.value.emplace< IR::TypeParameters* > ();
        break;

      case symbol_kind::S_controlTypeDeclaration: // controlTypeDeclaration
        yylhs.value.emplace< IR::Type_Control* > ();
        break;

      case symbol_kind::S_packageTypeDeclaration: // packageTypeDeclaration
      case symbol_kind::S_parserDeclaration: // parserDeclaration
      case symbol_kind::S_controlDeclaration: // controlDeclaration
      case symbol_kind::S_typeDeclaration: // typeDeclaration
      case symbol_kind::S_derivedTypeDeclaration: // derivedTypeDeclaration
      case symbol_kind::S_headerTypeDeclaration: // headerTypeDeclaration
      case symbol_kind::S_structTypeDeclaration: // structTypeDeclaration
      case symbol_kind::S_headerUnionDeclaration: // headerUnionDeclaration
      case symbol_kind::S_enumDeclaration: // enumDeclaration
      case symbol_kind::S_typedefDeclaration: // typedefDeclaration
        yylhs.value.emplace< IR::Type_Declaration* > ();
        break;

      case symbol_kind::S_errorDeclaration: // errorDeclaration
        yylhs.value.emplace< IR::Type_Error* > ();
        break;

      case symbol_kind::S_typeName: // typeName
        yylhs.value.emplace< IR::Type_Name* > ();
        break;

      case symbol_kind::S_parserTypeDeclaration: // parserTypeDeclaration
        yylhs.value.emplace< IR::Type_Parser* > ();
        break;

      case symbol_kind::S_optAnnotations: // optAnnotations
      case symbol_kind::S_annotations: // annotations
        yylhs.value.emplace< IR::Vector<IR::Annotation>* > ();
        break;

      case symbol_kind::S_annotationBody: // annotationBody
        yylhs.value.emplace< IR::Vector<IR::AnnotationToken>* > ();
        break;

      case symbol_kind::S_argumentList: // argumentList
      case symbol_kind::S_nonEmptyArgList: // nonEmptyArgList
        yylhs.value.emplace< IR::Vector<IR::Argument>* > ();
        break;

      case symbol_kind::S_entriesList: // entriesList
        yylhs.value.emplace< IR::Vector<IR::Entry>* > ();
        break;

      case symbol_kind::S_tupleKeysetExpression: // tupleKeysetExpression
      case symbol_kind::S_simpleExpressionList: // simpleExpressionList
      case symbol_kind::S_expressionList: // expressionList
      case symbol_kind::S_intList: // intList
      case symbol_kind::S_intOrStrList: // intOrStrList
      case symbol_kind::S_strList: // strList
        yylhs.value.emplace< IR::Vector<IR::Expression>* > ();
        break;

      case symbol_kind::S_keyElementList: // keyElementList
        yylhs.value.emplace< IR::Vector<IR::KeyElement>* > ();
        break;

      case symbol_kind::S_methodPrototypes: // methodPrototypes
        yylhs.value.emplace< IR::Vector<IR::Method>* > ();
        break;

      case symbol_kind::S_selectCaseList: // selectCaseList
        yylhs.value.emplace< IR::Vector<IR::SelectCase>* > ();
        break;

      case symbol_kind::S_switchCases: // switchCases
        yylhs.value.emplace< IR::Vector<IR::SwitchCase>* > ();
        break;

      case symbol_kind::S_typeArgumentList: // typeArgumentList
      case symbol_kind::S_realTypeArgumentList: // realTypeArgumentList
        yylhs.value.emplace< IR::Vector<IR::Type>* > ();
        break;

      case symbol_kind::S_declarator: // declarator
        yylhs.value.emplace< NameTypePair > ();
        break;

      case symbol_kind::S_optCONST: // optCONST
        yylhs.value.emplace< OptionalConst > ();
        break;

      case symbol_kind::S_UNEXPECTED_TOKEN: // UNEXPECTED_TOKEN
      case symbol_kind::S_END_PRAGMA: // END_PRAGMA
      case symbol_kind::S_LE: // "<="
      case symbol_kind::S_GE: // ">="
      case symbol_kind::S_SHL: // "<<"
      case symbol_kind::S_AND: // "&&"
      case symbol_kind::S_OR: // "||"
      case symbol_kind::S_NE: // "!="
      case symbol_kind::S_EQ: // "=="
      case symbol_kind::S_PLUS: // "+"
      case symbol_kind::S_MINUS: // "-"
      case symbol_kind::S_PLUS_SAT: // "|+|"
      case symbol_kind::S_MINUS_SAT: // "|-|"
      case symbol_kind::S_MUL: // "*"
      case symbol_kind::S_INVALID: // "{#}"
      case symbol_kind::S_DIV: // "/"
      case symbol_kind::S_MOD: // "%"
      case symbol_kind::S_BIT_OR: // "|"
      case symbol_kind::S_BIT_AND: // "&"
      case symbol_kind::S_BIT_XOR: // "^"
      case symbol_kind::S_COMPLEMENT: // "~"
      case symbol_kind::S_L_BRACKET: // "["
      case symbol_kind::S_R_BRACKET: // "]"
      case symbol_kind::S_L_BRACE: // "{"
      case symbol_kind::S_R_BRACE: // "}"
      case symbol_kind::S_L_ANGLE: // "<"
      case symbol_kind::S_L_ANGLE_ARGS: // L_ANGLE_ARGS
      case symbol_kind::S_R_ANGLE: // ">"
      case symbol_kind::S_R_ANGLE_SHIFT: // R_ANGLE_SHIFT
      case symbol_kind::S_L_PAREN: // "("
      case symbol_kind::S_R_PAREN: // ")"
      case symbol_kind::S_NOT: // "!"
      case symbol_kind::S_COLON: // ":"
      case symbol_kind::S_COMMA: // ","
      case symbol_kind::S_QUESTION: // "?"
      case symbol_kind::S_DOT: // "."
      case symbol_kind::S_ASSIGN: // "="
      case symbol_kind::S_ASSIGN_PLUS: // "+="
      case symbol_kind::S_ASSIGN_MINUS: // "-="
      case symbol_kind::S_ASSIGN_MUL: // "*="
      case symbol_kind::S_ASSIGN_DIV: // "/="
      case symbol_kind::S_ASSIGN_MOD: // "%="
      case symbol_kind::S_ASSIGN_BIT_AND: // "&="
      case symbol_kind::S_ASSIGN_BIT_OR: // "|="
      case symbol_kind::S_ASSIGN_XOR: // "^="
      case symbol_kind::S_ASSIGN_SHL: // "<<="
      case symbol_kind::S_ASSIGN_SHR: // ">>="
      case symbol_kind::S_ASSIGN_PLUS_SAT: // "|+|="
      case symbol_kind::S_ASSIGN_MINUS_SAT: // "|-|="
      case symbol_kind::S_SEMICOLON: // ";"
      case symbol_kind::S_AT: // "@"
      case symbol_kind::S_PP: // "++"
      case symbol_kind::S_DONTCARE: // "_"
      case symbol_kind::S_MASK: // "&&&"
      case symbol_kind::S_DOTS: // "..."
      case symbol_kind::S_RANGE: // ".."
      case symbol_kind::S_TRUE: // TRUE
      case symbol_kind::S_FALSE: // FALSE
      case symbol_kind::S_THIS: // THIS
      case symbol_kind::S_ABSTRACT: // ABSTRACT
      case symbol_kind::S_ACTION: // ACTION
      case symbol_kind::S_ACTIONS: // ACTIONS
      case symbol_kind::S_APPLY: // APPLY
      case symbol_kind::S_BOOL: // BOOL
      case symbol_kind::S_BIT: // BIT
      case symbol_kind::S_BREAK: // BREAK
      case symbol_kind::S_CONST: // CONST
      case symbol_kind::S_CONTINUE: // CONTINUE
      case symbol_kind::S_CONTROL: // CONTROL
      case symbol_kind::S_DEFAULT: // DEFAULT
      case symbol_kind::S_ELSE: // ELSE
      case symbol_kind::S_ENTRIES: // ENTRIES
      case symbol_kind::S_ENUM: // ENUM
      case symbol_kind::S_ERROR: // ERROR
      case symbol_kind::S_EXIT: // EXIT
      case symbol_kind::S_EXTERN: // EXTERN
      case symbol_kind::S_FOR: // FOR
      case symbol_kind::S_HEADER: // HEADER
      case symbol_kind::S_HEADER_UNION: // HEADER_UNION
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_IN: // IN
      case symbol_kind::S_INOUT: // INOUT
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_KEY: // KEY
      case symbol_kind::S_LIST: // LIST
      case symbol_kind::S_SELECT: // SELECT
      case symbol_kind::S_MATCH_KIND: // MATCH_KIND
      case symbol_kind::S_TYPE: // TYPE
      case symbol_kind::S_OUT: // OUT
      case symbol_kind::S_PACKAGE: // PACKAGE
      case symbol_kind::S_PARSER: // PARSER
      case symbol_kind::S_PRAGMA: // PRAGMA
      case symbol_kind::S_PRIORITY: // PRIORITY
      case symbol_kind::S_RETURN: // RETURN
      case symbol_kind::S_STATE: // STATE
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_STRUCT: // STRUCT
      case symbol_kind::S_SWITCH: // SWITCH
      case symbol_kind::S_TABLE: // TABLE
      case symbol_kind::S_TRANSITION: // TRANSITION
      case symbol_kind::S_TUPLE: // TUPLE
      case symbol_kind::S_TYPEDEF: // TYPEDEF
      case symbol_kind::S_VARBIT: // VARBIT
      case symbol_kind::S_VALUESET: // VALUESET
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_annotationToken: // annotationToken
        yylhs.value.emplace< Token > ();
        break;

      case symbol_kind::S_INTEGER: // INTEGER
        yylhs.value.emplace< UnparsedConstant > ();
        break;

      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_TYPE_IDENTIFIER: // TYPE_IDENTIFIER
      case symbol_kind::S_STRING_LITERAL: // STRING_LITERAL
        yylhs.value.emplace< cstring > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2: // start: fragment END_ANNOTATION
#line 400 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                              { driver.nodes->push_back(yystack_[1].value.as < IR::Node* > ()->getNode()); YYACCEPT; }
#line 4129 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 4: // fragment: START_EXPRESSION_LIST expressionList
#line 406 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                        { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Vector<IR::Expression>* > (); }
#line 4135 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 5: // fragment: START_KV_LIST kvList
#line 407 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                        { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::IndexedVector<IR::NamedExpression>* > (); }
#line 4141 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 6: // fragment: START_INTEGER_LIST intList
#line 408 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                        { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Vector<IR::Expression>* > (); }
#line 4147 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 7: // fragment: START_INTEGER_OR_STRING_LITERAL_LIST intOrStrList
#line 409 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                        { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Vector<IR::Expression>* > (); }
#line 4153 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 8: // fragment: START_STRING_LITERAL_LIST strList
#line 410 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                        { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Vector<IR::Expression>* > (); }
#line 4159 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 9: // fragment: START_EXPRESSION expression
#line 413 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                        { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Expression* > (); }
#line 4165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 10: // fragment: START_INTEGER INTEGER
#line 414 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                        { yylhs.value.as < IR::Node* > () = parseConstant(yystack_[0].location, yystack_[0].value.as < UnparsedConstant > (), 0); }
#line 4171 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 11: // fragment: START_INTEGER_OR_STRING_LITERAL intOrStr
#line 415 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                        { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Expression* > (); }
#line 4177 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 12: // fragment: START_STRING_LITERAL STRING_LITERAL
#line 416 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                        { yylhs.value.as < IR::Node* > () = new IR::StringLiteral(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4183 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 13: // fragment: START_EXPRESSION_PAIR expression "," expression
#line 420 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { auto* result = new IR::Vector<IR::Expression>();
          result->push_back(yystack_[2].value.as < IR::Expression* > ());
          result->push_back(yystack_[0].value.as < IR::Expression* > ());
          result->srcInfo = yystack_[2].location + yystack_[0].location;
          yylhs.value.as < IR::Node* > () = result; }
#line 4193 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 14: // fragment: START_INTEGER_PAIR INTEGER "," INTEGER
#line 426 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { auto* result = new IR::Vector<IR::Expression>();
          result->push_back(parseConstant(yystack_[2].location, yystack_[2].value.as < UnparsedConstant > (), 0));
          result->push_back(parseConstant(yystack_[0].location, yystack_[0].value.as < UnparsedConstant > (), 0));
          result->srcInfo = yystack_[2].location + yystack_[0].location;
          yylhs.value.as < IR::Node* > () = result; }
#line 4203 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 15: // fragment: START_STRING_LITERAL_PAIR STRING_LITERAL "," STRING_LITERAL
#line 432 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { auto* result = new IR::Vector<IR::Expression>();
          result->push_back(new IR::StringLiteral(yystack_[2].location, yystack_[2].value.as < cstring > ()));
          result->push_back(new IR::StringLiteral(yystack_[0].location, yystack_[0].value.as < cstring > ()));
          result->srcInfo = yystack_[2].location + yystack_[0].location;
          yylhs.value.as < IR::Node* > () = result; }
#line 4213 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 16: // fragment: START_EXPRESSION_TRIPLE expression "," expression "," expression
#line 440 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { auto* result = new IR::Vector<IR::Expression>();
          result->push_back(yystack_[4].value.as < IR::Expression* > ());
          result->push_back(yystack_[2].value.as < IR::Expression* > ());
          result->push_back(yystack_[0].value.as < IR::Expression* > ());
          result->srcInfo = yystack_[4].location + yystack_[0].location;
          yylhs.value.as < IR::Node* > () = result; }
#line 4224 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 17: // fragment: START_INTEGER_TRIPLE INTEGER "," INTEGER "," INTEGER
#line 447 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { auto* result = new IR::Vector<IR::Expression>();
          result->push_back(parseConstant(yystack_[4].location, yystack_[4].value.as < UnparsedConstant > (), 0));
          result->push_back(parseConstant(yystack_[2].location, yystack_[2].value.as < UnparsedConstant > (), 0));
          result->push_back(parseConstant(yystack_[0].location, yystack_[0].value.as < UnparsedConstant > (), 0));
          result->srcInfo = yystack_[4].location + yystack_[0].location;
          yylhs.value.as < IR::Node* > () = result; }
#line 4235 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 18: // fragment: START_STRING_LITERAL_TRIPLE STRING_LITERAL "," STRING_LITERAL "," STRING_LITERAL
#line 455 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { auto* result = new IR::Vector<IR::Expression>();
          result->push_back(new IR::StringLiteral(yystack_[4].location, yystack_[4].value.as < cstring > ()));
          result->push_back(new IR::StringLiteral(yystack_[2].location, yystack_[2].value.as < cstring > ()));
          result->push_back(new IR::StringLiteral(yystack_[0].location, yystack_[0].value.as < cstring > ()));
          result->srcInfo = yystack_[4].location + yystack_[0].location;
          yylhs.value.as < IR::Node* > () = result; }
#line 4246 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 19: // fragment: START_P4RT_TRANSLATION_ANNOTATION STRING_LITERAL "," p4rtControllerType
#line 464 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { auto* result = new IR::Vector<IR::Expression>();
          result->push_back(new IR::StringLiteral(yystack_[2].location, yystack_[2].value.as < cstring > ()));
          result->push_back(yystack_[0].value.as < IR::Expression* > ());
          result->srcInfo = yystack_[2].location + yystack_[0].location;
          yylhs.value.as < IR::Node* > () = result; }
#line 4256 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 20: // p4rtControllerType: STRING
#line 477 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::StringLiteral(yystack_[0].location, ""_cs); }
#line 4262 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 21: // p4rtControllerType: BIT l_angle INTEGER r_angle
#line 479 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::Constant(parseConstantChecked(yystack_[1].location, yystack_[1].value.as < UnparsedConstant > ())); }
#line 4268 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 22: // p4rtControllerType: INTEGER
#line 482 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::Constant(parseConstantChecked(yystack_[0].location, yystack_[0].value.as < UnparsedConstant > ())); }
#line 4274 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 23: // program: input END
#line 485 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                    { YYACCEPT; }
#line 4280 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 25: // input: input declaration
#line 489 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                         { if (yystack_[0].value.as < IR::Node* > ()) driver.nodes->push_back(yystack_[0].value.as < IR::Node* > ()->getNode()); }
#line 4286 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 26: // input: input ";"
#line 490 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                         {}
#line 4292 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 27: // declaration: constantDeclaration
#line 494 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                              { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 4298 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 28: // declaration: externDeclaration
#line 495 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                              { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Node* > (); }
#line 4304 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 29: // declaration: actionDeclaration
#line 496 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                              { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 4310 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 30: // declaration: parserDeclaration
#line 497 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                              { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Type_Declaration* > (); }
#line 4316 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 31: // declaration: typeDeclaration
#line 498 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                              { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Type_Declaration* > (); }
#line 4322 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 32: // declaration: controlDeclaration
#line 499 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                              { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Type_Declaration* > (); }
#line 4328 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 33: // declaration: instantiation
#line 500 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                              { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 4334 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 34: // declaration: errorDeclaration
#line 501 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                              { driver.onReadErrorDeclaration(yystack_[0].value.as < IR::Type_Error* > ()); yylhs.value.as < IR::Node* > () = nullptr; }
#line 4340 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 35: // declaration: matchKindDeclaration
#line 502 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                              { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Node* > (); }
#line 4346 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 36: // declaration: functionDeclaration
#line 503 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                              { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 4352 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 37: // nonTypeName: IDENTIFIER
#line 507 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                  { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4358 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 38: // nonTypeName: APPLY
#line 508 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                  { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "apply"_cs); }
#line 4364 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 39: // nonTypeName: KEY
#line 509 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                  { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "key"_cs); }
#line 4370 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 40: // nonTypeName: ACTIONS
#line 510 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                  { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "actions"_cs); }
#line 4376 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 41: // nonTypeName: STATE
#line 511 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                  { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "state"_cs); }
#line 4382 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 42: // nonTypeName: ENTRIES
#line 512 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                  { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "entries"_cs); }
#line 4388 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 43: // nonTypeName: TYPE
#line 513 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                  { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "type"_cs); }
#line 4394 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 44: // nonTypeName: PRIORITY
#line 514 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                  { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "priority"_cs); }
#line 4400 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 45: // name: nonTypeName
#line 518 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                  { yylhs.value.as < IR::ID* > () = yystack_[0].value.as < IR::ID* > (); }
#line 4406 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 46: // name: LIST
#line 519 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
           { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "list"_cs); }
#line 4412 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 47: // name: TYPE_IDENTIFIER
#line 520 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4418 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 48: // nonTableKwName: IDENTIFIER
#line 524 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4424 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 49: // nonTableKwName: TYPE_IDENTIFIER
#line 525 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4430 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 50: // nonTableKwName: APPLY
#line 526 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "apply"_cs); }
#line 4436 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 51: // nonTableKwName: STATE
#line 527 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "state"_cs); }
#line 4442 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 52: // nonTableKwName: TYPE
#line 528 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "type"_cs); }
#line 4448 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 53: // nonTableKwName: PRIORITY
#line 529 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "priority"_cs); }
#line 4454 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 54: // optCONST: %empty
#line 533 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                  { yylhs.value.as < OptionalConst > () = OptionalConst{false}; }
#line 4460 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 55: // optCONST: CONST
#line 534 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                  { yylhs.value.as < OptionalConst > () = OptionalConst{true}; }
#line 4466 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 56: // optAnnotations: %empty
#line 538 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                  { yylhs.value.as < IR::Vector<IR::Annotation>* > () = new IR::Vector<IR::Annotation>(); }
#line 4472 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 57: // optAnnotations: annotations
#line 539 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                  { yylhs.value.as < IR::Vector<IR::Annotation>* > () = yystack_[0].value.as < IR::Vector<IR::Annotation>* > (); }
#line 4478 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 58: // annotations: annotation
#line 543 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                  {
       yylhs.value.as < IR::Vector<IR::Annotation>* > () = new IR::Vector<IR::Annotation>();
       if (! P4CContext::get().options().isAnnotationDisabled(yystack_[0].value.as < IR::Annotation* > ())) {
         yylhs.value.as < IR::Vector<IR::Annotation>* > ()->push_back(yystack_[0].value.as < IR::Annotation* > ());
         yylhs.value.as < IR::Vector<IR::Annotation>* > ()->srcInfo = yystack_[0].location;
       }}
#line 4489 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 59: // annotations: annotations annotation
#line 549 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                             {
       yylhs.value.as < IR::Vector<IR::Annotation>* > () = yystack_[1].value.as < IR::Vector<IR::Annotation>* > ();
       if (! P4CContext::get().options().isAnnotationDisabled(yystack_[0].value.as < IR::Annotation* > ())) {
          yylhs.value.as < IR::Vector<IR::Annotation>* > ()->push_back(yystack_[0].value.as < IR::Annotation* > ());
          yylhs.value.as < IR::Vector<IR::Annotation>* > ()->srcInfo = yystack_[1].location + yystack_[0].location;
       }}
#line 4500 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 60: // annotation: "@" annotationName
#line 559 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { // Initialize with an empty sequence of annotation tokens so that the
          // annotation node is marked as unparsed.
          IR::Vector<IR::AnnotationToken> body;
          yylhs.value.as < IR::Annotation* > () = new IR::Annotation(yystack_[1].location, *yystack_[0].value.as < IR::ID* > (), body); }
#line 4509 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 61: // annotation: "@" annotationName "(" annotationBody ")"
#line 564 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Annotation* > () = new IR::Annotation(yystack_[4].location, *yystack_[3].value.as < IR::ID* > (), *yystack_[1].value.as < IR::Vector<IR::AnnotationToken>* > ()); }
#line 4515 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 62: // annotation: "@" annotationName "[" expressionList optTrailingComma "]"
#line 566 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Annotation* > () = new IR::Annotation(yystack_[5].location, *yystack_[4].value.as < IR::ID* > (), *yystack_[2].value.as < IR::Vector<IR::Expression>* > (), true); }
#line 4521 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 63: // annotation: "@" annotationName "[" kvList optTrailingComma "]"
#line 568 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Annotation* > () = new IR::Annotation(yystack_[5].location, *yystack_[4].value.as < IR::ID* > (), *yystack_[2].value.as < IR::IndexedVector<IR::NamedExpression>* > (), true); }
#line 4527 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 64: // annotation: PRAGMA annotationName annotationBody END_PRAGMA
#line 572 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Annotation* > () = new IR::Annotation(yystack_[3].location, *yystack_[2].value.as < IR::ID* > (), *yystack_[1].value.as < IR::Vector<IR::AnnotationToken>* > (), false); }
#line 4533 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 65: // annotationBody: %empty
#line 576 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
              { yylhs.value.as < IR::Vector<IR::AnnotationToken>* > () = new IR::Vector<IR::AnnotationToken>; }
#line 4539 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 66: // annotationBody: annotationBody "(" annotationBody ")"
#line 578 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Vector<IR::AnnotationToken>* > () = yystack_[3].value.as < IR::Vector<IR::AnnotationToken>* > ();
          yylhs.value.as < IR::Vector<IR::AnnotationToken>* > ()->push_back(new IR::AnnotationToken(yystack_[2].location, yystack_[2].value.as < Token > ().type, yystack_[2].value.as < Token > ().text));
          yylhs.value.as < IR::Vector<IR::AnnotationToken>* > ()->append(*yystack_[1].value.as < IR::Vector<IR::AnnotationToken>* > ());
          yylhs.value.as < IR::Vector<IR::AnnotationToken>* > ()->push_back(new IR::AnnotationToken(yystack_[0].location, yystack_[0].value.as < Token > ().type, yystack_[0].value.as < Token > ().text));
          yylhs.value.as < IR::Vector<IR::AnnotationToken>* > ()->srcInfo = yystack_[3].location + yystack_[0].location;
        }
#line 4550 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 67: // annotationBody: annotationBody annotationToken
#line 585 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Vector<IR::AnnotationToken>* > () = yystack_[1].value.as < IR::Vector<IR::AnnotationToken>* > ();
          yylhs.value.as < IR::Vector<IR::AnnotationToken>* > ()->push_back(new IR::AnnotationToken(yystack_[0].location, yystack_[0].value.as < Token > ().type, yystack_[0].value.as < Token > ().text, yystack_[0].value.as < Token > ().unparsedConstant));
          yylhs.value.as < IR::Vector<IR::AnnotationToken>* > ()->srcInfo = yystack_[1].location + yystack_[0].location;
        }
#line 4559 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 68: // annotationName: ABSTRACT
#line 592 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "abstract"_cs); }
#line 4565 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 69: // annotationName: ACTION
#line 593 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "action"_cs); }
#line 4571 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 70: // annotationName: ACTIONS
#line 594 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "actions"_cs); }
#line 4577 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 71: // annotationName: APPLY
#line 595 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "apply"_cs); }
#line 4583 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 72: // annotationName: BOOL
#line 596 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "bool"_cs); }
#line 4589 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 73: // annotationName: BIT
#line 597 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "bit"_cs); }
#line 4595 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 74: // annotationName: BREAK
#line 598 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "break"_cs); }
#line 4601 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 75: // annotationName: CONST
#line 599 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "const"_cs); }
#line 4607 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 76: // annotationName: CONTINUE
#line 600 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "continue"_cs); }
#line 4613 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 77: // annotationName: CONTROL
#line 601 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "control"_cs); }
#line 4619 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 78: // annotationName: DEFAULT
#line 602 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "default"_cs); }
#line 4625 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 79: // annotationName: ELSE
#line 603 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "else"_cs); }
#line 4631 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 80: // annotationName: ENTRIES
#line 604 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "entries"_cs); }
#line 4637 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 81: // annotationName: ENUM
#line 605 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "enum"_cs); }
#line 4643 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 82: // annotationName: ERROR
#line 606 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "error"_cs); }
#line 4649 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 83: // annotationName: EXIT
#line 607 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "exit"_cs); }
#line 4655 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 84: // annotationName: EXTERN
#line 608 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "extern"_cs); }
#line 4661 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 85: // annotationName: FALSE
#line 609 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "false"_cs); }
#line 4667 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 86: // annotationName: FOR
#line 610 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "for"_cs); }
#line 4673 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 87: // annotationName: HEADER
#line 611 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "header"_cs); }
#line 4679 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 88: // annotationName: HEADER_UNION
#line 612 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "header_union"_cs); }
#line 4685 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 89: // annotationName: IF
#line 613 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "if"_cs); }
#line 4691 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 90: // annotationName: IN
#line 614 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "in"_cs); }
#line 4697 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 91: // annotationName: INOUT
#line 615 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "inout"_cs); }
#line 4703 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 92: // annotationName: INT
#line 616 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "int"_cs); }
#line 4709 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 93: // annotationName: KEY
#line 617 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "key"_cs); }
#line 4715 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 94: // annotationName: MATCH_KIND
#line 618 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "match_kind"_cs); }
#line 4721 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 95: // annotationName: TYPE
#line 619 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "type"_cs); }
#line 4727 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 96: // annotationName: OUT
#line 620 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "out"_cs); }
#line 4733 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 97: // annotationName: PARSER
#line 621 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "parser"_cs); }
#line 4739 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 98: // annotationName: PACKAGE
#line 622 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "package"_cs); }
#line 4745 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 99: // annotationName: PRIORITY
#line 623 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "priority"_cs); }
#line 4751 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 100: // annotationName: RETURN
#line 624 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "return"_cs); }
#line 4757 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 101: // annotationName: SELECT
#line 625 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "select"_cs); }
#line 4763 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 102: // annotationName: STATE
#line 626 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "state"_cs); }
#line 4769 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 103: // annotationName: STRING
#line 627 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "string"_cs); }
#line 4775 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 104: // annotationName: STRUCT
#line 628 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "struct"_cs); }
#line 4781 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 105: // annotationName: SWITCH
#line 629 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "switch"_cs); }
#line 4787 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 106: // annotationName: TABLE
#line 630 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "table"_cs); }
#line 4793 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 107: // annotationName: THIS
#line 631 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "this"_cs); }
#line 4799 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 108: // annotationName: TRANSITION
#line 632 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "transition"_cs); }
#line 4805 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 109: // annotationName: TRUE
#line 633 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "true"_cs); }
#line 4811 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 110: // annotationName: TUPLE
#line 634 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "tuple"_cs); }
#line 4817 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 111: // annotationName: TYPEDEF
#line 635 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "typedef"_cs); }
#line 4823 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 112: // annotationName: VARBIT
#line 636 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "varbit"_cs); }
#line 4829 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 113: // annotationName: VALUESET
#line 637 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "valueset"_cs); }
#line 4835 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 114: // annotationName: LIST
#line 638 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "list"_cs); }
#line 4841 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 115: // annotationName: VOID
#line 639 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "void"_cs); }
#line 4847 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 116: // annotationName: "_"
#line 640 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "_"_cs); }
#line 4853 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 117: // annotationName: IDENTIFIER
#line 641 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4859 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 118: // annotationName: TYPE_IDENTIFIER
#line 642 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4865 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 119: // annotationToken: UNEXPECTED_TOKEN
#line 646 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4871 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 120: // annotationToken: ABSTRACT
#line 647 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4877 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 121: // annotationToken: ACTION
#line 648 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4883 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 122: // annotationToken: ACTIONS
#line 649 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4889 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 123: // annotationToken: APPLY
#line 650 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4895 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 124: // annotationToken: BOOL
#line 651 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4901 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 125: // annotationToken: BIT
#line 652 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4907 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 126: // annotationToken: BREAK
#line 653 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4913 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 127: // annotationToken: CONST
#line 654 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4919 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 128: // annotationToken: CONTINUE
#line 655 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4925 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 129: // annotationToken: CONTROL
#line 656 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4931 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 130: // annotationToken: DEFAULT
#line 657 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4937 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 131: // annotationToken: ELSE
#line 658 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4943 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 132: // annotationToken: ENTRIES
#line 659 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4949 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 133: // annotationToken: ENUM
#line 660 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4955 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 134: // annotationToken: ERROR
#line 661 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4961 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 135: // annotationToken: EXIT
#line 662 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4967 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 136: // annotationToken: EXTERN
#line 663 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4973 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 137: // annotationToken: FALSE
#line 664 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4979 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 138: // annotationToken: FOR
#line 665 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4985 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 139: // annotationToken: HEADER
#line 666 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4991 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 140: // annotationToken: HEADER_UNION
#line 667 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4997 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 141: // annotationToken: IF
#line 668 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5003 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 142: // annotationToken: IN
#line 669 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5009 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 143: // annotationToken: INOUT
#line 670 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5015 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 144: // annotationToken: INT
#line 671 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5021 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 145: // annotationToken: KEY
#line 672 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5027 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 146: // annotationToken: MATCH_KIND
#line 673 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5033 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 147: // annotationToken: TYPE
#line 674 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5039 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 148: // annotationToken: OUT
#line 675 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5045 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 149: // annotationToken: PARSER
#line 676 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5051 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 150: // annotationToken: PACKAGE
#line 677 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5057 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 151: // annotationToken: PRAGMA
#line 678 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5063 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 152: // annotationToken: RETURN
#line 679 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5069 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 153: // annotationToken: SELECT
#line 680 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5075 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 154: // annotationToken: STATE
#line 681 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5081 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 155: // annotationToken: STRING
#line 682 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5087 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 156: // annotationToken: STRUCT
#line 683 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5093 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 157: // annotationToken: SWITCH
#line 684 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5099 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 158: // annotationToken: TABLE
#line 685 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5105 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 159: // annotationToken: THIS
#line 686 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5111 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 160: // annotationToken: TRANSITION
#line 687 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5117 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 161: // annotationToken: TRUE
#line 688 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5123 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 162: // annotationToken: TUPLE
#line 689 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5129 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 163: // annotationToken: TYPEDEF
#line 690 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5135 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 164: // annotationToken: VARBIT
#line 691 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5141 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 165: // annotationToken: VALUESET
#line 692 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5147 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 166: // annotationToken: LIST
#line 693 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5153 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 167: // annotationToken: VOID
#line 694 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5159 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 168: // annotationToken: "_"
#line 695 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 169: // annotationToken: IDENTIFIER
#line 697 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = Token(token::TOK_IDENTIFIER, yystack_[0].value.as < cstring > ()); }
#line 5171 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 170: // annotationToken: TYPE_IDENTIFIER
#line 698 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = Token(token::TOK_TYPE_IDENTIFIER, yystack_[0].value.as < cstring > ()); }
#line 5177 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 171: // annotationToken: STRING_LITERAL
#line 699 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = Token(token::TOK_STRING_LITERAL, yystack_[0].value.as < cstring > ()); }
#line 5183 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 172: // annotationToken: INTEGER
#line 700 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = Token(token::TOK_INTEGER, yystack_[0].value.as < UnparsedConstant > ()); }
#line 5189 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 173: // annotationToken: "&&&"
#line 702 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5195 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 174: // annotationToken: ".."
#line 703 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5201 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 175: // annotationToken: "<<"
#line 704 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5207 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 176: // annotationToken: "&&"
#line 705 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5213 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 177: // annotationToken: "||"
#line 706 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5219 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 178: // annotationToken: "=="
#line 707 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5225 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 179: // annotationToken: "!="
#line 708 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5231 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 180: // annotationToken: ">="
#line 709 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5237 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 181: // annotationToken: "<="
#line 710 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5243 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 182: // annotationToken: "++"
#line 711 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5249 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 183: // annotationToken: "+"
#line 713 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5255 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 184: // annotationToken: "|+|"
#line 714 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5261 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 185: // annotationToken: "-"
#line 715 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5267 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 186: // annotationToken: "|-|"
#line 716 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5273 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 187: // annotationToken: "*"
#line 717 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5279 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 188: // annotationToken: "/"
#line 718 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5285 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 189: // annotationToken: "%"
#line 719 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5291 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 190: // annotationToken: "|"
#line 721 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5297 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 191: // annotationToken: "&"
#line 722 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5303 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 192: // annotationToken: "^"
#line 723 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5309 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 193: // annotationToken: "~"
#line 724 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5315 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 194: // annotationToken: "["
#line 731 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5321 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 195: // annotationToken: "]"
#line 732 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5327 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 196: // annotationToken: "{"
#line 733 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5333 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 197: // annotationToken: "}"
#line 734 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5339 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 198: // annotationToken: "<"
#line 735 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5345 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 199: // annotationToken: L_ANGLE_ARGS
#line 736 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5351 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 200: // annotationToken: ">"
#line 737 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5357 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 201: // annotationToken: R_ANGLE_SHIFT
#line 738 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5363 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 202: // annotationToken: "!"
#line 740 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5369 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 203: // annotationToken: ":"
#line 741 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5375 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 204: // annotationToken: ","
#line 742 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5381 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 205: // annotationToken: "?"
#line 743 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5387 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 206: // annotationToken: "."
#line 744 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5393 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 207: // annotationToken: "="
#line 745 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5399 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 208: // annotationToken: ";"
#line 746 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5405 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 209: // annotationToken: "@"
#line 747 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 5411 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 210: // kvList: kvPair
#line 751 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                        { yylhs.value.as < IR::IndexedVector<IR::NamedExpression>* > () = new IR::IndexedVector<IR::NamedExpression>; yylhs.value.as < IR::IndexedVector<IR::NamedExpression>* > ()->push_back(yystack_[0].value.as < IR::NamedExpression* > ()); yylhs.value.as < IR::IndexedVector<IR::NamedExpression>* > ()->srcInfo = yystack_[0].location; }
#line 5417 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 211: // kvList: kvList "," kvPair
#line 752 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                        { yylhs.value.as < IR::IndexedVector<IR::NamedExpression>* > () = yystack_[2].value.as < IR::IndexedVector<IR::NamedExpression>* > (); yylhs.value.as < IR::IndexedVector<IR::NamedExpression>* > ()->push_back(yystack_[0].value.as < IR::NamedExpression* > ()); yylhs.value.as < IR::IndexedVector<IR::NamedExpression>* > ()->srcInfo = yystack_[2].location + yystack_[0].location;}
#line 5423 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 212: // kvPair: name "=" expression
#line 756 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                      { yylhs.value.as < IR::NamedExpression* > () = new IR::NamedExpression(yystack_[2].location, *yystack_[2].value.as < IR::ID* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 5429 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 213: // parameterList: %empty
#line 760 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                      { yylhs.value.as < IR::IndexedVector<IR::Parameter>* > () = new IR::IndexedVector<IR::Parameter>(); }
#line 5435 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 214: // parameterList: nonEmptyParameterList
#line 761 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                      { yylhs.value.as < IR::IndexedVector<IR::Parameter>* > () = yystack_[0].value.as < IR::IndexedVector<IR::Parameter>* > (); }
#line 5441 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 215: // nonEmptyParameterList: parameter
#line 765 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                          { yylhs.value.as < IR::IndexedVector<IR::Parameter>* > () = new IR::IndexedVector<IR::Parameter>();
                                            yylhs.value.as < IR::IndexedVector<IR::Parameter>* > ()->push_back(yystack_[0].value.as < IR::Parameter* > ()); yylhs.value.as < IR::IndexedVector<IR::Parameter>* > ()->srcInfo = yystack_[0].location; }
#line 5448 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 216: // nonEmptyParameterList: nonEmptyParameterList "," parameter
#line 767 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                          { yylhs.value.as < IR::IndexedVector<IR::Parameter>* > () = yystack_[2].value.as < IR::IndexedVector<IR::Parameter>* > (); yylhs.value.as < IR::IndexedVector<IR::Parameter>* > ()->push_back(yystack_[0].value.as < IR::Parameter* > ()); yylhs.value.as < IR::IndexedVector<IR::Parameter>* > ()->srcInfo = yystack_[2].location + yystack_[0].location; }
#line 5454 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 217: // parameter: optAnnotations direction typeRef declarator
#line 771 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                  {
            yylhs.value.as < IR::Parameter* > () = new IR::Parameter(yystack_[0].location, *yystack_[0].value.as < NameTypePair > ().name, *yystack_[3].value.as < IR::Vector<IR::Annotation>* > (), yystack_[2].value.as < IR::Direction > (), yystack_[0].value.as < NameTypePair > ().type, nullptr); }
#line 5461 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 218: // parameter: optAnnotations direction typeRef declarator "=" expression
#line 773 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                                 {
            yylhs.value.as < IR::Parameter* > () = new IR::Parameter(yystack_[2].location, *yystack_[2].value.as < NameTypePair > ().name, *yystack_[5].value.as < IR::Vector<IR::Annotation>* > (), yystack_[4].value.as < IR::Direction > (), yystack_[2].value.as < NameTypePair > ().type, yystack_[0].value.as < IR::Expression* > ()); }
#line 5468 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 219: // direction: IN
#line 778 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                   { yylhs.value.as < IR::Direction > () = IR::Direction::In; }
#line 5474 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 220: // direction: OUT
#line 779 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                   { yylhs.value.as < IR::Direction > () = IR::Direction::Out; }
#line 5480 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 221: // direction: INOUT
#line 780 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                   { yylhs.value.as < IR::Direction > () = IR::Direction::InOut; }
#line 5486 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 222: // direction: %empty
#line 781 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                   { yylhs.value.as < IR::Direction > () = IR::Direction::None; }
#line 5492 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 223: // $@1: %empty
#line 785 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                  { driver.structure->pushContainerType(*yystack_[0].value.as < IR::ID* > (), false); }
#line 5498 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 224: // $@2: %empty
#line 786 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                        {
          if (!yystack_[0].value.as < IR::TypeParameters* > ()->empty()) driver.structure->markAsTemplate(*yystack_[2].value.as < IR::ID* > ());
          driver.structure->declareTypes(&yystack_[0].value.as < IR::TypeParameters* > ()->parameters); }
#line 5506 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 225: // packageTypeDeclaration: optAnnotations PACKAGE name $@1 optTypeParameters $@2 "(" parameterList ")"
#line 789 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                   {
          driver.structure->declareParameters(yystack_[1].value.as < IR::IndexedVector<IR::Parameter>* > ());
          auto pl = new IR::ParameterList(yystack_[1].location, *yystack_[1].value.as < IR::IndexedVector<IR::Parameter>* > ());
          yylhs.value.as < IR::Type_Declaration* > () = new IR::Type_Package(yystack_[6].location, *yystack_[6].value.as < IR::ID* > (), *yystack_[8].value.as < IR::Vector<IR::Annotation>* > (), yystack_[4].value.as < IR::TypeParameters* > (), pl); }
#line 5515 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 226: // instantiation: annotations typeRef "(" argumentList ")" name ";"
#line 797 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                     { yylhs.value.as < IR::Declaration* > () = new IR::Declaration_Instance(yystack_[1].location, *yystack_[1].value.as < IR::ID* > (), *yystack_[6].value.as < IR::Vector<IR::Annotation>* > (),
                                                         yystack_[5].value.as < ConstType* > (), yystack_[3].value.as < IR::Vector<IR::Argument>* > ());
                       driver.structure->declareObject(*yystack_[1].value.as < IR::ID* > (), yystack_[5].value.as < ConstType* > ()->toString()); }
#line 5523 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 227: // instantiation: typeRef "(" argumentList ")" name ";"
#line 801 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                     { yylhs.value.as < IR::Declaration* > () = new IR::Declaration_Instance(yystack_[1].location, *yystack_[1].value.as < IR::ID* > (), yystack_[5].value.as < ConstType* > (), yystack_[3].value.as < IR::Vector<IR::Argument>* > ());
                       driver.structure->declareObject(*yystack_[1].value.as < IR::ID* > (), yystack_[5].value.as < ConstType* > ()->toString()); }
#line 5530 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 228: // instantiation: annotations typeRef "(" argumentList ")" name "=" objInitializer ";"
#line 804 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                     { yylhs.value.as < IR::Declaration* > () = new IR::Declaration_Instance(yystack_[3].location, *yystack_[3].value.as < IR::ID* > (), *yystack_[8].value.as < IR::Vector<IR::Annotation>* > (),
                                                         yystack_[7].value.as < ConstType* > (), yystack_[5].value.as < IR::Vector<IR::Argument>* > (), yystack_[1].value.as < IR::BlockStatement* > ());
                       driver.structure->declareObject(*yystack_[3].value.as < IR::ID* > (), yystack_[7].value.as < ConstType* > ()->toString()); }
#line 5538 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 229: // instantiation: typeRef "(" argumentList ")" name "=" objInitializer ";"
#line 808 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                     { yylhs.value.as < IR::Declaration* > () = new IR::Declaration_Instance(yystack_[3].location, *yystack_[3].value.as < IR::ID* > (), yystack_[7].value.as < ConstType* > (), yystack_[5].value.as < IR::Vector<IR::Argument>* > (), yystack_[1].value.as < IR::BlockStatement* > ());
                       driver.structure->declareObject(*yystack_[3].value.as < IR::ID* > (), yystack_[7].value.as < ConstType* > ()->toString()); }
#line 5545 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 230: // $@3: %empty
#line 813 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
          { driver.structure->pushNamespace(yystack_[0].location, false); }
#line 5551 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 231: // objInitializer: "{" $@3 objDeclarations "}"
#line 814 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                               { driver.structure->pop();
                                 yylhs.value.as < IR::BlockStatement* > () = new IR::BlockStatement(yystack_[3].location+yystack_[0].location, *yystack_[1].value.as < IR::IndexedVector<IR::StatOrDecl>* > ()); }
#line 5558 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 232: // objDeclarations: %empty
#line 819 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                     { yylhs.value.as < IR::IndexedVector<IR::StatOrDecl>* > () = new IR::IndexedVector<IR::StatOrDecl>(); }
#line 5564 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 233: // objDeclarations: objDeclarations objDeclaration
#line 820 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                     { yylhs.value.as < IR::IndexedVector<IR::StatOrDecl>* > () = yystack_[1].value.as < IR::IndexedVector<IR::StatOrDecl>* > (); yystack_[1].value.as < IR::IndexedVector<IR::StatOrDecl>* > ()->push_back(yystack_[0].value.as < IR::Declaration* > ()); yylhs.value.as < IR::IndexedVector<IR::StatOrDecl>* > ()->srcInfo = yystack_[1].location + yystack_[0].location;}
#line 5570 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 234: // objDeclaration: functionDeclaration
#line 824 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                               { yylhs.value.as < IR::Declaration* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 5576 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 235: // objDeclaration: instantiation
#line 825 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                               { yylhs.value.as < IR::Declaration* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 5582 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 236: // optConstructorParameters: %empty
#line 829 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                             { yylhs.value.as < IR::IndexedVector<IR::Parameter>* > () = new IR::IndexedVector<IR::Parameter>(); }
#line 5588 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 237: // optConstructorParameters: "(" parameterList ")"
#line 830 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                             { yylhs.value.as < IR::IndexedVector<IR::Parameter>* > () = yystack_[1].value.as < IR::IndexedVector<IR::Parameter>* > (); }
#line 5594 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 238: // dotPrefix: "."
#line 834 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                               { driver.structure->startAbsolutePath(); }
#line 5600 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 239: // parserDeclaration: parserTypeDeclaration optConstructorParameters "{" parserLocalElements parserStates "}"
#line 842 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                             { driver.structure->pop();
                               auto pl = new IR::ParameterList(yystack_[4].location, *yystack_[4].value.as < IR::IndexedVector<IR::Parameter>* > ());
                               yylhs.value.as < IR::Type_Declaration* > () = new IR::P4Parser(yystack_[5].value.as < IR::Type_Parser* > ()->name.srcInfo, yystack_[5].value.as < IR::Type_Parser* > ()->name,
                                                     yystack_[5].value.as < IR::Type_Parser* > (), pl, *yystack_[2].value.as < IR::IndexedVector<IR::Declaration>* > (), *yystack_[1].value.as < IR::IndexedVector<IR::ParserState>* > ());}
#line 5609 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 240: // parserLocalElements: %empty
#line 849 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                             { yylhs.value.as < IR::IndexedVector<IR::Declaration>* > () = new IR::IndexedVector<IR::Declaration>(); }
#line 5615 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 241: // parserLocalElements: parserLocalElements parserLocalElement
#line 850 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                             { yylhs.value.as < IR::IndexedVector<IR::Declaration>* > () = yystack_[1].value.as < IR::IndexedVector<IR::Declaration>* > (); yylhs.value.as < IR::IndexedVector<IR::Declaration>* > ()->push_back(yystack_[0].value.as < IR::Declaration* > ()); yylhs.value.as < IR::IndexedVector<IR::Declaration>* > ()->srcInfo = yystack_[1].location + yystack_[0].location; }
#line 5621 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 242: // parserLocalElement: constantDeclaration
#line 854 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                      { yylhs.value.as < IR::Declaration* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 5627 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 243: // parserLocalElement: instantiation
#line 855 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                      { yylhs.value.as < IR::Declaration* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 5633 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 244: // parserLocalElement: variableDeclaration
#line 856 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                      { yylhs.value.as < IR::Declaration* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 5639 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 245: // parserLocalElement: valueSetDeclaration
#line 857 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                      { yylhs.value.as < IR::Declaration* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 5645 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 246: // $@4: %empty
#line 862 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                          { driver.structure->pushContainerType(*yystack_[0].value.as < IR::ID* > (), true); }
#line 5651 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 247: // $@5: %empty
#line 863 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                          { if (!yystack_[0].value.as < IR::TypeParameters* > ()->empty()) driver.structure->markAsTemplate(*yystack_[2].value.as < IR::ID* > ());
                            driver.structure->declareTypes(&yystack_[0].value.as < IR::TypeParameters* > ()->parameters); }
#line 5658 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 248: // parserTypeDeclaration: optAnnotations PARSER name $@4 optTypeParameters $@5 "(" parameterList ")"
#line 865 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                              { driver.structure->declareParameters(yystack_[1].value.as < IR::IndexedVector<IR::Parameter>* > ());
                                auto pl = new IR::ParameterList(yystack_[1].location, *yystack_[1].value.as < IR::IndexedVector<IR::Parameter>* > ());
                                yylhs.value.as < IR::Type_Parser* > () = new IR::Type_Parser(yystack_[6].location, *yystack_[6].value.as < IR::ID* > (), *yystack_[8].value.as < IR::Vector<IR::Annotation>* > (), yystack_[4].value.as < IR::TypeParameters* > (), pl); }
#line 5666 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 249: // parserStates: parserState
#line 871 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                      { yylhs.value.as < IR::IndexedVector<IR::ParserState>* > () = new IR::IndexedVector<IR::ParserState>();
                                        yylhs.value.as < IR::IndexedVector<IR::ParserState>* > ()->push_back(yystack_[0].value.as < IR::ParserState* > ()); yylhs.value.as < IR::IndexedVector<IR::ParserState>* > ()->srcInfo = yystack_[0].location; }
#line 5673 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 250: // parserStates: parserStates parserState
#line 873 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                      { yylhs.value.as < IR::IndexedVector<IR::ParserState>* > () = yystack_[1].value.as < IR::IndexedVector<IR::ParserState>* > (); yylhs.value.as < IR::IndexedVector<IR::ParserState>* > ()->push_back(yystack_[0].value.as < IR::ParserState* > ()); yylhs.value.as < IR::IndexedVector<IR::ParserState>* > ()->srcInfo = yystack_[1].location + yystack_[0].location; }
#line 5679 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 251: // $@6: %empty
#line 877 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                { driver.structure->pushContainerType(*yystack_[0].value.as < IR::ID* > (), false); }
#line 5685 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 252: // parserState: optAnnotations STATE name $@6 "{" parserStatements transitionStatement "}"
#line 879 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                      { driver.structure->pop();
                                        yylhs.value.as < IR::ParserState* > () = new IR::ParserState(yystack_[5].location, *yystack_[5].value.as < IR::ID* > (), *yystack_[7].value.as < IR::Vector<IR::Annotation>* > (), *yystack_[2].value.as < IR::IndexedVector<IR::StatOrDecl>* > (), yystack_[1].value.as < IR::Expression* > ()); }
#line 5692 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 253: // parserStatements: %empty
#line 884 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < IR::IndexedVector<IR::StatOrDecl>* > () = new IR::IndexedVector<IR::StatOrDecl>(); }
#line 5698 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 254: // parserStatements: parserStatements parserStatement
#line 885 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < IR::IndexedVector<IR::StatOrDecl>* > () = yystack_[1].value.as < IR::IndexedVector<IR::StatOrDecl>* > (); yystack_[1].value.as < IR::IndexedVector<IR::StatOrDecl>* > ()->push_back(yystack_[0].value.as < IR::StatOrDecl* > ()); yylhs.value.as < IR::IndexedVector<IR::StatOrDecl>* > ()->srcInfo = yystack_[1].location + yystack_[0].location; }
#line 5704 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 255: // parserStatement: assignmentOrMethodCallStatement
#line 889 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                      { yylhs.value.as < IR::StatOrDecl* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 5710 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 256: // parserStatement: directApplication
#line 890 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                      { yylhs.value.as < IR::StatOrDecl* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 5716 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 257: // parserStatement: emptyStatement
#line 891 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                      { yylhs.value.as < IR::StatOrDecl* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 5722 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 258: // parserStatement: variableDeclaration
#line 892 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                      { yylhs.value.as < IR::StatOrDecl* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 5728 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 259: // parserStatement: constantDeclaration
#line 893 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                      { yylhs.value.as < IR::StatOrDecl* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 5734 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 260: // parserStatement: parserBlockStatement
#line 894 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                      { yylhs.value.as < IR::StatOrDecl* > () = yystack_[0].value.as < IR::BlockStatement* > (); }
#line 5740 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 261: // parserStatement: conditionalStatement
#line 895 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                      { yylhs.value.as < IR::StatOrDecl* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 5746 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 262: // $@7: %empty
#line 899 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                         { driver.structure->pushNamespace(yystack_[0].location, false); }
#line 5752 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 263: // parserBlockStatement: optAnnotations "{" $@7 parserStatements "}"
#line 900 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                           { driver.structure->pop(); yylhs.value.as < IR::BlockStatement* > () = new IR::BlockStatement(yystack_[4].location+yystack_[0].location, *yystack_[4].value.as < IR::Vector<IR::Annotation>* > (), *yystack_[1].value.as < IR::IndexedVector<IR::StatOrDecl>* > ()); }
#line 5758 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 264: // transitionStatement: %empty
#line 904 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                  { yylhs.value.as < IR::Expression* > () = nullptr; }
#line 5764 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 265: // transitionStatement: TRANSITION stateExpression
#line 905 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                  { yylhs.value.as < IR::Expression* > () = yystack_[0].value.as < IR::Expression* > (); }
#line 5770 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 266: // stateExpression: name ";"
#line 909 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::Expression* > () = new IR::PathExpression(*yystack_[1].value.as < IR::ID* > ()); }
#line 5776 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 267: // stateExpression: selectExpression
#line 910 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                       { yylhs.value.as < IR::Expression* > () = yystack_[0].value.as < IR::Expression* > (); }
#line 5782 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 268: // selectExpression: SELECT "(" expressionList ")" "{" selectCaseList "}"
#line 915 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                              { yylhs.value.as < IR::Expression* > () = new IR::SelectExpression(yystack_[6].location + yystack_[0].location,
                                     new IR::ListExpression(yystack_[4].location, *yystack_[4].value.as < IR::Vector<IR::Expression>* > ()), std::move(*yystack_[1].value.as < IR::Vector<IR::SelectCase>* > ())); }
#line 5789 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 269: // selectCaseList: %empty
#line 920 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                 { yylhs.value.as < IR::Vector<IR::SelectCase>* > () = new IR::Vector<IR::SelectCase>(); }
#line 5795 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 270: // selectCaseList: selectCaseList selectCase
#line 921 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                 { yylhs.value.as < IR::Vector<IR::SelectCase>* > () = yystack_[1].value.as < IR::Vector<IR::SelectCase>* > (); yylhs.value.as < IR::Vector<IR::SelectCase>* > ()->push_back(yystack_[0].value.as < IR::SelectCase* > ()); yylhs.value.as < IR::Vector<IR::SelectCase>* > ()->srcInfo = yystack_[1].location + yystack_[0].location;}
#line 5801 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 271: // selectCase: keysetExpression ":" name ";"
#line 926 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
      { auto expr = new IR::PathExpression(*yystack_[1].value.as < IR::ID* > ());
        yylhs.value.as < IR::SelectCase* > () = new IR::SelectCase(yystack_[3].location + yystack_[1].location, yystack_[3].value.as < IR::Expression* > (), expr); }
#line 5808 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 272: // keysetExpression: tupleKeysetExpression
#line 931 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                { yylhs.value.as < IR::Expression* > () = new IR::ListExpression(yystack_[0].location, *yystack_[0].value.as < IR::Vector<IR::Expression>* > ()); }
#line 5814 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 273: // keysetExpression: simpleKeysetExpression
#line 932 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                { yylhs.value.as < IR::Expression* > () = yystack_[0].value.as < IR::Expression* > (); }
#line 5820 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 274: // tupleKeysetExpression: "(" simpleKeysetExpression "," simpleExpressionList ")"
#line 937 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                            { yylhs.value.as < IR::Vector<IR::Expression>* > () = yystack_[1].value.as < IR::Vector<IR::Expression>* > (); yystack_[1].value.as < IR::Vector<IR::Expression>* > ()->insert(yystack_[1].value.as < IR::Vector<IR::Expression>* > ()->begin(), yystack_[3].value.as < IR::Expression* > ()); yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo = yystack_[3].location + yystack_[1].location; }
#line 5826 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 275: // tupleKeysetExpression: "(" reducedSimpleKeysetExpression ")"
#line 938 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                            { yylhs.value.as < IR::Vector<IR::Expression>* > () = new IR::Vector<IR::Expression>(); yylhs.value.as < IR::Vector<IR::Expression>* > ()->push_back(yystack_[1].value.as < IR::Expression* > ()); yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo = yystack_[1].location; }
#line 5832 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 278: // simpleExpressionList: simpleKeysetExpression
#line 947 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                             { yylhs.value.as < IR::Vector<IR::Expression>* > () = new IR::Vector<IR::Expression>(); yylhs.value.as < IR::Vector<IR::Expression>* > ()->push_back(yystack_[0].value.as < IR::Expression* > ()); yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo = yystack_[0].location; }
#line 5838 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 279: // simpleExpressionList: simpleExpressionList "," simpleKeysetExpression
#line 948 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                      { yylhs.value.as < IR::Vector<IR::Expression>* > () = yystack_[2].value.as < IR::Vector<IR::Expression>* > (); yylhs.value.as < IR::Vector<IR::Expression>* > ()->push_back(yystack_[0].value.as < IR::Expression* > ()); yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo = yystack_[2].location + yystack_[0].location; }
#line 5844 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 280: // reducedSimpleKeysetExpression: expression "&&&" expression
#line 953 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                  { yylhs.value.as < IR::Expression* > () = new IR::Mask(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 5850 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 281: // reducedSimpleKeysetExpression: expression ".." expression
#line 954 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                  { yylhs.value.as < IR::Expression* > () = new IR::Range(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 5856 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 282: // reducedSimpleKeysetExpression: DEFAULT
#line 955 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                  { yylhs.value.as < IR::Expression* > () = new IR::DefaultExpression(yystack_[0].location); }
#line 5862 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 283: // reducedSimpleKeysetExpression: "_"
#line 956 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                  { yylhs.value.as < IR::Expression* > () = new IR::DefaultExpression(yystack_[0].location); }
#line 5868 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 284: // simpleKeysetExpression: expression
#line 960 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                  { yylhs.value.as < IR::Expression* > () = yystack_[0].value.as < IR::Expression* > (); }
#line 5874 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 285: // simpleKeysetExpression: expression "&&&" expression
#line 961 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                  { yylhs.value.as < IR::Expression* > () = new IR::Mask(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 5880 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 286: // simpleKeysetExpression: expression ".." expression
#line 962 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                  { yylhs.value.as < IR::Expression* > () = new IR::Range(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 5886 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 287: // simpleKeysetExpression: DEFAULT
#line 963 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                  { yylhs.value.as < IR::Expression* > () = new IR::DefaultExpression(yystack_[0].location); }
#line 5892 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 288: // simpleKeysetExpression: "_"
#line 964 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                  { yylhs.value.as < IR::Expression* > () = new IR::DefaultExpression(yystack_[0].location); }
#line 5898 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 289: // valueSetDeclaration: optAnnotations VALUESET l_angle baseType r_angle "(" expression ")" name ";"
#line 970 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Declaration* > () = new IR::P4ValueSet(yystack_[1].location, *yystack_[1].value.as < IR::ID* > (), *yystack_[9].value.as < IR::Vector<IR::Annotation>* > (), yystack_[6].value.as < ConstType* > (), yystack_[3].value.as < IR::Expression* > ()); }
#line 5904 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 290: // valueSetDeclaration: optAnnotations VALUESET l_angle tupleType r_angle "(" expression ")" name ";"
#line 973 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Declaration* > () = new IR::P4ValueSet(yystack_[1].location, *yystack_[1].value.as < IR::ID* > (), *yystack_[9].value.as < IR::Vector<IR::Annotation>* > (), yystack_[6].value.as < ConstType* > (), yystack_[3].value.as < IR::Expression* > ()); }
#line 5910 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 291: // valueSetDeclaration: optAnnotations VALUESET l_angle typeName r_angle "(" expression ")" name ";"
#line 976 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Declaration* > () = new IR::P4ValueSet(yystack_[1].location, *yystack_[1].value.as < IR::ID* > (), *yystack_[9].value.as < IR::Vector<IR::Annotation>* > (), yystack_[6].value.as < IR::Type_Name* > (), yystack_[3].value.as < IR::Expression* > ()); }
#line 5916 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 292: // controlDeclaration: controlTypeDeclaration optConstructorParameters "{" controlLocalDeclarations APPLY controlBody "}"
#line 984 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { driver.structure->pop();
          auto pl = new IR::ParameterList(yystack_[5].location, *yystack_[5].value.as < IR::IndexedVector<IR::Parameter>* > ());
          yylhs.value.as < IR::Type_Declaration* > () = new IR::P4Control(yystack_[6].value.as < IR::Type_Control* > ()->name.srcInfo, yystack_[6].value.as < IR::Type_Control* > ()->name, yystack_[6].value.as < IR::Type_Control* > (), pl, *yystack_[3].value.as < IR::IndexedVector<IR::Declaration>* > (), yystack_[1].value.as < IR::BlockStatement* > ()); }
#line 5924 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 293: // $@8: %empty
#line 991 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                     { driver.structure->pushContainerType(*yystack_[0].value.as < IR::ID* > (), true); }
#line 5930 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 294: // $@9: %empty
#line 992 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                          { if (!yystack_[0].value.as < IR::TypeParameters* > ()->empty()) driver.structure->markAsTemplate(*yystack_[2].value.as < IR::ID* > ());
                            driver.structure->declareTypes(&yystack_[0].value.as < IR::TypeParameters* > ()->parameters); }
#line 5937 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 295: // controlTypeDeclaration: optAnnotations CONTROL name $@8 optTypeParameters $@9 "(" parameterList ")"
#line 994 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                              { driver.structure->declareParameters(yystack_[1].value.as < IR::IndexedVector<IR::Parameter>* > ());
                                auto pl = new IR::ParameterList(yystack_[1].location, *yystack_[1].value.as < IR::IndexedVector<IR::Parameter>* > ());
                                yylhs.value.as < IR::Type_Control* > () = new IR::Type_Control(yystack_[6].location, *yystack_[6].value.as < IR::ID* > (), *yystack_[8].value.as < IR::Vector<IR::Annotation>* > (), yystack_[4].value.as < IR::TypeParameters* > (), pl); }
#line 5945 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 296: // controlLocalDeclarations: %empty
#line 1000 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
             { yylhs.value.as < IR::IndexedVector<IR::Declaration>* > () = new IR::IndexedVector<IR::Declaration>(); }
#line 5951 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 297: // controlLocalDeclarations: controlLocalDeclarations controlLocalDeclaration
#line 1001 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                       { yylhs.value.as < IR::IndexedVector<IR::Declaration>* > () = yystack_[1].value.as < IR::IndexedVector<IR::Declaration>* > (); yylhs.value.as < IR::IndexedVector<IR::Declaration>* > ()->push_back(yystack_[0].value.as < IR::Declaration* > ()); yylhs.value.as < IR::IndexedVector<IR::Declaration>* > ()->srcInfo = yystack_[1].location + yystack_[0].location; }
#line 5957 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 298: // controlLocalDeclaration: constantDeclaration
#line 1005 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                               { yylhs.value.as < IR::Declaration* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 5963 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 299: // controlLocalDeclaration: actionDeclaration
#line 1006 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                               { yylhs.value.as < IR::Declaration* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 5969 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 300: // controlLocalDeclaration: tableDeclaration
#line 1007 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                               { yylhs.value.as < IR::Declaration* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 5975 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 301: // controlLocalDeclaration: instantiation
#line 1008 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                               { yylhs.value.as < IR::Declaration* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 5981 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 302: // controlLocalDeclaration: variableDeclaration
#line 1009 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                               { yylhs.value.as < IR::Declaration* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 5987 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 303: // controlBody: blockStatement
#line 1013 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                     { yylhs.value.as < IR::BlockStatement* > () = yystack_[0].value.as < IR::BlockStatement* > (); }
#line 5993 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 304: // $@10: %empty
#line 1020 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                           { driver.structure->pushContainerType(*yystack_[0].value.as < IR::ID* > (), true); }
#line 5999 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 305: // $@11: %empty
#line 1021 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                          { if (!yystack_[0].value.as < IR::TypeParameters* > ()->empty()) driver.structure->markAsTemplate(*yystack_[2].value.as < IR::ID* > ());
                            driver.structure->declareTypes(&yystack_[0].value.as < IR::TypeParameters* > ()->parameters); }
#line 6006 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 306: // externDeclaration: optAnnotations EXTERN nonTypeName $@10 optTypeParameters $@11 "{" methodPrototypes "}"
#line 1023 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                 { driver.structure->pop();
                                   yylhs.value.as < IR::Node* > () = new IR::Type_Extern(yystack_[6].location, *yystack_[6].value.as < IR::ID* > (), yystack_[4].value.as < IR::TypeParameters* > (), *yystack_[1].value.as < IR::Vector<IR::Method>* > (), *yystack_[8].value.as < IR::Vector<IR::Annotation>* > ()); }
#line 6013 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 307: // externDeclaration: optAnnotations EXTERN functionPrototype ";"
#line 1025 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                  {
            driver.structure->pop();
            yylhs.value.as < IR::Node* > () = yystack_[1].value.as < IR::Method* > ();
            yystack_[1].value.as < IR::Method* > ()->annotations = *yystack_[3].value.as < IR::Vector<IR::Annotation>* > (); }
#line 6022 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 308: // externDeclaration: optAnnotations EXTERN name ";"
#line 1029 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                     {
            // forward declaration;
            driver.structure->pushContainerType(*yystack_[1].value.as < IR::ID* > (), true);
            driver.structure->pop();
            yylhs.value.as < IR::Node* > () = nullptr; }
#line 6032 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 309: // methodPrototypes: %empty
#line 1037 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < IR::Vector<IR::Method>* > () = new IR::Vector<IR::Method>(); }
#line 6038 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 310: // methodPrototypes: methodPrototypes methodPrototype
#line 1038 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < IR::Vector<IR::Method>* > () = yystack_[1].value.as < IR::Vector<IR::Method>* > (); yystack_[1].value.as < IR::Vector<IR::Method>* > ()->push_back(yystack_[0].value.as < IR::Method* > ()); yylhs.value.as < IR::Vector<IR::Method>* > ()->srcInfo = yystack_[1].location + yystack_[0].location; }
#line 6044 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 311: // $@12: %empty
#line 1043 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                               {
            driver.structure->declareObject(*yystack_[1].value.as < IR::ID* > (), yystack_[2].value.as < ConstType* > ()->toString());
            if (!yystack_[0].value.as < IR::TypeParameters* > ()->empty()) driver.structure->markAsTemplate(*yystack_[1].value.as < IR::ID* > ());
            driver.structure->pushNamespace(yystack_[1].location, false);
            driver.structure->declareTypes(&yystack_[0].value.as < IR::TypeParameters* > ()->parameters); }
#line 6054 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 312: // functionPrototype: typeOrVoid name optTypeParameters $@12 "(" parameterList ")"
#line 1048 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                              { driver.structure->declareParameters(yystack_[1].value.as < IR::IndexedVector<IR::Parameter>* > ());
                                auto params = new IR::ParameterList(yystack_[1].location, *yystack_[1].value.as < IR::IndexedVector<IR::Parameter>* > ());
                                auto mt = new IR::Type_Method(yystack_[5].location, yystack_[4].value.as < IR::TypeParameters* > (), yystack_[6].value.as < ConstType* > (), params, *yystack_[5].value.as < IR::ID* > ());
                                yylhs.value.as < IR::Method* > () = new IR::Method(yystack_[5].location, *yystack_[5].value.as < IR::ID* > (), mt); }
#line 6063 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 313: // methodPrototype: optAnnotations functionPrototype ";"
#line 1055 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                           {
            driver.structure->pop();
            yylhs.value.as < IR::Method* > () = yystack_[1].value.as < IR::Method* > (); yystack_[1].value.as < IR::Method* > ()->annotations = *yystack_[2].value.as < IR::Vector<IR::Annotation>* > (); }
#line 6071 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 314: // methodPrototype: optAnnotations ABSTRACT functionPrototype ";"
#line 1058 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                    {
            driver.structure->pop();
            yylhs.value.as < IR::Method* > () = yystack_[1].value.as < IR::Method* > (); yylhs.value.as < IR::Method* > ()->setAbstract();
            yystack_[1].value.as < IR::Method* > ()->annotations = *yystack_[3].value.as < IR::Vector<IR::Annotation>* > (); }
#line 6080 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 315: // methodPrototype: optAnnotations TYPE_IDENTIFIER "(" parameterList ")" ";"
#line 1063 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                        { auto par = new IR::ParameterList(yystack_[2].location, *yystack_[2].value.as < IR::IndexedVector<IR::Parameter>* > ());
                                          auto mt = new IR::Type_Method(yystack_[4].location, par, yystack_[4].value.as < cstring > ());
                                          yylhs.value.as < IR::Method* > () = new IR::Method(yystack_[4].location, IR::ID(yystack_[4].location, yystack_[4].value.as < cstring > ()), mt, *yystack_[5].value.as < IR::Vector<IR::Annotation>* > ()); }
#line 6088 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 316: // typeRef: baseType
#line 1071 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < ConstType* > () = yystack_[0].value.as < ConstType* > (); }
#line 6094 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 317: // typeRef: typeName
#line 1072 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < ConstType* > () = yystack_[0].value.as < IR::Type_Name* > (); }
#line 6100 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 318: // typeRef: specializedType
#line 1073 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < ConstType* > () = yystack_[0].value.as < ConstType* > (); }
#line 6106 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 319: // typeRef: headerStackType
#line 1074 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < ConstType* > () = yystack_[0].value.as < ConstType* > (); }
#line 6112 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 320: // typeRef: p4listType
#line 1075 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < ConstType* > () = yystack_[0].value.as < ConstType* > (); }
#line 6118 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 321: // typeRef: tupleType
#line 1076 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < ConstType* > () = yystack_[0].value.as < ConstType* > (); }
#line 6124 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 322: // namedType: typeName
#line 1080 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < ConstType* > () = yystack_[0].value.as < IR::Type_Name* > (); }
#line 6130 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 323: // namedType: specializedType
#line 1081 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < ConstType* > () = yystack_[0].value.as < ConstType* > (); }
#line 6136 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 324: // prefixedType: TYPE_IDENTIFIER
#line 1085 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < IR::Path* > () = new IR::Path(IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ())); }
#line 6142 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 325: // prefixedType: dotPrefix TYPE_IDENTIFIER
#line 1086 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < IR::Path* > () = new IR::Path(IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()), true);
                                         driver.structure->clearPath(); }
#line 6149 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 326: // typeName: prefixedType
#line 1091 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < IR::Type_Name* > () = new IR::Type_Name(yystack_[0].location, yystack_[0].value.as < IR::Path* > ()); }
#line 6155 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 327: // p4listType: LIST l_angle typeArg r_angle
#line 1095 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                     { yylhs.value.as < ConstType* > () = new IR::Type_P4List(yystack_[3].location+yystack_[0].location, yystack_[1].value.as < ConstType* > ()); }
#line 6161 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 328: // tupleType: TUPLE l_angle typeArgumentList r_angle
#line 1099 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                { yylhs.value.as < ConstType* > () = new IR::Type_Tuple(yystack_[3].location+yystack_[0].location, *yystack_[1].value.as < IR::Vector<IR::Type>* > ()); }
#line 6167 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 329: // headerStackType: typeRef "[" expression "]"
#line 1103 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < ConstType* > () = new IR::Type_Array(yystack_[3].location+yystack_[0].location, yystack_[3].value.as < ConstType* > (), yystack_[1].value.as < IR::Expression* > ()); }
#line 6173 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 330: // specializedType: typeName l_angle typeArgumentList r_angle
#line 1107 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                { yylhs.value.as < ConstType* > () = new IR::Type_Specialized(yystack_[3].location + yystack_[0].location, yystack_[3].value.as < IR::Type_Name* > (), yystack_[1].value.as < IR::Vector<IR::Type>* > ()); }
#line 6179 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 331: // baseType: BOOL
#line 1111 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
             { yylhs.value.as < ConstType* > () = IR::Type_Boolean::get(yystack_[0].location); }
#line 6185 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 332: // baseType: MATCH_KIND
#line 1112 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                 { yylhs.value.as < ConstType* > () = IR::Type_MatchKind::get(yystack_[0].location); }
#line 6191 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 333: // baseType: ERROR
#line 1113 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
             { yylhs.value.as < ConstType* > () = new IR::Type_Name(yystack_[0].location, new IR::Path(IR::ID(yystack_[0].location, "error"_cs))); }
#line 6197 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 334: // baseType: BIT
#line 1114 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
             { yylhs.value.as < ConstType* > () = IR::Type::Bits::get(yystack_[0].location, 1); }
#line 6203 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 335: // baseType: STRING
#line 1115 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
             { yylhs.value.as < ConstType* > () = IR::Type::String::get(yystack_[0].location); }
#line 6209 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 336: // baseType: INT
#line 1116 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
             { yylhs.value.as < ConstType* > () = IR::Type_InfInt::get(yystack_[0].location); }
#line 6215 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 337: // baseType: BIT l_angle INTEGER r_angle
#line 1118 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
      { yylhs.value.as < ConstType* > () = IR::Type::Bits::get(yystack_[3].location+yystack_[0].location, parseConstantChecked(yystack_[1].location, yystack_[1].value.as < UnparsedConstant > ()), false); }
#line 6221 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 338: // baseType: INT l_angle INTEGER r_angle
#line 1120 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
      { yylhs.value.as < ConstType* > () = IR::Type::Bits::get(yystack_[3].location+yystack_[0].location, parseConstantChecked(yystack_[1].location, yystack_[1].value.as < UnparsedConstant > ()), true); }
#line 6227 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 339: // baseType: VARBIT l_angle INTEGER r_angle
#line 1122 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
      { yylhs.value.as < ConstType* > () = IR::Type::Varbits::get(yystack_[3].location+yystack_[0].location, parseConstantChecked(yystack_[1].location, yystack_[1].value.as < UnparsedConstant > ())); }
#line 6233 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 340: // baseType: BIT l_angle "(" expression ")" r_angle
#line 1125 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
      { yylhs.value.as < ConstType* > () = IR::Type_Bits::get(yystack_[5].location+yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), false); }
#line 6239 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 341: // baseType: INT l_angle "(" expression ")" r_angle
#line 1127 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
      { yylhs.value.as < ConstType* > () = IR::Type_Bits::get(yystack_[5].location+yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), true); }
#line 6245 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 342: // baseType: VARBIT l_angle "(" expression ")" r_angle
#line 1129 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
      { yylhs.value.as < ConstType* > () = IR::Type_Varbits::get(yystack_[5].location+yystack_[0].location, yystack_[2].value.as < IR::Expression* > ()); }
#line 6251 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 343: // typeOrVoid: typeRef
#line 1133 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                  { yylhs.value.as < ConstType* > () = yystack_[0].value.as < ConstType* > (); }
#line 6257 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 344: // typeOrVoid: VOID
#line 1134 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                  { yylhs.value.as < ConstType* > () = IR::Type_Void::get(yystack_[0].location); }
#line 6263 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 345: // typeOrVoid: IDENTIFIER
#line 1135 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                  { yylhs.value.as < ConstType* > () = new IR::Type_Name(yystack_[0].location, new IR::Path(IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()))); }
#line 6269 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 346: // optTypeParameters: %empty
#line 1140 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                { yylhs.value.as < IR::TypeParameters* > () = new IR::TypeParameters(); }
#line 6275 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 347: // optTypeParameters: typeParameters
#line 1141 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                { yylhs.value.as < IR::TypeParameters* > () = yystack_[0].value.as < IR::TypeParameters* > (); }
#line 6281 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 348: // typeParameters: l_angle typeParameterList r_angle
#line 1145 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                        { yylhs.value.as < IR::TypeParameters* > () = new IR::TypeParameters(yystack_[2].location+yystack_[0].location, *yystack_[1].value.as < IR::IndexedVector<IR::Type_Var>* > ()); }
#line 6287 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 349: // typeParameterList: name
#line 1149 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                     { yylhs.value.as < IR::IndexedVector<IR::Type_Var>* > () = new IR::IndexedVector<IR::Type_Var>();
                                       yylhs.value.as < IR::IndexedVector<IR::Type_Var>* > ()->push_back(new IR::Type_Var(yystack_[0].location, *yystack_[0].value.as < IR::ID* > ())); yylhs.value.as < IR::IndexedVector<IR::Type_Var>* > ()->srcInfo = yystack_[0].location; }
#line 6294 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 350: // typeParameterList: typeParameterList "," name
#line 1151 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                     { (yylhs.value.as < IR::IndexedVector<IR::Type_Var>* > ()=yystack_[2].value.as < IR::IndexedVector<IR::Type_Var>* > ())->push_back(new IR::Type_Var(yystack_[0].location, *yystack_[0].value.as < IR::ID* > ())); yylhs.value.as < IR::IndexedVector<IR::Type_Var>* > ()->srcInfo = yystack_[2].location + yystack_[0].location; }
#line 6300 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 351: // typeArg: typeRef
#line 1155 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                  { yylhs.value.as < ConstType* > () = yystack_[0].value.as < ConstType* > (); }
#line 6306 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 352: // typeArg: nonTypeName
#line 1156 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                  { yylhs.value.as < ConstType* > () = new IR::Type_Name(yystack_[0].location, new IR::Path(*yystack_[0].value.as < IR::ID* > ())); }
#line 6312 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 353: // typeArg: VOID
#line 1158 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                  { yylhs.value.as < ConstType* > () = IR::Type_Void::get(yystack_[0].location); }
#line 6318 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 354: // typeArg: "_"
#line 1159 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                  { yylhs.value.as < ConstType* > () = IR::Type_Dontcare::get(yystack_[0].location); }
#line 6324 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 355: // typeArgumentList: %empty
#line 1163 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                     { yylhs.value.as < IR::Vector<IR::Type>* > () = new IR::Vector<IR::Type>(); }
#line 6330 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 356: // typeArgumentList: typeArg
#line 1164 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                     { yylhs.value.as < IR::Vector<IR::Type>* > () = new IR::Vector<IR::Type>(); yylhs.value.as < IR::Vector<IR::Type>* > ()->push_back(yystack_[0].value.as < ConstType* > ()); yylhs.value.as < IR::Vector<IR::Type>* > ()->srcInfo = yystack_[0].location; }
#line 6336 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 357: // typeArgumentList: typeArgumentList "," typeArg
#line 1165 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                     { yylhs.value.as < IR::Vector<IR::Type>* > () = yystack_[2].value.as < IR::Vector<IR::Type>* > (); yylhs.value.as < IR::Vector<IR::Type>* > ()->push_back(yystack_[0].value.as < ConstType* > ()); yylhs.value.as < IR::Vector<IR::Type>* > ()->srcInfo = yystack_[2].location + yystack_[0].location; }
#line 6342 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 358: // realTypeArg: typeRef
#line 1169 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                  { yylhs.value.as < ConstType* > () = yystack_[0].value.as < ConstType* > (); }
#line 6348 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 359: // realTypeArg: VOID
#line 1170 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                  { yylhs.value.as < ConstType* > () = IR::Type_Void::get(yystack_[0].location); }
#line 6354 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 360: // realTypeArg: "_"
#line 1171 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                  { yylhs.value.as < ConstType* > () = IR::Type_Dontcare::get(yystack_[0].location); }
#line 6360 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 361: // realTypeArgumentList: realTypeArg
#line 1177 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Vector<IR::Type>* > () = new IR::Vector<IR::Type>(); yylhs.value.as < IR::Vector<IR::Type>* > ()->push_back(yystack_[0].value.as < ConstType* > ()); yylhs.value.as < IR::Vector<IR::Type>* > ()->srcInfo = yystack_[0].location; }
#line 6366 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 362: // realTypeArgumentList: realTypeArgumentList "," typeArg
#line 1178 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Vector<IR::Type>* > () = yystack_[2].value.as < IR::Vector<IR::Type>* > (); yylhs.value.as < IR::Vector<IR::Type>* > ()->push_back(yystack_[0].value.as < ConstType* > ()); yylhs.value.as < IR::Vector<IR::Type>* > ()->srcInfo = yystack_[2].location + yystack_[0].location; }
#line 6372 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 363: // typeDeclaration: derivedTypeDeclaration
#line 1182 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                 { yylhs.value.as < IR::Type_Declaration* > () = yystack_[0].value.as < IR::Type_Declaration* > (); }
#line 6378 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 364: // typeDeclaration: typedefDeclaration ";"
#line 1183 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                 { yylhs.value.as < IR::Type_Declaration* > () = yystack_[1].value.as < IR::Type_Declaration* > (); }
#line 6384 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 365: // typeDeclaration: parserTypeDeclaration ";"
#line 1184 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                 { driver.structure->pop(); yylhs.value.as < IR::Type_Declaration* > () = yystack_[1].value.as < IR::Type_Parser* > (); }
#line 6390 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 366: // typeDeclaration: controlTypeDeclaration ";"
#line 1185 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                 { driver.structure->pop(); yylhs.value.as < IR::Type_Declaration* > () = yystack_[1].value.as < IR::Type_Control* > (); }
#line 6396 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 367: // typeDeclaration: packageTypeDeclaration ";"
#line 1186 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                 { driver.structure->pop(); yylhs.value.as < IR::Type_Declaration* > () = yystack_[1].value.as < IR::Type_Declaration* > (); }
#line 6402 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 368: // derivedTypeDeclaration: headerTypeDeclaration
#line 1190 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < IR::Type_Declaration* > () = yystack_[0].value.as < IR::Type_Declaration* > (); }
#line 6408 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 369: // derivedTypeDeclaration: headerUnionDeclaration
#line 1191 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < IR::Type_Declaration* > () = yystack_[0].value.as < IR::Type_Declaration* > (); }
#line 6414 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 370: // derivedTypeDeclaration: structTypeDeclaration
#line 1192 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < IR::Type_Declaration* > () = yystack_[0].value.as < IR::Type_Declaration* > (); }
#line 6420 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 371: // derivedTypeDeclaration: enumDeclaration
#line 1193 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < IR::Type_Declaration* > () = yystack_[0].value.as < IR::Type_Declaration* > (); }
#line 6426 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 372: // derivedTypeDeclarationAsType: derivedTypeDeclaration
#line 1199 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < ConstType* > () = static_cast<const IR::Type *>(yystack_[0].value.as < IR::Type_Declaration* > ()); }
#line 6432 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 373: // $@13: %empty
#line 1203 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                 { driver.structure->pushContainerType(*yystack_[0].value.as < IR::ID* > (), true); }
#line 6438 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 374: // $@14: %empty
#line 1203 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                                                                       {
        driver.structure->markAsTemplate(*yystack_[2].value.as < IR::ID* > ());
        driver.structure->declareTypes(&yystack_[0].value.as < IR::TypeParameters* > ()->parameters); }
#line 6446 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 375: // headerTypeDeclaration: optAnnotations HEADER name $@13 optTypeParameters $@14 "{" structFieldList "}"
#line 1206 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                              { yylhs.value.as < IR::Type_Declaration* > () = new IR::Type_Header(yystack_[6].location, *yystack_[6].value.as < IR::ID* > (), *yystack_[8].value.as < IR::Vector<IR::Annotation>* > (), yystack_[4].value.as < IR::TypeParameters* > (), *yystack_[1].value.as < IR::IndexedVector<IR::StructField>* > ());
                                driver.structure->pop(); }
#line 6453 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 376: // $@15: %empty
#line 1211 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                  { driver.structure->pushContainerType(*yystack_[0].value.as < IR::ID* > (), true); }
#line 6459 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 377: // $@16: %empty
#line 1211 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                                                                        {
        driver.structure->markAsTemplate(*yystack_[2].value.as < IR::ID* > ());
        driver.structure->declareTypes(&yystack_[0].value.as < IR::TypeParameters* > ()->parameters); }
#line 6467 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 378: // structTypeDeclaration: optAnnotations STRUCT name $@15 optTypeParameters $@16 "{" structFieldList "}"
#line 1214 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                              { yylhs.value.as < IR::Type_Declaration* > () = new IR::Type_Struct(yystack_[6].location, *yystack_[6].value.as < IR::ID* > (), *yystack_[8].value.as < IR::Vector<IR::Annotation>* > (), yystack_[4].value.as < IR::TypeParameters* > (), *yystack_[1].value.as < IR::IndexedVector<IR::StructField>* > ());
                                driver.structure->pop(); }
#line 6474 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 379: // $@17: %empty
#line 1219 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { driver.structure->pushContainerType(*yystack_[0].value.as < IR::ID* > (), true); }
#line 6480 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 380: // $@18: %empty
#line 1219 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                                                                             {
        driver.structure->markAsTemplate(*yystack_[2].value.as < IR::ID* > ());
        driver.structure->declareTypes(&yystack_[0].value.as < IR::TypeParameters* > ()->parameters); }
#line 6488 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 381: // headerUnionDeclaration: optAnnotations HEADER_UNION name $@17 optTypeParameters $@18 "{" structFieldList "}"
#line 1222 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                              { yylhs.value.as < IR::Type_Declaration* > () = new IR::Type_HeaderUnion(yystack_[6].location, *yystack_[6].value.as < IR::ID* > (), *yystack_[8].value.as < IR::Vector<IR::Annotation>* > (), yystack_[4].value.as < IR::TypeParameters* > (), *yystack_[1].value.as < IR::IndexedVector<IR::StructField>* > ());
                                driver.structure->pop(); }
#line 6495 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 382: // structFieldList: %empty
#line 1227 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < IR::IndexedVector<IR::StructField>* > () = new IR::IndexedVector<IR::StructField>(); }
#line 6501 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 383: // structFieldList: structFieldList structField
#line 1228 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < IR::IndexedVector<IR::StructField>* > () = yystack_[1].value.as < IR::IndexedVector<IR::StructField>* > (); yystack_[1].value.as < IR::IndexedVector<IR::StructField>* > ()->push_back(yystack_[0].value.as < IR::StructField* > ()); yylhs.value.as < IR::IndexedVector<IR::StructField>* > ()->srcInfo = yystack_[1].location + yystack_[0].location; }
#line 6507 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 384: // structField: optAnnotations typeRef declarator ";"
#line 1232 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                             { yylhs.value.as < IR::StructField* > () = new IR::StructField(yystack_[1].location, *yystack_[1].value.as < NameTypePair > ().name, *yystack_[3].value.as < IR::Vector<IR::Annotation>* > (), yystack_[1].value.as < NameTypePair > ().type); }
#line 6513 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 385: // $@19: %empty
#line 1237 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                  { driver.structure->declareType(*yystack_[0].value.as < IR::ID* > ()); }
#line 6519 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 386: // enumDeclaration: optAnnotations ENUM name $@19 "{" identifierList optTrailingComma "}"
#line 1238 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                { yylhs.value.as < IR::Type_Declaration* > () = new IR::Type_Enum(yystack_[5].location, *yystack_[5].value.as < IR::ID* > (), *yystack_[7].value.as < IR::Vector<IR::Annotation>* > (), *yystack_[2].value.as < IR::IndexedVector<IR::Declaration_ID>* > ()); }
#line 6525 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 387: // $@20: %empty
#line 1239 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { driver.structure->declareType(*yystack_[0].value.as < IR::ID* > ()); }
#line 6531 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 388: // enumDeclaration: optAnnotations ENUM typeRef name $@20 "{" specifiedIdentifierList optTrailingComma "}"
#line 1240 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                          {
              auto type = yystack_[6].value.as < ConstType* > ();
              yylhs.value.as < IR::Type_Declaration* > () = new IR::Type_SerEnum(yystack_[5].location, *yystack_[5].value.as < IR::ID* > (), *yystack_[8].value.as < IR::Vector<IR::Annotation>* > (), type, *yystack_[2].value.as < IR::IndexedVector<IR::SerEnumMember>* > ());
          }
#line 6540 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 389: // specifiedIdentifierList: specifiedIdentifier
#line 1247 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                           { yylhs.value.as < IR::IndexedVector<IR::SerEnumMember>* > () = new IR::IndexedVector<IR::SerEnumMember>();
                                             yylhs.value.as < IR::IndexedVector<IR::SerEnumMember>* > ()->push_back(yystack_[0].value.as < IR::SerEnumMember* > ()); yylhs.value.as < IR::IndexedVector<IR::SerEnumMember>* > ()->srcInfo = yystack_[0].location; }
#line 6547 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 390: // specifiedIdentifierList: specifiedIdentifierList "," specifiedIdentifier
#line 1249 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                      { yylhs.value.as < IR::IndexedVector<IR::SerEnumMember>* > () = yystack_[2].value.as < IR::IndexedVector<IR::SerEnumMember>* > (); yystack_[2].value.as < IR::IndexedVector<IR::SerEnumMember>* > ()->push_back(yystack_[0].value.as < IR::SerEnumMember* > ()); yylhs.value.as < IR::IndexedVector<IR::SerEnumMember>* > ()->srcInfo = yystack_[2].location + yystack_[0].location; }
#line 6553 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 391: // specifiedIdentifier: name "=" initializer
#line 1253 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                              { yylhs.value.as < IR::SerEnumMember* > () = new IR::SerEnumMember(yystack_[2].location+yystack_[0].location, *yystack_[2].value.as < IR::ID* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6559 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 392: // errorDeclaration: ERROR "{" identifierList "}"
#line 1258 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Type_Error* > () = new IR::Type_Error(yystack_[3].location + yystack_[0].location, IR::ID(yystack_[3].location, "error"_cs), *yystack_[1].value.as < IR::IndexedVector<IR::Declaration_ID>* > ()); }
#line 6565 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 393: // matchKindDeclaration: MATCH_KIND "{" identifierList optTrailingComma "}"
#line 1263 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Node* > () = new IR::Declaration_MatchKind(yystack_[4].location + yystack_[1].location, *yystack_[2].value.as < IR::IndexedVector<IR::Declaration_ID>* > ()); }
#line 6571 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 394: // identifierList: name
#line 1267 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                              { yylhs.value.as < IR::IndexedVector<IR::Declaration_ID>* > () = new IR::IndexedVector<IR::Declaration_ID>();
                                yylhs.value.as < IR::IndexedVector<IR::Declaration_ID>* > ()->push_back(new IR::Declaration_ID(yystack_[0].location, *yystack_[0].value.as < IR::ID* > ())); yylhs.value.as < IR::IndexedVector<IR::Declaration_ID>* > ()->srcInfo = yystack_[0].location; }
#line 6578 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 395: // identifierList: identifierList "," name
#line 1269 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                              { yylhs.value.as < IR::IndexedVector<IR::Declaration_ID>* > () = yystack_[2].value.as < IR::IndexedVector<IR::Declaration_ID>* > (); yylhs.value.as < IR::IndexedVector<IR::Declaration_ID>* > ()->push_back(new IR::Declaration_ID(yystack_[0].location, *yystack_[0].value.as < IR::ID* > ()));
                                yylhs.value.as < IR::IndexedVector<IR::Declaration_ID>* > ()->srcInfo = yystack_[2].location + yystack_[0].location; }
#line 6585 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 396: // typedefDeclaration: optAnnotations TYPEDEF typeRef declarator
#line 1274 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                {
            driver.structure->declareType(*yystack_[0].value.as < NameTypePair > ().name);
            yylhs.value.as < IR::Type_Declaration* > () = new IR::Type_Typedef(yystack_[0].location, *yystack_[0].value.as < NameTypePair > ().name, *yystack_[3].value.as < IR::Vector<IR::Annotation>* > (), yystack_[0].value.as < NameTypePair > ().type); }
#line 6593 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 397: // typedefDeclaration: optAnnotations TYPEDEF derivedTypeDeclarationAsType declarator
#line 1277 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                                     {
            driver.structure->declareType(*yystack_[0].value.as < NameTypePair > ().name);
            yylhs.value.as < IR::Type_Declaration* > () = new IR::Type_Typedef(yystack_[0].location, *yystack_[0].value.as < NameTypePair > ().name, *yystack_[3].value.as < IR::Vector<IR::Annotation>* > (), yystack_[0].value.as < NameTypePair > ().type); }
#line 6601 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 398: // typedefDeclaration: optAnnotations TYPE typeRef declarator
#line 1280 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                             {
            driver.structure->declareType(*yystack_[0].value.as < NameTypePair > ().name);
            yylhs.value.as < IR::Type_Declaration* > () = new IR::Type_Newtype(yystack_[0].location, *yystack_[0].value.as < NameTypePair > ().name, *yystack_[3].value.as < IR::Vector<IR::Annotation>* > (), yystack_[0].value.as < NameTypePair > ().type); }
#line 6609 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 399: // assignmentOrMethodCallStatement: assignmentOrMethodCallStatementWithoutSemicolon ";"
#line 1288 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                           { yylhs.value.as < IR::Statement* > () = yystack_[1].value.as < IR::Statement* > (); }
#line 6615 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 400: // assignmentOrMethodCallStatementWithoutSemicolon: lvalue "(" argumentList ")"
#line 1294 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { auto mc = new IR::MethodCallExpression(yystack_[3].location + yystack_[0].location, yystack_[3].value.as < IR::Expression* > (),
                                                 new IR::Vector<IR::Type>(), yystack_[1].value.as < IR::Vector<IR::Argument>* > ());
          yylhs.value.as < IR::Statement* > () = new IR::MethodCallStatement(yystack_[3].location + yystack_[0].location, mc); }
#line 6623 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 401: // assignmentOrMethodCallStatementWithoutSemicolon: lvalue l_angle typeArgumentList r_angle "(" argumentList ")"
#line 1299 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { auto mc = new IR::MethodCallExpression(yystack_[6].location + yystack_[0].location,
                                                 yystack_[6].value.as < IR::Expression* > (), yystack_[4].value.as < IR::Vector<IR::Type>* > (), yystack_[1].value.as < IR::Vector<IR::Argument>* > ());
          yylhs.value.as < IR::Statement* > () = new IR::MethodCallStatement(yystack_[6].location + yystack_[0].location, mc); }
#line 6631 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 402: // assignmentOrMethodCallStatementWithoutSemicolon: lvalue "=" expression
#line 1304 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Statement* > () = new IR::AssignmentStatement(yystack_[1].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6637 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 403: // assignmentOrMethodCallStatementWithoutSemicolon: lvalue "*=" expression
#line 1307 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Statement* > () = new IR::MulAssign(yystack_[1].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6643 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 404: // assignmentOrMethodCallStatementWithoutSemicolon: lvalue "/=" expression
#line 1309 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Statement* > () = new IR::DivAssign(yystack_[1].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6649 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 405: // assignmentOrMethodCallStatementWithoutSemicolon: lvalue "%=" expression
#line 1311 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Statement* > () = new IR::ModAssign(yystack_[1].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6655 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 406: // assignmentOrMethodCallStatementWithoutSemicolon: lvalue "+=" expression
#line 1313 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Statement* > () = new IR::AddAssign(yystack_[1].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6661 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 407: // assignmentOrMethodCallStatementWithoutSemicolon: lvalue "-=" expression
#line 1315 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Statement* > () = new IR::SubAssign(yystack_[1].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6667 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 408: // assignmentOrMethodCallStatementWithoutSemicolon: lvalue "|+|=" expression
#line 1317 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Statement* > () = new IR::AddSatAssign(yystack_[1].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6673 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 409: // assignmentOrMethodCallStatementWithoutSemicolon: lvalue "|-|=" expression
#line 1319 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Statement* > () = new IR::SubSatAssign(yystack_[1].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6679 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 410: // assignmentOrMethodCallStatementWithoutSemicolon: lvalue "<<=" expression
#line 1321 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Statement* > () = new IR::ShlAssign(yystack_[1].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6685 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 411: // assignmentOrMethodCallStatementWithoutSemicolon: lvalue ">>=" expression
#line 1323 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Statement* > () = new IR::ShrAssign(yystack_[1].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6691 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 412: // assignmentOrMethodCallStatementWithoutSemicolon: lvalue R_ANGLE_SHIFT ">=" expression
#line 1325 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Statement* > () = new IR::ShrAssign(yystack_[2].location+yystack_[1].location, yystack_[3].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6697 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 413: // assignmentOrMethodCallStatementWithoutSemicolon: lvalue "&=" expression
#line 1327 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Statement* > () = new IR::BAndAssign(yystack_[1].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6703 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 414: // assignmentOrMethodCallStatementWithoutSemicolon: lvalue "|=" expression
#line 1329 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Statement* > () = new IR::BOrAssign(yystack_[1].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6709 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 415: // assignmentOrMethodCallStatementWithoutSemicolon: lvalue "^=" expression
#line 1331 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Statement* > () = new IR::BXorAssign(yystack_[1].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6715 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 416: // emptyStatement: ";"
#line 1335 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
               { yylhs.value.as < IR::Statement* > () = new IR::EmptyStatement(yystack_[0].location); }
#line 6721 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 417: // exitStatement: EXIT ";"
#line 1339 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
               { yylhs.value.as < IR::Statement* > () = new IR::ExitStatement(yystack_[1].location); }
#line 6727 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 418: // returnStatement: RETURN ";"
#line 1343 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                            { yylhs.value.as < IR::Statement* > () = new IR::ReturnStatement(yystack_[1].location, nullptr); }
#line 6733 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 419: // returnStatement: RETURN expression ";"
#line 1344 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                            { yylhs.value.as < IR::Statement* > () = new IR::ReturnStatement(yystack_[2].location, yystack_[1].value.as < IR::Expression* > ()); }
#line 6739 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 420: // conditionalStatement: IF "(" expression ")" statement
#line 1349 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Statement* > () = new IR::IfStatement(yystack_[4].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Statement* > (), nullptr); }
#line 6745 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 421: // conditionalStatement: IF "(" expression ")" statement ELSE statement
#line 1351 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Statement* > () = new IR::IfStatement(yystack_[6].location, yystack_[4].value.as < IR::Expression* > (), yystack_[2].value.as < IR::Statement* > (), yystack_[0].value.as < IR::Statement* > ()); }
#line 6751 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 422: // breakStatement: BREAK ";"
#line 1355 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                { yylhs.value.as < IR::Statement* > () = new IR::BreakStatement(yystack_[1].location); }
#line 6757 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 423: // continueStatement: CONTINUE ";"
#line 1359 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                   { yylhs.value.as < IR::Statement* > () = new IR::ContinueStatement(yystack_[1].location); }
#line 6763 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 424: // directApplication: typeName "." APPLY "(" argumentList ")" ";"
#line 1364 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                  {
                                  auto method = new IR::Member(
                                      yystack_[6].location + yystack_[4].location, new IR::TypeNameExpression(yystack_[6].value.as < IR::Type_Name* > ()), IR::ID(yystack_[4].location, "apply"_cs));
                                  auto mce = new IR::MethodCallExpression(yystack_[6].location + yystack_[1].location, method, yystack_[2].value.as < IR::Vector<IR::Argument>* > ());
                                  yylhs.value.as < IR::Statement* > () = new IR::MethodCallStatement(yystack_[6].location + yystack_[1].location, mce); }
#line 6773 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 425: // directApplication: specializedType "." APPLY "(" argumentList ")" ";"
#line 1369 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                         {
                                  auto method = new IR::Member(
                                      yystack_[6].location + yystack_[4].location, new IR::TypeNameExpression(yystack_[6].value.as < ConstType* > ()), IR::ID(yystack_[4].location, "apply"_cs));
                                  auto mce = new IR::MethodCallExpression(yystack_[6].location + yystack_[1].location, method, yystack_[2].value.as < IR::Vector<IR::Argument>* > ());
                                  yylhs.value.as < IR::Statement* > () = new IR::MethodCallStatement(yystack_[6].location + yystack_[1].location, mce); }
#line 6783 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 426: // statement: assignmentOrMethodCallStatement
#line 1377 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < IR::Statement* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 6789 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 427: // statement: directApplication
#line 1378 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < IR::Statement* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 6795 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 428: // statement: conditionalStatement
#line 1379 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < IR::Statement* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 6801 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 429: // statement: emptyStatement
#line 1380 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < IR::Statement* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 6807 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 430: // statement: blockStatement
#line 1381 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < IR::Statement* > () = yystack_[0].value.as < IR::BlockStatement* > (); }
#line 6813 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 431: // statement: returnStatement
#line 1382 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < IR::Statement* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 6819 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 432: // statement: breakStatement
#line 1383 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < IR::Statement* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 6825 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 433: // statement: continueStatement
#line 1384 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < IR::Statement* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 6831 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 434: // statement: exitStatement
#line 1385 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < IR::Statement* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 6837 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 435: // statement: switchStatement
#line 1386 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < IR::Statement* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 6843 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 436: // statement: forStatement
#line 1387 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < IR::Statement* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 6849 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 437: // $@21: %empty
#line 1391 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                         { driver.structure->pushNamespace(yystack_[0].location, false); }
#line 6855 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 438: // blockStatement: optAnnotations "{" $@21 statOrDeclList "}"
#line 1392 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                         { driver.structure->pop();
                           yylhs.value.as < IR::BlockStatement* > () = new IR::BlockStatement(yystack_[4].location + yystack_[0].location, *yystack_[4].value.as < IR::Vector<IR::Annotation>* > (), *yystack_[1].value.as < IR::IndexedVector<IR::StatOrDecl>* > ()); }
#line 6862 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 439: // statOrDeclList: %empty
#line 1397 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                            { yylhs.value.as < IR::IndexedVector<IR::StatOrDecl>* > () = new IR::IndexedVector<IR::StatOrDecl>(); }
#line 6868 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 440: // statOrDeclList: statOrDeclList statementOrDeclaration
#line 1398 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                            { yylhs.value.as < IR::IndexedVector<IR::StatOrDecl>* > () = yystack_[1].value.as < IR::IndexedVector<IR::StatOrDecl>* > (); yylhs.value.as < IR::IndexedVector<IR::StatOrDecl>* > ()->push_back(yystack_[0].value.as < IR::StatOrDecl* > ()); yylhs.value.as < IR::IndexedVector<IR::StatOrDecl>* > ()->srcInfo = yystack_[1].location + yystack_[0].location; }
#line 6874 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 441: // switchStatement: SWITCH "(" expression ")" "{" switchCases "}"
#line 1402 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                    {
            yylhs.value.as < IR::Statement* > () = new IR::SwitchStatement(yystack_[6].location, yystack_[4].value.as < IR::Expression* > (), std::move(*yystack_[1].value.as < IR::Vector<IR::SwitchCase>* > ())); }
#line 6881 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 442: // switchCases: %empty
#line 1407 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                               { yylhs.value.as < IR::Vector<IR::SwitchCase>* > () = new IR::Vector<IR::SwitchCase>(); }
#line 6887 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 443: // switchCases: switchCases switchCase
#line 1408 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                               { yylhs.value.as < IR::Vector<IR::SwitchCase>* > () = yystack_[1].value.as < IR::Vector<IR::SwitchCase>* > (); yylhs.value.as < IR::Vector<IR::SwitchCase>* > ()->push_back(yystack_[0].value.as < IR::SwitchCase* > ()); yylhs.value.as < IR::Vector<IR::SwitchCase>* > ()->srcInfo = yystack_[1].location + yystack_[0].location; }
#line 6893 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 444: // switchCase: switchLabel ":" blockStatement
#line 1412 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                     { yylhs.value.as < IR::SwitchCase* > () = new IR::SwitchCase(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::BlockStatement* > ()); }
#line 6899 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 445: // switchCase: switchLabel ":"
#line 1413 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                     { yylhs.value.as < IR::SwitchCase* > () = new IR::SwitchCase(yystack_[1].location, yystack_[1].value.as < IR::Expression* > (), nullptr); }
#line 6905 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 446: // switchLabel: DEFAULT
#line 1417 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                               { yylhs.value.as < IR::Expression* > () = new IR::DefaultExpression(yystack_[0].location); }
#line 6911 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 447: // switchLabel: nonBraceExpression
#line 1418 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                               { yylhs.value.as < IR::Expression* > () = yystack_[0].value.as < IR::Expression* > (); }
#line 6917 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 448: // statementOrDeclaration: variableDeclaration
#line 1422 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                               { yylhs.value.as < IR::StatOrDecl* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 6923 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 449: // statementOrDeclaration: constantDeclaration
#line 1423 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                               { yylhs.value.as < IR::StatOrDecl* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 6929 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 450: // statementOrDeclaration: statement
#line 1424 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                               { yylhs.value.as < IR::StatOrDecl* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 6935 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 451: // statementOrDeclaration: instantiation
#line 1429 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                               { yylhs.value.as < IR::StatOrDecl* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 6941 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 452: // forStatement: optAnnotations FOR "(" forInitStatements ";" expression ";" forUpdateStatements ")" statement
#line 1437 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
    { yylhs.value.as < IR::Statement* > () = new IR::ForStatement(yystack_[8].location+yystack_[1].location, *yystack_[9].value.as < IR::Vector<IR::Annotation>* > (), *yystack_[6].value.as < IR::IndexedVector<IR::StatOrDecl>* > (), yystack_[4].value.as < IR::Expression* > (), *yystack_[2].value.as < IR::IndexedVector<IR::StatOrDecl>* > (), yystack_[0].value.as < IR::Statement* > ()); }
#line 6947 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 453: // forStatement: optAnnotations FOR "(" typeRef name IN forCollectionExpr ")" statement
#line 1439 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
    { auto decl = new IR::Declaration_Variable(yystack_[5].location+yystack_[4].location, *yystack_[4].value.as < IR::ID* > (), yystack_[5].value.as < ConstType* > ());
      yylhs.value.as < IR::Statement* > () = new IR::ForInStatement(yystack_[7].location+yystack_[2].location, *yystack_[8].value.as < IR::Vector<IR::Annotation>* > (), decl, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Statement* > ()); }
#line 6954 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 454: // forStatement: optAnnotations FOR "(" annotations typeRef name IN forCollectionExpr ")" statement
#line 1442 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
    { auto decl = new IR::Declaration_Variable(yystack_[5].location+yystack_[4].location, *yystack_[4].value.as < IR::ID* > (), *yystack_[6].value.as < IR::Vector<IR::Annotation>* > (), yystack_[5].value.as < ConstType* > ());
      yylhs.value.as < IR::Statement* > () = new IR::ForInStatement(yystack_[8].location+yystack_[2].location, *yystack_[9].value.as < IR::Vector<IR::Annotation>* > (), decl, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Statement* > ()); }
#line 6961 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 455: // forInitStatements: %empty
#line 1447 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                { yylhs.value.as < IR::IndexedVector<IR::StatOrDecl>* > () = new IR::IndexedVector<IR::StatOrDecl>(); }
#line 6967 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 456: // forInitStatements: forInitStatementsNonEmpty
#line 1448 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                { yylhs.value.as < IR::IndexedVector<IR::StatOrDecl>* > () = yystack_[0].value.as < IR::IndexedVector<IR::StatOrDecl>* > (); }
#line 6973 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 457: // forInitStatementsNonEmpty: declOrAssignmentOrMethodCallStatement
#line 1452 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                { yylhs.value.as < IR::IndexedVector<IR::StatOrDecl>* > () = new IR::IndexedVector<IR::StatOrDecl>(yystack_[0].value.as < IR::StatOrDecl* > ()); }
#line 6979 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 458: // forInitStatementsNonEmpty: forInitStatementsNonEmpty "," declOrAssignmentOrMethodCallStatement
#line 1453 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                                          {
            (yylhs.value.as < IR::IndexedVector<IR::StatOrDecl>* > () = yystack_[2].value.as < IR::IndexedVector<IR::StatOrDecl>* > ())->push_back(yystack_[0].value.as < IR::StatOrDecl* > ()); }
#line 6986 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 459: // declOrAssignmentOrMethodCallStatement: variableDeclarationWithoutSemicolon
#line 1458 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                        { yylhs.value.as < IR::StatOrDecl* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 6992 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 460: // declOrAssignmentOrMethodCallStatement: assignmentOrMethodCallStatementWithoutSemicolon
#line 1459 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                        { yylhs.value.as < IR::StatOrDecl* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 6998 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 461: // forUpdateStatements: %empty
#line 1463 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                        { yylhs.value.as < IR::IndexedVector<IR::StatOrDecl>* > () = new IR::IndexedVector<IR::StatOrDecl>(); }
#line 7004 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 462: // forUpdateStatements: forUpdateStatementsNonEmpty
#line 1464 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                        { yylhs.value.as < IR::IndexedVector<IR::StatOrDecl>* > () = yystack_[0].value.as < IR::IndexedVector<IR::StatOrDecl>* > (); }
#line 7010 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 463: // forUpdateStatementsNonEmpty: assignmentOrMethodCallStatementWithoutSemicolon
#line 1468 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                        {
            yylhs.value.as < IR::IndexedVector<IR::StatOrDecl>* > () = new IR::IndexedVector<IR::StatOrDecl>(yystack_[0].value.as < IR::Statement* > ()); }
#line 7017 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 464: // forUpdateStatementsNonEmpty: forUpdateStatementsNonEmpty "," assignmentOrMethodCallStatementWithoutSemicolon
#line 1470 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                                                      {
            (yylhs.value.as < IR::IndexedVector<IR::StatOrDecl>* > () = yystack_[2].value.as < IR::IndexedVector<IR::StatOrDecl>* > ())->push_back(yystack_[0].value.as < IR::Statement* > ()); }
#line 7024 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 465: // forCollectionExpr: expression
#line 1475 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                        { yylhs.value.as < IR::Expression* > () = yystack_[0].value.as < IR::Expression* > (); }
#line 7030 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 466: // forCollectionExpr: expression ".." expression
#line 1476 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                        { yylhs.value.as < IR::Expression* > () = new IR::Range(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7036 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 467: // forCollectionExpr: typeRef
#line 1477 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                        { yylhs.value.as < IR::Expression* > () = new IR::ConstructorCallExpression(yystack_[0].location, yystack_[0].value.as < ConstType* > (), {}); }
#line 7042 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 468: // tableDeclaration: optAnnotations TABLE name "{" tablePropertyList "}"
#line 1485 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
          { yylhs.value.as < IR::Declaration* > () = new IR::P4Table(yystack_[3].location, *yystack_[3].value.as < IR::ID* > (), *yystack_[5].value.as < IR::Vector<IR::Annotation>* > (), new IR::TableProperties(yystack_[1].location, *yystack_[1].value.as < IR::IndexedVector<IR::Property>* > ())); }
#line 7048 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 469: // tablePropertyList: tableProperty
#line 1489 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::IndexedVector<IR::Property>* > () = new IR::IndexedVector<IR::Property>();
                                           yylhs.value.as < IR::IndexedVector<IR::Property>* > ()->push_back(yystack_[0].value.as < IR::Property* > ()); yylhs.value.as < IR::IndexedVector<IR::Property>* > ()->srcInfo = yystack_[0].location; }
#line 7055 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 470: // tablePropertyList: tablePropertyList tableProperty
#line 1491 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::IndexedVector<IR::Property>* > () = yystack_[1].value.as < IR::IndexedVector<IR::Property>* > (); yylhs.value.as < IR::IndexedVector<IR::Property>* > ()->push_back(yystack_[0].value.as < IR::Property* > ()); yylhs.value.as < IR::IndexedVector<IR::Property>* > ()->srcInfo = yystack_[1].location + yystack_[0].location; }
#line 7061 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 471: // tableProperty: KEY "=" "{" keyElementList "}"
#line 1496 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { auto v = new IR::Key(yystack_[1].location, *yystack_[1].value.as < IR::Vector<IR::KeyElement>* > ());
          auto id = IR::ID(yystack_[4].location, "key"_cs);
          yylhs.value.as < IR::Property* > () = new IR::Property( yystack_[4].location + yystack_[0].location, id, v, false); }
#line 7069 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 472: // tableProperty: ACTIONS "=" "{" actionList "}"
#line 1500 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { auto v = new IR::ActionList(yystack_[1].location, *yystack_[1].value.as < IR::IndexedVector<IR::ActionListElement>* > ());
          auto id = IR::ID(yystack_[4].location, "actions"_cs);
          yylhs.value.as < IR::Property* > () = new IR::Property(yystack_[4].location + yystack_[0].location, id, v, false); }
#line 7077 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 473: // tableProperty: optAnnotations optCONST ENTRIES "=" "{" entriesList "}"
#line 1504 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { auto l = new IR::EntriesList(yystack_[4].location, *yystack_[1].value.as < IR::Vector<IR::Entry>* > ());
          auto id = IR::ID(yystack_[4].location+yystack_[0].location, "entries"_cs);
          yylhs.value.as < IR::Property* > () = new IR::Property(yystack_[4].location, id, *yystack_[6].value.as < IR::Vector<IR::Annotation>* > (), l, yystack_[5].value.as < OptionalConst > ().isConst); }
#line 7085 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 474: // tableProperty: optAnnotations optCONST nonTableKwName "=" initializer ";"
#line 1508 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { auto v = new IR::ExpressionValue(yystack_[1].location, yystack_[1].value.as < IR::Expression* > ());
          auto id = *yystack_[3].value.as < IR::ID* > ();
          yylhs.value.as < IR::Property* > () = new IR::Property(yystack_[3].value.as < IR::ID* > ()->srcInfo, id, *yystack_[5].value.as < IR::Vector<IR::Annotation>* > (), v, yystack_[4].value.as < OptionalConst > ().isConst); }
#line 7093 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 475: // keyElementList: %empty
#line 1514 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Vector<IR::KeyElement>* > () = new IR::Vector<IR::KeyElement>(); }
#line 7099 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 476: // keyElementList: keyElementList keyElement
#line 1515 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Vector<IR::KeyElement>* > () = yystack_[1].value.as < IR::Vector<IR::KeyElement>* > (); yylhs.value.as < IR::Vector<IR::KeyElement>* > ()->push_back(yystack_[0].value.as < IR::KeyElement* > ()); yylhs.value.as < IR::Vector<IR::KeyElement>* > ()->srcInfo = yystack_[1].location + yystack_[0].location; }
#line 7105 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 477: // keyElement: expression ":" name optAnnotations ";"
#line 1520 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { auto expr = new IR::PathExpression(*yystack_[2].value.as < IR::ID* > ());
                                           yylhs.value.as < IR::KeyElement* > () = new IR::KeyElement(yystack_[4].location, yystack_[4].value.as < IR::Expression* > (), expr, *yystack_[1].value.as < IR::Vector<IR::Annotation>* > ()); }
#line 7112 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 478: // actionList: %empty
#line 1525 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
             { yylhs.value.as < IR::IndexedVector<IR::ActionListElement>* > () = new IR::IndexedVector<IR::ActionListElement>(); }
#line 7118 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 479: // actionList: actionList optAnnotations actionRef ";"
#line 1527 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
             { yylhs.value.as < IR::IndexedVector<IR::ActionListElement>* > () = yystack_[3].value.as < IR::IndexedVector<IR::ActionListElement>* > (); yylhs.value.as < IR::IndexedVector<IR::ActionListElement>* > ()->push_back(new IR::ActionListElement(yystack_[1].location, *yystack_[2].value.as < IR::Vector<IR::Annotation>* > (), yystack_[1].value.as < IR::Expression* > ())); yylhs.value.as < IR::IndexedVector<IR::ActionListElement>* > ()->srcInfo = yystack_[3].location + yystack_[1].location; }
#line 7124 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 480: // actionRef: prefixedNonTypeName
#line 1532 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::PathExpression(yystack_[0].value.as < IR::Path* > ()); }
#line 7130 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 481: // actionRef: prefixedNonTypeName "(" argumentList ")"
#line 1534 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::MethodCallExpression(yystack_[3].location+yystack_[1].location, new IR::PathExpression(yystack_[3].value.as < IR::Path* > ()), yystack_[1].value.as < IR::Vector<IR::Argument>* > ()); }
#line 7136 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 482: // entry: optCONST entryPriority keysetExpression ":" actionRef optAnnotations ";"
#line 1541 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { if (auto l = yystack_[4].value.as < IR::Expression* > ()->to<IR::ListExpression>())
            yylhs.value.as < IR::Entry* > () = new IR::Entry(yystack_[4].location+yystack_[1].location, *yystack_[1].value.as < IR::Vector<IR::Annotation>* > (), yystack_[6].value.as < OptionalConst > ().isConst, yystack_[5].value.as < IR::Expression* > (), l, yystack_[2].value.as < IR::Expression* > (), false);
          else {  // if not a tuple, make it a list of 1
            IR::Vector<IR::Expression> le(yystack_[4].value.as < IR::Expression* > ());
            yylhs.value.as < IR::Entry* > () = new IR::Entry(yystack_[4].location+yystack_[1].location, *yystack_[1].value.as < IR::Vector<IR::Annotation>* > (), yystack_[6].value.as < OptionalConst > ().isConst, yystack_[5].value.as < IR::Expression* > (),
                   new IR::ListExpression(yystack_[4].location, le), yystack_[2].value.as < IR::Expression* > (), true);
          }
        }
#line 7149 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 483: // entry: optCONST keysetExpression ":" actionRef optAnnotations ";"
#line 1552 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { if (auto l = yystack_[4].value.as < IR::Expression* > ()->to<IR::ListExpression>())
            yylhs.value.as < IR::Entry* > () = new IR::Entry(yystack_[4].location+yystack_[1].location, *yystack_[1].value.as < IR::Vector<IR::Annotation>* > (), yystack_[5].value.as < OptionalConst > ().isConst, nullptr, l, yystack_[2].value.as < IR::Expression* > (), false);
          else {  // if not a tuple, make it a list of 1
            IR::Vector<IR::Expression> le(yystack_[4].value.as < IR::Expression* > ());
            yylhs.value.as < IR::Entry* > () = new IR::Entry(yystack_[4].location+yystack_[1].location, *yystack_[1].value.as < IR::Vector<IR::Annotation>* > (), yystack_[5].value.as < OptionalConst > ().isConst, nullptr,
                   new IR::ListExpression(yystack_[4].location, le), yystack_[2].value.as < IR::Expression* > (), true);
          }
        }
#line 7162 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 484: // entryPriority: PRIORITY "=" INTEGER ":"
#line 1563 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                     { yylhs.value.as < IR::Expression* > () = new IR::Constant(parseConstantChecked(yystack_[1].location, yystack_[1].value.as < UnparsedConstant > ())); }
#line 7168 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 485: // entryPriority: PRIORITY "=" "(" expression ")" ":"
#line 1564 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                          { yylhs.value.as < IR::Expression* > () = yystack_[2].value.as < IR::Expression* > (); }
#line 7174 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 486: // entriesList: %empty
#line 1568 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                     { yylhs.value.as < IR::Vector<IR::Entry>* > () = new IR::Vector<IR::Entry>(); }
#line 7180 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 487: // entriesList: entriesList entry
#line 1569 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                     { yylhs.value.as < IR::Vector<IR::Entry>* > () = yystack_[1].value.as < IR::Vector<IR::Entry>* > (); yylhs.value.as < IR::Vector<IR::Entry>* > ()->push_back(yystack_[0].value.as < IR::Entry* > ()); yylhs.value.as < IR::Vector<IR::Entry>* > ()->srcInfo = yystack_[1].location + yystack_[0].location; }
#line 7186 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 488: // actionDeclaration: optAnnotations ACTION name "(" parameterList ")" blockStatement
#line 1576 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { auto pl = new IR::ParameterList(yystack_[2].location, *yystack_[2].value.as < IR::IndexedVector<IR::Parameter>* > ());
          yylhs.value.as < IR::Declaration* > () = new IR::P4Action(yystack_[4].location, *yystack_[4].value.as < IR::ID* > (), *yystack_[6].value.as < IR::Vector<IR::Annotation>* > (), pl, yystack_[0].value.as < IR::BlockStatement* > ()); }
#line 7193 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 489: // variableDeclaration: variableDeclarationWithoutSemicolon ";"
#line 1583 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                 { yylhs.value.as < IR::Declaration* > () = yystack_[1].value.as < IR::Declaration* > (); }
#line 7199 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 490: // variableDeclarationWithoutSemicolon: annotations typeRef declarator optInitializer
#line 1588 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                         { yylhs.value.as < IR::Declaration* > () = new IR::Declaration_Variable(yystack_[3].location+yystack_[0].location, *yystack_[1].value.as < NameTypePair > ().name, *yystack_[3].value.as < IR::Vector<IR::Annotation>* > (), yystack_[1].value.as < NameTypePair > ().type, yystack_[0].value.as < IR::Expression* > ());
                           driver.structure->declareObject(*yystack_[1].value.as < NameTypePair > ().name, yystack_[1].value.as < NameTypePair > ().type->toString()); }
#line 7206 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 491: // variableDeclarationWithoutSemicolon: typeRef declarator optInitializer
#line 1591 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                         { yylhs.value.as < IR::Declaration* > () = new IR::Declaration_Variable(yystack_[2].location+yystack_[0].location, *yystack_[1].value.as < NameTypePair > ().name, yystack_[1].value.as < NameTypePair > ().type, yystack_[0].value.as < IR::Expression* > ());
                           driver.structure->declareObject(*yystack_[1].value.as < NameTypePair > ().name, yystack_[1].value.as < NameTypePair > ().type->toString()); }
#line 7213 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 492: // constantDeclaration: optAnnotations CONST typeRef declarator "=" initializer ";"
#line 1597 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                         { yylhs.value.as < IR::Declaration* > () = new IR::Declaration_Constant(yystack_[3].location, *yystack_[3].value.as < NameTypePair > ().name, *yystack_[6].value.as < IR::Vector<IR::Annotation>* > (), yystack_[3].value.as < NameTypePair > ().type, yystack_[1].value.as < IR::Expression* > ());
                           driver.structure->declareObject(*yystack_[3].value.as < NameTypePair > ().name, yystack_[3].value.as < NameTypePair > ().type->toString()); }
#line 7220 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 493: // declarator: name
#line 1602 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                          { yylhs.value.as < NameTypePair > ().name = yystack_[0].value.as < IR::ID* > (); yylhs.value.as < NameTypePair > ().type = yystack_[1].value.as< ConstType * > (); }
#line 7226 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 494: // declarator: declarator "[" expression "]"
#line 1604 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                          { yylhs.value.as < NameTypePair > () = yystack_[3].value.as < NameTypePair > (); yylhs.value.as < NameTypePair > ().type = new IR::Type_Array(yystack_[2].location+yystack_[0].location, yystack_[3].value.as < NameTypePair > ().type, yystack_[1].value.as < IR::Expression* > ()); }
#line 7232 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 495: // optInitializer: %empty
#line 1608 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < IR::Expression* > () = nullptr; }
#line 7238 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 496: // optInitializer: "=" initializer
#line 1609 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                       { yylhs.value.as < IR::Expression* > () = yystack_[0].value.as < IR::Expression* > (); }
#line 7244 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 497: // initializer: expression
#line 1613 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                          { yylhs.value.as < IR::Expression* > () = yystack_[0].value.as < IR::Expression* > (); }
#line 7250 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 498: // functionDeclaration: annotations functionPrototype blockStatement
#line 1619 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                     {
            driver.structure->pop();
            yylhs.value.as < IR::Declaration* > () = new IR::Function(yystack_[1].value.as < IR::Method* > ()->srcInfo, yystack_[1].value.as < IR::Method* > ()->name, *yystack_[2].value.as < IR::Vector<IR::Annotation>* > (), yystack_[1].value.as < IR::Method* > ()->type, yystack_[0].value.as < IR::BlockStatement* > ()); }
#line 7258 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 499: // functionDeclaration: functionPrototype blockStatement
#line 1622 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         {
            driver.structure->pop();
            yylhs.value.as < IR::Declaration* > () = new IR::Function(yystack_[1].value.as < IR::Method* > ()->srcInfo, yystack_[1].value.as < IR::Method* > ()->name, yystack_[1].value.as < IR::Method* > ()->type, yystack_[0].value.as < IR::BlockStatement* > ()); }
#line 7266 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 500: // argumentList: %empty
#line 1628 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Vector<IR::Argument>* > () = new IR::Vector<IR::Argument>(); }
#line 7272 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 501: // argumentList: nonEmptyArgList
#line 1629 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Vector<IR::Argument>* > () = yystack_[0].value.as < IR::Vector<IR::Argument>* > (); }
#line 7278 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 502: // nonEmptyArgList: argument
#line 1633 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Vector<IR::Argument>* > () = new IR::Vector<IR::Argument>();
                                           yylhs.value.as < IR::Vector<IR::Argument>* > ()->push_back(yystack_[0].value.as < IR::Argument* > ()); yylhs.value.as < IR::Vector<IR::Argument>* > ()->srcInfo = yystack_[0].location; }
#line 7285 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 503: // nonEmptyArgList: nonEmptyArgList "," argument
#line 1635 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Vector<IR::Argument>* > () = yystack_[2].value.as < IR::Vector<IR::Argument>* > (); yylhs.value.as < IR::Vector<IR::Argument>* > ()->push_back(yystack_[0].value.as < IR::Argument* > ()); yylhs.value.as < IR::Vector<IR::Argument>* > ()->srcInfo = yystack_[2].location + yystack_[0].location; }
#line 7291 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 504: // argument: expression
#line 1639 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Argument* > () = new IR::Argument(yystack_[0].location, yystack_[0].value.as < IR::Expression* > ()); }
#line 7297 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 505: // argument: name "=" expression
#line 1640 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Argument* > () = new IR::Argument(yystack_[2].location, *yystack_[2].value.as < IR::ID* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7303 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 506: // argument: "_"
#line 1641 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Argument* > () = new IR::Argument(yystack_[0].location, new IR::DefaultExpression(yystack_[0].location)); }
#line 7309 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 507: // argument: name "=" "_"
#line 1642 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Argument* > () = new IR::Argument(yystack_[2].location, *yystack_[2].value.as < IR::ID* > (), new IR::DefaultExpression(yystack_[0].location)); }
#line 7315 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 508: // expressionList: %empty
#line 1646 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Vector<IR::Expression>* > () = new IR::Vector<IR::Expression>(); }
#line 7321 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 509: // expressionList: expression
#line 1647 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Vector<IR::Expression>* > () = new IR::Vector<IR::Expression>();
                                           yylhs.value.as < IR::Vector<IR::Expression>* > ()->push_back(yystack_[0].value.as < IR::Expression* > ()); yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo = yystack_[0].location; }
#line 7328 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 510: // expressionList: expressionList "," expression
#line 1649 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Vector<IR::Expression>* > () = yystack_[2].value.as < IR::Vector<IR::Expression>* > (); yylhs.value.as < IR::Vector<IR::Expression>* > ()->push_back(yystack_[0].value.as < IR::Expression* > ()); yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo = yystack_[2].location + yystack_[0].location; }
#line 7334 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 511: // prefixedNonTypeName: nonTypeName
#line 1653 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Path* > () = new IR::Path(*yystack_[0].value.as < IR::ID* > ()); }
#line 7340 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 512: // prefixedNonTypeName: dotPrefix nonTypeName
#line 1654 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Path* > () = new IR::Path(*yystack_[0].value.as < IR::ID* > (), true);
                                           driver.structure->clearPath(); }
#line 7347 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 513: // $@22: %empty
#line 1659 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { driver.structure->relativePathFromLastSymbol(); }
#line 7353 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 514: // dot_name: "." $@22 name
#line 1659 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                                 {
          driver.structure->clearPath(); yylhs.value.as < IR::ID* > () = yystack_[0].value.as < IR::ID* > (); }
#line 7360 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 515: // lvalue: prefixedNonTypeName
#line 1664 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::PathExpression(yystack_[0].value.as < IR::Path* > ()); }
#line 7366 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 516: // lvalue: THIS
#line 1665 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::This(yystack_[0].location); }
#line 7372 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 517: // lvalue: lvalue dot_name
#line 1666 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Member(yystack_[1].location + yystack_[0].location, yystack_[1].value.as < IR::Expression* > (), *yystack_[0].value.as < IR::ID* > ()); }
#line 7378 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 518: // lvalue: lvalue "[" expression "]"
#line 1667 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::ArrayIndex(yystack_[3].location + yystack_[0].location, yystack_[3].value.as < IR::Expression* > (), yystack_[1].value.as < IR::Expression* > ()); }
#line 7384 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 519: // lvalue: lvalue "[" expression ":" expression "]"
#line 1668 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                               { yylhs.value.as < IR::Expression* > () = new IR::Slice(yystack_[5].location + yystack_[0].location, yystack_[5].value.as < IR::Expression* > (), yystack_[3].value.as < IR::Expression* > (), yystack_[1].value.as < IR::Expression* > ()); }
#line 7390 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 520: // lvalue: lvalue "[" expression "+" ":" expression "]"
#line 1669 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                   { yylhs.value.as < IR::Expression* > () = new IR::PlusSlice(yystack_[6].location + yystack_[0].location, yystack_[6].value.as < IR::Expression* > (), yystack_[4].value.as < IR::Expression* > (), yystack_[1].value.as < IR::Expression* > ()); }
#line 7396 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 521: // lvalue: "(" lvalue ")"
#line 1670 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = yystack_[1].value.as < IR::Expression* > (); }
#line 7402 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 522: // expression: INTEGER
#line 1674 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = parseConstant(yystack_[0].location, yystack_[0].value.as < UnparsedConstant > (), 0); }
#line 7408 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 523: // expression: "..."
#line 1675 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Dots(yystack_[0].location); }
#line 7414 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 524: // expression: STRING_LITERAL
#line 1676 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::StringLiteral(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 7420 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 525: // expression: TRUE
#line 1677 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::BoolLiteral(yystack_[0].location, true); }
#line 7426 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 526: // expression: FALSE
#line 1678 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::BoolLiteral(yystack_[0].location, false); }
#line 7432 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 527: // expression: THIS
#line 1679 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::This(yystack_[0].location); }
#line 7438 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 528: // expression: prefixedNonTypeName
#line 1680 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::PathExpression(yystack_[0].value.as < IR::Path* > ()); }
#line 7444 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 529: // expression: expression "[" expression "]"
#line 1681 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::ArrayIndex(yystack_[3].location + yystack_[0].location, yystack_[3].value.as < IR::Expression* > (), yystack_[1].value.as < IR::Expression* > ()); }
#line 7450 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 530: // expression: expression "[" expression ":" expression "]"
#line 1683 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::Slice(yystack_[5].location + yystack_[0].location, yystack_[5].value.as < IR::Expression* > (), yystack_[3].value.as < IR::Expression* > (), yystack_[1].value.as < IR::Expression* > ()); }
#line 7456 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 531: // expression: expression "[" expression "+" ":" expression "]"
#line 1685 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::PlusSlice(yystack_[6].location + yystack_[0].location, yystack_[6].value.as < IR::Expression* > (), yystack_[4].value.as < IR::Expression* > (), yystack_[1].value.as < IR::Expression* > ()); }
#line 7462 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 532: // expression: "{" expressionList optTrailingComma "}"
#line 1686 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                              { yylhs.value.as < IR::Expression* > () = new IR::ListExpression(yystack_[3].location + yystack_[0].location, *yystack_[2].value.as < IR::Vector<IR::Expression>* > ()); }
#line 7468 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 533: // expression: "{#}"
#line 1687 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Invalid(yystack_[0].location, IR::Type::Unknown::get()); }
#line 7474 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 534: // expression: "{" kvList optTrailingComma "}"
#line 1688 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::StructExpression(
                                                  yystack_[3].location + yystack_[0].location, IR::Type::Unknown::get(), (IR::Type_Name*)nullptr, *yystack_[2].value.as < IR::IndexedVector<IR::NamedExpression>* > ()); }
#line 7481 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 535: // expression: "{" kvList "," "..." optTrailingComma "}"
#line 1690 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                               {
                                           auto list = yystack_[4].value.as < IR::IndexedVector<IR::NamedExpression>* > ();
                                           list->push_back(new IR::NamedDots(yystack_[2].location));
                                           list->srcInfo = list->srcInfo + yystack_[2].location;
                                           yylhs.value.as < IR::Expression* > () = new IR::StructExpression(
                                                  yystack_[5].location + yystack_[2].location, IR::Type::Unknown::get(),
                                                  (IR::Type_Name*)nullptr, *list); }
#line 7493 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 536: // expression: "(" expression ")"
#line 1697 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = yystack_[1].value.as < IR::Expression* > (); }
#line 7499 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 537: // expression: "!" expression
#line 1698 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::LNot(yystack_[1].location + yystack_[0].location, yystack_[0].value.as < IR::Expression* > ()); }
#line 7505 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 538: // expression: "~" expression
#line 1699 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Cmpl(yystack_[1].location + yystack_[0].location, yystack_[0].value.as < IR::Expression* > ()); }
#line 7511 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 539: // expression: "-" expression
#line 1700 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Neg(yystack_[1].location + yystack_[0].location, yystack_[0].value.as < IR::Expression* > ()); }
#line 7517 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 540: // expression: "+" expression
#line 1701 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::UPlus(yystack_[1].location + yystack_[0].location, yystack_[0].value.as < IR::Expression* > ()); }
#line 7523 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 541: // expression: typeName dot_name
#line 1703 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::Member(yystack_[1].location + yystack_[0].location, new IR::TypeNameExpression(yystack_[1].location, yystack_[1].value.as < IR::Type_Name* > ()), *yystack_[0].value.as < IR::ID* > ()); }
#line 7529 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 542: // expression: ERROR "." name
#line 1705 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { auto typeName = new IR::Type_Name(yystack_[2].location, new IR::Path(IR::ID(yystack_[2].location, "error"_cs)));
          yylhs.value.as < IR::Expression* > () = new IR::Member(yystack_[2].location+yystack_[0].location, new IR::TypeNameExpression(yystack_[2].location+yystack_[0].location, typeName), *yystack_[0].value.as < IR::ID* > ()); }
#line 7536 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 543: // expression: expression dot_name
#line 1707 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Member(yystack_[1].location + yystack_[0].location, yystack_[1].value.as < IR::Expression* > (), *yystack_[0].value.as < IR::ID* > ()); }
#line 7542 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 544: // expression: expression "*" expression
#line 1708 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Mul(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7548 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 545: // expression: expression "/" expression
#line 1709 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Div(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7554 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 546: // expression: expression "%" expression
#line 1710 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Mod(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7560 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 547: // expression: expression "+" expression
#line 1711 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Add(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7566 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 548: // expression: expression "-" expression
#line 1712 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Sub(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7572 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 549: // expression: expression "|+|" expression
#line 1713 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::AddSat(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7578 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 550: // expression: expression "|-|" expression
#line 1714 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::SubSat(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7584 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 551: // expression: expression "<<" expression
#line 1715 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Shl(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7590 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 552: // expression: expression R_ANGLE_SHIFT ">" expression
#line 1717 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::Shr(yystack_[3].location + yystack_[0].location, yystack_[3].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7596 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 553: // expression: expression "<=" expression
#line 1718 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Leq(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7602 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 554: // expression: expression ">=" expression
#line 1719 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Geq(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7608 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 555: // expression: expression l_angle expression
#line 1721 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Lss(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7614 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 556: // expression: expression ">" expression
#line 1722 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Grt(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7620 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 557: // expression: expression "!=" expression
#line 1723 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Neq(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7626 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 558: // expression: expression "==" expression
#line 1724 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Equ(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7632 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 559: // expression: expression "&" expression
#line 1725 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::BAnd(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7638 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 560: // expression: expression "^" expression
#line 1726 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::BXor(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7644 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 561: // expression: expression "|" expression
#line 1727 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::BOr(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7650 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 562: // expression: expression "++" expression
#line 1728 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Concat(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7656 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 563: // expression: expression "&&" expression
#line 1729 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::LAnd(yystack_[2].location + yystack_[1].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7662 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 564: // expression: expression "||" expression
#line 1730 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::LOr(yystack_[2].location + yystack_[1].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7668 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 565: // expression: expression "?" expression ":" expression
#line 1731 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                               { yylhs.value.as < IR::Expression* > () = new IR::Mux(yystack_[4].location + yystack_[0].location, yystack_[4].value.as < IR::Expression* > (), yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7674 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 566: // expression: expression l_angle realTypeArgumentList r_angle "(" argumentList ")"
#line 1733 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::MethodCallExpression(yystack_[6].location + yystack_[3].location, yystack_[6].value.as < IR::Expression* > (), yystack_[4].value.as < IR::Vector<IR::Type>* > (), yystack_[1].value.as < IR::Vector<IR::Argument>* > ()); }
#line 7680 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 567: // expression: expression "(" argumentList ")"
#line 1735 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::MethodCallExpression(yystack_[3].location + yystack_[0].location, yystack_[3].value.as < IR::Expression* > (), yystack_[1].value.as < IR::Vector<IR::Argument>* > ()); }
#line 7686 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 568: // expression: namedType "(" argumentList ")"
#line 1737 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::ConstructorCallExpression(yystack_[3].location + yystack_[0].location, yystack_[3].value.as < ConstType* > (), yystack_[1].value.as < IR::Vector<IR::Argument>* > ()); }
#line 7692 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 569: // expression: "(" typeRef ")" expression
#line 1738 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                              { yylhs.value.as < IR::Expression* > () = new IR::Cast(yystack_[3].location + yystack_[0].location, yystack_[2].value.as < ConstType* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7698 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 570: // nonBraceExpression: INTEGER
#line 1742 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = parseConstant(yystack_[0].location, yystack_[0].value.as < UnparsedConstant > (), 0); }
#line 7704 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 571: // nonBraceExpression: STRING_LITERAL
#line 1743 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::StringLiteral(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 7710 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 572: // nonBraceExpression: TRUE
#line 1744 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::BoolLiteral(yystack_[0].location, true); }
#line 7716 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 573: // nonBraceExpression: FALSE
#line 1745 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::BoolLiteral(yystack_[0].location, false); }
#line 7722 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 574: // nonBraceExpression: THIS
#line 1746 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::This(yystack_[0].location); }
#line 7728 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 575: // nonBraceExpression: prefixedNonTypeName
#line 1747 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::PathExpression(yystack_[0].value.as < IR::Path* > ()); }
#line 7734 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 576: // nonBraceExpression: nonBraceExpression "[" expression "]"
#line 1748 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::ArrayIndex(yystack_[3].location + yystack_[0].location, yystack_[3].value.as < IR::Expression* > (), yystack_[1].value.as < IR::Expression* > ()); }
#line 7740 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 577: // nonBraceExpression: nonBraceExpression "[" expression ":" expression "]"
#line 1750 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::Slice(yystack_[5].location + yystack_[0].location, yystack_[5].value.as < IR::Expression* > (), yystack_[3].value.as < IR::Expression* > (), yystack_[1].value.as < IR::Expression* > ()); }
#line 7746 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 578: // nonBraceExpression: nonBraceExpression "[" expression "+" ":" expression "]"
#line 1752 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::PlusSlice(yystack_[6].location + yystack_[0].location, yystack_[6].value.as < IR::Expression* > (), yystack_[4].value.as < IR::Expression* > (), yystack_[1].value.as < IR::Expression* > ()); }
#line 7752 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 579: // nonBraceExpression: "(" expression ")"
#line 1753 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = yystack_[1].value.as < IR::Expression* > (); }
#line 7758 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 580: // nonBraceExpression: "!" expression
#line 1754 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::LNot(yystack_[1].location + yystack_[0].location, yystack_[0].value.as < IR::Expression* > ()); }
#line 7764 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 581: // nonBraceExpression: "~" expression
#line 1755 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Cmpl(yystack_[1].location + yystack_[0].location, yystack_[0].value.as < IR::Expression* > ()); }
#line 7770 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 582: // nonBraceExpression: "-" expression
#line 1756 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Neg(yystack_[1].location + yystack_[0].location, yystack_[0].value.as < IR::Expression* > ()); }
#line 7776 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 583: // nonBraceExpression: "+" expression
#line 1757 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::UPlus(yystack_[1].location + yystack_[0].location, yystack_[0].value.as < IR::Expression* > ()); }
#line 7782 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 584: // nonBraceExpression: typeName dot_name
#line 1759 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::Member(yystack_[1].location + yystack_[0].location, new IR::TypeNameExpression(yystack_[1].location, yystack_[1].value.as < IR::Type_Name* > ()), *yystack_[0].value.as < IR::ID* > ()); }
#line 7788 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 585: // nonBraceExpression: ERROR "." name
#line 1761 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { auto typeName = new IR::Type_Name(yystack_[2].location, new IR::Path(IR::ID(yystack_[2].location, "error"_cs)));
          yylhs.value.as < IR::Expression* > () = new IR::Member(yystack_[2].location+yystack_[0].location, new IR::TypeNameExpression(yystack_[2].location+yystack_[0].location, typeName), *yystack_[0].value.as < IR::ID* > ()); }
#line 7795 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 586: // nonBraceExpression: nonBraceExpression dot_name
#line 1763 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::Member(yystack_[1].location + yystack_[0].location, yystack_[1].value.as < IR::Expression* > (), *yystack_[0].value.as < IR::ID* > ()); }
#line 7801 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 587: // nonBraceExpression: nonBraceExpression "*" expression
#line 1764 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::Mul(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7807 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 588: // nonBraceExpression: nonBraceExpression "/" expression
#line 1765 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::Div(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7813 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 589: // nonBraceExpression: nonBraceExpression "%" expression
#line 1766 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::Mod(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7819 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 590: // nonBraceExpression: nonBraceExpression "+" expression
#line 1767 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::Add(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7825 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 591: // nonBraceExpression: nonBraceExpression "-" expression
#line 1768 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::Sub(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7831 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 592: // nonBraceExpression: nonBraceExpression "|+|" expression
#line 1769 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::AddSat(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7837 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 593: // nonBraceExpression: nonBraceExpression "|-|" expression
#line 1770 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::SubSat(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7843 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 594: // nonBraceExpression: nonBraceExpression "<<" expression
#line 1771 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::Shl(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7849 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 595: // nonBraceExpression: nonBraceExpression R_ANGLE_SHIFT ">" expression
#line 1773 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::Shr(yystack_[3].location + yystack_[0].location, yystack_[3].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7855 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 596: // nonBraceExpression: nonBraceExpression "<=" expression
#line 1774 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::Leq(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7861 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 597: // nonBraceExpression: nonBraceExpression ">=" expression
#line 1775 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::Geq(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7867 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 598: // nonBraceExpression: nonBraceExpression l_angle expression
#line 1777 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Lss(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7873 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 599: // nonBraceExpression: nonBraceExpression ">" expression
#line 1778 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::Grt(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7879 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 600: // nonBraceExpression: nonBraceExpression "!=" expression
#line 1779 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::Neq(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7885 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 601: // nonBraceExpression: nonBraceExpression "==" expression
#line 1780 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::Equ(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7891 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 602: // nonBraceExpression: nonBraceExpression "&" expression
#line 1781 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::BAnd(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7897 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 603: // nonBraceExpression: nonBraceExpression "^" expression
#line 1782 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::BXor(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7903 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 604: // nonBraceExpression: nonBraceExpression "|" expression
#line 1783 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::BOr(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7909 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 605: // nonBraceExpression: nonBraceExpression "++" expression
#line 1784 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::Concat(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7915 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 606: // nonBraceExpression: nonBraceExpression "&&" expression
#line 1785 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::LAnd(yystack_[2].location + yystack_[1].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7921 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 607: // nonBraceExpression: nonBraceExpression "||" expression
#line 1786 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::LOr(yystack_[2].location + yystack_[1].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7927 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 608: // nonBraceExpression: nonBraceExpression "?" expression ":" expression
#line 1787 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                                       { yylhs.value.as < IR::Expression* > () = new IR::Mux(yystack_[4].location + yystack_[0].location, yystack_[4].value.as < IR::Expression* > (), yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7933 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 609: // nonBraceExpression: nonBraceExpression l_angle realTypeArgumentList r_angle "(" argumentList ")"
#line 1789 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::MethodCallExpression(yystack_[6].location + yystack_[3].location, yystack_[6].value.as < IR::Expression* > (), yystack_[4].value.as < IR::Vector<IR::Type>* > (), yystack_[1].value.as < IR::Vector<IR::Argument>* > ()); }
#line 7939 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 610: // nonBraceExpression: nonBraceExpression "(" argumentList ")"
#line 1791 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::MethodCallExpression(yystack_[3].location + yystack_[0].location, yystack_[3].value.as < IR::Expression* > (), yystack_[1].value.as < IR::Vector<IR::Argument>* > ()); }
#line 7945 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 611: // nonBraceExpression: namedType "(" argumentList ")"
#line 1793 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::ConstructorCallExpression(yystack_[3].location + yystack_[0].location, yystack_[3].value.as < ConstType* > (), yystack_[1].value.as < IR::Vector<IR::Argument>* > ()); }
#line 7951 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 612: // nonBraceExpression: "(" typeRef ")" expression
#line 1794 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                              { yylhs.value.as < IR::Expression* > () = new IR::Cast(yystack_[3].location + yystack_[0].location, yystack_[2].value.as < ConstType* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7957 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 613: // intOrStr: INTEGER
#line 1798 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                 { yylhs.value.as < IR::Expression* > () = parseConstant(yystack_[0].location, yystack_[0].value.as < UnparsedConstant > (), 0); }
#line 7963 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 614: // intOrStr: STRING_LITERAL
#line 1799 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                 { yylhs.value.as < IR::Expression* > () = new IR::StringLiteral(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 7969 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 615: // intList: INTEGER
#line 1803 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                 { yylhs.value.as < IR::Vector<IR::Expression>* > () = new IR::Vector<IR::Expression>();
                                   yylhs.value.as < IR::Vector<IR::Expression>* > ()->push_back(parseConstant(yystack_[0].location, yystack_[0].value.as < UnparsedConstant > (), 0));
                                   yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo = yystack_[0].location; }
#line 7977 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 616: // intList: intList "," INTEGER
#line 1806 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                 { yylhs.value.as < IR::Vector<IR::Expression>* > () = yystack_[2].value.as < IR::Vector<IR::Expression>* > ();
                                   yylhs.value.as < IR::Vector<IR::Expression>* > ()->push_back(parseConstant(yystack_[0].location, yystack_[0].value.as < UnparsedConstant > (), 0));
                                   yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo = yystack_[2].location + yystack_[0].location; }
#line 7985 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 617: // intOrStrList: intOrStr
#line 1812 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                { yylhs.value.as < IR::Vector<IR::Expression>* > () = new IR::Vector<IR::Expression>();
                                   yylhs.value.as < IR::Vector<IR::Expression>* > ()->push_back(yystack_[0].value.as < IR::Expression* > ());
                                   yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo = yystack_[0].location; }
#line 7993 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 618: // intOrStrList: intOrStrList "," intOrStr
#line 1815 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                { yylhs.value.as < IR::Vector<IR::Expression>* > () = yystack_[2].value.as < IR::Vector<IR::Expression>* > ();
                                   yylhs.value.as < IR::Vector<IR::Expression>* > ()->push_back(yystack_[0].value.as < IR::Expression* > ());
                                   yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo = yystack_[2].location + yystack_[0].location; }
#line 8001 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 619: // strList: STRING_LITERAL
#line 1821 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                 { yylhs.value.as < IR::Vector<IR::Expression>* > () = new IR::Vector<IR::Expression>();
                                   yylhs.value.as < IR::Vector<IR::Expression>* > ()->push_back(new IR::StringLiteral(yystack_[0].location, yystack_[0].value.as < cstring > ()));
                                   yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo = yystack_[0].location; }
#line 8009 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;

  case 620: // strList: strList "," STRING_LITERAL
#line 1824 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
                                 { yylhs.value.as < IR::Vector<IR::Expression>* > () = yystack_[2].value.as < IR::Vector<IR::Expression>* > ();
                                   yylhs.value.as < IR::Vector<IR::Expression>* > ()->push_back(new IR::StringLiteral(yystack_[0].location, yystack_[0].value.as < cstring > ()));
                                   yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo = yystack_[2].location + yystack_[0].location; }
#line 8017 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"
    break;


#line 8021 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        context yyctx (*this, yyla);
        std::string msg = yysyntax_error_ (yyctx);
        error (yyla.location, YY_MOVE (msg));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yyerror_range[1].location = yystack_[0].location;
        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  P4Parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  P4Parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              else
                goto append;

            append:
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }

  std::string
  P4Parser::symbol_name (symbol_kind_type yysymbol)
  {
    return yytnamerr_ (yytname_[yysymbol]);
  }



  // P4Parser::context.
  P4Parser::context::context (const P4Parser& yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
  P4Parser::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
  {
    // Actual number of expected tokens
    int yycount = 0;

    const int yyn = yypact_[+yyparser_.yystack_[0].state];
    if (!yy_pact_value_is_default_ (yyn))
      {
        /* Start YYX at -YYN if negative to avoid negative indexes in
           YYCHECK.  In other words, skip the first -YYN actions for
           this state because they are default actions.  */
        const int yyxbegin = yyn < 0 ? -yyn : 0;
        // Stay within bounds of both yycheck and yytname.
        const int yychecklim = yylast_ - yyn + 1;
        const int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
        for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
          if (yycheck_[yyx + yyn] == yyx && yyx != symbol_kind::S_YYerror
              && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
            {
              if (!yyarg)
                ++yycount;
              else if (yycount == yyargn)
                return 0;
              else
                yyarg[yycount++] = YY_CAST (symbol_kind_type, yyx);
            }
      }

    if (yyarg && yycount == 0 && 0 < yyargn)
      yyarg[0] = symbol_kind::S_YYEMPTY;
    return yycount;
  }






  int
  P4Parser::yy_syntax_error_arguments_ (const context& yyctx,
                                                 symbol_kind_type yyarg[], int yyargn) const
  {
    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state merging
         (from LALR or IELR) and default reductions corrupt the expected
         token list.  However, the list is correct for canonical LR with
         one exception: it will still contain any token that will not be
         accepted due to an error action in a later state.
    */

    if (!yyctx.lookahead ().empty ())
      {
        if (yyarg)
          yyarg[0] = yyctx.token ();
        int yyn = yyctx.expected_tokens (yyarg ? yyarg + 1 : yyarg, yyargn - 1);
        return yyn + 1;
      }
    return 0;
  }

  // Generate an error message.
  std::string
  P4Parser::yysyntax_error_ (const context& yyctx) const
  {
    // Its maximum.
    enum { YYARGS_MAX = 5 };
    // Arguments of yyformat.
    symbol_kind_type yyarg[YYARGS_MAX];
    int yycount = yy_syntax_error_arguments_ (yyctx, yyarg, YYARGS_MAX);

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += symbol_name (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const short P4Parser::yypact_ninf_ = -951;

  const short P4Parser::yytable_ninf_ = -324;

  const short
  P4Parser::yypact_[] =
  {
    5291,  -951,  3158,   950,   -79,   291,   -70,  3158,   -47,   291,
     -44,  3158,   -35,   -32,  3158,    49,    72,    74,   222,   219,
    -951,   758,  3158,  3158,  -951,  3158,  2729,  1970,  3158,  -951,
    -951,  -951,  -951,  -951,  -951,  -951,  -951,   186,  -951,  -951,
    -951,  -951,  -951,  -951,  -951,  -951,  -951,   247,   228,  -951,
     250,  -951,   241,  -951,  4985,  -951,  -951,  -951,   207,   256,
    -951,  -951,   258,  -951,  -951,  -951,   269,  -951,   277,  4985,
    -951,  -951,  -951,  3886,   287,   292,  3923,   295,   309,   313,
    -951,  -951,  -951,  -951,  3508,  -951,    97,   325,    97,    97,
     328,  3508,  -951,    97,    97,  -951,  -951,  -951,  1408,  3394,
    -951,   312,  -951,   253,  -951,     9,  -951,   129,  -951,   -24,
     266,    97,  -951,  -951,  -951,  -951,  -951,   950,  -951,  -951,
    -951,  -951,  -951,  -951,  -951,  -951,   316,  -951,  -951,  -951,
     187,   187,   187,   154,   337,   350,   359,   186,  -951,    95,
     216,   367,  3960,   187,   950,  -951,  -951,  2072,  -951,  -951,
    -951,  -951,   587,  3158,  3158,  3158,  3158,  3158,  3158,  3158,
    3158,  3158,  3158,  3158,  3158,  3158,  3158,  3158,  3158,  3158,
    3158,  3158,  3158,   374,  2072,  3158,  3158,  -951,  1482,  3158,
     950,   297,   291,   301,  3158,   304,   314,  3158,   317,   320,
      10,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,
    -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,
    -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,
    -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,
    -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,
    -951,  -951,   271,   -12,   950,    -9,   587,   950,  -951,   587,
      -8,   950,  1387,   950,  1620,  3377,   950,   950,  1387,   950,
     950,   950,  3457,  -951,  -951,   -24,   293,  -951,     4,  -951,
     397,  -951,   407,   408,   -24,  -951,  3158,  2072,    97,  -951,
     452,   409,  3158,   412,  3158,  -951,  -951,  -951,   402,   410,
     413,  -951,  4985,   950,  -951,  -951,  -951,   429,  -951,   358,
    4985,  1755,  1755,  1135,  5117,  5088,  5145,  5145,   334,   334,
     334,   334,   187,   187,   187,  5172,  5220,  5193,  3775,  1755,
    3158,   421,  3997,   334,  -951,  -951,   429,  -951,   386,  1755,
    4985,  -951,  -951,  -951,  -951,  4985,  -951,  -951,  4034,   419,
     420,    97,  -951,  -951,  -951,  2729,  -951,  3158,   351,  -951,
     246,  3158,   351,   351,   424,  2213,   358,  3158,   351,   427,
     310,  -951,    97,  -951,   310,   171,   414,   417,   418,   429,
    -951,  -951,   310,  -951,  -951,  -951,   176,   310,  -951,   950,
    -951,  2072,   276,   431,   438,  -951,  -951,  -951,  -951,  4071,
     432,  -951,  -951,   950,   441,  -951,  -951,   187,  2795,  -951,
    2072,  -951,  -951,  -951,   587,  -951,  2861,  -951,  3158,  1135,
    -951,  3158,   587,   453,  3158,   381,   383,   384,   462,   359,
    2322,  4108,  -951,  -951,   950,  4145,  -951,  -951,   950,   472,
    -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,
    -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,
    -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,
    -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,
    -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,
    -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,
    -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,
    -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,
    -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,
    -951,  -951,  -951,  -951,  -951,  4182,  -951,     4,  -951,   168,
      97,   478,  -951,    97,  -951,  -951,    97,    97,   481,    97,
      97,    97,   481,   481,   473,  -951,  -951,  -951,  1387,  -951,
     -24,  3457,  3440,  -951,  -951,   950,   475,  -951,   396,  -951,
     483,  -951,  4985,  -951,  -951,  3158,  4219,  5059,  -951,  2072,
    4985,  -951,  -951,   351,   950,   487,   490,  -951,   351,  -951,
     351,  -951,  2431,   351,   485,  3158,  3158,  -951,   950,   482,
    -951,  -951,  -951,  -951,  -951,  -951,   950,   310,  -951,    98,
    3457,  -951,  -951,     6,  -951,  -951,   144,  -951,   467,  -951,
     -24,    17,  -951,  -951,  -951,  -951,  -951,  -951,  3209,    78,
       4,   950,  -951,  -951,  4256,  -951,   489,  -951,  -951,  -951,
    -951,  -951,  -951,  -951,   -24,  4293,   468,  4985,   499,   424,
     950,   507,   517,   522,   518,   524,   528,   183,   188,   950,
      97,   283,  -951,   460,  -951,   190,  -951,   532,  -951,   950,
    -951,   537,  -951,  -951,   510,   515,   519,   541,  2916,   544,
      12,  -951,   281,   545,  -951,   527,  -951,  -951,  -951,  -951,
    -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,
    -951,  2146,   559,  -951,   553,  -951,  -951,  -951,  -951,  -951,
    -951,     4,   560,   550,   554,  -951,  -951,  -951,  -951,     4,
       4,  -951,   559,  -951,  3158,  -951,   391,   190,  3158,  -951,
    -951,   567,   232,   248,  -951,  -951,  -951,  3158,  -951,  4330,
    3158,   562,   534,   535,  -951,  3158,   591,  2072,  3158,  3158,
    3158,  3158,  3158,  3158,  3158,  3158,  3158,  3158,  3158,  3158,
    3158,  -951,   587,  -951,   552,  -951,   572,  -951,  3158,   950,
     579,    15,    19,    70,   575,   576,   132,   558,  4985,   590,
     351,   351,   351,  -951,  -951,   119,  -951,  4380,  -951,  4417,
    1347,   581,   586,  3812,  3158,   588,  4985,  4985,  4985,  4985,
    4985,  4985,  4985,  4985,  4985,  4985,  4985,  4985,  4985,   358,
    -951,  -951,  -951,  -951,  -951,  -951,  -951,  1119,  -951,  -951,
    1387,  -951,  -951,  -951,  -951,  -951,  -951,  -951,   594,   596,
     597,   583,   592,   551,    -1,  -951,  1863,   604,  3457,   310,
    -951,   585,   602,  -951,  -951,  2072,  2072,  2982,  -951,  3158,
    4985,  -951,   607,     7,  1199,   608,   598,   310,  3270,  3158,
    3158,  3158,   617,   618,  -951,   797,  -951,  -951,    32,   281,
     545,   573,  -951,   310,   565,  3158,  1347,   616,   622,  3158,
    4454,  2072,  -951,  3394,  -951,  -951,  -951,   605,     4,  -951,
     149,   437,    -4,  3457,  -951,  -951,   633,   310,  -951,  -951,
    -951,  -951,  -951,  -951,  4491,  4528,  4565,  -951,  -951,  -951,
     629,  -951,  -951,  -951,  -951,  -951,   630,  1863,  1267,   595,
    1970,  4602,  3457,  -951,   619,   623,  4652,  -951,   637,  -951,
     646,  -951,   648,   631,  -951,  -951,  -951,   310,  -951,   950,
     950,   950,   143,  3037,   655,  3158,  -951,  3158,  3158,  3158,
    -951,  1970,  3158,  -951,  -951,  -951,  -951,   649,  -951,  -951,
     654,   250,  -951,   653,  -951,  5022,  1970,   429,   658,  3721,
     537,  -951,  -951,  -951,  -951,   647,  3158,  -951,  -951,   650,
     651,   652,  -951,   194,  -951,  -951,  4689,  -951,   659,   187,
     187,   187,   252,  4726,   187,   950,  2072,  -951,     1,  3158,
    3158,  3158,  3158,  3158,  3158,  3158,  3158,  3158,  3158,  3158,
    3158,  3158,  3158,  3158,  3158,  3158,  3158,  3158,   668,  2072,
    3158,  3158,  -951,  1482,   672,  1863,  3158,  -951,   674,   665,
    -951,    91,  3331,  -951,  -951,  -951,   660,   678,   950,    21,
    -951,  3158,  -951,  -951,   680,  -951,  1755,  1755,  1135,  5117,
    5088,  5145,  5145,   334,   334,   334,   334,   187,   187,   187,
    5172,  5220,  5193,  3849,  1755,  3158,   682,  4763,   334,   386,
    1755,  1863,  -951,  4985,  1863,   537,   704,  -951,  -951,  2072,
     -24,  -951,  2531,  -951,   187,  -951,  3103,  -951,  3158,  1135,
    -951,  3158,   699,  -951,  -951,  -951,  -951,   700,   683,  1779,
    -951,  -951,   693,   701,  -951,  -951,  2597,  3667,  3158,  4800,
    5059,  2072,  1571,  -951,  -951,   698,   702,   709,   707,  3613,
      -7,   194,   712,  3158,  3158,  4837,  -951,   715,  -951,  -951,
     714,  -951,  2663,  3158,  3158,  3158,   716,   -24,   194,  4985,
    4985,  -951,  -951,   950,   214,  -951,  4874,  4911,  4948,  -951,
     703,   -24,   705,  -951,  2663,   717,  -951,   706,  -951,  -951,
    -951,  -951
  };

  const short
  P4Parser::yydefact_[] =
  {
       0,    24,   508,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,    56,     0,     0,   533,     0,   508,     0,     0,   238,
     523,   525,   526,   527,    40,    38,    42,     0,    39,    43,
      44,    41,    37,   324,   524,   522,   511,     0,     0,   326,
     322,   323,     4,   528,   509,    46,    47,    45,     0,     5,
     210,   615,     6,   614,   613,   617,     7,   619,     8,     9,
      10,    11,    12,     0,     0,     0,     0,     0,     0,     0,
       1,     2,    23,    26,     0,   331,   334,   333,   336,     0,
     332,     0,   335,     0,     0,   344,   345,    25,     0,    57,
      58,     0,    33,     0,    30,   236,    32,   236,    28,    56,
     343,   317,   320,   321,   319,   318,   316,     0,    31,   363,
     368,   370,   369,   371,    34,    35,     0,    29,    27,    36,
     540,   539,   538,   324,   511,   276,   276,   333,   332,     0,
     317,   318,     0,   537,     0,   325,   512,   500,   621,   622,
     513,   541,   355,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   500,     0,     0,   543,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   116,   109,    85,   107,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    86,    87,    88,    89,    90,    91,    92,    93,
     114,   101,    94,    95,    96,    98,    97,    99,   100,   102,
     103,   104,   105,   106,   108,   110,   111,   112,   113,   115,
     117,   118,    60,     0,     0,     0,     0,     0,    65,   355,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    56,   333,    59,    56,   343,   367,    56,   365,
       0,   366,     0,     0,    57,   499,     0,   500,   346,   364,
     277,     0,   277,     0,     0,   536,   542,   506,     0,     0,
     501,   502,   504,     0,   354,   353,   352,   351,   356,     0,
     510,   553,   554,   551,   563,   564,   557,   558,   547,   548,
     549,   550,   544,   545,   546,   561,   559,   560,     0,   556,
       0,     0,     0,   562,   360,   359,   358,   361,     0,   555,
     212,   211,   616,   618,   620,    13,    14,    15,     0,     0,
       0,     0,    20,    22,    19,   508,    65,     0,     0,   394,
       0,     0,     0,     0,   276,     0,     0,     0,     0,     0,
       0,   293,    46,   385,     0,   345,   304,     0,     0,   343,
     373,   379,     0,   223,   246,   376,     0,     0,   372,     0,
     498,   500,   222,     0,   214,   215,   240,   296,   437,     0,
       0,   311,   347,     0,   276,   534,   532,   569,     0,   568,
       0,   514,   623,   624,     0,   330,     0,   529,     0,   552,
     567,     0,     0,     0,     0,     0,     0,     0,   276,   276,
       0,     0,   337,   392,     0,     0,   338,   327,   277,     0,
     119,    64,   181,   180,   175,   176,   177,   179,   178,   183,
     185,   184,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,    65,   202,
     203,   204,   205,   206,   207,   208,   209,   182,   168,   173,
     174,   161,   137,   159,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   138,   139,   140,   141,   142,   143,   144,   145,   166,
     153,   146,   147,   148,   150,   149,   151,   152,   154,   155,
     156,   157,   158,   160,   162,   163,   164,   165,   167,   169,
     170,   171,   172,    67,   328,     0,   339,    56,   493,     0,
     346,     0,   387,   346,   308,   307,   346,   346,   398,   346,
     346,   346,   396,   397,     0,   219,   221,   220,     0,   237,
      56,    56,    56,   439,   329,     0,     0,   349,     0,   277,
       0,   507,   505,   503,   357,     0,     0,   565,   362,   500,
      16,    17,    18,     0,   277,     0,     0,    61,     0,   395,
       0,   393,     0,     0,     0,     0,     0,   294,     0,     0,
     305,   374,   380,   224,   247,   377,     0,     0,   216,     0,
      57,   243,   241,    56,   249,   245,     0,   244,     0,   242,
      56,     0,   301,   297,   300,   299,   302,   298,    56,     0,
      56,     0,   348,   535,     0,   530,     0,    21,    63,    62,
     340,   341,    66,   342,    56,     0,     0,   497,     0,   276,
       0,     0,     0,     0,     0,     0,     0,     0,   217,     0,
       0,     0,   239,     0,   250,   495,   489,     0,   303,     0,
     438,     0,   416,   516,     0,     0,     0,     0,     0,     0,
       0,   451,   317,   318,   426,     0,   429,   434,   431,   428,
     432,   433,   427,   450,   430,   435,   440,   436,   448,   449,
     515,     0,     0,   227,     0,   350,   531,   566,   488,   494,
     492,    56,     0,     0,   276,   389,   309,   382,   382,    56,
      56,   382,     0,   226,     0,   251,     0,   495,     0,   491,
     292,     0,     0,     0,   422,   423,   417,     0,   418,     0,
       0,     0,     0,     0,   399,     0,     0,   500,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   517,   355,   230,     0,   312,     0,   386,     0,   277,
       0,    56,    56,    56,     0,     0,    56,     0,   218,     0,
       0,     0,     0,   490,   496,    56,   521,     0,   419,     0,
     455,     0,     0,     0,     0,     0,   402,   406,   407,   403,
     404,   405,   413,   414,   415,   410,   411,   408,   409,     0,
     232,   229,   295,   391,   390,   388,   306,     0,   310,   375,
       0,   383,   381,   225,   248,   378,   228,   253,     0,     0,
       0,     0,     0,    54,    56,   469,    56,     0,     0,     0,
     460,     0,   456,   457,   459,   500,   500,     0,   518,     0,
     412,   400,     0,     0,     0,   324,     0,     0,    56,     0,
       0,     0,     0,     0,    55,     0,   468,   470,     0,     0,
       0,   420,   442,     0,   493,     0,     0,     0,     0,     0,
       0,   500,   231,     0,   235,   233,   234,     0,    56,   313,
       0,     0,     0,    57,   254,   260,     0,     0,   255,   257,
     261,   256,   258,   259,     0,     0,     0,   478,   475,    50,
       0,    52,    53,    51,    48,    49,     0,    56,     0,   493,
       0,     0,     0,   458,     0,     0,     0,   519,     0,   314,
       0,   384,     0,     0,   265,   267,   262,     0,   252,     0,
       0,     0,    56,     0,     0,     0,   421,     0,     0,     0,
     441,     0,     0,   572,   573,   574,   446,     0,   571,   570,
       0,   322,   443,     0,   575,   447,     0,   467,     0,   465,
     461,   424,   425,   520,   401,     0,   508,   266,   253,     0,
       0,     0,   472,     0,   471,   476,     0,   486,     0,   583,
     582,   581,     0,     0,   580,     0,   500,   584,   445,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   500,
       0,     0,   586,     0,     0,    56,     0,   463,     0,   462,
     315,     0,    56,   291,   290,   289,     0,   480,     0,    54,
     474,     0,   579,   585,     0,   444,   596,   597,   594,   606,
     607,   600,   601,   590,   591,   592,   593,   587,   588,   589,
     604,   602,   603,     0,   599,     0,     0,     0,   605,     0,
     598,    56,   453,   466,    56,     0,     0,   263,   479,   500,
      56,   473,     0,   487,   612,   611,     0,   576,     0,   595,
     610,     0,     0,   454,   452,   464,   269,     0,     0,     0,
     288,   287,    44,     0,   272,   273,     0,   284,     0,     0,
     608,   500,     0,   481,   477,   283,   282,     0,     0,   284,
       0,     0,     0,     0,     0,     0,   577,     0,   268,   270,
       0,   275,     0,     0,     0,     0,     0,    56,     0,   285,
     286,   578,   609,     0,     0,   278,   280,   281,     0,   484,
       0,    56,     0,   274,     0,     0,   483,     0,   271,   279,
     485,   482
  };

  const short
  P4Parser::yypgoto_[] =
  {
    -951,  -951,  -951,  -951,  -951,  -951,  -951,   210,   904,  -951,
    -256,    -3,     8,   -93,  -310,   684,  -951,   -10,  -172,  -513,
    -951,   231,  -951,  -951,  -951,  -951,  -524,    71,  -951,  -951,
    -951,   679,   556,  -951,  -951,  -951,  -951,  -951,  -951,  -951,
     182,  -951,  -181,  -951,  -951,  -951,  -951,  -951,  -951,  -951,
    -951,  -763,  -951,  -133,  -951,  -951,  -950,  -951,  -951,  -951,
    -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,   -80,
    -951,  -951,   423,  -119,  -951,   936,  -951,    75,  -951,  1160,
      76,  -951,  -108,  -951,  -951,  -214,  -242,  -951,  -219,  -951,
     533,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,  -951,
    -951,  -427,  -951,  -951,  -951,  -951,  -951,    37,  -951,  -951,
    -237,  -951,  -817,  -776,  -815,  -951,  -951,  -814,  -951,  -951,
    -813,  -809,   -94,  -951,  -951,  -951,  -951,  -951,  -951,  -951,
    -951,  -951,  -951,   -69,  -951,  -951,  -157,  -951,  -951,   -23,
    -951,  -951,  -951,  -894,  -951,  -951,  -951,   251,  -477,  -740,
     -19,  -291,    83,  -688,   -34,  -152,  -951,   404,   -25,  -468,
     -37,  -951,   151,    -2,  -951,    28,  -951,  -951,  -951,   -39,
    -290
  };

  const short
  P4Parser::yydefgoto_[] =
  {
       0,    18,    19,   344,    20,    21,    97,    46,   288,   906,
     855,   382,   274,   100,   355,   242,   523,    59,    60,   383,
     384,   385,   548,   101,   539,   644,   102,   754,   800,   843,
     875,   270,    47,   104,   551,   602,   105,   540,   645,   603,
     604,   769,   848,   884,   885,   968,   886,   924,   925,  1102,
    1119,  1093,  1094,   281,  1134,  1107,  1095,   605,   106,   107,
     530,   638,   552,   613,   657,   108,   533,   641,   761,   109,
     556,   808,   297,    48,    49,    50,   112,   113,   114,    51,
     116,   117,   391,   392,   558,   298,   299,   327,   328,   118,
     119,   379,   120,   536,   642,   121,   541,   646,   122,   537,
     643,   762,   811,   123,   531,   589,   704,   705,   124,   125,
     350,   126,   674,   675,   676,   677,   678,   679,   680,   681,
     682,   683,   684,   553,   618,   685,   908,   952,   953,   686,
     687,   831,   832,   833,  1018,  1019,   958,   614,   824,   825,
     933,   975,   932,  1026,  1073,  1096,  1029,   127,   892,   608,
     893,   655,   719,   636,   129,   289,   290,   291,    52,    53,
     177,   293,   691,   292,   955,    65,    62,    66,    68,   178,
     405
  };

  const short
  P4Parser::yytable_[] =
  {
      54,   136,   128,   283,   830,    69,   264,   356,   331,    73,
     354,   152,    76,   151,   584,   275,   135,   861,    98,   265,
     130,   131,   321,   132,    54,   142,   143,   601,   612,    99,
     774,   888,   353,   889,   890,   891,   420,    71,   413,   347,
     834,   926,   351,   357,  1125,   856,   -56,   243,    84,   245,
     246,    61,   652,   872,   249,   250,  -213,   388,   422,    67,
     268,   806,   426,   427,    29,   809,   524,  1071,   526,   529,
     803,    84,   152,    84,   607,   616,    84,   388,    84,    84,
     269,   538,   821,    70,   252,    72,   542,    84,   543,    91,
     830,    84,    85,    86,   671,    74,   341,    75,   936,   251,
     252,   152,   263,   151,   822,   252,   273,   694,   331,   854,
     731,    88,    91,    89,    91,   138,   812,    91,   348,    91,
      91,   352,   358,  1126,    92,   390,   834,   342,    91,    93,
     731,    94,    91,    95,    96,    43,   692,   659,   276,  1108,
     343,   688,    84,  1066,   148,   149,   153,   284,   582,   693,
     690,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   380,  1135,   322,   323,   368,   329,   330,   815,    77,
     268,   264,   335,    91,  1017,   338,   252,   276,   756,   972,
     564,    84,   585,   690,  1149,   277,   764,   765,   568,   -47,
     271,    78,   821,    79,    84,   888,  1062,   889,   890,   891,
     333,   585,   -47,    57,   649,    84,   -37,  1127,   -37,   -37,
     921,   429,    80,   650,   822,   -47,   586,    34,    35,   544,
     171,   585,    91,   585,  1141,   149,   134,    36,   174,   393,
      81,   712,   -37,   144,   150,    91,   714,   978,   718,    38,
      55,    29,  1083,    39,   713,  1084,    91,   146,    40,   376,
      41,   560,   273,   148,   149,   179,  1143,  -322,   622,  1144,
     254,    42,    56,   150,   389,   256,   257,    34,    35,   147,
     300,   763,   397,   627,   766,   575,   576,    36,   630,  1085,
     631,   735,   423,   633,   261,   276,   153,   148,   149,    38,
     776,   424,   417,    39,  1031,   150,   648,   150,    40,   276,
      41,   180,   690,   181,   345,    34,    35,   277,   409,   874,
     419,    42,   346,   246,   182,    36,   276,    57,   148,   149,
      34,    35,   183,  1112,   381,   418,   276,    38,   732,  1120,
      36,    39,   185,    54,   381,   421,    40,   186,    41,   425,
     188,   639,    38,   276,    57,   525,    39,   134,   690,    42,
     717,    40,   296,    41,   189,   920,    34,    35,   190,   165,
     244,   166,   167,   247,    42,   145,    36,   171,   545,   546,
     690,   145,   149,   267,   134,   174,   547,   279,    38,    55,
      57,   150,    39,    34,    35,   -45,   562,    40,   690,    41,
     402,   403,   331,    36,   308,   280,   566,   402,   403,   567,
      42,    56,   570,   404,   282,    38,    55,   626,  -323,    39,
      63,    64,   587,   320,    40,   590,    41,   332,   591,   592,
     334,   593,   594,   595,   336,   402,   403,    42,    56,   690,
     954,   412,   386,   337,   110,   402,   403,   339,    29,   340,
     139,   621,   387,   388,    57,   395,   296,    57,   396,   296,
     398,    57,   399,    57,    57,   366,    57,    57,   400,    57,
      57,    57,   276,   410,   415,   416,    85,    86,   527,   428,
     818,   819,   820,   549,   555,   -45,   263,   134,   534,   535,
      57,   393,   690,   550,   393,    88,   559,   393,   393,   138,
     393,   393,   393,    57,   569,  1027,   702,   264,    92,   842,
     799,   571,   572,    93,   573,    94,   658,   574,   581,    43,
      34,    35,   266,   588,   585,   596,   620,   640,   394,   623,
      36,   628,   609,   617,   629,    34,    35,   634,   656,   700,
     698,   697,    38,    55,   922,    36,    39,   690,   599,   611,
     701,    40,   706,    41,   690,   134,   880,    38,    55,   600,
     600,    39,   707,   624,    42,    56,    40,   708,    41,   709,
      57,   760,   717,   711,    57,   710,   649,   103,   720,    42,
      56,   724,    57,   635,   637,   785,   725,    57,   661,    57,
     726,   134,   727,   690,    29,   730,   690,   690,   734,   689,
     653,   326,   733,    57,   753,   755,   757,   273,   758,   759,
     134,   716,   775,   780,   296,   670,   784,   663,   781,   782,
      34,    35,   296,   801,   802,   805,   600,   813,   814,   816,
      36,   273,   835,   152,    57,   817,   717,   836,    57,   854,
     841,   852,    38,  1027,    29,   849,    39,   850,   851,   862,
     853,    40,   752,    41,   751,   103,   865,   866,   871,   878,
    1027,   294,   897,   898,    42,   907,   729,   910,   914,   879,
      34,    35,    85,    86,   915,   360,   919,   364,   369,   928,
      36,   372,   263,   867,   868,   377,   751,   934,   935,   964,
     961,    88,    38,    89,   962,   138,    39,   956,   965,   966,
     977,    40,   967,    41,    92,   986,   985,   988,   103,    93,
    1015,    94,   768,   295,    42,    43,   637,  1055,  1020,   918,
    1065,  1023,  1024,  1025,  1061,   777,  1064,   846,   779,  1069,
    1030,  1068,  1075,   783,  1080,   264,   786,   787,   788,   789,
     790,   791,   792,   793,   794,   795,   796,   797,   798,  1086,
    1101,  1110,  1103,  -288,  1104,  1111,   637,  -287,   807,   810,
     810,  1121,  1122,   810,   877,    57,  1128,  1132,  1133,  1082,
    1139,  1150,   823,  1072,  1146,   248,  1148,  1151,    82,   134,
     264,   598,   840,   767,    57,   654,   272,  1022,   828,   950,
     264,   771,   772,   265,  1059,   378,   804,   913,    57,  1014,
     773,   857,   103,   615,   563,   103,    57,    57,   103,   876,
     103,   103,   723,     0,   103,    29,    57,     0,   103,   264,
     152,   823,     0,   858,     0,     0,     0,     0,     0,    83,
      84,    57,     0,     0,  1034,   308,     0,   870,     0,     0,
       0,     0,     0,    85,    86,   882,     0,   894,   895,   896,
      57,   873,     0,    87,     0,     0,   883,  1056,     0,    57,
       0,    57,    88,   911,    89,     0,    90,   916,     0,    57,
       0,    91,     0,     0,   912,    92,     0,     0,     0,     0,
      93,   899,    94,     0,    95,    96,    43,     0,     0,     0,
     900,     0,     0,     0,  1035,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   858,     0,   901,    58,   959,     0,
       0,   902,   152,   903,   987,     0,  1013,  1087,  1012,     0,
       0,     0,     0,     0,   904,   905,     0,     0,     0,   973,
      58,   976,   146,   637,     0,   979,   980,   981,     0,   983,
     984,  1021,     0,     0,     0,     0,     0,   134,     0,  1117,
       0,     0,     0,     0,   959,     0,     0,   111,     0,     0,
     103,     0,   296,   140,    54,     0,     0,     0,   103,    57,
       0,   597,     0,     0,   606,   606,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   273,     0,  1036,  1037,  1038,
    1039,  1040,  1041,  1042,  1043,  1044,  1045,  1046,  1047,  1048,
    1049,  1050,  1051,  1052,  1053,  1054,     0,     0,  1057,  1058,
       0,  1060,   858,     0,  1063,     0,     0,     0,     0,   882,
       0,   278,     0,   651,     0,     0,     0,     0,     0,  1074,
     883,     0,     0,    34,    35,   111,     0,     0,     0,    57,
       0,   606,     0,    36,     0,   134,   134,     0,   286,     0,
       0,     0,     0,  1079,     0,    38,    55,    57,   858,    39,
       0,   858,     0,     0,    40,     0,    41,  1088,     0,     0,
    1097,     0,     0,    57,   308,     0,  1099,    42,    56,  1100,
       0,   134,     0,     0,    58,     0,     0,  1109,   111,     0,
       0,    57,     0,     0,  1097,     0,  1115,    57,     0,     0,
    1097,     0,     0,     0,   103,     0,     0,   103,   103,     0,
       0,  1129,  1130,     0,   140,     0,     0,     0,     0,     0,
    1097,  1136,  1137,  1138,  1140,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    57,  1147,    57,
      57,    57,  1097,     0,     0,     0,     0,     0,   349,     0,
       0,   349,     0,     0,     0,   359,   103,   361,   363,   367,
     370,   371,     0,   373,   374,   375,   161,   162,   163,   164,
     165,     0,   166,   167,     0,     0,    29,     0,   171,     0,
       0,   115,   111,   149,    58,   111,   174,   141,   111,     0,
     111,   111,   150,     0,   111,    57,   134,   401,   111,     0,
     844,     0,     0,   829,    85,    86,     0,     0,   176,     0,
       0,     0,     0,     0,   263,     0,     0,   722,     0,   134,
       0,     0,     0,    88,     0,    89,     0,   138,     0,     0,
     369,     0,     0,   847,     0,     0,    92,     0,    57,     0,
       0,    93,     0,    94,     0,    95,    96,   845,     0,    58,
       0,   863,     0,     0,     0,     0,    29,     0,     0,   115,
       0,     0,     0,     0,   528,     0,   110,   369,   532,     0,
       0,   887,   103,     0,     0,     0,   528,     0,     0,   134,
       0,   528,     0,   528,    85,    86,     0,     0,     0,   887,
       0,     0,     0,     0,   263,     0,   266,   557,   937,   938,
       0,     0,     0,    88,     0,    89,   927,   138,   103,   939,
       0,   134,   115,   940,     0,     0,    92,     0,   941,     0,
     942,    93,     0,    94,    29,    95,    96,    43,   579,     0,
       0,     0,   579,   957,     0,   927,     0,     0,   141,     0,
     111,     0,     0,    57,     0,   943,   944,   945,   111,     0,
      34,    35,     0,     0,     0,     0,     0,     0,   946,     0,
      36,     0,   947,   103,   982,     0,   103,     0,     0,     0,
       0,     0,    38,     0,     0,     0,    39,     0,     0,   957,
       0,    40,     0,    41,   103,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    43,   948,   949,   661,   103,
     103,     0,     0,     0,    29,     0,   115,     0,     0,   115,
       0,     0,   115,     0,   115,   115,     0,     0,   115,    84,
       0,     0,   115,     0,     0,     0,     0,   663,     0,   103,
      34,    35,    85,    86,     0,     0,   326,     0,     0,   103,
      36,     0,   263,     0,    29,   887,     0,     0,     0,     0,
       0,    88,    38,    89,     0,   138,    39,     0,     0,   619,
      91,    40,     0,    41,    92,     0,     0,     0,   103,    93,
       0,    94,    85,    86,    42,    43,     0,     0,    58,     0,
       0,     0,   263,     0,   111,     0,     0,   111,   111,     0,
     251,    88,   349,    89,     0,   138,   252,     0,   253,     0,
     647,   528,   254,     0,    92,   255,     0,   256,   257,    93,
     528,    94,   139,    22,    23,    43,   722,   258,    24,   259,
     260,     0,     0,     0,    25,   695,   261,    26,     0,   722,
       0,   262,     0,    27,     0,    28,   111,     0,     0,    29,
       0,     0,     0,     0,   703,     0,     0,     0,     0,     0,
       0,     0,     0,   715,   672,   528,   324,     0,    30,     0,
      31,    32,    33,   721,   115,    34,    35,    85,    86,     0,
       0,     0,   115,     0,     0,    36,     0,   137,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    38,    89,     0,
     138,    39,     0,     0,     0,     0,    40,     0,    41,    92,
       0,     0,    22,    23,    93,     0,    94,    24,   325,    42,
      43,    44,    45,    25,     0,     0,    26,  1118,     0,     0,
       0,   722,  1089,     0,    28,     0,     0,     0,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1090,     0,    30,     0,    31,
      32,    33,   770,     0,    34,    35,     0,     0,     0,     0,
       0,     0,  1091,   703,    36,     0,    37,   722,     0,     0,
       0,     0,     0,     0,     0,     0,    38,    29,     0,     0,
      39,     0,     0,     0,   722,    40,     0,    41,   111,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    42,    43,
      44,    45,     0,    34,    35,    85,    86,     0,   115,     0,
       0,   115,   115,    36,     0,   263,   111,     0,     0,     0,
       0,     0,     0,     0,    88,    38,   362,     0,   138,    39,
       0,     0,     0,   864,    40,     0,    41,    92,     0,     0,
       0,     0,    93,   111,    94,     0,   111,    42,   133,     0,
       0,   528,     0,     0,     0,     0,     0,     0,     0,     0,
     115,     0,   859,     0,   111,     0,     0,   909,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   673,   111,
     111,   156,     0,     0,   672,   923,   161,   162,   163,   164,
     165,   528,   166,   167,   168,   169,   170,     0,   171,     0,
       0,     0,   111,   149,     0,   173,   174,     0,     0,   111,
      22,    23,   150,     0,     0,    24,     0,     0,     0,   111,
       0,    25,     0,     0,    26,     0,     0,     0,   176,     0,
      27,   528,    28,   969,   970,   971,    29,     0,     0,     0,
       0,     0,     0,   859,   951,     0,   140,     0,   111,     0,
       0,     0,     0,  1105,     0,    30,     0,    31,    32,    33,
       0,     0,    34,    35,    85,    86,     0,     0,     0,     0,
    1106,     0,    36,     0,   137,     0,     0,   140,     0,     0,
       0,     0,     0,    88,    38,    89,     0,   138,    39,  1033,
       0,     0,   140,    40,     0,    41,    92,     0,     0,     0,
       0,    93,     0,    94,     0,     0,    42,    43,    44,    45,
       0,     0,   115,     0,   661,     0,     0,     0,     0,     0,
      29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1070,     0,   662,    84,     0,     0,     0,     0,
     115,     0,     0,   663,     0,     0,    34,    35,     0,   140,
     664,   859,   665,     0,     0,     0,    36,     0,   672,   666,
       0,     0,     0,     0,   667,     0,     0,   115,    38,     0,
     115,     0,    39,     0,     0,     0,    91,    40,   668,    41,
       0,     0,   669,     0,     0,     0,   860,     0,   115,     0,
      42,    43,     0,     0,     0,     0,     0,   859,     0,     0,
     859,    22,    23,   115,   115,     0,    24,     0,   673,     0,
       0,     0,    25,     0,     0,    26,     0,     0,     0,     0,
       0,    27,     0,    28,     0,   140,   115,    29,     0,     0,
       0,     0,     0,   115,     0,     0,     0,  1142,     0,     0,
       0,     0,     0,   115,     0,     0,    30,     0,    31,    32,
      33,     0,     0,    34,    35,    85,    86,     0,     0,     0,
       0,     0,     0,    36,     0,   137,     0,   860,     0,     0,
     141,     0,   115,     0,    88,    38,    89,     0,   138,    39,
       0,     0,     0,     0,    40,     0,    41,    92,     0,     0,
       0,     0,    93,     0,    94,     0,     0,    42,    43,    44,
      45,   141,     0,    22,    23,     0,     0,     0,    24,     0,
       0,     0,     0,     0,    25,     0,   141,    26,     0,     0,
       0,     0,     0,    27,     0,    28,     0,     0,     0,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   287,     0,    30,     0,
      31,    32,    33,     0,     0,    34,    35,     0,     0,     0,
       0,     0,     0,     0,     0,    36,     0,    37,     0,     0,
       0,     0,     0,   141,     0,   860,     0,    38,    55,     0,
       0,    39,   673,     0,     0,     0,    40,     0,    41,   735,
       0,     0,     0,   148,   149,     0,   736,   737,     0,    42,
     133,    44,    45,   150,   738,   739,   740,   741,   742,   743,
     744,   745,   746,   747,   748,   749,   750,     0,     0,     0,
       0,   860,     0,     0,   860,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   141,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,     0,   459,   460,   461,   462,
     463,   464,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   465,   466,   467,   468,   469,     0,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,     0,   507,   508,
     509,   510,   511,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   430,     0,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,     0,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   577,   459,   460,   461,   462,   463,
     464,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   465,   466,   467,   468,   469,     0,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,     0,   507,   508,   509,
     510,   511,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   430,     0,   432,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   443,     0,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   632,   459,   460,   461,   462,   463,   464,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   465,   466,   467,   468,   469,     0,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,     0,   507,   508,   509,   510,
     511,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,    22,    23,     0,     0,     0,    24,     0,     0,
       0,     0,     0,    25,     0,     0,    26,     0,     0,     0,
       0,     0,  1089,     0,    28,     0,     0,     0,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1090,     0,    30,     0,    31,
      32,    33,     0,     0,    34,    35,     0,     0,     0,     0,
       0,     0,  1091,     0,    36,     0,    37,     0,    22,    23,
       0,     0,     0,    24,     0,     0,    38,     0,     0,    25,
      39,     0,    26,     0,     0,  1092,     0,    41,  1089,     0,
      28,     0,     0,     0,    29,     0,     0,     0,    42,    43,
      44,    45,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1090,     0,    30,     0,    31,    32,    33,     0,     0,
      34,    35,     0,     0,     0,     0,     0,     0,  1091,     0,
      36,     0,    37,     0,    22,    23,     0,     0,     0,    24,
       0,     0,    38,     0,     0,    25,    39,     0,    26,     0,
       0,    40,     0,    41,    27,     0,    28,     0,     0,     0,
      29,     0,     0,     0,    42,    43,    44,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1090,     0,    30,
       0,    31,    32,    33,     0,     0,    34,    35,     0,     0,
       0,     0,     0,     0,  1091,     0,    36,     0,    37,     0,
      22,    23,     0,     0,     0,    24,     0,     0,    38,     0,
       0,    25,    39,     0,    26,     0,     0,    40,     0,    41,
      27,     0,    28,     0,     0,     0,    29,     0,     0,     0,
      42,    43,    44,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    30,     0,    31,    32,    33,
       0,     0,    34,    35,     0,     0,     0,     0,     0,     0,
       0,     0,    36,     0,    37,     0,    22,    23,     0,     0,
       0,    24,     0,     0,    38,    55,     0,    25,    39,     0,
      26,     0,     0,    40,     0,    41,    27,     0,    28,     0,
       0,     0,    29,     0,     0,     0,    42,   133,    44,    45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   561,
       0,    30,     0,    31,    32,    33,     0,     0,    34,    35,
       0,     0,     0,     0,     0,     0,     0,     0,    36,     0,
      37,     0,    22,    23,     0,     0,     0,    24,     0,     0,
      38,     0,     0,    25,    39,     0,    26,     0,     0,    40,
       0,    41,    27,     0,    28,   565,     0,     0,    29,     0,
       0,     0,    42,    43,    44,    45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    30,     0,    31,
      32,    33,     0,     0,    34,    35,     0,    22,    23,     0,
       0,     0,    24,     0,    36,     0,    37,     0,    25,     0,
       0,    26,     0,     0,     0,     0,    38,    27,     0,    28,
      39,     0,     0,    29,     0,    40,     0,    41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   728,    42,    43,
      44,    45,    30,     0,    31,    32,    33,     0,     0,    34,
      35,     0,     0,     0,     0,     0,     0,     0,     0,    36,
       0,    37,     0,    22,    23,     0,     0,     0,    24,     0,
       0,    38,     0,     0,    25,    39,     0,    26,     0,     0,
      40,     0,    41,    27,     0,    28,   869,     0,     0,    29,
       0,     0,     0,    42,    43,    44,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,     0,
      31,    32,    33,     0,     0,    34,    35,     0,    22,    23,
       0,     0,     0,    24,     0,    36,     0,    37,     0,    25,
       0,     0,    26,   974,     0,     0,     0,    38,    27,     0,
      28,    39,     0,     0,    29,     0,    40,     0,    41,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    42,
      43,    44,    45,    30,     0,    31,    32,    33,     0,     0,
      34,    35,     0,     0,     0,     0,     0,     0,     0,     0,
      36,     0,    37,     0,    22,    23,     0,     0,     0,    24,
       0,     0,    38,     0,     0,    25,    39,     0,    26,     0,
       0,    40,     0,    41,    27,     0,    28,  1098,     0,     0,
      29,     0,     0,     0,    42,    43,    44,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    30,
       0,    31,    32,    33,     0,     0,    34,    35,     0,    22,
      23,     0,     0,     0,    24,     0,    36,     0,    37,     0,
      25,     0,     0,    26,     0,     0,     0,     0,    38,    27,
       0,    28,    39,     0,     0,    29,     0,    40,     0,    41,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      42,    43,    44,    45,    30,     0,    31,    32,    33,     0,
       0,    34,    35,     0,     0,     0,     0,     0,     0,     0,
       0,    36,     0,    37,     0,   660,     0,     0,     0,     0,
     661,     0,     0,    38,     0,     0,    29,    39,     0,     0,
       0,     0,    40,     0,    41,     0,     0,     0,     0,     0,
     662,    84,     0,     0,     0,    42,    43,    44,    45,   663,
       0,     0,    34,    35,    85,    86,   664,     0,   665,     0,
       0,     0,    36,     0,   263,   666,     0,     0,     0,     0,
     667,     0,     0,    88,    38,    89,  -264,   138,    39,     0,
       0,   661,    91,    40,   668,    41,    92,    29,   669,     0,
       0,    93,     0,    94,     0,     0,    42,    43,     0,     0,
       0,   662,    84,     0,     0,     0,     0,     0,     0,     0,
     663,     0,     0,    34,    35,    85,    86,     0,     0,     0,
       0,     0,     0,    36,     0,   263,     0,     0,     0,     0,
       0,   667,     0,     0,    88,    38,    89,  1067,   138,    39,
       0,     0,   661,    91,    40,     0,    41,    92,    29,     0,
       0,   881,    93,     0,    94,     0,     0,    42,    43,     0,
       0,     0,   662,    84,     0,     0,     0,     0,     0,     0,
       0,   663,     0,     0,    34,    35,    85,    86,     0,     0,
       0,     0,     0,     0,    36,     0,   263,     0,     0,     0,
       0,     0,   667,     0,    29,    88,    38,    89,     0,   138,
      39,     0,     0,     0,    91,    40,     0,    41,    92,     0,
       0,    29,     0,    93,     0,    94,     0,     0,    42,    43,
      34,    35,    85,    86,     0,     0,    84,     0,     0,     0,
      36,     0,   263,     0,     0,     0,     0,     0,     0,    85,
      86,    88,    38,   362,     0,   138,    39,     0,     0,   263,
       0,    40,     0,    41,    92,     0,     0,    29,    88,    93,
      89,    94,   138,    95,   365,   133,     0,    91,     0,     0,
       0,    92,    84,     0,    29,     0,    93,     0,    94,     0,
      95,    96,    43,     0,   610,    85,    86,     0,     0,    84,
       0,     0,     0,     0,     0,   263,     0,     0,     0,     0,
       0,     0,    85,    86,    88,     0,    89,     0,   138,     0,
       0,     0,   263,    91,     0,     0,     0,    92,     0,     0,
       0,    88,    93,    89,    94,   138,     0,     0,    43,     0,
      91,     0,     0,     0,    92,     0,     0,     0,     0,    93,
       0,    94,   191,     0,     0,    43,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,     0,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,     0,
     166,   167,   168,   169,   170,     0,   171,     0,     0,     0,
     148,   149,   172,   173,   174,   285,     0,     0,     0,   175,
     150,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   176,     0,  1123,     0,
    1124,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,     0,   166,   167,   168,   169,   170,     0,
     171,     0,     0,     0,   148,   149,   172,   173,   174,     0,
       0,     0,     0,   175,   150,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     176,     0,  1113,     0,  1114,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,     0,   166,   167,
     168,   169,   170,     0,   171,     0,     0,     0,   148,   149,
     172,   173,   174,     0,     0,     0,     0,   175,   150,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   176,     0,     0,     0,  1016,   154,
     155,   156,   157,   158,   159,   160,   406,   162,   163,   164,
     165,     0,   166,   167,   168,   169,   170,     0,   171,   407,
       0,     0,   148,   149,   172,   173,   174,     0,     0,   408,
       0,   175,   150,     0,     0,     0,   154,   155,   156,   157,
     158,   159,   160,   837,   162,   163,   164,   165,   176,   166,
     167,   168,   169,   170,     0,   171,   838,     0,     0,   148,
     149,   172,   173,   174,     0,     0,   839,     0,   175,   150,
       0,     0,     0,   154,   155,   156,   157,   158,   159,   160,
    1076,   162,   163,   164,   165,   176,   166,   167,   168,   169,
     170,     0,   171,  1077,     0,     0,   148,   149,   172,   173,
     174,     0,     0,  1078,     0,   175,   150,     0,     0,     0,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   176,   166,   167,   168,   169,   170,     0,   171,
       0,     0,     0,   148,   149,   172,   173,   174,     0,     0,
       0,   184,   175,   150,     0,     0,     0,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   176,
     166,   167,   168,   169,   170,     0,   171,     0,     0,     0,
     148,   149,   172,   173,   174,     0,     0,     0,   187,   175,
     150,     0,     0,     0,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   176,   166,   167,   168,
     169,   170,     0,   171,     0,     0,     0,   148,   149,   172,
     173,   174,   285,     0,     0,     0,   175,   150,     0,     0,
       0,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   176,   166,   167,   168,   169,   170,     0,
     171,     0,     0,     0,   148,   149,   172,   173,   174,     0,
       0,   411,     0,   175,   150,     0,     0,     0,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     176,   166,   167,   168,   169,   170,     0,   171,     0,     0,
       0,   148,   149,   172,   173,   174,     0,     0,     0,   414,
     175,   150,     0,     0,     0,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   176,   166,   167,
     168,   169,   170,     0,   171,   554,     0,     0,   148,   149,
     172,   173,   174,     0,     0,     0,     0,   175,   150,     0,
       0,     0,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   176,   166,   167,   168,   169,   170,
       0,   171,     0,     0,     0,   148,   149,   172,   173,   174,
     578,     0,     0,     0,   175,   150,     0,     0,     0,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   176,   166,   167,   168,   169,   170,     0,   171,     0,
       0,     0,   148,   149,   172,   173,   174,   580,     0,     0,
       0,   175,   150,     0,     0,     0,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   176,   166,
     167,   168,   169,   170,     0,   171,     0,     0,     0,   148,
     149,   172,   173,   174,   583,     0,     0,     0,   175,   150,
       0,     0,     0,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   176,   166,   167,   168,   169,
     170,     0,   171,   625,     0,     0,   148,   149,   172,   173,
     174,     0,     0,     0,     0,   175,   150,     0,     0,     0,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   176,   166,   167,   168,   169,   170,     0,   171,
     696,     0,     0,   148,   149,   172,   173,   174,     0,     0,
       0,     0,   175,   150,     0,     0,     0,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   176,
     166,   167,   168,   169,   170,     0,   171,   699,     0,     0,
     148,   149,   172,   173,   174,     0,     0,     0,     0,   175,
     150,     0,     0,     0,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   176,   166,   167,   168,
     169,   170,     0,   171,     0,     0,     0,   148,   149,   172,
     173,   174,     0,     0,     0,     0,   175,   150,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   778,     0,   176,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,     0,   166,   167,   168,
     169,   170,     0,   171,     0,     0,     0,   148,   149,   172,
     173,   174,   826,     0,     0,     0,   175,   150,     0,     0,
       0,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   176,   166,   167,   168,   169,   170,     0,
     171,     0,     0,     0,   148,   149,   172,   173,   174,   827,
       0,     0,     0,   175,   150,     0,     0,     0,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     176,   166,   167,   168,   169,   170,     0,   171,   917,     0,
       0,   148,   149,   172,   173,   174,     0,     0,     0,     0,
     175,   150,     0,     0,     0,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   176,   166,   167,
     168,   169,   170,     0,   171,     0,     0,     0,   148,   149,
     172,   173,   174,   929,     0,     0,     0,   175,   150,     0,
       0,     0,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   176,   166,   167,   168,   169,   170,
       0,   171,     0,     0,     0,   148,   149,   172,   173,   174,
     930,     0,     0,     0,   175,   150,     0,     0,     0,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   176,   166,   167,   168,   169,   170,     0,   171,     0,
       0,     0,   148,   149,   172,   173,   174,   931,     0,     0,
       0,   175,   150,     0,     0,     0,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   176,   166,
     167,   168,   169,   170,     0,   171,     0,     0,     0,   148,
     149,   172,   173,   174,     0,     0,     0,     0,   175,   150,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   960,     0,   176,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,     0,   166,
     167,   168,   169,   170,     0,   171,   963,     0,     0,   148,
     149,   172,   173,   174,     0,     0,     0,     0,   175,   150,
       0,     0,     0,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   176,   166,   167,   168,   169,
     170,     0,   171,     0,     0,     0,   148,   149,   172,   173,
     174,     0,     0,  1028,     0,   175,   150,     0,     0,     0,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   176,   166,   167,   168,   169,   170,     0,   171,
       0,     0,     0,   148,   149,   172,   173,   174,  1032,     0,
       0,     0,   175,   150,     0,     0,     0,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   176,
     166,   167,   168,   169,   170,     0,   171,     0,     0,     0,
     148,   149,   172,   173,   174,     0,     0,  1081,     0,   175,
     150,     0,     0,     0,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   176,   166,   167,   168,
     169,   170,     0,   171,  1116,     0,     0,   148,   149,   172,
     173,   174,     0,     0,     0,     0,   175,   150,     0,     0,
       0,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   176,   166,   167,   168,   169,   170,     0,
     171,  1131,     0,     0,   148,   149,   172,   173,   174,     0,
       0,     0,     0,   175,   150,     0,     0,     0,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     176,   166,   167,   168,   169,   170,     0,   171,     0,     0,
       0,   148,   149,   172,   173,   174,     0,     0,     0,  -285,
     175,   150,     0,     0,     0,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   176,   166,   167,
     168,   169,   170,     0,   171,     0,     0,     0,   148,   149,
     172,   173,   174,     0,     0,     0,  -286,   175,   150,     0,
       0,     0,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   176,   166,   167,   168,   169,   170,
       0,   171,     0,     0,     0,   148,   149,   172,   173,   174,
    1145,     0,     0,     0,   175,   150,     0,     0,     0,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   176,   166,   167,   168,   169,   170,     0,   171,     0,
       0,     0,   148,   149,   172,   173,   174,     0,     0,     0,
       0,   175,   150,     0,     0,     0,   989,   990,   991,   992,
     993,   994,   995,   996,   997,   998,   999,  1000,   176,  1001,
    1002,  1003,  1004,  1005,     0,  1006,     0,     0,     0,   148,
     149,  1007,  1008,  1009,     0,     0,     0,     0,  1010,   150,
       0,     0,     0,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,  1011,   166,   167,   168,   169,
     170,     0,   171,     0,     0,     0,   148,   149,   172,   173,
     174,     0,   154,   155,   156,   157,   150,   159,   160,   161,
     162,   163,   164,   165,     0,   166,   167,   168,   169,   170,
       0,   171,   176,     0,     0,   148,   149,   172,   173,   174,
       0,   154,   155,   156,     0,   150,   159,   160,   161,   162,
     163,   164,   165,     0,   166,   167,   168,   169,   170,     0,
     171,   176,     0,     0,   148,   149,   172,   173,   174,   154,
     155,   156,     0,     0,   150,     0,   161,   162,   163,   164,
     165,     0,   166,   167,   168,   169,   170,     0,   171,     0,
     176,     0,   148,   149,   172,   173,   174,     0,   156,     0,
       0,     0,   150,   161,   162,   163,   164,   165,     0,   166,
     167,     0,   169,   170,     0,   171,     0,     0,   176,   156,
     149,     0,   173,   174,   161,   162,   163,   164,   165,   150,
     166,   167,     0,   169,     0,     0,   171,     0,     0,     0,
       0,   149,     0,   173,   174,   176,   156,     0,     0,     0,
     150,   161,   162,   163,   164,   165,     0,   166,   167,     0,
       0,     0,     0,   171,     0,     0,   176,     0,   149,     0,
     173,   174,     0,     0,     0,     0,     0,   150,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   176,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17
  };

  const short
  P4Parser::yycheck_[] =
  {
       2,    26,    21,   136,   780,     7,    99,   249,   180,    11,
     247,    50,    14,    50,   527,   109,    26,   826,    21,    99,
      22,    23,   174,    25,    26,    27,    28,   551,   552,    21,
     718,   848,   246,   848,   848,   848,   346,     9,   328,    51,
     780,    45,    51,    51,    51,    46,    45,    86,    72,    88,
      89,   130,    46,    46,    93,    94,    52,    45,   348,   129,
      51,    46,   352,   353,    57,    46,   356,    46,   358,   360,
     758,    72,   111,    72,   551,   552,    72,    45,    72,    72,
      71,   372,    83,   130,    88,   129,   377,    72,   379,   113,
     866,    72,    85,    86,   618,   130,    86,   129,   907,    82,
      88,   140,    95,   140,   105,    88,   109,   620,   280,    88,
      98,   104,   113,   106,   113,   108,    46,   113,   130,   113,
     113,   130,   130,   130,   117,   277,   866,   117,   113,   122,
      98,   124,   113,   126,   127,   128,    58,   120,    43,  1089,
     130,   618,    72,    52,    47,    48,    55,    52,   458,    71,
     618,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   265,  1122,   175,   176,   255,   178,   179,    46,   130,
      51,   274,   184,   113,   960,   187,    88,    43,   701,    46,
     404,    72,    43,   661,  1144,    51,   709,   710,   412,    45,
      71,   129,    83,   129,    72,  1022,  1015,  1022,  1022,  1022,
     182,    43,    58,     3,   116,    72,    45,  1111,    47,    48,
      71,   354,     0,   125,   105,    71,    58,    83,    84,   381,
      43,    43,   113,    43,  1128,    48,    26,    93,    51,   278,
      21,    58,    71,    57,    57,   113,    58,   935,    58,   105,
     106,    57,  1061,   109,    71,  1064,   113,    47,   114,   262,
     116,   394,   265,    47,    48,    58,    52,    51,   558,    55,
      94,   127,   128,    57,   276,    99,   100,    83,    84,    51,
     282,   708,   284,   573,   711,   418,   419,    93,   578,  1065,
     580,    43,    46,   583,   118,    43,    55,    47,    48,   105,
      52,    55,   341,   109,    52,    57,   597,    57,   114,    43,
     116,    55,   780,    55,    43,    83,    84,    51,   320,   843,
     345,   127,    51,   362,    55,    93,    43,   117,    47,    48,
      83,    84,    55,  1096,    51,   345,    43,   105,    57,  1102,
      93,   109,    55,   345,    51,   347,   114,    55,   116,   351,
      55,   588,   105,    43,   144,   357,   109,   147,   826,   127,
     651,   114,   152,   116,    55,   878,    83,    84,    55,    35,
      45,    37,    38,    45,   127,   128,    93,    43,   102,   103,
     848,   128,    48,    71,   174,    51,   110,    71,   105,   106,
     180,    57,   109,    83,    84,    58,   398,   114,   866,   116,
      49,    50,   574,    93,   406,    55,   408,    49,    50,   411,
     127,   128,   414,    55,    55,   105,   106,   569,    51,   109,
     129,   130,   530,    49,   114,   533,   116,   130,   536,   537,
     129,   539,   540,   541,   130,    49,    50,   127,   128,   907,
     908,    55,    45,   129,    21,    49,    50,   130,    57,   129,
      27,    55,    45,    45,   244,    46,   246,   247,    46,   249,
      58,   251,    52,   253,   254,   255,   256,   257,    55,   259,
     260,   261,    43,    52,    55,    55,    85,    86,    51,    55,
     770,   771,   772,    52,    52,    71,    95,   277,    71,    71,
     280,   530,   960,    55,   533,   104,    55,   536,   537,   108,
     539,   540,   541,   293,    51,   973,   639,   600,   117,   799,
     752,   130,   129,   122,   130,   124,   610,    55,    46,   128,
      83,    84,    99,    45,    43,    52,    51,    45,    76,    46,
      93,    44,   551,   552,    44,    83,    84,    52,    71,    71,
     634,    52,   105,   106,   107,    93,   109,  1015,   551,   552,
      51,   114,    45,   116,  1022,   345,   847,   105,   106,   551,
     552,   109,    45,   565,   127,   128,   114,    45,   116,    51,
     360,   704,   863,    45,   364,    51,   116,    21,    46,   127,
     128,    71,   372,   585,   586,   737,    71,   377,    51,   379,
      71,   381,    51,  1061,    57,    51,  1064,  1065,    71,   618,
     603,   178,    57,   393,    45,    52,    46,   610,    58,    55,
     400,   650,    45,    51,   404,   618,    25,    80,    84,    84,
      83,    84,   412,    71,    52,    46,   618,    52,    52,    71,
      93,   634,    51,   672,   424,    45,   927,    51,   428,    88,
      52,    58,   105,  1111,    57,    51,   109,    51,    51,    45,
      58,   114,   691,   116,   691,    99,    71,    55,    51,    51,
    1128,    74,    45,    45,   127,    92,   668,   102,    52,    71,
      83,    84,    85,    86,    52,   252,    71,   254,   255,    46,
      93,   258,    95,   835,   836,   262,   723,    58,    58,    52,
      71,   104,   105,   106,    71,   108,   109,   102,    52,    51,
      45,   114,    71,   116,   117,    51,    57,    54,   152,   122,
      52,   124,   714,   126,   127,   128,   718,    49,    71,   871,
      55,    71,    71,    71,    52,   727,    52,   807,   730,    51,
      71,    71,    52,   735,    52,   828,   738,   739,   740,   741,
     742,   743,   744,   745,   746,   747,   748,   749,   750,    45,
      51,    58,    52,    55,    71,    54,   758,    55,   761,   762,
     763,    52,    55,   766,   844,   555,    54,    52,    54,  1059,
      54,    54,   775,  1029,    71,    91,    71,    71,    20,   569,
     873,   550,   784,   712,   574,   603,   107,   968,   780,   908,
     883,   716,   716,   873,  1013,   262,   759,   866,   588,   956,
     717,   824,   246,   552,   400,   249,   596,   597,   252,   843,
     254,   255,   661,    -1,   258,    57,   606,    -1,   262,   912,
     859,   824,    -1,   826,    -1,    -1,    -1,    -1,    -1,    71,
      72,   621,    -1,    -1,   986,   837,    -1,   839,    -1,    -1,
      -1,    -1,    -1,    85,    86,   848,    -1,   849,   850,   851,
     640,   843,    -1,    95,    -1,    -1,   848,  1009,    -1,   649,
      -1,   651,   104,   865,   106,    -1,   108,   869,    -1,   659,
      -1,   113,    -1,    -1,   866,   117,    -1,    -1,    -1,    -1,
     122,    84,   124,    -1,   126,   127,   128,    -1,    -1,    -1,
      93,    -1,    -1,    -1,   988,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   907,    -1,   109,     3,   910,    -1,
      -1,   114,   951,   116,   951,    -1,   955,  1069,   955,    -1,
      -1,    -1,    -1,    -1,   127,   128,    -1,    -1,    -1,   932,
      26,   933,   722,   935,    -1,   937,   938,   939,    -1,   941,
     942,   966,    -1,    -1,    -1,    -1,    -1,   737,    -1,  1101,
      -1,    -1,    -1,    -1,   956,    -1,    -1,    21,    -1,    -1,
     404,    -1,   752,    27,   966,    -1,    -1,    -1,   412,   759,
      -1,   548,    -1,    -1,   551,   552,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   988,    -1,   989,   990,   991,
     992,   993,   994,   995,   996,   997,   998,   999,  1000,  1001,
    1002,  1003,  1004,  1005,  1006,  1007,    -1,    -1,  1010,  1011,
      -1,  1013,  1015,    -1,  1016,    -1,    -1,    -1,    -1,  1022,
      -1,   117,    -1,   600,    -1,    -1,    -1,    -1,    -1,  1031,
    1022,    -1,    -1,    83,    84,    99,    -1,    -1,    -1,   829,
      -1,   618,    -1,    93,    -1,   835,   836,    -1,   144,    -1,
      -1,    -1,    -1,  1055,    -1,   105,   106,   847,  1061,   109,
      -1,  1064,    -1,    -1,   114,    -1,   116,  1070,    -1,    -1,
    1072,    -1,    -1,   863,  1076,    -1,  1078,   127,   128,  1081,
      -1,   871,    -1,    -1,   180,    -1,    -1,  1089,   152,    -1,
      -1,   881,    -1,    -1,  1096,    -1,  1098,   887,    -1,    -1,
    1102,    -1,    -1,    -1,   548,    -1,    -1,   551,   552,    -1,
      -1,  1113,  1114,    -1,   178,    -1,    -1,    -1,    -1,    -1,
    1122,  1123,  1124,  1125,  1127,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   927,  1141,   929,
     930,   931,  1144,    -1,    -1,    -1,    -1,    -1,   244,    -1,
      -1,   247,    -1,    -1,    -1,   251,   600,   253,   254,   255,
     256,   257,    -1,   259,   260,   261,    31,    32,    33,    34,
      35,    -1,    37,    38,    -1,    -1,    57,    -1,    43,    -1,
      -1,    21,   246,    48,   280,   249,    51,    27,   252,    -1,
     254,   255,    57,    -1,   258,   985,   986,   293,   262,    -1,
      81,    -1,    -1,   780,    85,    86,    -1,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    95,    -1,    -1,   661,    -1,  1009,
      -1,    -1,    -1,   104,    -1,   106,    -1,   108,    -1,    -1,
     807,    -1,    -1,   810,    -1,    -1,   117,    -1,  1028,    -1,
      -1,   122,    -1,   124,    -1,   126,   127,   128,    -1,   345,
      -1,   828,    -1,    -1,    -1,    -1,    57,    -1,    -1,    99,
      -1,    -1,    -1,    -1,   360,    -1,   843,   844,   364,    -1,
      -1,   848,   716,    -1,    -1,    -1,   372,    -1,    -1,  1069,
      -1,   377,    -1,   379,    85,    86,    -1,    -1,    -1,   866,
      -1,    -1,    -1,    -1,    95,    -1,   873,   393,    31,    32,
      -1,    -1,    -1,   104,    -1,   106,   883,   108,   752,    42,
      -1,  1101,   152,    46,    -1,    -1,   117,    -1,    51,    -1,
      53,   122,    -1,   124,    57,   126,   127,   128,   424,    -1,
      -1,    -1,   428,   910,    -1,   912,    -1,    -1,   178,    -1,
     404,    -1,    -1,  1133,    -1,    78,    79,    80,   412,    -1,
      83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      93,    -1,    95,   807,   941,    -1,   810,    -1,    -1,    -1,
      -1,    -1,   105,    -1,    -1,    -1,   109,    -1,    -1,   956,
      -1,   114,    -1,   116,   828,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   127,   128,   129,   130,    51,   843,
     844,    -1,    -1,    -1,    57,    -1,   246,    -1,    -1,   249,
      -1,    -1,   252,    -1,   254,   255,    -1,    -1,   258,    72,
      -1,    -1,   262,    -1,    -1,    -1,    -1,    80,    -1,   873,
      83,    84,    85,    86,    -1,    -1,  1013,    -1,    -1,   883,
      93,    -1,    95,    -1,    57,  1022,    -1,    -1,    -1,    -1,
      -1,   104,   105,   106,    -1,   108,   109,    -1,    -1,   555,
     113,   114,    -1,   116,   117,    -1,    -1,    -1,   912,   122,
      -1,   124,    85,    86,   127,   128,    -1,    -1,   574,    -1,
      -1,    -1,    95,    -1,   548,    -1,    -1,   551,   552,    -1,
      82,   104,   588,   106,    -1,   108,    88,    -1,    90,    -1,
     596,   597,    94,    -1,   117,    97,    -1,    99,   100,   122,
     606,   124,  1089,    31,    32,   128,   960,   109,    36,   111,
     112,    -1,    -1,    -1,    42,   621,   118,    45,    -1,   973,
      -1,   123,    -1,    51,    -1,    53,   600,    -1,    -1,    57,
      -1,    -1,    -1,    -1,   640,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   649,   618,   651,    74,    -1,    76,    -1,
      78,    79,    80,   659,   404,    83,    84,    85,    86,    -1,
      -1,    -1,   412,    -1,    -1,    93,    -1,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,    -1,
     108,   109,    -1,    -1,    -1,    -1,   114,    -1,   116,   117,
      -1,    -1,    31,    32,   122,    -1,   124,    36,   126,   127,
     128,   129,   130,    42,    -1,    -1,    45,    46,    -1,    -1,
      -1,  1065,    51,    -1,    53,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    -1,    78,
      79,    80,   716,    -1,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    91,   759,    93,    -1,    95,  1111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,    57,    -1,    -1,
     109,    -1,    -1,    -1,  1128,   114,    -1,   116,   752,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,
     129,   130,    -1,    83,    84,    85,    86,    -1,   548,    -1,
      -1,   551,   552,    93,    -1,    95,   780,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   104,   105,   106,    -1,   108,   109,
      -1,    -1,    -1,   829,   114,    -1,   116,   117,    -1,    -1,
      -1,    -1,   122,   807,   124,    -1,   810,   127,   128,    -1,
      -1,   847,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     600,    -1,   826,    -1,   828,    -1,    -1,   863,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   618,   843,
     844,    26,    -1,    -1,   848,   881,    31,    32,    33,    34,
      35,   887,    37,    38,    39,    40,    41,    -1,    43,    -1,
      -1,    -1,   866,    48,    -1,    50,    51,    -1,    -1,   873,
      31,    32,    57,    -1,    -1,    36,    -1,    -1,    -1,   883,
      -1,    42,    -1,    -1,    45,    -1,    -1,    -1,    73,    -1,
      51,   927,    53,   929,   930,   931,    57,    -1,    -1,    -1,
      -1,    -1,    -1,   907,   908,    -1,   910,    -1,   912,    -1,
      -1,    -1,    -1,    74,    -1,    76,    -1,    78,    79,    80,
      -1,    -1,    83,    84,    85,    86,    -1,    -1,    -1,    -1,
      91,    -1,    93,    -1,    95,    -1,    -1,   941,    -1,    -1,
      -1,    -1,    -1,   104,   105,   106,    -1,   108,   109,   985,
      -1,    -1,   956,   114,    -1,   116,   117,    -1,    -1,    -1,
      -1,   122,    -1,   124,    -1,    -1,   127,   128,   129,   130,
      -1,    -1,   752,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1028,    -1,    71,    72,    -1,    -1,    -1,    -1,
     780,    -1,    -1,    80,    -1,    -1,    83,    84,    -1,  1013,
      87,  1015,    89,    -1,    -1,    -1,    93,    -1,  1022,    96,
      -1,    -1,    -1,    -1,   101,    -1,    -1,   807,   105,    -1,
     810,    -1,   109,    -1,    -1,    -1,   113,   114,   115,   116,
      -1,    -1,   119,    -1,    -1,    -1,   826,    -1,   828,    -1,
     127,   128,    -1,    -1,    -1,    -1,    -1,  1061,    -1,    -1,
    1064,    31,    32,   843,   844,    -1,    36,    -1,   848,    -1,
      -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    53,    -1,  1089,   866,    57,    -1,    -1,
      -1,    -1,    -1,   873,    -1,    -1,    -1,  1133,    -1,    -1,
      -1,    -1,    -1,   883,    -1,    -1,    76,    -1,    78,    79,
      80,    -1,    -1,    83,    84,    85,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    93,    -1,    95,    -1,   907,    -1,    -1,
     910,    -1,   912,    -1,   104,   105,   106,    -1,   108,   109,
      -1,    -1,    -1,    -1,   114,    -1,   116,   117,    -1,    -1,
      -1,    -1,   122,    -1,   124,    -1,    -1,   127,   128,   129,
     130,   941,    -1,    31,    32,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    42,    -1,   956,    45,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    53,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    -1,
      78,    79,    80,    -1,    -1,    83,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    93,    -1,    95,    -1,    -1,
      -1,    -1,    -1,  1013,    -1,  1015,    -1,   105,   106,    -1,
      -1,   109,  1022,    -1,    -1,    -1,   114,    -1,   116,    43,
      -1,    -1,    -1,    47,    48,    -1,    50,    51,    -1,   127,
     128,   129,   130,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    -1,    -1,
      -1,  1061,    -1,    -1,  1064,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,  1089,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    -1,    53,    54,    55,    56,
      57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,    31,    32,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    53,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    -1,    78,
      79,    80,    -1,    -1,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    93,    -1,    95,    -1,    31,    32,
      -1,    -1,    -1,    36,    -1,    -1,   105,    -1,    -1,    42,
     109,    -1,    45,    -1,    -1,   114,    -1,   116,    51,    -1,
      53,    -1,    -1,    -1,    57,    -1,    -1,    -1,   127,   128,
     129,   130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    76,    -1,    78,    79,    80,    -1,    -1,
      83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      93,    -1,    95,    -1,    31,    32,    -1,    -1,    -1,    36,
      -1,    -1,   105,    -1,    -1,    42,   109,    -1,    45,    -1,
      -1,   114,    -1,   116,    51,    -1,    53,    -1,    -1,    -1,
      57,    -1,    -1,    -1,   127,   128,   129,   130,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,
      -1,    78,    79,    80,    -1,    -1,    83,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    93,    -1,    95,    -1,
      31,    32,    -1,    -1,    -1,    36,    -1,    -1,   105,    -1,
      -1,    42,   109,    -1,    45,    -1,    -1,   114,    -1,   116,
      51,    -1,    53,    -1,    -1,    -1,    57,    -1,    -1,    -1,
     127,   128,   129,   130,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    -1,    78,    79,    80,
      -1,    -1,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    93,    -1,    95,    -1,    31,    32,    -1,    -1,
      -1,    36,    -1,    -1,   105,   106,    -1,    42,   109,    -1,
      45,    -1,    -1,   114,    -1,   116,    51,    -1,    53,    -1,
      -1,    -1,    57,    -1,    -1,    -1,   127,   128,   129,   130,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    76,    -1,    78,    79,    80,    -1,    -1,    83,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,
      95,    -1,    31,    32,    -1,    -1,    -1,    36,    -1,    -1,
     105,    -1,    -1,    42,   109,    -1,    45,    -1,    -1,   114,
      -1,   116,    51,    -1,    53,    54,    -1,    -1,    57,    -1,
      -1,    -1,   127,   128,   129,   130,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    78,
      79,    80,    -1,    -1,    83,    84,    -1,    31,    32,    -1,
      -1,    -1,    36,    -1,    93,    -1,    95,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,    -1,   105,    51,    -1,    53,
     109,    -1,    -1,    57,    -1,   114,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,   127,   128,
     129,   130,    76,    -1,    78,    79,    80,    -1,    -1,    83,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,
      -1,    95,    -1,    31,    32,    -1,    -1,    -1,    36,    -1,
      -1,   105,    -1,    -1,    42,   109,    -1,    45,    -1,    -1,
     114,    -1,   116,    51,    -1,    53,    54,    -1,    -1,    57,
      -1,    -1,    -1,   127,   128,   129,   130,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      78,    79,    80,    -1,    -1,    83,    84,    -1,    31,    32,
      -1,    -1,    -1,    36,    -1,    93,    -1,    95,    -1,    42,
      -1,    -1,    45,    46,    -1,    -1,    -1,   105,    51,    -1,
      53,   109,    -1,    -1,    57,    -1,   114,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,
     128,   129,   130,    76,    -1,    78,    79,    80,    -1,    -1,
      83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    95,    -1,    31,    32,    -1,    -1,    -1,    36,
      -1,    -1,   105,    -1,    -1,    42,   109,    -1,    45,    -1,
      -1,   114,    -1,   116,    51,    -1,    53,    54,    -1,    -1,
      57,    -1,    -1,    -1,   127,   128,   129,   130,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      -1,    78,    79,    80,    -1,    -1,    83,    84,    -1,    31,
      32,    -1,    -1,    -1,    36,    -1,    93,    -1,    95,    -1,
      42,    -1,    -1,    45,    -1,    -1,    -1,    -1,   105,    51,
      -1,    53,   109,    -1,    -1,    57,    -1,   114,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     127,   128,   129,   130,    76,    -1,    78,    79,    80,    -1,
      -1,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    95,    -1,    46,    -1,    -1,    -1,    -1,
      51,    -1,    -1,   105,    -1,    -1,    57,   109,    -1,    -1,
      -1,    -1,   114,    -1,   116,    -1,    -1,    -1,    -1,    -1,
      71,    72,    -1,    -1,    -1,   127,   128,   129,   130,    80,
      -1,    -1,    83,    84,    85,    86,    87,    -1,    89,    -1,
      -1,    -1,    93,    -1,    95,    96,    -1,    -1,    -1,    -1,
     101,    -1,    -1,   104,   105,   106,    46,   108,   109,    -1,
      -1,    51,   113,   114,   115,   116,   117,    57,   119,    -1,
      -1,   122,    -1,   124,    -1,    -1,   127,   128,    -1,    -1,
      -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    84,    85,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    93,    -1,    95,    -1,    -1,    -1,    -1,
      -1,   101,    -1,    -1,   104,   105,   106,    46,   108,   109,
      -1,    -1,    51,   113,   114,    -1,   116,   117,    57,    -1,
      -1,   121,   122,    -1,   124,    -1,    -1,   127,   128,    -1,
      -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    83,    84,    85,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    93,    -1,    95,    -1,    -1,    -1,
      -1,    -1,   101,    -1,    57,   104,   105,   106,    -1,   108,
     109,    -1,    -1,    -1,   113,   114,    -1,   116,   117,    -1,
      -1,    57,    -1,   122,    -1,   124,    -1,    -1,   127,   128,
      83,    84,    85,    86,    -1,    -1,    72,    -1,    -1,    -1,
      93,    -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,   104,   105,   106,    -1,   108,   109,    -1,    -1,    95,
      -1,   114,    -1,   116,   117,    -1,    -1,    57,   104,   122,
     106,   124,   108,   126,   127,   128,    -1,   113,    -1,    -1,
      -1,   117,    72,    -1,    57,    -1,   122,    -1,   124,    -1,
     126,   127,   128,    -1,    84,    85,    86,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,   104,    -1,   106,    -1,   108,    -1,
      -1,    -1,    95,   113,    -1,    -1,    -1,   117,    -1,    -1,
      -1,   104,   122,   106,   124,   108,    -1,    -1,   128,    -1,
     113,    -1,    -1,    -1,   117,    -1,    -1,    -1,    -1,   122,
      -1,   124,    74,    -1,    -1,   128,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,    -1,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    -1,    43,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    -1,    -1,    -1,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    75,    -1,
      77,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    -1,
      43,    -1,    -1,    -1,    47,    48,    49,    50,    51,    -1,
      -1,    -1,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    -1,    75,    -1,    77,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    -1,    47,    48,
      49,    50,    51,    -1,    -1,    -1,    -1,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    77,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    47,    48,    49,    50,    51,    -1,    -1,    54,
      -1,    56,    57,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    73,    37,
      38,    39,    40,    41,    -1,    43,    44,    -1,    -1,    47,
      48,    49,    50,    51,    -1,    -1,    54,    -1,    56,    57,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    73,    37,    38,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    47,    48,    49,    50,
      51,    -1,    -1,    54,    -1,    56,    57,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    73,    37,    38,    39,    40,    41,    -1,    43,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    -1,    -1,
      -1,    55,    56,    57,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    73,
      37,    38,    39,    40,    41,    -1,    43,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    -1,    -1,    -1,    55,    56,
      57,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    73,    37,    38,    39,
      40,    41,    -1,    43,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    -1,    -1,    -1,    56,    57,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    73,    37,    38,    39,    40,    41,    -1,
      43,    -1,    -1,    -1,    47,    48,    49,    50,    51,    -1,
      -1,    54,    -1,    56,    57,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      73,    37,    38,    39,    40,    41,    -1,    43,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    -1,    -1,    -1,    55,
      56,    57,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    73,    37,    38,
      39,    40,    41,    -1,    43,    44,    -1,    -1,    47,    48,
      49,    50,    51,    -1,    -1,    -1,    -1,    56,    57,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    73,    37,    38,    39,    40,    41,
      -1,    43,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,    -1,    -1,    -1,    56,    57,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    73,    37,    38,    39,    40,    41,    -1,    43,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    52,    -1,    -1,
      -1,    56,    57,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    73,    37,
      38,    39,    40,    41,    -1,    43,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    52,    -1,    -1,    -1,    56,    57,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    73,    37,    38,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    47,    48,    49,    50,
      51,    -1,    -1,    -1,    -1,    56,    57,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    73,    37,    38,    39,    40,    41,    -1,    43,
      44,    -1,    -1,    47,    48,    49,    50,    51,    -1,    -1,
      -1,    -1,    56,    57,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    73,
      37,    38,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      47,    48,    49,    50,    51,    -1,    -1,    -1,    -1,    56,
      57,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    73,    37,    38,    39,
      40,    41,    -1,    43,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    -1,    -1,    -1,    -1,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    73,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    -1,    43,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    -1,    -1,    -1,    56,    57,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    73,    37,    38,    39,    40,    41,    -1,
      43,    -1,    -1,    -1,    47,    48,    49,    50,    51,    52,
      -1,    -1,    -1,    56,    57,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      73,    37,    38,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    47,    48,    49,    50,    51,    -1,    -1,    -1,    -1,
      56,    57,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    73,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    -1,    47,    48,
      49,    50,    51,    52,    -1,    -1,    -1,    56,    57,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    73,    37,    38,    39,    40,    41,
      -1,    43,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,    -1,    -1,    -1,    56,    57,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    73,    37,    38,    39,    40,    41,    -1,    43,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    52,    -1,    -1,
      -1,    56,    57,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    73,    37,
      38,    39,    40,    41,    -1,    43,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    -1,    -1,    -1,    -1,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    73,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    -1,    43,    44,    -1,    -1,    47,
      48,    49,    50,    51,    -1,    -1,    -1,    -1,    56,    57,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    73,    37,    38,    39,    40,
      41,    -1,    43,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    -1,    -1,    54,    -1,    56,    57,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    73,    37,    38,    39,    40,    41,    -1,    43,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    -1,
      -1,    -1,    56,    57,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    73,
      37,    38,    39,    40,    41,    -1,    43,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    -1,    -1,    54,    -1,    56,
      57,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    73,    37,    38,    39,
      40,    41,    -1,    43,    44,    -1,    -1,    47,    48,    49,
      50,    51,    -1,    -1,    -1,    -1,    56,    57,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    73,    37,    38,    39,    40,    41,    -1,
      43,    44,    -1,    -1,    47,    48,    49,    50,    51,    -1,
      -1,    -1,    -1,    56,    57,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      73,    37,    38,    39,    40,    41,    -1,    43,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    -1,    -1,    -1,    55,
      56,    57,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    73,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    -1,    47,    48,
      49,    50,    51,    -1,    -1,    -1,    55,    56,    57,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    73,    37,    38,    39,    40,    41,
      -1,    43,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,    -1,    -1,    -1,    56,    57,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    73,    37,    38,    39,    40,    41,    -1,    43,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    -1,    -1,    -1,
      -1,    56,    57,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    73,    37,
      38,    39,    40,    41,    -1,    43,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    -1,    -1,    -1,    -1,    56,    57,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    73,    37,    38,    39,    40,
      41,    -1,    43,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    -1,    24,    25,    26,    27,    57,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      -1,    43,    73,    -1,    -1,    47,    48,    49,    50,    51,
      -1,    24,    25,    26,    -1,    57,    29,    30,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    -1,
      43,    73,    -1,    -1,    47,    48,    49,    50,    51,    24,
      25,    26,    -1,    -1,    57,    -1,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    -1,    43,    -1,
      73,    -1,    47,    48,    49,    50,    51,    -1,    26,    -1,
      -1,    -1,    57,    31,    32,    33,    34,    35,    -1,    37,
      38,    -1,    40,    41,    -1,    43,    -1,    -1,    73,    26,
      48,    -1,    50,    51,    31,    32,    33,    34,    35,    57,
      37,    38,    -1,    40,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    73,    26,    -1,    -1,    -1,
      57,    31,    32,    33,    34,    35,    -1,    37,    38,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    73,    -1,    48,    -1,
      50,    51,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19
  };

  const short
  P4Parser::yystos_[] =
  {
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,   134,   135,
     137,   138,    31,    32,    36,    42,    45,    51,    53,    57,
      76,    78,    79,    80,    83,    84,    93,    95,   105,   109,
     114,   116,   127,   128,   129,   130,   140,   165,   206,   207,
     208,   212,   291,   292,   296,   106,   128,   140,   141,   150,
     151,   130,   299,   129,   130,   298,   300,   129,   301,   296,
     130,   298,   129,   296,   130,   129,   296,   130,   129,   129,
       0,    21,    20,    71,    72,    85,    86,    95,   104,   106,
     108,   113,   117,   122,   124,   126,   127,   139,   144,   145,
     146,   156,   159,   165,   166,   169,   191,   192,   198,   202,
     205,   208,   209,   210,   211,   212,   213,   214,   222,   223,
     225,   228,   231,   236,   241,   242,   244,   280,   283,   287,
     296,   296,   296,   128,   140,   150,   291,    95,   108,   205,
     208,   212,   296,   296,    57,   128,   140,    51,    47,    48,
      57,   293,   302,    55,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    37,    38,    39,    40,
      41,    43,    49,    50,    51,    56,    73,   293,   302,    58,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    74,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   148,   302,    45,   302,   302,    45,   148,   302,
     302,    82,    88,    90,    94,    97,    99,   100,   109,   111,
     112,   118,   123,    95,   146,   202,   205,    71,    51,    71,
     164,    71,   164,   144,   145,   255,    43,    51,   141,    71,
      55,   186,    55,   186,    52,    52,   141,    74,   141,   288,
     289,   290,   296,   294,    74,   126,   140,   205,   218,   219,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
      49,   288,   296,   296,    74,   126,   205,   220,   221,   296,
     296,   151,   130,   298,   129,   296,   130,   129,   296,   130,
     129,    86,   117,   130,   136,    43,    51,    51,   130,   141,
     243,    51,   130,   218,   243,   147,   219,    51,   130,   141,
     205,   141,   106,   141,   205,   127,   140,   141,   202,   205,
     141,   141,   205,   141,   141,   141,   144,   205,   223,   224,
     255,    51,   144,   152,   153,   154,    45,    45,    45,   296,
     288,   215,   216,   302,    76,    46,    46,   296,    58,    52,
      55,   141,    49,    50,    55,   303,    31,    44,    54,   296,
      52,    54,    55,   303,    55,    55,    55,   302,   150,   291,
     147,   296,   303,    46,    55,   296,   303,   303,    55,   186,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    53,
      54,    55,    56,    57,    58,    71,    72,    73,    74,    75,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   149,   303,   296,   303,    51,   141,   284,
     193,   237,   141,   199,    71,    71,   226,   232,   284,   157,
     170,   229,   284,   284,   288,   102,   103,   110,   155,    52,
      55,   167,   195,   256,    44,    52,   203,   141,   217,    55,
     186,    74,   296,   290,   218,    54,   296,   296,   218,    51,
     296,   130,   129,   130,    55,   186,   186,    52,    52,   141,
      52,    46,   147,    52,   152,    43,    58,   215,    45,   238,
     215,   215,   215,   215,   215,   215,    52,   205,   154,   144,
     145,   159,   168,   172,   173,   190,   205,   281,   282,   283,
      84,   144,   159,   196,   270,   280,   281,   283,   257,   141,
      51,    55,   303,    46,   296,    44,   288,   303,    44,    44,
     303,   303,    52,   303,    52,   296,   286,   296,   194,   243,
      45,   200,   227,   233,   158,   171,   230,   141,   284,   116,
     125,   205,    46,   144,   173,   284,    71,   197,   255,   120,
      46,    51,    71,    80,    87,    89,    96,   101,   115,   119,
     144,   159,   208,   212,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   258,   262,   263,   281,   283,
     292,   295,    58,    71,   152,   141,    44,    52,   255,    44,
      71,    51,   186,   141,   239,   240,    45,    45,    45,    51,
      51,    45,    58,    71,    58,   141,   302,   284,    58,   285,
      46,   141,   165,   295,    71,    71,    71,    51,    71,   296,
      51,    98,    57,    57,    71,    43,    50,    51,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,   293,   302,    45,   160,    52,   152,    46,    58,    55,
     186,   201,   234,   234,   152,   152,   234,   160,   296,   174,
     208,   210,   213,   285,   286,    45,    52,   296,    71,   296,
      51,    84,    84,   296,    25,   288,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   219,
     161,    71,    52,   286,   240,    46,    46,   144,   204,    46,
     144,   235,    46,    52,    52,    46,    71,    45,   303,   303,
     303,    83,   105,   144,   271,   272,    52,    52,   145,   205,
     246,   264,   265,   266,   282,    51,    51,    31,    44,    54,
     296,    52,   303,   162,    81,   128,   202,   205,   175,    51,
      51,    51,    58,    58,    88,   143,    46,   272,   144,   208,
     212,   254,    45,   205,   141,    71,    55,   288,   288,    54,
     296,    51,    46,   145,   159,   163,   287,   202,    51,    71,
     284,   121,   144,   145,   176,   177,   179,   205,   245,   247,
     250,   253,   281,   283,   296,   296,   296,    45,    45,    84,
      93,   109,   114,   116,   127,   128,   142,    92,   259,   141,
     102,   296,   145,   266,    52,    52,   296,    44,   288,    71,
     152,    71,   107,   141,   180,   181,    45,   205,    46,    52,
      52,    52,   275,   273,    58,    58,   254,    31,    32,    42,
      46,    51,    53,    78,    79,    80,    91,    95,   129,   130,
     206,   208,   260,   261,   292,   297,   102,   205,   269,   296,
      71,    71,    71,    44,    52,    52,    51,    71,   178,   141,
     141,   141,    46,   144,    46,   274,   296,    45,   286,   296,
     296,   296,   205,   296,   296,    57,    51,   293,    54,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    37,    38,    39,    40,    41,    43,    49,    50,    51,
      56,    73,   293,   302,   269,    52,    77,   246,   267,   268,
      71,   291,   175,    71,    71,    71,   276,   292,    54,   279,
      71,    52,    52,   141,   288,   255,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,    49,   288,   296,   296,   221,
     296,    52,   254,   296,    52,    55,    52,    46,    71,    51,
     141,    46,   143,   277,   296,    52,    31,    44,    54,   296,
      52,    54,   303,   254,   254,   246,    45,   288,   144,    51,
      74,    91,   114,   184,   185,   189,   278,   296,    54,   296,
     296,    51,   182,    52,    71,    74,    91,   188,   189,   296,
      58,    54,   184,    75,    77,   296,    44,   288,    46,   183,
     184,    52,    55,    75,    77,    51,   130,   276,    54,   296,
     296,    44,    52,    54,   187,   189,   296,   296,   296,    54,
     144,   276,   141,    52,    55,    52,    71,   144,    71,   189,
      54,    71
  };

  const short
  P4Parser::yyr1_[] =
  {
       0,   133,   134,   134,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     136,   136,   136,   137,   138,   138,   138,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   140,   140,   140,
     140,   140,   140,   140,   140,   141,   141,   141,   142,   142,
     142,   142,   142,   142,   143,   143,   144,   144,   145,   145,
     146,   146,   146,   146,   146,   147,   147,   147,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     150,   150,   151,   152,   152,   153,   153,   154,   154,   155,
     155,   155,   155,   157,   158,   156,   159,   159,   159,   159,
     161,   160,   162,   162,   163,   163,   164,   164,   165,   166,
     167,   167,   168,   168,   168,   168,   170,   171,   169,   172,
     172,   174,   173,   175,   175,   176,   176,   176,   176,   176,
     176,   176,   178,   177,   179,   179,   180,   180,   181,   182,
     182,   183,   184,   184,   185,   185,   186,   186,   187,   187,
     188,   188,   188,   188,   189,   189,   189,   189,   189,   190,
     190,   190,   191,   193,   194,   192,   195,   195,   196,   196,
     196,   196,   196,   197,   199,   200,   198,   198,   198,   201,
     201,   203,   202,   204,   204,   204,   205,   205,   205,   205,
     205,   205,   206,   206,   207,   207,   208,   209,   210,   211,
     212,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   214,   214,   214,   215,   215,   216,   217,
     217,   218,   218,   218,   218,   219,   219,   219,   220,   220,
     220,   221,   221,   222,   222,   222,   222,   222,   223,   223,
     223,   223,   224,   226,   227,   225,   229,   230,   228,   232,
     233,   231,   234,   234,   235,   237,   236,   238,   236,   239,
     239,   240,   241,   242,   243,   243,   244,   244,   244,   245,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   247,   248,   249,   249,
     250,   250,   251,   252,   253,   253,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   256,   255,   257,
     257,   258,   259,   259,   260,   260,   261,   261,   262,   262,
     262,   262,   263,   263,   263,   264,   264,   265,   265,   266,
     266,   267,   267,   268,   268,   269,   269,   269,   270,   271,
     271,   272,   272,   272,   272,   273,   273,   274,   275,   275,
     276,   276,   277,   277,   278,   278,   279,   279,   280,   281,
     282,   282,   283,   284,   284,   285,   285,   286,   287,   287,
     288,   288,   289,   289,   290,   290,   290,   290,   291,   291,
     291,   292,   292,   294,   293,   295,   295,   295,   295,   295,
     295,   295,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   298,   298,   299,   299,   300,   300,   301,
     301,   302,   302,   303,   303
  };

  const signed char
  P4Parser::yyr2_[] =
  {
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     4,     4,     4,     6,     6,     6,     4,
       1,     4,     1,     2,     0,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     0,     1,     1,     2,
       2,     5,     6,     6,     4,     0,     4,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     0,     1,     1,     3,     4,     6,     1,
       1,     1,     0,     0,     0,     9,     7,     6,     9,     8,
       0,     4,     0,     2,     1,     1,     0,     3,     1,     6,
       0,     2,     1,     1,     1,     1,     0,     0,     9,     1,
       2,     0,     8,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     0,     5,     0,     2,     2,     1,     7,     0,
       2,     4,     1,     1,     5,     3,     0,     1,     1,     3,
       3,     3,     1,     1,     1,     3,     3,     1,     1,    10,
      10,    10,     7,     0,     0,     9,     0,     2,     1,     1,
       1,     1,     1,     1,     0,     0,     9,     4,     4,     0,
       2,     0,     7,     3,     4,     6,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     4,     4,     4,
       4,     1,     1,     1,     1,     1,     1,     4,     4,     4,
       6,     6,     6,     1,     1,     1,     0,     1,     3,     1,
       3,     1,     1,     1,     1,     0,     1,     3,     1,     1,
       1,     1,     3,     1,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     0,     0,     9,     0,     0,     9,     0,
       0,     9,     0,     2,     4,     0,     8,     0,     9,     1,
       3,     3,     4,     5,     1,     3,     4,     4,     4,     2,
       4,     7,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     4,     3,     3,     3,     1,     2,     2,     3,
       5,     7,     2,     2,     7,     7,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     5,     0,
       2,     7,     0,     2,     3,     2,     1,     1,     1,     1,
       1,     1,    10,     9,    10,     0,     1,     1,     3,     1,
       1,     0,     1,     1,     3,     1,     3,     1,     6,     1,
       2,     5,     5,     7,     6,     0,     2,     5,     0,     4,
       1,     4,     7,     6,     4,     6,     0,     2,     7,     2,
       4,     3,     7,     1,     4,     0,     2,     1,     3,     2,
       0,     1,     1,     3,     1,     3,     1,     3,     0,     1,
       3,     1,     2,     0,     3,     1,     1,     2,     4,     6,
       7,     3,     1,     1,     1,     1,     1,     1,     1,     4,
       6,     7,     4,     1,     4,     6,     3,     2,     2,     2,
       2,     2,     3,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     4,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     5,     7,     4,     4,     4,
       1,     1,     1,     1,     1,     1,     4,     6,     7,     3,
       2,     2,     2,     2,     2,     3,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     5,     7,
       4,     4,     4,     1,     1,     1,     3,     1,     3,     1,
       3,     1,     1,     1,     1
  };


#if YYDEBUG || 1
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const P4Parser::yytname_[] =
  {
  "\"end of file\"", "error", "\"invalid token\"", "START_PROGRAM",
  "START_EXPRESSION_LIST", "START_KV_LIST", "START_INTEGER_LIST",
  "START_INTEGER_OR_STRING_LITERAL_LIST", "START_STRING_LITERAL_LIST",
  "START_EXPRESSION", "START_INTEGER", "START_INTEGER_OR_STRING_LITERAL",
  "START_STRING_LITERAL", "START_EXPRESSION_PAIR", "START_INTEGER_PAIR",
  "START_STRING_LITERAL_PAIR", "START_EXPRESSION_TRIPLE",
  "START_INTEGER_TRIPLE", "START_STRING_LITERAL_TRIPLE",
  "START_P4RT_TRANSLATION_ANNOTATION", "END", "END_ANNOTATION",
  "UNEXPECTED_TOKEN", "END_PRAGMA", "\"<=\"", "\">=\"", "\"<<\"", "\"&&\"",
  "\"||\"", "\"!=\"", "\"==\"", "\"+\"", "\"-\"", "\"|+|\"", "\"|-|\"",
  "\"*\"", "\"{#}\"", "\"/\"", "\"%\"", "\"|\"", "\"&\"", "\"^\"", "\"~\"",
  "\"[\"", "\"]\"", "\"{\"", "\"}\"", "\"<\"", "L_ANGLE_ARGS", "\">\"",
  "R_ANGLE_SHIFT", "\"(\"", "\")\"", "\"!\"", "\":\"", "\",\"", "\"?\"",
  "\".\"", "\"=\"", "\"+=\"", "\"-=\"", "\"*=\"", "\"/=\"", "\"%=\"",
  "\"&=\"", "\"|=\"", "\"^=\"", "\"<<=\"", "\">>=\"", "\"|+|=\"",
  "\"|-|=\"", "\";\"", "\"@\"", "\"++\"", "\"_\"", "\"&&&\"", "\"...\"",
  "\"..\"", "TRUE", "FALSE", "THIS", "ABSTRACT", "ACTION", "ACTIONS",
  "APPLY", "BOOL", "BIT", "BREAK", "CONST", "CONTINUE", "CONTROL",
  "DEFAULT", "ELSE", "ENTRIES", "ENUM", "ERROR", "EXIT", "EXTERN", "FOR",
  "HEADER", "HEADER_UNION", "IF", "IN", "INOUT", "INT", "KEY", "LIST",
  "SELECT", "MATCH_KIND", "TYPE", "OUT", "PACKAGE", "PARSER", "PRAGMA",
  "PRIORITY", "RETURN", "STATE", "STRING", "STRUCT", "SWITCH", "TABLE",
  "TRANSITION", "TUPLE", "TYPEDEF", "VARBIT", "VALUESET", "VOID",
  "IDENTIFIER", "TYPE_IDENTIFIER", "STRING_LITERAL", "INTEGER", "PREFIX",
  "THEN", "$accept", "start", "fragment", "p4rtControllerType", "program",
  "input", "declaration", "nonTypeName", "name", "nonTableKwName",
  "optCONST", "optAnnotations", "annotations", "annotation",
  "annotationBody", "annotationName", "annotationToken", "kvList",
  "kvPair", "parameterList", "nonEmptyParameterList", "parameter",
  "direction", "packageTypeDeclaration", "$@1", "$@2", "instantiation",
  "objInitializer", "$@3", "objDeclarations", "objDeclaration",
  "optConstructorParameters", "dotPrefix", "parserDeclaration",
  "parserLocalElements", "parserLocalElement", "parserTypeDeclaration",
  "$@4", "$@5", "parserStates", "parserState", "$@6", "parserStatements",
  "parserStatement", "parserBlockStatement", "$@7", "transitionStatement",
  "stateExpression", "selectExpression", "selectCaseList", "selectCase",
  "keysetExpression", "tupleKeysetExpression", "optTrailingComma",
  "simpleExpressionList", "reducedSimpleKeysetExpression",
  "simpleKeysetExpression", "valueSetDeclaration", "controlDeclaration",
  "controlTypeDeclaration", "$@8", "$@9", "controlLocalDeclarations",
  "controlLocalDeclaration", "controlBody", "externDeclaration", "$@10",
  "$@11", "methodPrototypes", "functionPrototype", "$@12",
  "methodPrototype", "typeRef", "namedType", "prefixedType", "typeName",
  "p4listType", "tupleType", "headerStackType", "specializedType",
  "baseType", "typeOrVoid", "optTypeParameters", "typeParameters",
  "typeParameterList", "typeArg", "typeArgumentList", "realTypeArg",
  "realTypeArgumentList", "typeDeclaration", "derivedTypeDeclaration",
  "derivedTypeDeclarationAsType", "headerTypeDeclaration", "$@13", "$@14",
  "structTypeDeclaration", "$@15", "$@16", "headerUnionDeclaration",
  "$@17", "$@18", "structFieldList", "structField", "enumDeclaration",
  "$@19", "$@20", "specifiedIdentifierList", "specifiedIdentifier",
  "errorDeclaration", "matchKindDeclaration", "identifierList",
  "typedefDeclaration", "assignmentOrMethodCallStatement",
  "assignmentOrMethodCallStatementWithoutSemicolon", "emptyStatement",
  "exitStatement", "returnStatement", "conditionalStatement",
  "breakStatement", "continueStatement", "directApplication", "statement",
  "blockStatement", "$@21", "statOrDeclList", "switchStatement",
  "switchCases", "switchCase", "switchLabel", "statementOrDeclaration",
  "forStatement", "forInitStatements", "forInitStatementsNonEmpty",
  "declOrAssignmentOrMethodCallStatement", "forUpdateStatements",
  "forUpdateStatementsNonEmpty", "forCollectionExpr", "tableDeclaration",
  "tablePropertyList", "tableProperty", "keyElementList", "keyElement",
  "actionList", "actionRef", "entry", "entryPriority", "entriesList",
  "actionDeclaration", "variableDeclaration",
  "variableDeclarationWithoutSemicolon", "constantDeclaration",
  "declarator", "optInitializer", "initializer", "functionDeclaration",
  "argumentList", "nonEmptyArgList", "argument", "expressionList",
  "prefixedNonTypeName", "dot_name", "$@22", "lvalue", "expression",
  "nonBraceExpression", "intOrStr", "intList", "intOrStrList", "strList",
  "l_angle", "r_angle", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const short
  P4Parser::yyrline_[] =
  {
       0,   400,   400,   401,   406,   407,   408,   409,   410,   413,
     414,   415,   416,   419,   425,   431,   439,   446,   453,   463,
     476,   478,   481,   485,   488,   489,   490,   494,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   507,   508,   509,
     510,   511,   512,   513,   514,   518,   519,   520,   524,   525,
     526,   527,   528,   529,   533,   534,   538,   539,   543,   549,
     558,   563,   565,   567,   571,   576,   577,   584,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   609,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,   627,   628,   629,   630,   631,   632,   633,
     634,   635,   636,   637,   638,   639,   640,   641,   642,   646,
     647,   648,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   680,   681,   682,   683,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   697,
     698,   699,   700,   702,   703,   704,   705,   706,   707,   708,
     709,   710,   711,   713,   714,   715,   716,   717,   718,   719,
     721,   722,   723,   724,   731,   732,   733,   734,   735,   736,
     737,   738,   740,   741,   742,   743,   744,   745,   746,   747,
     751,   752,   756,   760,   761,   765,   767,   771,   773,   778,
     779,   780,   781,   785,   786,   785,   796,   800,   803,   807,
     813,   813,   819,   820,   824,   825,   829,   830,   834,   840,
     849,   850,   854,   855,   856,   857,   862,   863,   861,   871,
     873,   877,   877,   884,   885,   889,   890,   891,   892,   893,
     894,   895,   899,   899,   904,   905,   909,   910,   914,   920,
     921,   925,   931,   932,   936,   938,   942,   943,   947,   948,
     953,   954,   955,   956,   960,   961,   962,   963,   964,   968,
     971,   974,   982,   991,   992,   990,  1000,  1001,  1005,  1006,
    1007,  1008,  1009,  1013,  1020,  1021,  1019,  1025,  1029,  1037,
    1038,  1043,  1042,  1055,  1058,  1062,  1071,  1072,  1073,  1074,
    1075,  1076,  1080,  1081,  1085,  1086,  1091,  1095,  1099,  1103,
    1107,  1111,  1112,  1113,  1114,  1115,  1116,  1117,  1119,  1121,
    1124,  1126,  1128,  1133,  1134,  1135,  1140,  1141,  1145,  1149,
    1151,  1155,  1156,  1158,  1159,  1163,  1164,  1165,  1169,  1170,
    1171,  1177,  1178,  1182,  1183,  1184,  1185,  1186,  1190,  1191,
    1192,  1193,  1199,  1203,  1203,  1203,  1211,  1211,  1211,  1219,
    1219,  1219,  1227,  1228,  1232,  1237,  1236,  1239,  1239,  1247,
    1249,  1253,  1257,  1262,  1267,  1269,  1274,  1277,  1280,  1288,
    1293,  1298,  1303,  1306,  1308,  1310,  1312,  1314,  1316,  1318,
    1320,  1322,  1324,  1326,  1328,  1330,  1335,  1339,  1343,  1344,
    1348,  1350,  1355,  1359,  1364,  1369,  1377,  1378,  1379,  1380,
    1381,  1382,  1383,  1384,  1385,  1386,  1387,  1391,  1391,  1397,
    1398,  1402,  1407,  1408,  1412,  1413,  1417,  1418,  1422,  1423,
    1424,  1429,  1433,  1438,  1441,  1447,  1448,  1452,  1453,  1458,
    1459,  1463,  1464,  1468,  1470,  1475,  1476,  1477,  1483,  1489,
    1491,  1495,  1499,  1503,  1507,  1514,  1515,  1519,  1525,  1526,
    1531,  1533,  1538,  1549,  1563,  1564,  1568,  1569,  1575,  1583,
    1587,  1590,  1596,  1602,  1603,  1608,  1609,  1613,  1619,  1622,
    1628,  1629,  1633,  1635,  1639,  1640,  1641,  1642,  1646,  1647,
    1649,  1653,  1654,  1659,  1659,  1664,  1665,  1666,  1667,  1668,
    1669,  1670,  1674,  1675,  1676,  1677,  1678,  1679,  1680,  1681,
    1682,  1684,  1686,  1687,  1688,  1690,  1697,  1698,  1699,  1700,
    1701,  1702,  1704,  1707,  1708,  1709,  1710,  1711,  1712,  1713,
    1714,  1715,  1716,  1718,  1719,  1720,  1722,  1723,  1724,  1725,
    1726,  1727,  1728,  1729,  1730,  1731,  1732,  1734,  1736,  1738,
    1742,  1743,  1744,  1745,  1746,  1747,  1748,  1749,  1751,  1753,
    1754,  1755,  1756,  1757,  1758,  1760,  1763,  1764,  1765,  1766,
    1767,  1768,  1769,  1770,  1771,  1772,  1774,  1775,  1776,  1778,
    1779,  1780,  1781,  1782,  1783,  1784,  1785,  1786,  1787,  1788,
    1790,  1792,  1794,  1798,  1799,  1803,  1806,  1812,  1815,  1821,
    1824,  1829,  1829,  1830,  1830
  };

  void
  P4Parser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  P4Parser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


#line 23 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"
} // P4
#line 10176 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.cpp"

#line 1834 "/media/t/scratch/p4/p4c/frontends/parsers/p4/p4parser.ypp"


namespace P4 {

void P4Parser::error(const Util::SourceInfo& location,
                     const std::string& message) {
    driver.onParseError(location, message);
}

}  // namespace P4

#pragma GCC diagnostic pop
