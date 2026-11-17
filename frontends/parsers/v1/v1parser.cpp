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
#line 121 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
 /* -*-C++-*- */
#include <iostream>  // NOLINT(build/include_order)

#include "frontends/parsers/parserDriver.h"
#include "frontends/parsers/v1/v1lexer.hpp"
#include "frontends/parsers/v1/v1parser.hpp"
#include "ir/ir.h"

using namespace P4;

#define YYLLOC_DEFAULT(Cur, Rhs, N)                                             \
    ((Cur) = (N) ? YYRHSLOC(Rhs, 1) + YYRHSLOC(Rhs, N)                          \
                 : Util::SourceInfo(driver.sources, YYRHSLOC(Rhs, 0).getEnd()))

#undef yylex
#define yylex lexer.yylex

namespace P4 {

static const IR::Expression *removeRedundantValid(const IR::Expression *e);

}  // namespace P4



#line 67 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"


#include "v1parser.hpp"




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

#line 23 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
namespace P4 { namespace V1 {
#line 165 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"

  /// Build a parser object.
  V1Parser::V1Parser (P4::V1::V1ParserDriver& driver_yyarg, P4::V1::V1Lexer& lexer_yyarg)
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      driver (driver_yyarg),
      lexer (lexer_yyarg)
  {}

  V1Parser::~V1Parser ()
  {}

  V1Parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------.
  | symbol.  |
  `---------*/



  // by_state.
  V1Parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  V1Parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  V1Parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  V1Parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  V1Parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  V1Parser::symbol_kind_type
  V1Parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  V1Parser::stack_symbol_type::stack_symbol_type ()
  {}

  V1Parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_opt_field_modifiers: // opt_field_modifiers
      case symbol_kind::S_attributes: // attributes
      case symbol_kind::S_attrib: // attrib
        value.YY_MOVE_OR_COPY< Attributes > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_blackbox_body: // blackbox_body
        value.YY_MOVE_OR_COPY< BBoxType > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_case_value: // case_value
        value.YY_MOVE_OR_COPY< CaseValue > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_bit_width: // bit_width
      case symbol_kind::S_type: // type
        value.YY_MOVE_OR_COPY< ConstType* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_header_dec_body: // header_dec_body
      case symbol_kind::S_field_declarations: // field_declarations
        value.YY_MOVE_OR_COPY< HeaderType > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_action_function_body: // action_function_body
      case symbol_kind::S_action_statement_list: // action_statement_list
        value.YY_MOVE_OR_COPY< IR::ActionFunction* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_action_profile_body: // action_profile_body
        value.YY_MOVE_OR_COPY< IR::ActionProfile* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_action_selector_body: // action_selector_body
        value.YY_MOVE_OR_COPY< IR::ActionSelector* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_apply_case_list: // apply_case_list
        value.YY_MOVE_OR_COPY< IR::Apply* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_local_var: // local_var
        value.YY_MOVE_OR_COPY< IR::AttribLocal* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_opt_locals_list: // opt_locals_list
      case symbol_kind::S_locals_list: // locals_list
        value.YY_MOVE_OR_COPY< IR::AttribLocals* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_blackbox_attribute: // blackbox_attribute
        value.YY_MOVE_OR_COPY< IR::Attribute* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_update_verify_spec_list: // update_verify_spec_list
        value.YY_MOVE_OR_COPY< IR::CalculatedField* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_case_value_list: // case_value_list
        value.YY_MOVE_OR_COPY< IR::CaseEntry* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_const_expression: // const_expression
        value.YY_MOVE_OR_COPY< IR::Constant* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_counter_spec_list: // counter_spec_list
        value.YY_MOVE_OR_COPY< IR::Counter* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_inout: // inout
        value.YY_MOVE_OR_COPY< IR::Direction > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_opt_condition: // opt_condition
      case symbol_kind::S_field_or_masked_ref: // field_or_masked_ref
      case symbol_kind::S_pragma_operand: // pragma_operand
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_header_or_field_ref: // header_or_field_ref
      case symbol_kind::S_header_ref: // header_ref
        value.YY_MOVE_OR_COPY< IR::Expression* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_field_list_entries: // field_list_entries
        value.YY_MOVE_OR_COPY< IR::FieldList* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_field_list_calculation_body: // field_list_calculation_body
        value.YY_MOVE_OR_COPY< IR::FieldListCalculation* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_name: // name
        value.YY_MOVE_OR_COPY< IR::ID > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_field_ref: // field_ref
        value.YY_MOVE_OR_COPY< IR::Member* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_meter_spec_list: // meter_spec_list
        value.YY_MOVE_OR_COPY< IR::Meter* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_field_list_list: // field_list_list
      case symbol_kind::S_name_list: // name_list
      case symbol_kind::S_opt_name_list: // opt_name_list
      case symbol_kind::S_action_list: // action_list
        value.YY_MOVE_OR_COPY< IR::NameList* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_blackbox_config: // blackbox_config
        value.YY_MOVE_OR_COPY< IR::NameMap<IR::Property>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_argument: // argument
        value.YY_MOVE_OR_COPY< IR::Parameter* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_opt_argument_list: // opt_argument_list
      case symbol_kind::S_argument_list: // argument_list
        value.YY_MOVE_OR_COPY< IR::ParameterList* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_register_spec_list: // register_spec_list
        value.YY_MOVE_OR_COPY< IR::Register* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_parser_statement_list: // parser_statement_list
        value.YY_MOVE_OR_COPY< IR::V1Parser* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_table_body: // table_body
        value.YY_MOVE_OR_COPY< IR::V1Table* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_blackbox_method: // blackbox_method
        value.YY_MOVE_OR_COPY< IR::Vector<IR::Annotation>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_case_entry_list: // case_entry_list
        value.YY_MOVE_OR_COPY< IR::Vector<IR::CaseEntry>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_field_match_list: // field_match_list
      case symbol_kind::S_control_statement_list: // control_statement_list
      case symbol_kind::S_control_statement: // control_statement
      case symbol_kind::S_expressions: // expressions
      case symbol_kind::S_pragma_operands: // pragma_operands
      case symbol_kind::S_expression_list: // expression_list
      case symbol_kind::S_opt_expression_list: // opt_expression_list
        value.YY_MOVE_OR_COPY< IR::Vector<IR::Expression>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INTEGER: // INTEGER
        value.YY_MOVE_OR_COPY< UnparsedConstant > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_ACTION: // ACTION
      case symbol_kind::S_ACTIONS: // ACTIONS
      case symbol_kind::S_ACTION_PROFILE: // ACTION_PROFILE
      case symbol_kind::S_ACTION_SELECTOR: // ACTION_SELECTOR
      case symbol_kind::S_ALGORITHM: // ALGORITHM
      case symbol_kind::S_APPLY: // APPLY
      case symbol_kind::S_ATTRIBUTE: // ATTRIBUTE
      case symbol_kind::S_ATTRIBUTES: // ATTRIBUTES
      case symbol_kind::S_BIT: // BIT
      case symbol_kind::S_BLACKBOX: // BLACKBOX
      case symbol_kind::S_BLACKBOX_TYPE: // BLACKBOX_TYPE
      case symbol_kind::S_BLOCK: // BLOCK
      case symbol_kind::S_BOOL: // BOOL
      case symbol_kind::S_CALCULATED_FIELD: // CALCULATED_FIELD
      case symbol_kind::S_CONTROL: // CONTROL
      case symbol_kind::S_COUNTER: // COUNTER
      case symbol_kind::S_CONST: // CONST
      case symbol_kind::S_CURRENT: // CURRENT
      case symbol_kind::S_DEFAULT: // DEFAULT
      case symbol_kind::S_DEFAULT_ACTION: // DEFAULT_ACTION
      case symbol_kind::S_DIRECT: // DIRECT
      case symbol_kind::S_DROP: // DROP
      case symbol_kind::S_DYNAMIC_ACTION_SELECTION: // DYNAMIC_ACTION_SELECTION
      case symbol_kind::S_ELSE: // ELSE
      case symbol_kind::S_EXTRACT: // EXTRACT
      case symbol_kind::S_EXPRESSION: // EXPRESSION
      case symbol_kind::S_EXPRESSION_LOCAL_VARIABLES: // EXPRESSION_LOCAL_VARIABLES
      case symbol_kind::S_FALSE: // FALSE
      case symbol_kind::S_FIELD_LIST: // FIELD_LIST
      case symbol_kind::S_FIELD_LIST_CALCULATION: // FIELD_LIST_CALCULATION
      case symbol_kind::S_FIELDS: // FIELDS
      case symbol_kind::S_HEADER: // HEADER
      case symbol_kind::S_HEADER_TYPE: // HEADER_TYPE
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_IMPLEMENTATION: // IMPLEMENTATION
      case symbol_kind::S_IN: // IN
      case symbol_kind::S_INPUT: // INPUT
      case symbol_kind::S_INSTANCE_COUNT: // INSTANCE_COUNT
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_LATEST: // LATEST
      case symbol_kind::S_LAYOUT: // LAYOUT
      case symbol_kind::S_LENGTH: // LENGTH
      case symbol_kind::S_MASK: // MASK
      case symbol_kind::S_MAX_LENGTH: // MAX_LENGTH
      case symbol_kind::S_MAX_SIZE: // MAX_SIZE
      case symbol_kind::S_MAX_WIDTH: // MAX_WIDTH
      case symbol_kind::S_METADATA: // METADATA
      case symbol_kind::S_METER: // METER
      case symbol_kind::S_METHOD: // METHOD
      case symbol_kind::S_MIN_SIZE: // MIN_SIZE
      case symbol_kind::S_MIN_WIDTH: // MIN_WIDTH
      case symbol_kind::S_OPTIONAL: // OPTIONAL
      case symbol_kind::S_OUT: // OUT
      case symbol_kind::S_OUTPUT_WIDTH: // OUTPUT_WIDTH
      case symbol_kind::S_PARSE_ERROR: // PARSE_ERROR
      case symbol_kind::S_PARSER: // PARSER
      case symbol_kind::S_PARSER_VALUE_SET: // PARSER_VALUE_SET
      case symbol_kind::S_PARSER_EXCEPTION: // PARSER_EXCEPTION
      case symbol_kind::S_PAYLOAD: // PAYLOAD
      case symbol_kind::S_PRAGMA: // PRAGMA
      case symbol_kind::S_PREFIX: // PREFIX
      case symbol_kind::S_PRE_COLOR: // PRE_COLOR
      case symbol_kind::S_PRIMITIVE_ACTION: // PRIMITIVE_ACTION
      case symbol_kind::S_READS: // READS
      case symbol_kind::S_REGISTER: // REGISTER
      case symbol_kind::S_RESULT: // RESULT
      case symbol_kind::S_RETURN: // RETURN
      case symbol_kind::S_SATURATING: // SATURATING
      case symbol_kind::S_SELECT: // SELECT
      case symbol_kind::S_SELECTION_KEY: // SELECTION_KEY
      case symbol_kind::S_SELECTION_MODE: // SELECTION_MODE
      case symbol_kind::S_SELECTION_TYPE: // SELECTION_TYPE
      case symbol_kind::S_SET_METADATA: // SET_METADATA
      case symbol_kind::S_SIGNED: // SIGNED
      case symbol_kind::S_SIZE: // SIZE
      case symbol_kind::S_STATIC: // STATIC
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_TABLE: // TABLE
      case symbol_kind::S_TRUE: // TRUE
      case symbol_kind::S_TYPE: // TYPE
      case symbol_kind::S_UPDATE: // UPDATE
      case symbol_kind::S_VALID: // VALID
      case symbol_kind::S_VERIFY: // VERIFY
      case symbol_kind::S_WIDTH: // WIDTH
      case symbol_kind::S_WRITES: // WRITES
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
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

  V1Parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_opt_field_modifiers: // opt_field_modifiers
      case symbol_kind::S_attributes: // attributes
      case symbol_kind::S_attrib: // attrib
        value.move< Attributes > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_blackbox_body: // blackbox_body
        value.move< BBoxType > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_case_value: // case_value
        value.move< CaseValue > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_bit_width: // bit_width
      case symbol_kind::S_type: // type
        value.move< ConstType* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_header_dec_body: // header_dec_body
      case symbol_kind::S_field_declarations: // field_declarations
        value.move< HeaderType > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_action_function_body: // action_function_body
      case symbol_kind::S_action_statement_list: // action_statement_list
        value.move< IR::ActionFunction* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_action_profile_body: // action_profile_body
        value.move< IR::ActionProfile* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_action_selector_body: // action_selector_body
        value.move< IR::ActionSelector* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_apply_case_list: // apply_case_list
        value.move< IR::Apply* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_local_var: // local_var
        value.move< IR::AttribLocal* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_opt_locals_list: // opt_locals_list
      case symbol_kind::S_locals_list: // locals_list
        value.move< IR::AttribLocals* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_blackbox_attribute: // blackbox_attribute
        value.move< IR::Attribute* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_update_verify_spec_list: // update_verify_spec_list
        value.move< IR::CalculatedField* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_case_value_list: // case_value_list
        value.move< IR::CaseEntry* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_const_expression: // const_expression
        value.move< IR::Constant* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_counter_spec_list: // counter_spec_list
        value.move< IR::Counter* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_inout: // inout
        value.move< IR::Direction > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_opt_condition: // opt_condition
      case symbol_kind::S_field_or_masked_ref: // field_or_masked_ref
      case symbol_kind::S_pragma_operand: // pragma_operand
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_header_or_field_ref: // header_or_field_ref
      case symbol_kind::S_header_ref: // header_ref
        value.move< IR::Expression* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_field_list_entries: // field_list_entries
        value.move< IR::FieldList* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_field_list_calculation_body: // field_list_calculation_body
        value.move< IR::FieldListCalculation* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_name: // name
        value.move< IR::ID > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_field_ref: // field_ref
        value.move< IR::Member* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_meter_spec_list: // meter_spec_list
        value.move< IR::Meter* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_field_list_list: // field_list_list
      case symbol_kind::S_name_list: // name_list
      case symbol_kind::S_opt_name_list: // opt_name_list
      case symbol_kind::S_action_list: // action_list
        value.move< IR::NameList* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_blackbox_config: // blackbox_config
        value.move< IR::NameMap<IR::Property>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_argument: // argument
        value.move< IR::Parameter* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_opt_argument_list: // opt_argument_list
      case symbol_kind::S_argument_list: // argument_list
        value.move< IR::ParameterList* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_register_spec_list: // register_spec_list
        value.move< IR::Register* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_parser_statement_list: // parser_statement_list
        value.move< IR::V1Parser* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_table_body: // table_body
        value.move< IR::V1Table* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_blackbox_method: // blackbox_method
        value.move< IR::Vector<IR::Annotation>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_case_entry_list: // case_entry_list
        value.move< IR::Vector<IR::CaseEntry>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_field_match_list: // field_match_list
      case symbol_kind::S_control_statement_list: // control_statement_list
      case symbol_kind::S_control_statement: // control_statement
      case symbol_kind::S_expressions: // expressions
      case symbol_kind::S_pragma_operands: // pragma_operands
      case symbol_kind::S_expression_list: // expression_list
      case symbol_kind::S_opt_expression_list: // opt_expression_list
        value.move< IR::Vector<IR::Expression>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INTEGER: // INTEGER
        value.move< UnparsedConstant > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_ACTION: // ACTION
      case symbol_kind::S_ACTIONS: // ACTIONS
      case symbol_kind::S_ACTION_PROFILE: // ACTION_PROFILE
      case symbol_kind::S_ACTION_SELECTOR: // ACTION_SELECTOR
      case symbol_kind::S_ALGORITHM: // ALGORITHM
      case symbol_kind::S_APPLY: // APPLY
      case symbol_kind::S_ATTRIBUTE: // ATTRIBUTE
      case symbol_kind::S_ATTRIBUTES: // ATTRIBUTES
      case symbol_kind::S_BIT: // BIT
      case symbol_kind::S_BLACKBOX: // BLACKBOX
      case symbol_kind::S_BLACKBOX_TYPE: // BLACKBOX_TYPE
      case symbol_kind::S_BLOCK: // BLOCK
      case symbol_kind::S_BOOL: // BOOL
      case symbol_kind::S_CALCULATED_FIELD: // CALCULATED_FIELD
      case symbol_kind::S_CONTROL: // CONTROL
      case symbol_kind::S_COUNTER: // COUNTER
      case symbol_kind::S_CONST: // CONST
      case symbol_kind::S_CURRENT: // CURRENT
      case symbol_kind::S_DEFAULT: // DEFAULT
      case symbol_kind::S_DEFAULT_ACTION: // DEFAULT_ACTION
      case symbol_kind::S_DIRECT: // DIRECT
      case symbol_kind::S_DROP: // DROP
      case symbol_kind::S_DYNAMIC_ACTION_SELECTION: // DYNAMIC_ACTION_SELECTION
      case symbol_kind::S_ELSE: // ELSE
      case symbol_kind::S_EXTRACT: // EXTRACT
      case symbol_kind::S_EXPRESSION: // EXPRESSION
      case symbol_kind::S_EXPRESSION_LOCAL_VARIABLES: // EXPRESSION_LOCAL_VARIABLES
      case symbol_kind::S_FALSE: // FALSE
      case symbol_kind::S_FIELD_LIST: // FIELD_LIST
      case symbol_kind::S_FIELD_LIST_CALCULATION: // FIELD_LIST_CALCULATION
      case symbol_kind::S_FIELDS: // FIELDS
      case symbol_kind::S_HEADER: // HEADER
      case symbol_kind::S_HEADER_TYPE: // HEADER_TYPE
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_IMPLEMENTATION: // IMPLEMENTATION
      case symbol_kind::S_IN: // IN
      case symbol_kind::S_INPUT: // INPUT
      case symbol_kind::S_INSTANCE_COUNT: // INSTANCE_COUNT
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_LATEST: // LATEST
      case symbol_kind::S_LAYOUT: // LAYOUT
      case symbol_kind::S_LENGTH: // LENGTH
      case symbol_kind::S_MASK: // MASK
      case symbol_kind::S_MAX_LENGTH: // MAX_LENGTH
      case symbol_kind::S_MAX_SIZE: // MAX_SIZE
      case symbol_kind::S_MAX_WIDTH: // MAX_WIDTH
      case symbol_kind::S_METADATA: // METADATA
      case symbol_kind::S_METER: // METER
      case symbol_kind::S_METHOD: // METHOD
      case symbol_kind::S_MIN_SIZE: // MIN_SIZE
      case symbol_kind::S_MIN_WIDTH: // MIN_WIDTH
      case symbol_kind::S_OPTIONAL: // OPTIONAL
      case symbol_kind::S_OUT: // OUT
      case symbol_kind::S_OUTPUT_WIDTH: // OUTPUT_WIDTH
      case symbol_kind::S_PARSE_ERROR: // PARSE_ERROR
      case symbol_kind::S_PARSER: // PARSER
      case symbol_kind::S_PARSER_VALUE_SET: // PARSER_VALUE_SET
      case symbol_kind::S_PARSER_EXCEPTION: // PARSER_EXCEPTION
      case symbol_kind::S_PAYLOAD: // PAYLOAD
      case symbol_kind::S_PRAGMA: // PRAGMA
      case symbol_kind::S_PREFIX: // PREFIX
      case symbol_kind::S_PRE_COLOR: // PRE_COLOR
      case symbol_kind::S_PRIMITIVE_ACTION: // PRIMITIVE_ACTION
      case symbol_kind::S_READS: // READS
      case symbol_kind::S_REGISTER: // REGISTER
      case symbol_kind::S_RESULT: // RESULT
      case symbol_kind::S_RETURN: // RETURN
      case symbol_kind::S_SATURATING: // SATURATING
      case symbol_kind::S_SELECT: // SELECT
      case symbol_kind::S_SELECTION_KEY: // SELECTION_KEY
      case symbol_kind::S_SELECTION_MODE: // SELECTION_MODE
      case symbol_kind::S_SELECTION_TYPE: // SELECTION_TYPE
      case symbol_kind::S_SET_METADATA: // SET_METADATA
      case symbol_kind::S_SIGNED: // SIGNED
      case symbol_kind::S_SIZE: // SIZE
      case symbol_kind::S_STATIC: // STATIC
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_TABLE: // TABLE
      case symbol_kind::S_TRUE: // TRUE
      case symbol_kind::S_TYPE: // TYPE
      case symbol_kind::S_UPDATE: // UPDATE
      case symbol_kind::S_VALID: // VALID
      case symbol_kind::S_VERIFY: // VERIFY
      case symbol_kind::S_WIDTH: // WIDTH
      case symbol_kind::S_WRITES: // WRITES
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
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
  V1Parser::stack_symbol_type&
  V1Parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_opt_field_modifiers: // opt_field_modifiers
      case symbol_kind::S_attributes: // attributes
      case symbol_kind::S_attrib: // attrib
        value.copy< Attributes > (that.value);
        break;

      case symbol_kind::S_blackbox_body: // blackbox_body
        value.copy< BBoxType > (that.value);
        break;

      case symbol_kind::S_case_value: // case_value
        value.copy< CaseValue > (that.value);
        break;

      case symbol_kind::S_bit_width: // bit_width
      case symbol_kind::S_type: // type
        value.copy< ConstType* > (that.value);
        break;

      case symbol_kind::S_header_dec_body: // header_dec_body
      case symbol_kind::S_field_declarations: // field_declarations
        value.copy< HeaderType > (that.value);
        break;

      case symbol_kind::S_action_function_body: // action_function_body
      case symbol_kind::S_action_statement_list: // action_statement_list
        value.copy< IR::ActionFunction* > (that.value);
        break;

      case symbol_kind::S_action_profile_body: // action_profile_body
        value.copy< IR::ActionProfile* > (that.value);
        break;

      case symbol_kind::S_action_selector_body: // action_selector_body
        value.copy< IR::ActionSelector* > (that.value);
        break;

      case symbol_kind::S_apply_case_list: // apply_case_list
        value.copy< IR::Apply* > (that.value);
        break;

      case symbol_kind::S_local_var: // local_var
        value.copy< IR::AttribLocal* > (that.value);
        break;

      case symbol_kind::S_opt_locals_list: // opt_locals_list
      case symbol_kind::S_locals_list: // locals_list
        value.copy< IR::AttribLocals* > (that.value);
        break;

      case symbol_kind::S_blackbox_attribute: // blackbox_attribute
        value.copy< IR::Attribute* > (that.value);
        break;

      case symbol_kind::S_update_verify_spec_list: // update_verify_spec_list
        value.copy< IR::CalculatedField* > (that.value);
        break;

      case symbol_kind::S_case_value_list: // case_value_list
        value.copy< IR::CaseEntry* > (that.value);
        break;

      case symbol_kind::S_const_expression: // const_expression
        value.copy< IR::Constant* > (that.value);
        break;

      case symbol_kind::S_counter_spec_list: // counter_spec_list
        value.copy< IR::Counter* > (that.value);
        break;

      case symbol_kind::S_inout: // inout
        value.copy< IR::Direction > (that.value);
        break;

      case symbol_kind::S_opt_condition: // opt_condition
      case symbol_kind::S_field_or_masked_ref: // field_or_masked_ref
      case symbol_kind::S_pragma_operand: // pragma_operand
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_header_or_field_ref: // header_or_field_ref
      case symbol_kind::S_header_ref: // header_ref
        value.copy< IR::Expression* > (that.value);
        break;

      case symbol_kind::S_field_list_entries: // field_list_entries
        value.copy< IR::FieldList* > (that.value);
        break;

      case symbol_kind::S_field_list_calculation_body: // field_list_calculation_body
        value.copy< IR::FieldListCalculation* > (that.value);
        break;

      case symbol_kind::S_name: // name
        value.copy< IR::ID > (that.value);
        break;

      case symbol_kind::S_field_ref: // field_ref
        value.copy< IR::Member* > (that.value);
        break;

      case symbol_kind::S_meter_spec_list: // meter_spec_list
        value.copy< IR::Meter* > (that.value);
        break;

      case symbol_kind::S_field_list_list: // field_list_list
      case symbol_kind::S_name_list: // name_list
      case symbol_kind::S_opt_name_list: // opt_name_list
      case symbol_kind::S_action_list: // action_list
        value.copy< IR::NameList* > (that.value);
        break;

      case symbol_kind::S_blackbox_config: // blackbox_config
        value.copy< IR::NameMap<IR::Property>* > (that.value);
        break;

      case symbol_kind::S_argument: // argument
        value.copy< IR::Parameter* > (that.value);
        break;

      case symbol_kind::S_opt_argument_list: // opt_argument_list
      case symbol_kind::S_argument_list: // argument_list
        value.copy< IR::ParameterList* > (that.value);
        break;

      case symbol_kind::S_register_spec_list: // register_spec_list
        value.copy< IR::Register* > (that.value);
        break;

      case symbol_kind::S_parser_statement_list: // parser_statement_list
        value.copy< IR::V1Parser* > (that.value);
        break;

      case symbol_kind::S_table_body: // table_body
        value.copy< IR::V1Table* > (that.value);
        break;

      case symbol_kind::S_blackbox_method: // blackbox_method
        value.copy< IR::Vector<IR::Annotation>* > (that.value);
        break;

      case symbol_kind::S_case_entry_list: // case_entry_list
        value.copy< IR::Vector<IR::CaseEntry>* > (that.value);
        break;

      case symbol_kind::S_field_match_list: // field_match_list
      case symbol_kind::S_control_statement_list: // control_statement_list
      case symbol_kind::S_control_statement: // control_statement
      case symbol_kind::S_expressions: // expressions
      case symbol_kind::S_pragma_operands: // pragma_operands
      case symbol_kind::S_expression_list: // expression_list
      case symbol_kind::S_opt_expression_list: // opt_expression_list
        value.copy< IR::Vector<IR::Expression>* > (that.value);
        break;

      case symbol_kind::S_INTEGER: // INTEGER
        value.copy< UnparsedConstant > (that.value);
        break;

      case symbol_kind::S_ACTION: // ACTION
      case symbol_kind::S_ACTIONS: // ACTIONS
      case symbol_kind::S_ACTION_PROFILE: // ACTION_PROFILE
      case symbol_kind::S_ACTION_SELECTOR: // ACTION_SELECTOR
      case symbol_kind::S_ALGORITHM: // ALGORITHM
      case symbol_kind::S_APPLY: // APPLY
      case symbol_kind::S_ATTRIBUTE: // ATTRIBUTE
      case symbol_kind::S_ATTRIBUTES: // ATTRIBUTES
      case symbol_kind::S_BIT: // BIT
      case symbol_kind::S_BLACKBOX: // BLACKBOX
      case symbol_kind::S_BLACKBOX_TYPE: // BLACKBOX_TYPE
      case symbol_kind::S_BLOCK: // BLOCK
      case symbol_kind::S_BOOL: // BOOL
      case symbol_kind::S_CALCULATED_FIELD: // CALCULATED_FIELD
      case symbol_kind::S_CONTROL: // CONTROL
      case symbol_kind::S_COUNTER: // COUNTER
      case symbol_kind::S_CONST: // CONST
      case symbol_kind::S_CURRENT: // CURRENT
      case symbol_kind::S_DEFAULT: // DEFAULT
      case symbol_kind::S_DEFAULT_ACTION: // DEFAULT_ACTION
      case symbol_kind::S_DIRECT: // DIRECT
      case symbol_kind::S_DROP: // DROP
      case symbol_kind::S_DYNAMIC_ACTION_SELECTION: // DYNAMIC_ACTION_SELECTION
      case symbol_kind::S_ELSE: // ELSE
      case symbol_kind::S_EXTRACT: // EXTRACT
      case symbol_kind::S_EXPRESSION: // EXPRESSION
      case symbol_kind::S_EXPRESSION_LOCAL_VARIABLES: // EXPRESSION_LOCAL_VARIABLES
      case symbol_kind::S_FALSE: // FALSE
      case symbol_kind::S_FIELD_LIST: // FIELD_LIST
      case symbol_kind::S_FIELD_LIST_CALCULATION: // FIELD_LIST_CALCULATION
      case symbol_kind::S_FIELDS: // FIELDS
      case symbol_kind::S_HEADER: // HEADER
      case symbol_kind::S_HEADER_TYPE: // HEADER_TYPE
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_IMPLEMENTATION: // IMPLEMENTATION
      case symbol_kind::S_IN: // IN
      case symbol_kind::S_INPUT: // INPUT
      case symbol_kind::S_INSTANCE_COUNT: // INSTANCE_COUNT
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_LATEST: // LATEST
      case symbol_kind::S_LAYOUT: // LAYOUT
      case symbol_kind::S_LENGTH: // LENGTH
      case symbol_kind::S_MASK: // MASK
      case symbol_kind::S_MAX_LENGTH: // MAX_LENGTH
      case symbol_kind::S_MAX_SIZE: // MAX_SIZE
      case symbol_kind::S_MAX_WIDTH: // MAX_WIDTH
      case symbol_kind::S_METADATA: // METADATA
      case symbol_kind::S_METER: // METER
      case symbol_kind::S_METHOD: // METHOD
      case symbol_kind::S_MIN_SIZE: // MIN_SIZE
      case symbol_kind::S_MIN_WIDTH: // MIN_WIDTH
      case symbol_kind::S_OPTIONAL: // OPTIONAL
      case symbol_kind::S_OUT: // OUT
      case symbol_kind::S_OUTPUT_WIDTH: // OUTPUT_WIDTH
      case symbol_kind::S_PARSE_ERROR: // PARSE_ERROR
      case symbol_kind::S_PARSER: // PARSER
      case symbol_kind::S_PARSER_VALUE_SET: // PARSER_VALUE_SET
      case symbol_kind::S_PARSER_EXCEPTION: // PARSER_EXCEPTION
      case symbol_kind::S_PAYLOAD: // PAYLOAD
      case symbol_kind::S_PRAGMA: // PRAGMA
      case symbol_kind::S_PREFIX: // PREFIX
      case symbol_kind::S_PRE_COLOR: // PRE_COLOR
      case symbol_kind::S_PRIMITIVE_ACTION: // PRIMITIVE_ACTION
      case symbol_kind::S_READS: // READS
      case symbol_kind::S_REGISTER: // REGISTER
      case symbol_kind::S_RESULT: // RESULT
      case symbol_kind::S_RETURN: // RETURN
      case symbol_kind::S_SATURATING: // SATURATING
      case symbol_kind::S_SELECT: // SELECT
      case symbol_kind::S_SELECTION_KEY: // SELECTION_KEY
      case symbol_kind::S_SELECTION_MODE: // SELECTION_MODE
      case symbol_kind::S_SELECTION_TYPE: // SELECTION_TYPE
      case symbol_kind::S_SET_METADATA: // SET_METADATA
      case symbol_kind::S_SIGNED: // SIGNED
      case symbol_kind::S_SIZE: // SIZE
      case symbol_kind::S_STATIC: // STATIC
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_TABLE: // TABLE
      case symbol_kind::S_TRUE: // TRUE
      case symbol_kind::S_TYPE: // TYPE
      case symbol_kind::S_UPDATE: // UPDATE
      case symbol_kind::S_VALID: // VALID
      case symbol_kind::S_VERIFY: // VERIFY
      case symbol_kind::S_WIDTH: // WIDTH
      case symbol_kind::S_WRITES: // WRITES
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_STRING_LITERAL: // STRING_LITERAL
        value.copy< cstring > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }

  V1Parser::stack_symbol_type&
  V1Parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_opt_field_modifiers: // opt_field_modifiers
      case symbol_kind::S_attributes: // attributes
      case symbol_kind::S_attrib: // attrib
        value.move< Attributes > (that.value);
        break;

      case symbol_kind::S_blackbox_body: // blackbox_body
        value.move< BBoxType > (that.value);
        break;

      case symbol_kind::S_case_value: // case_value
        value.move< CaseValue > (that.value);
        break;

      case symbol_kind::S_bit_width: // bit_width
      case symbol_kind::S_type: // type
        value.move< ConstType* > (that.value);
        break;

      case symbol_kind::S_header_dec_body: // header_dec_body
      case symbol_kind::S_field_declarations: // field_declarations
        value.move< HeaderType > (that.value);
        break;

      case symbol_kind::S_action_function_body: // action_function_body
      case symbol_kind::S_action_statement_list: // action_statement_list
        value.move< IR::ActionFunction* > (that.value);
        break;

      case symbol_kind::S_action_profile_body: // action_profile_body
        value.move< IR::ActionProfile* > (that.value);
        break;

      case symbol_kind::S_action_selector_body: // action_selector_body
        value.move< IR::ActionSelector* > (that.value);
        break;

      case symbol_kind::S_apply_case_list: // apply_case_list
        value.move< IR::Apply* > (that.value);
        break;

      case symbol_kind::S_local_var: // local_var
        value.move< IR::AttribLocal* > (that.value);
        break;

      case symbol_kind::S_opt_locals_list: // opt_locals_list
      case symbol_kind::S_locals_list: // locals_list
        value.move< IR::AttribLocals* > (that.value);
        break;

      case symbol_kind::S_blackbox_attribute: // blackbox_attribute
        value.move< IR::Attribute* > (that.value);
        break;

      case symbol_kind::S_update_verify_spec_list: // update_verify_spec_list
        value.move< IR::CalculatedField* > (that.value);
        break;

      case symbol_kind::S_case_value_list: // case_value_list
        value.move< IR::CaseEntry* > (that.value);
        break;

      case symbol_kind::S_const_expression: // const_expression
        value.move< IR::Constant* > (that.value);
        break;

      case symbol_kind::S_counter_spec_list: // counter_spec_list
        value.move< IR::Counter* > (that.value);
        break;

      case symbol_kind::S_inout: // inout
        value.move< IR::Direction > (that.value);
        break;

      case symbol_kind::S_opt_condition: // opt_condition
      case symbol_kind::S_field_or_masked_ref: // field_or_masked_ref
      case symbol_kind::S_pragma_operand: // pragma_operand
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_header_or_field_ref: // header_or_field_ref
      case symbol_kind::S_header_ref: // header_ref
        value.move< IR::Expression* > (that.value);
        break;

      case symbol_kind::S_field_list_entries: // field_list_entries
        value.move< IR::FieldList* > (that.value);
        break;

      case symbol_kind::S_field_list_calculation_body: // field_list_calculation_body
        value.move< IR::FieldListCalculation* > (that.value);
        break;

      case symbol_kind::S_name: // name
        value.move< IR::ID > (that.value);
        break;

      case symbol_kind::S_field_ref: // field_ref
        value.move< IR::Member* > (that.value);
        break;

      case symbol_kind::S_meter_spec_list: // meter_spec_list
        value.move< IR::Meter* > (that.value);
        break;

      case symbol_kind::S_field_list_list: // field_list_list
      case symbol_kind::S_name_list: // name_list
      case symbol_kind::S_opt_name_list: // opt_name_list
      case symbol_kind::S_action_list: // action_list
        value.move< IR::NameList* > (that.value);
        break;

      case symbol_kind::S_blackbox_config: // blackbox_config
        value.move< IR::NameMap<IR::Property>* > (that.value);
        break;

      case symbol_kind::S_argument: // argument
        value.move< IR::Parameter* > (that.value);
        break;

      case symbol_kind::S_opt_argument_list: // opt_argument_list
      case symbol_kind::S_argument_list: // argument_list
        value.move< IR::ParameterList* > (that.value);
        break;

      case symbol_kind::S_register_spec_list: // register_spec_list
        value.move< IR::Register* > (that.value);
        break;

      case symbol_kind::S_parser_statement_list: // parser_statement_list
        value.move< IR::V1Parser* > (that.value);
        break;

      case symbol_kind::S_table_body: // table_body
        value.move< IR::V1Table* > (that.value);
        break;

      case symbol_kind::S_blackbox_method: // blackbox_method
        value.move< IR::Vector<IR::Annotation>* > (that.value);
        break;

      case symbol_kind::S_case_entry_list: // case_entry_list
        value.move< IR::Vector<IR::CaseEntry>* > (that.value);
        break;

      case symbol_kind::S_field_match_list: // field_match_list
      case symbol_kind::S_control_statement_list: // control_statement_list
      case symbol_kind::S_control_statement: // control_statement
      case symbol_kind::S_expressions: // expressions
      case symbol_kind::S_pragma_operands: // pragma_operands
      case symbol_kind::S_expression_list: // expression_list
      case symbol_kind::S_opt_expression_list: // opt_expression_list
        value.move< IR::Vector<IR::Expression>* > (that.value);
        break;

      case symbol_kind::S_INTEGER: // INTEGER
        value.move< UnparsedConstant > (that.value);
        break;

      case symbol_kind::S_ACTION: // ACTION
      case symbol_kind::S_ACTIONS: // ACTIONS
      case symbol_kind::S_ACTION_PROFILE: // ACTION_PROFILE
      case symbol_kind::S_ACTION_SELECTOR: // ACTION_SELECTOR
      case symbol_kind::S_ALGORITHM: // ALGORITHM
      case symbol_kind::S_APPLY: // APPLY
      case symbol_kind::S_ATTRIBUTE: // ATTRIBUTE
      case symbol_kind::S_ATTRIBUTES: // ATTRIBUTES
      case symbol_kind::S_BIT: // BIT
      case symbol_kind::S_BLACKBOX: // BLACKBOX
      case symbol_kind::S_BLACKBOX_TYPE: // BLACKBOX_TYPE
      case symbol_kind::S_BLOCK: // BLOCK
      case symbol_kind::S_BOOL: // BOOL
      case symbol_kind::S_CALCULATED_FIELD: // CALCULATED_FIELD
      case symbol_kind::S_CONTROL: // CONTROL
      case symbol_kind::S_COUNTER: // COUNTER
      case symbol_kind::S_CONST: // CONST
      case symbol_kind::S_CURRENT: // CURRENT
      case symbol_kind::S_DEFAULT: // DEFAULT
      case symbol_kind::S_DEFAULT_ACTION: // DEFAULT_ACTION
      case symbol_kind::S_DIRECT: // DIRECT
      case symbol_kind::S_DROP: // DROP
      case symbol_kind::S_DYNAMIC_ACTION_SELECTION: // DYNAMIC_ACTION_SELECTION
      case symbol_kind::S_ELSE: // ELSE
      case symbol_kind::S_EXTRACT: // EXTRACT
      case symbol_kind::S_EXPRESSION: // EXPRESSION
      case symbol_kind::S_EXPRESSION_LOCAL_VARIABLES: // EXPRESSION_LOCAL_VARIABLES
      case symbol_kind::S_FALSE: // FALSE
      case symbol_kind::S_FIELD_LIST: // FIELD_LIST
      case symbol_kind::S_FIELD_LIST_CALCULATION: // FIELD_LIST_CALCULATION
      case symbol_kind::S_FIELDS: // FIELDS
      case symbol_kind::S_HEADER: // HEADER
      case symbol_kind::S_HEADER_TYPE: // HEADER_TYPE
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_IMPLEMENTATION: // IMPLEMENTATION
      case symbol_kind::S_IN: // IN
      case symbol_kind::S_INPUT: // INPUT
      case symbol_kind::S_INSTANCE_COUNT: // INSTANCE_COUNT
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_LATEST: // LATEST
      case symbol_kind::S_LAYOUT: // LAYOUT
      case symbol_kind::S_LENGTH: // LENGTH
      case symbol_kind::S_MASK: // MASK
      case symbol_kind::S_MAX_LENGTH: // MAX_LENGTH
      case symbol_kind::S_MAX_SIZE: // MAX_SIZE
      case symbol_kind::S_MAX_WIDTH: // MAX_WIDTH
      case symbol_kind::S_METADATA: // METADATA
      case symbol_kind::S_METER: // METER
      case symbol_kind::S_METHOD: // METHOD
      case symbol_kind::S_MIN_SIZE: // MIN_SIZE
      case symbol_kind::S_MIN_WIDTH: // MIN_WIDTH
      case symbol_kind::S_OPTIONAL: // OPTIONAL
      case symbol_kind::S_OUT: // OUT
      case symbol_kind::S_OUTPUT_WIDTH: // OUTPUT_WIDTH
      case symbol_kind::S_PARSE_ERROR: // PARSE_ERROR
      case symbol_kind::S_PARSER: // PARSER
      case symbol_kind::S_PARSER_VALUE_SET: // PARSER_VALUE_SET
      case symbol_kind::S_PARSER_EXCEPTION: // PARSER_EXCEPTION
      case symbol_kind::S_PAYLOAD: // PAYLOAD
      case symbol_kind::S_PRAGMA: // PRAGMA
      case symbol_kind::S_PREFIX: // PREFIX
      case symbol_kind::S_PRE_COLOR: // PRE_COLOR
      case symbol_kind::S_PRIMITIVE_ACTION: // PRIMITIVE_ACTION
      case symbol_kind::S_READS: // READS
      case symbol_kind::S_REGISTER: // REGISTER
      case symbol_kind::S_RESULT: // RESULT
      case symbol_kind::S_RETURN: // RETURN
      case symbol_kind::S_SATURATING: // SATURATING
      case symbol_kind::S_SELECT: // SELECT
      case symbol_kind::S_SELECTION_KEY: // SELECTION_KEY
      case symbol_kind::S_SELECTION_MODE: // SELECTION_MODE
      case symbol_kind::S_SELECTION_TYPE: // SELECTION_TYPE
      case symbol_kind::S_SET_METADATA: // SET_METADATA
      case symbol_kind::S_SIGNED: // SIGNED
      case symbol_kind::S_SIZE: // SIZE
      case symbol_kind::S_STATIC: // STATIC
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_TABLE: // TABLE
      case symbol_kind::S_TRUE: // TRUE
      case symbol_kind::S_TYPE: // TYPE
      case symbol_kind::S_UPDATE: // UPDATE
      case symbol_kind::S_VALID: // VALID
      case symbol_kind::S_VERIFY: // VERIFY
      case symbol_kind::S_WIDTH: // WIDTH
      case symbol_kind::S_WRITES: // WRITES
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
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
  V1Parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  V1Parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
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
      case symbol_kind::S_ACTION: // ACTION
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1305 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_ACTIONS: // ACTIONS
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1311 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_ACTION_PROFILE: // ACTION_PROFILE
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1317 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_ACTION_SELECTOR: // ACTION_SELECTOR
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1323 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_ALGORITHM: // ALGORITHM
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1329 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_APPLY: // APPLY
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1335 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_ATTRIBUTE: // ATTRIBUTE
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1341 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_ATTRIBUTES: // ATTRIBUTES
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1347 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_BIT: // BIT
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1353 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_BLACKBOX: // BLACKBOX
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1359 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_BLACKBOX_TYPE: // BLACKBOX_TYPE
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1365 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_BLOCK: // BLOCK
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1371 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_BOOL: // BOOL
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1377 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_CALCULATED_FIELD: // CALCULATED_FIELD
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1383 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_CONTROL: // CONTROL
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1389 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_COUNTER: // COUNTER
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1395 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_CONST: // CONST
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1401 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_CURRENT: // CURRENT
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1407 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_DEFAULT: // DEFAULT
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1413 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_DEFAULT_ACTION: // DEFAULT_ACTION
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1419 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_DIRECT: // DIRECT
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1425 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_DROP: // DROP
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1431 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_DYNAMIC_ACTION_SELECTION: // DYNAMIC_ACTION_SELECTION
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1437 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_ELSE: // ELSE
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1443 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_EXTRACT: // EXTRACT
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1449 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_EXPRESSION: // EXPRESSION
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1455 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_EXPRESSION_LOCAL_VARIABLES: // EXPRESSION_LOCAL_VARIABLES
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1461 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_FALSE: // FALSE
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1467 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_FIELD_LIST: // FIELD_LIST
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1473 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_FIELD_LIST_CALCULATION: // FIELD_LIST_CALCULATION
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1479 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_FIELDS: // FIELDS
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1485 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_HEADER: // HEADER
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1491 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_HEADER_TYPE: // HEADER_TYPE
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1497 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_IF: // IF
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1503 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_IMPLEMENTATION: // IMPLEMENTATION
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1509 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_IN: // IN
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1515 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_INPUT: // INPUT
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1521 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_INSTANCE_COUNT: // INSTANCE_COUNT
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1527 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_INT: // INT
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1533 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_LATEST: // LATEST
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1539 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_LAYOUT: // LAYOUT
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1545 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_LENGTH: // LENGTH
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1551 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_MASK: // MASK
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1557 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_MAX_LENGTH: // MAX_LENGTH
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1563 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_MAX_SIZE: // MAX_SIZE
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1569 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_MAX_WIDTH: // MAX_WIDTH
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1575 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_METADATA: // METADATA
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1581 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_METER: // METER
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1587 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_METHOD: // METHOD
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1593 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_MIN_SIZE: // MIN_SIZE
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1599 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_MIN_WIDTH: // MIN_WIDTH
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1605 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_OPTIONAL: // OPTIONAL
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1611 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_OUT: // OUT
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1617 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_OUTPUT_WIDTH: // OUTPUT_WIDTH
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1623 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_PARSE_ERROR: // PARSE_ERROR
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1629 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_PARSER: // PARSER
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1635 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_PARSER_VALUE_SET: // PARSER_VALUE_SET
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1641 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_PARSER_EXCEPTION: // PARSER_EXCEPTION
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1647 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_PAYLOAD: // PAYLOAD
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1653 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_PRAGMA: // PRAGMA
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1659 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_PREFIX: // PREFIX
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1665 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_PRE_COLOR: // PRE_COLOR
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1671 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_PRIMITIVE_ACTION: // PRIMITIVE_ACTION
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1677 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_READS: // READS
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1683 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_REGISTER: // REGISTER
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1689 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_RESULT: // RESULT
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1695 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_RETURN: // RETURN
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1701 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_SATURATING: // SATURATING
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1707 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_SELECT: // SELECT
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1713 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_SELECTION_KEY: // SELECTION_KEY
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1719 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_SELECTION_MODE: // SELECTION_MODE
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1725 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_SELECTION_TYPE: // SELECTION_TYPE
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1731 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_SET_METADATA: // SET_METADATA
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1737 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_SIGNED: // SIGNED
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1743 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_SIZE: // SIZE
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1749 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_STATIC: // STATIC
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1755 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_STRING: // STRING
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1761 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_TABLE: // TABLE
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1767 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_TRUE: // TRUE
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1773 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_TYPE: // TYPE
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1779 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_UPDATE: // UPDATE
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1785 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_VALID: // VALID
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1791 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_VERIFY: // VERIFY
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1797 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_WIDTH: // WIDTH
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1803 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_WRITES: // WRITES
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1809 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1815 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_STRING_LITERAL: // STRING_LITERAL
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 1821 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_INTEGER: // INTEGER
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < UnparsedConstant > (); }
#line 1827 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_header_dec_body: // header_dec_body
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < HeaderType > (); }
#line 1833 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_field_declarations: // field_declarations
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < HeaderType > (); }
#line 1839 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_bit_width: // bit_width
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < ConstType* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 1852 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_opt_field_modifiers: // opt_field_modifiers
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < Attributes > (); }
#line 1858 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_attributes: // attributes
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < Attributes > (); }
#line 1864 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_attrib: // attrib
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < Attributes > (); }
#line 1870 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_type: // type
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < ConstType* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 1883 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_field_list_entries: // field_list_entries
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::FieldList* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 1896 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_field_list_calculation_body: // field_list_calculation_body
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::FieldListCalculation* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 1909 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_field_list_list: // field_list_list
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::NameList* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 1922 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_update_verify_spec_list: // update_verify_spec_list
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::CalculatedField* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 1935 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_opt_condition: // opt_condition
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::Expression* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 1948 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_parser_statement_list: // parser_statement_list
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::V1Parser* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 1961 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_case_entry_list: // case_entry_list
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::Vector<IR::CaseEntry>* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 1974 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_case_value_list: // case_value_list
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::CaseEntry* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 1987 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_case_value: // case_value
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < CaseValue > (); }
#line 1993 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_counter_spec_list: // counter_spec_list
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::Counter* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2006 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_meter_spec_list: // meter_spec_list
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::Meter* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2019 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_register_spec_list: // register_spec_list
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::Register* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2032 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_name_list: // name_list
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::NameList* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2045 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_opt_name_list: // opt_name_list
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::NameList* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2058 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_action_function_body: // action_function_body
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::ActionFunction* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2071 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_action_statement_list: // action_statement_list
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::ActionFunction* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2084 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_action_profile_body: // action_profile_body
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::ActionProfile* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2097 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_action_selector_body: // action_selector_body
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::ActionSelector* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2110 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_table_body: // table_body
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::V1Table* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2123 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_field_match_list: // field_match_list
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::Vector<IR::Expression>* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2136 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_field_or_masked_ref: // field_or_masked_ref
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::Expression* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2149 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_action_list: // action_list
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::NameList* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2162 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_control_statement_list: // control_statement_list
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::Vector<IR::Expression>* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2175 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_control_statement: // control_statement
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::Vector<IR::Expression>* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2188 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_apply_case_list: // apply_case_list
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::Apply* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2201 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_blackbox_body: // blackbox_body
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < BBoxType > (); }
#line 2207 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_blackbox_attribute: // blackbox_attribute
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::Attribute* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2220 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_blackbox_method: // blackbox_method
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::Vector<IR::Annotation>* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2233 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_opt_argument_list: // opt_argument_list
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::ParameterList* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2246 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_argument_list: // argument_list
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::ParameterList* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2259 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_argument: // argument
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::Parameter* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2272 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_inout: // inout
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Direction > (); }
#line 2278 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_opt_locals_list: // opt_locals_list
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::AttribLocals* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2291 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_locals_list: // locals_list
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::AttribLocals* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2304 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_local_var: // local_var
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::AttribLocal* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2317 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_blackbox_config: // blackbox_config
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::NameMap<IR::Property>* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2330 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_expressions: // expressions
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::Vector<IR::Expression>* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2343 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_pragma_operands: // pragma_operands
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::Vector<IR::Expression>* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2356 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_pragma_operand: // pragma_operand
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::Expression* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2369 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_expression: // expression
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::Expression* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2382 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_header_or_field_ref: // header_or_field_ref
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::Expression* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2395 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_header_ref: // header_ref
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::Expression* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2408 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_field_ref: // field_ref
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::Member* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2421 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_const_expression: // const_expression
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::Constant* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2434 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_expression_list: // expression_list
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::Vector<IR::Expression>* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2447 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_opt_expression_list: // opt_expression_list
#line 152 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 {
    auto val = yysym.value.template as < IR::Vector<IR::Expression>* > ();
    if (val != nullptr) {
        yyoutput << val;
    } else {
        yyoutput << "(null)";
    }
}
#line 2460 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      case symbol_kind::S_name: // name
#line 150 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yyoutput << yysym.value.template as < IR::ID > (); }
#line 2466 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
        break;

      default:
        break;
    }
        yyo << ')';
      }
  }
#endif

  void
  V1Parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  V1Parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  V1Parser::yypop_ (int n) YY_NOEXCEPT
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  V1Parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  V1Parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  V1Parser::debug_level_type
  V1Parser::debug_level () const
  {
    return yydebug_;
  }

  void
  V1Parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  V1Parser::state_type
  V1Parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  V1Parser::yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  V1Parser::yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yytable_ninf_;
  }

  int
  V1Parser::operator() ()
  {
    return parse ();
  }

  int
  V1Parser::parse ()
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
      case symbol_kind::S_opt_field_modifiers: // opt_field_modifiers
      case symbol_kind::S_attributes: // attributes
      case symbol_kind::S_attrib: // attrib
        yylhs.value.emplace< Attributes > ();
        break;

      case symbol_kind::S_blackbox_body: // blackbox_body
        yylhs.value.emplace< BBoxType > ();
        break;

      case symbol_kind::S_case_value: // case_value
        yylhs.value.emplace< CaseValue > ();
        break;

      case symbol_kind::S_bit_width: // bit_width
      case symbol_kind::S_type: // type
        yylhs.value.emplace< ConstType* > ();
        break;

      case symbol_kind::S_header_dec_body: // header_dec_body
      case symbol_kind::S_field_declarations: // field_declarations
        yylhs.value.emplace< HeaderType > ();
        break;

      case symbol_kind::S_action_function_body: // action_function_body
      case symbol_kind::S_action_statement_list: // action_statement_list
        yylhs.value.emplace< IR::ActionFunction* > ();
        break;

      case symbol_kind::S_action_profile_body: // action_profile_body
        yylhs.value.emplace< IR::ActionProfile* > ();
        break;

      case symbol_kind::S_action_selector_body: // action_selector_body
        yylhs.value.emplace< IR::ActionSelector* > ();
        break;

      case symbol_kind::S_apply_case_list: // apply_case_list
        yylhs.value.emplace< IR::Apply* > ();
        break;

      case symbol_kind::S_local_var: // local_var
        yylhs.value.emplace< IR::AttribLocal* > ();
        break;

      case symbol_kind::S_opt_locals_list: // opt_locals_list
      case symbol_kind::S_locals_list: // locals_list
        yylhs.value.emplace< IR::AttribLocals* > ();
        break;

      case symbol_kind::S_blackbox_attribute: // blackbox_attribute
        yylhs.value.emplace< IR::Attribute* > ();
        break;

      case symbol_kind::S_update_verify_spec_list: // update_verify_spec_list
        yylhs.value.emplace< IR::CalculatedField* > ();
        break;

      case symbol_kind::S_case_value_list: // case_value_list
        yylhs.value.emplace< IR::CaseEntry* > ();
        break;

      case symbol_kind::S_const_expression: // const_expression
        yylhs.value.emplace< IR::Constant* > ();
        break;

      case symbol_kind::S_counter_spec_list: // counter_spec_list
        yylhs.value.emplace< IR::Counter* > ();
        break;

      case symbol_kind::S_inout: // inout
        yylhs.value.emplace< IR::Direction > ();
        break;

      case symbol_kind::S_opt_condition: // opt_condition
      case symbol_kind::S_field_or_masked_ref: // field_or_masked_ref
      case symbol_kind::S_pragma_operand: // pragma_operand
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_header_or_field_ref: // header_or_field_ref
      case symbol_kind::S_header_ref: // header_ref
        yylhs.value.emplace< IR::Expression* > ();
        break;

      case symbol_kind::S_field_list_entries: // field_list_entries
        yylhs.value.emplace< IR::FieldList* > ();
        break;

      case symbol_kind::S_field_list_calculation_body: // field_list_calculation_body
        yylhs.value.emplace< IR::FieldListCalculation* > ();
        break;

      case symbol_kind::S_name: // name
        yylhs.value.emplace< IR::ID > ();
        break;

      case symbol_kind::S_field_ref: // field_ref
        yylhs.value.emplace< IR::Member* > ();
        break;

      case symbol_kind::S_meter_spec_list: // meter_spec_list
        yylhs.value.emplace< IR::Meter* > ();
        break;

      case symbol_kind::S_field_list_list: // field_list_list
      case symbol_kind::S_name_list: // name_list
      case symbol_kind::S_opt_name_list: // opt_name_list
      case symbol_kind::S_action_list: // action_list
        yylhs.value.emplace< IR::NameList* > ();
        break;

      case symbol_kind::S_blackbox_config: // blackbox_config
        yylhs.value.emplace< IR::NameMap<IR::Property>* > ();
        break;

      case symbol_kind::S_argument: // argument
        yylhs.value.emplace< IR::Parameter* > ();
        break;

      case symbol_kind::S_opt_argument_list: // opt_argument_list
      case symbol_kind::S_argument_list: // argument_list
        yylhs.value.emplace< IR::ParameterList* > ();
        break;

      case symbol_kind::S_register_spec_list: // register_spec_list
        yylhs.value.emplace< IR::Register* > ();
        break;

      case symbol_kind::S_parser_statement_list: // parser_statement_list
        yylhs.value.emplace< IR::V1Parser* > ();
        break;

      case symbol_kind::S_table_body: // table_body
        yylhs.value.emplace< IR::V1Table* > ();
        break;

      case symbol_kind::S_blackbox_method: // blackbox_method
        yylhs.value.emplace< IR::Vector<IR::Annotation>* > ();
        break;

      case symbol_kind::S_case_entry_list: // case_entry_list
        yylhs.value.emplace< IR::Vector<IR::CaseEntry>* > ();
        break;

      case symbol_kind::S_field_match_list: // field_match_list
      case symbol_kind::S_control_statement_list: // control_statement_list
      case symbol_kind::S_control_statement: // control_statement
      case symbol_kind::S_expressions: // expressions
      case symbol_kind::S_pragma_operands: // pragma_operands
      case symbol_kind::S_expression_list: // expression_list
      case symbol_kind::S_opt_expression_list: // opt_expression_list
        yylhs.value.emplace< IR::Vector<IR::Expression>* > ();
        break;

      case symbol_kind::S_INTEGER: // INTEGER
        yylhs.value.emplace< UnparsedConstant > ();
        break;

      case symbol_kind::S_ACTION: // ACTION
      case symbol_kind::S_ACTIONS: // ACTIONS
      case symbol_kind::S_ACTION_PROFILE: // ACTION_PROFILE
      case symbol_kind::S_ACTION_SELECTOR: // ACTION_SELECTOR
      case symbol_kind::S_ALGORITHM: // ALGORITHM
      case symbol_kind::S_APPLY: // APPLY
      case symbol_kind::S_ATTRIBUTE: // ATTRIBUTE
      case symbol_kind::S_ATTRIBUTES: // ATTRIBUTES
      case symbol_kind::S_BIT: // BIT
      case symbol_kind::S_BLACKBOX: // BLACKBOX
      case symbol_kind::S_BLACKBOX_TYPE: // BLACKBOX_TYPE
      case symbol_kind::S_BLOCK: // BLOCK
      case symbol_kind::S_BOOL: // BOOL
      case symbol_kind::S_CALCULATED_FIELD: // CALCULATED_FIELD
      case symbol_kind::S_CONTROL: // CONTROL
      case symbol_kind::S_COUNTER: // COUNTER
      case symbol_kind::S_CONST: // CONST
      case symbol_kind::S_CURRENT: // CURRENT
      case symbol_kind::S_DEFAULT: // DEFAULT
      case symbol_kind::S_DEFAULT_ACTION: // DEFAULT_ACTION
      case symbol_kind::S_DIRECT: // DIRECT
      case symbol_kind::S_DROP: // DROP
      case symbol_kind::S_DYNAMIC_ACTION_SELECTION: // DYNAMIC_ACTION_SELECTION
      case symbol_kind::S_ELSE: // ELSE
      case symbol_kind::S_EXTRACT: // EXTRACT
      case symbol_kind::S_EXPRESSION: // EXPRESSION
      case symbol_kind::S_EXPRESSION_LOCAL_VARIABLES: // EXPRESSION_LOCAL_VARIABLES
      case symbol_kind::S_FALSE: // FALSE
      case symbol_kind::S_FIELD_LIST: // FIELD_LIST
      case symbol_kind::S_FIELD_LIST_CALCULATION: // FIELD_LIST_CALCULATION
      case symbol_kind::S_FIELDS: // FIELDS
      case symbol_kind::S_HEADER: // HEADER
      case symbol_kind::S_HEADER_TYPE: // HEADER_TYPE
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_IMPLEMENTATION: // IMPLEMENTATION
      case symbol_kind::S_IN: // IN
      case symbol_kind::S_INPUT: // INPUT
      case symbol_kind::S_INSTANCE_COUNT: // INSTANCE_COUNT
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_LATEST: // LATEST
      case symbol_kind::S_LAYOUT: // LAYOUT
      case symbol_kind::S_LENGTH: // LENGTH
      case symbol_kind::S_MASK: // MASK
      case symbol_kind::S_MAX_LENGTH: // MAX_LENGTH
      case symbol_kind::S_MAX_SIZE: // MAX_SIZE
      case symbol_kind::S_MAX_WIDTH: // MAX_WIDTH
      case symbol_kind::S_METADATA: // METADATA
      case symbol_kind::S_METER: // METER
      case symbol_kind::S_METHOD: // METHOD
      case symbol_kind::S_MIN_SIZE: // MIN_SIZE
      case symbol_kind::S_MIN_WIDTH: // MIN_WIDTH
      case symbol_kind::S_OPTIONAL: // OPTIONAL
      case symbol_kind::S_OUT: // OUT
      case symbol_kind::S_OUTPUT_WIDTH: // OUTPUT_WIDTH
      case symbol_kind::S_PARSE_ERROR: // PARSE_ERROR
      case symbol_kind::S_PARSER: // PARSER
      case symbol_kind::S_PARSER_VALUE_SET: // PARSER_VALUE_SET
      case symbol_kind::S_PARSER_EXCEPTION: // PARSER_EXCEPTION
      case symbol_kind::S_PAYLOAD: // PAYLOAD
      case symbol_kind::S_PRAGMA: // PRAGMA
      case symbol_kind::S_PREFIX: // PREFIX
      case symbol_kind::S_PRE_COLOR: // PRE_COLOR
      case symbol_kind::S_PRIMITIVE_ACTION: // PRIMITIVE_ACTION
      case symbol_kind::S_READS: // READS
      case symbol_kind::S_REGISTER: // REGISTER
      case symbol_kind::S_RESULT: // RESULT
      case symbol_kind::S_RETURN: // RETURN
      case symbol_kind::S_SATURATING: // SATURATING
      case symbol_kind::S_SELECT: // SELECT
      case symbol_kind::S_SELECTION_KEY: // SELECTION_KEY
      case symbol_kind::S_SELECTION_MODE: // SELECTION_MODE
      case symbol_kind::S_SELECTION_TYPE: // SELECTION_TYPE
      case symbol_kind::S_SET_METADATA: // SET_METADATA
      case symbol_kind::S_SIGNED: // SIGNED
      case symbol_kind::S_SIZE: // SIZE
      case symbol_kind::S_STATIC: // STATIC
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_TABLE: // TABLE
      case symbol_kind::S_TRUE: // TRUE
      case symbol_kind::S_TYPE: // TYPE
      case symbol_kind::S_UPDATE: // UPDATE
      case symbol_kind::S_VALID: // VALID
      case symbol_kind::S_VERIFY: // VERIFY
      case symbol_kind::S_WIDTH: // WIDTH
      case symbol_kind::S_WRITES: // WRITES
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
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
  case 2: // program: input END
#line 267 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                    { YYACCEPT; }
#line 2966 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 24: // input: input PRAGMA pragma_operands NEWLINE
#line 291 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
          { driver.addPragma(new IR::Annotation(yystack_[2].location, yystack_[2].value.as < cstring > (), *yystack_[1].value.as < IR::Vector<IR::Expression>* > ())); }
#line 2972 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 25: // input: input error
#line 293 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
          { driver.clearPragmas(); }
#line 2978 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 26: // header_type_declaration: HEADER_TYPE name "{" header_dec_body "}"
#line 301 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yystack_[1].value.as < HeaderType > ().annotations->append(driver.takePragmasAsVector());
        driver.global->add(yystack_[3].value.as < IR::ID > (), new IR::v1HeaderType(yystack_[4].location+yystack_[0].location, yystack_[3].value.as < IR::ID > (),
            new IR::Type_Struct(yystack_[4].location+yystack_[0].location, IR::ID(yystack_[3].location, yystack_[3].value.as < IR::ID > ()),
                                *yystack_[1].value.as < HeaderType > ().annotations, *yystack_[1].value.as < HeaderType > ().fields),
            new IR::Type_Header(yystack_[4].location+yystack_[0].location, IR::ID(yystack_[3].location, yystack_[3].value.as < IR::ID > ()),
                                *yystack_[1].value.as < HeaderType > ().annotations, *yystack_[1].value.as < HeaderType > ().fields))); }
#line 2989 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 27: // header_type_declaration: HEADER_TYPE name "{" header_dec_body error END
#line 308 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
          { driver.clearPragmas(); }
#line 2995 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 28: // header_dec_body: FIELDS "{" field_declarations "}" opt_length opt_max_length
#line 312 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yylhs.value.as < HeaderType > () = yystack_[3].value.as < HeaderType > (); }
#line 3001 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 29: // header_dec_body: FIELDS "{" field_declarations error END
#line 313 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                              { yylhs.value.as < HeaderType > () = yystack_[2].value.as < HeaderType > (); }
#line 3007 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 30: // field_declarations: %empty
#line 317 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yylhs.value.as < HeaderType > ().annotations = new IR::Vector<IR::Annotation>;
        yylhs.value.as < HeaderType > ().fields = new IR::IndexedVector<IR::StructField>; }
#line 3014 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 31: // field_declarations: field_declarations name ":" bit_width opt_field_modifiers ";"
#line 319 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                                                    {
        auto *type = yystack_[2].value.as < ConstType* > ();
        if (yystack_[1].value.as < Attributes > ().signed_ && type->is<IR::Type::Bits>())
            type = IR::Type::Bits::get(type->to<IR::Type::Bits>()->size, true);
        (yylhs.value.as < HeaderType > ()=yystack_[5].value.as < HeaderType > ()).fields->push_back(new IR::StructField(yystack_[4].location+yystack_[2].location, IR::ID(yystack_[4].location, yystack_[4].value.as < IR::ID > ()),
                yystack_[1].value.as < Attributes > ().annotations, type)); }
#line 3025 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 32: // field_declarations: field_declarations type name ";"
#line 326 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < HeaderType > ()=yystack_[3].value.as < HeaderType > ()).fields->push_back(new IR::StructField(yystack_[2].location+yystack_[0].location, IR::ID(yystack_[1].location, yystack_[1].value.as < IR::ID > ()), yystack_[2].value.as < ConstType* > ())); }
#line 3031 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 33: // bit_width: const_expression
#line 331 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { if (yystack_[0].value.as < IR::Constant* > ())
            yylhs.value.as < ConstType* > () = IR::Type::Bits::get(yystack_[0].location, yystack_[0].value.as < IR::Constant* > ()->asInt());
        else
            yylhs.value.as < ConstType* > () = IR::Type::Unknown::get(); }
#line 3040 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 34: // bit_width: "*"
#line 336 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yylhs.value.as < ConstType* > () = IR::Type::Varbits::get(); }
#line 3046 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 35: // opt_field_modifiers: %empty
#line 339 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                   { yylhs.value.as < Attributes > () = Attributes(); }
#line 3052 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 36: // opt_field_modifiers: "(" attributes ")"
#line 340 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                         { yylhs.value.as < Attributes > () = yystack_[1].value.as < Attributes > (); }
#line 3058 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 37: // attributes: attrib
#line 344 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
             { yylhs.value.as < Attributes > () = yystack_[0].value.as < Attributes > (); }
#line 3064 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 38: // attributes: attributes "," attrib
#line 345 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                            { (yylhs.value.as < Attributes > () = yystack_[2].value.as < Attributes > ()).merge(yystack_[0].value.as < Attributes > ()); }
#line 3070 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 39: // attrib: SIGNED
#line 349 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yylhs.value.as < Attributes > ().signed_ = true; }
#line 3076 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 40: // attrib: SATURATING
#line 350 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yylhs.value.as < Attributes > ().annotations.push_back(new IR::Annotation(yystack_[0].location, IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()), {}));
                   yylhs.value.as < Attributes > ().saturating = true; }
#line 3083 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 42: // opt_length: LENGTH ":" expression ";"
#line 356 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yystack_[(4) - (-1)].value.as< HeaderType > ().annotations->emplace_back(
          IR::Annotation(yystack_[3].location+yystack_[0].location, "length", IR::Vector<IR::Expression>(yystack_[1].value.as < IR::Expression* > ()))); }
#line 3090 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 44: // opt_max_length: MAX_LENGTH ":" const_expression ";"
#line 362 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yystack_[(4) - (-2)].value.as< HeaderType > ().annotations->emplace_back(
          IR::Annotation(yystack_[3].location+yystack_[0].location, "max_length", IR::Vector<IR::Expression>(yystack_[1].value.as < IR::Constant* > ()))); }
#line 3097 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 45: // type: BIT
#line 366 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
          { yylhs.value.as < ConstType* > () = IR::Type::Bits::get(yystack_[0].location, 1); }
#line 3103 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 46: // type: BIT "<" INTEGER ">"
#line 368 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yylhs.value.as < ConstType* > () = IR::Type::Bits::get(yystack_[1].location, parseConstant(yystack_[1].location, yystack_[1].value.as < UnparsedConstant > (), 0)->asInt()); }
#line 3109 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 47: // type: BLOCK
#line 369 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
            { yylhs.value.as < ConstType* > () = IR::Type_Block::get(); }
#line 3115 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 48: // type: BOOL
#line 370 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
           { yylhs.value.as < ConstType* > () = IR::Type_Boolean::get(); }
#line 3121 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 49: // type: COUNTER
#line 371 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
              { yylhs.value.as < ConstType* > () = IR::Type_Counter::get(); }
#line 3127 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 50: // type: EXPRESSION
#line 372 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yylhs.value.as < ConstType* > () = IR::Type_Expression::get(); }
#line 3133 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 51: // type: FIELD_LIST_CALCULATION
#line 373 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                             { yylhs.value.as < ConstType* > () = IR::Type_FieldListCalculation::get(); }
#line 3139 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 52: // type: INT
#line 374 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
          { yylhs.value.as < ConstType* > () = IR::Type_InfInt::get(); }
#line 3145 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 53: // type: INT "<" INTEGER ">"
#line 376 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yylhs.value.as < ConstType* > () = IR::Type::Bits::get(yystack_[1].location, parseConstant(yystack_[1].location, yystack_[1].value.as < UnparsedConstant > (), 0)->asInt(), true); }
#line 3151 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 54: // type: METER
#line 377 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
            { yylhs.value.as < ConstType* > () = IR::Type_Meter::get(); }
#line 3157 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 55: // type: STRING
#line 378 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
             { yylhs.value.as < ConstType* > () = IR::Type_String::get(); }
#line 3163 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 56: // type: REGISTER
#line 379 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
               { yylhs.value.as < ConstType* > () = IR::Type_Register::get(); }
#line 3169 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 57: // type: TABLE
#line 380 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
            { yylhs.value.as < ConstType* > () = IR::Type_AnyTable::get(); }
#line 3175 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 58: // header_instance: HEADER name name ";"
#line 389 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { driver.global->add(yystack_[1].value.as < IR::ID > (), new IR::Header(yystack_[3].location+yystack_[0].location, IR::ID(yystack_[2].location, yystack_[2].value.as < IR::ID > ()), IR::ID(yystack_[1].location, yystack_[1].value.as < IR::ID > ()),
                                              driver.takePragmasAsVector())); }
#line 3182 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 59: // header_instance: HEADER name name "[" const_expression "]" ";"
#line 392 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { driver.global->add(yystack_[4].value.as < IR::ID > (), new IR::HeaderStack(yystack_[6].location+yystack_[0].location, IR::ID(yystack_[5].location, yystack_[5].value.as < IR::ID > ()), IR::ID(yystack_[4].location, yystack_[4].value.as < IR::ID > ()),
                                                   driver.takePragmasAsVector(),
                                                   yystack_[2].value.as < IR::Constant* > () ? yystack_[2].value.as < IR::Constant* > ()->asLong() : 0));
        yystack_[2].value.as < IR::Constant* > () = nullptr; }
#line 3191 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 60: // metadata_instance: METADATA name name opt_metadata_initializer ";"
#line 400 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { driver.global->add(yystack_[2].value.as < IR::ID > (), new IR::Metadata(yystack_[4].location+yystack_[0].location, IR::ID(yystack_[3].location, yystack_[3].value.as < IR::ID > ()), IR::ID(yystack_[2].location, yystack_[2].value.as < IR::ID > ()),
                                                driver.takePragmasAsVector())); }
#line 3198 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 64: // metadata_field_init_list: metadata_field_init_list name ":" const_expression ";"
#line 410 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yystack_[1].value.as < IR::Constant* > () = nullptr; }
#line 3204 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 65: // field_list_declaration: FIELD_LIST name "{" field_list_entries "}"
#line 419 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yystack_[1].value.as < IR::FieldList* > ()->name = IR::ID(yystack_[3].location, yystack_[3].value.as < IR::ID > ()); yystack_[1].value.as < IR::FieldList* > ()->srcInfo = yystack_[4].location + yystack_[0].location; driver.global->add(yystack_[3].value.as < IR::ID > (), yystack_[1].value.as < IR::FieldList* > ()); }
#line 3210 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 67: // field_list_entries: %empty
#line 425 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                    { yylhs.value.as < IR::FieldList* > () = new IR::FieldList(driver.takePragmasAsVector()); }
#line 3216 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 68: // field_list_entries: field_list_entries expression ";"
#line 427 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::FieldList* > ()=yystack_[2].value.as < IR::FieldList* > ())->fields.push_back(yystack_[1].value.as < IR::Expression* > ()); }
#line 3222 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 69: // field_list_entries: field_list_entries PAYLOAD ";"
#line 429 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::FieldList* > ()=yystack_[2].value.as < IR::FieldList* > ())->payload = true; }
#line 3228 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 70: // field_list_calculation_declaration: FIELD_LIST_CALCULATION name "{" field_list_calculation_body "}"
#line 438 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yystack_[1].value.as < IR::FieldListCalculation* > ()->name = IR::ID(yystack_[3].location, yystack_[3].value.as < IR::ID > ()); yystack_[1].value.as < IR::FieldListCalculation* > ()->srcInfo = yystack_[4].location + yystack_[0].location; driver.global->add(yystack_[3].value.as < IR::ID > (), yystack_[1].value.as < IR::FieldListCalculation* > ()); }
#line 3234 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 72: // field_list_calculation_body: %empty
#line 443 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yylhs.value.as < IR::FieldListCalculation* > () = new IR::FieldListCalculation(driver.takePragmasAsVector()); }
#line 3240 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 73: // field_list_calculation_body: field_list_calculation_body INPUT "{" field_list_list "}"
#line 445 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { if (yystack_[4].value.as < IR::FieldListCalculation* > ()->input)
           ::P4::error(ErrorType::ERR_INVALID, "%s: multiple 'input' in field_list_calculation", yystack_[3].location);
        (yylhs.value.as < IR::FieldListCalculation* > ()=yystack_[4].value.as < IR::FieldListCalculation* > ())->input = yystack_[1].value.as < IR::NameList* > (); }
#line 3248 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 74: // field_list_calculation_body: field_list_calculation_body ALGORITHM ":" name ";"
#line 449 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { if (yystack_[4].value.as < IR::FieldListCalculation* > ()->algorithm)
            ::P4::error(ErrorType::ERR_INVALID,
                    "%s: multiple 'algorithm' in field_list_calculation", yystack_[3].location);
        (yylhs.value.as < IR::FieldListCalculation* > ()=yystack_[4].value.as < IR::FieldListCalculation* > ())->algorithm = new IR::NameList(yystack_[1].location, IR::ID(yystack_[1].location, yystack_[1].value.as < IR::ID > ())); }
#line 3257 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 75: // field_list_calculation_body: field_list_calculation_body ALGORITHM "{" action_list "}"
#line 454 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { if (yystack_[4].value.as < IR::FieldListCalculation* > ()->algorithm)
            ::P4::error(ErrorType::ERR_INVALID,
                    "%s: multiple 'algorithm' in field_list_calculation", yystack_[3].location);
        (yylhs.value.as < IR::FieldListCalculation* > ()=yystack_[4].value.as < IR::FieldListCalculation* > ())->algorithm = yystack_[1].value.as < IR::NameList* > (); }
#line 3266 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 76: // field_list_calculation_body: field_list_calculation_body OUTPUT_WIDTH ":" const_expression ";"
#line 459 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { if (yystack_[4].value.as < IR::FieldListCalculation* > ()->output_width)
            ::P4::error(ErrorType::ERR_INVALID,
                    "%s: multiple 'output_width' in field_list_calculation", yystack_[3].location);
        (yylhs.value.as < IR::FieldListCalculation* > ()=yystack_[4].value.as < IR::FieldListCalculation* > ())->output_width = yystack_[1].value.as < IR::Constant* > () ? yystack_[1].value.as < IR::Constant* > ()->asInt() : 0; }
#line 3275 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 77: // field_list_calculation_body: field_list_calculation_body error ";"
#line 463 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                            { yylhs.value.as < IR::FieldListCalculation* > () = yystack_[2].value.as < IR::FieldListCalculation* > (); }
#line 3281 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 78: // field_list_calculation_body: field_list_calculation_body error
#line 464 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                        { yylhs.value.as < IR::FieldListCalculation* > () = yystack_[1].value.as < IR::FieldListCalculation* > (); }
#line 3287 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 79: // field_list_list: %empty
#line 468 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yylhs.value.as < IR::NameList* > () = new IR::NameList; }
#line 3293 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 80: // field_list_list: field_list_list name ";"
#line 470 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::NameList* > ()=yystack_[2].value.as < IR::NameList* > ())->names.emplace_back(yystack_[1].location, yystack_[1].value.as < IR::ID > ()); }
#line 3299 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 81: // calculated_field_declaration: CALCULATED_FIELD field_ref "{" update_verify_spec_list "}"
#line 475 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yystack_[1].value.as < IR::CalculatedField* > ()->field = yystack_[3].value.as < IR::Member* > (); yystack_[1].value.as < IR::CalculatedField* > ()->srcInfo = yystack_[4].location + yystack_[0].location; driver.global->add(yystack_[3].value.as < IR::Member* > ()->toString(), yystack_[1].value.as < IR::CalculatedField* > ()); }
#line 3305 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 83: // update_verify_spec_list: %empty
#line 480 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yylhs.value.as < IR::CalculatedField* > () = new IR::CalculatedField(driver.takePragmasAsVector()); }
#line 3311 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 84: // update_verify_spec_list: update_verify_spec_list UPDATE name opt_condition ";"
#line 482 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::CalculatedField* > ()=yystack_[4].value.as < IR::CalculatedField* > ())->specs.emplace_back(yystack_[4].location+yystack_[2].location, true, IR::ID(yystack_[2].location, yystack_[2].value.as < IR::ID > ()), yystack_[1].value.as < IR::Expression* > ()); }
#line 3317 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 85: // update_verify_spec_list: update_verify_spec_list VERIFY name opt_condition ";"
#line 484 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::CalculatedField* > ()=yystack_[4].value.as < IR::CalculatedField* > ())->specs.emplace_back(yystack_[4].location+yystack_[2].location, false, IR::ID(yystack_[2].location, yystack_[2].value.as < IR::ID > ()), yystack_[1].value.as < IR::Expression* > ()); }
#line 3323 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 86: // update_verify_spec_list: update_verify_spec_list error ";"
#line 485 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                        { yylhs.value.as < IR::CalculatedField* > () = yystack_[2].value.as < IR::CalculatedField* > (); }
#line 3329 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 87: // update_verify_spec_list: update_verify_spec_list error
#line 486 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                    { yylhs.value.as < IR::CalculatedField* > () = yystack_[1].value.as < IR::CalculatedField* > (); }
#line 3335 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 88: // opt_condition: %empty
#line 489 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                             { yylhs.value.as < IR::Expression* > () = nullptr; }
#line 3341 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 89: // opt_condition: IF "(" expression ")"
#line 490 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                            { yylhs.value.as < IR::Expression* > () = yystack_[1].value.as < IR::Expression* > (); }
#line 3347 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 90: // value_set_declaration: PARSER_VALUE_SET name ";"
#line 499 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
    { driver.global->add(yystack_[1].value.as < IR::ID > (), new IR::ParserValueSet(yystack_[2].location, IR::ID(yystack_[1].location, yystack_[1].value.as < IR::ID > ()), driver.takePragmasAsVector())); }
#line 3353 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 91: // parser_function_declaration: PARSER name "{" parser_statement_list "}"
#line 507 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yystack_[1].value.as < IR::V1Parser* > ()->name = IR::ID(yystack_[3].location, yystack_[3].value.as < IR::ID > ()); yystack_[1].value.as < IR::V1Parser* > ()->srcInfo = yystack_[4].location + yystack_[0].location; driver.global->add(yystack_[3].value.as < IR::ID > (), yystack_[1].value.as < IR::V1Parser* > ()); }
#line 3359 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 93: // parser_statement_list: %empty
#line 512 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yylhs.value.as < IR::V1Parser* > () = new IR::V1Parser(driver.takePragmasAsVector()); }
#line 3365 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 94: // parser_statement_list: parser_statement_list EXTRACT "(" header_ref ")" ";"
#line 514 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::V1Parser* > ()=yystack_[5].value.as < IR::V1Parser* > ())->stmts.push_back(new IR::Primitive(yystack_[4].location+yystack_[1].location, yystack_[4].value.as < cstring > (), yystack_[2].value.as < IR::Expression* > ())); }
#line 3371 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 95: // parser_statement_list: parser_statement_list SET_METADATA "(" expression "," expression ")" ";"
#line 516 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::V1Parser* > ()=yystack_[7].value.as < IR::V1Parser* > ())->stmts.push_back(new IR::Primitive(yystack_[6].location+yystack_[1].location, yystack_[6].value.as < cstring > (), yystack_[4].value.as < IR::Expression* > (), yystack_[2].value.as < IR::Expression* > ())); }
#line 3377 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 96: // parser_statement_list: parser_statement_list expression "=" expression ";"
#line 518 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::V1Parser* > ()=yystack_[4].value.as < IR::V1Parser* > ())->stmts.push_back(new IR::Primitive(yystack_[2].location, "set_metadata"_cs, yystack_[3].value.as < IR::Expression* > (), yystack_[1].value.as < IR::Expression* > ())); }
#line 3383 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 97: // parser_statement_list: parser_statement_list RETURN name ";"
#line 520 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::V1Parser* > ()=yystack_[3].value.as < IR::V1Parser* > ())->default_return = IR::ID(yystack_[1].location, yystack_[1].value.as < IR::ID > ()); }
#line 3389 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 98: // parser_statement_list: parser_statement_list RETURN SELECT "(" expression_list ")" "{" case_entry_list "}"
#line 522 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::V1Parser* > ()=yystack_[8].value.as < IR::V1Parser* > ())->select = yystack_[4].value.as < IR::Vector<IR::Expression>* > (); yylhs.value.as < IR::V1Parser* > ()->cases = yystack_[1].value.as < IR::Vector<IR::CaseEntry>* > (); }
#line 3395 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 99: // parser_statement_list: parser_statement_list PARSE_ERROR name ";"
#line 524 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::V1Parser* > ()=yystack_[3].value.as < IR::V1Parser* > ())->parse_error = IR::ID(yystack_[1].location, yystack_[1].value.as < IR::ID > ()); }
#line 3401 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 100: // parser_statement_list: parser_statement_list DROP ";"
#line 526 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::V1Parser* > ()=yystack_[2].value.as < IR::V1Parser* > ())->drop = true; }
#line 3407 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 101: // parser_statement_list: parser_statement_list error ";"
#line 527 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                      { yylhs.value.as < IR::V1Parser* > () = yystack_[2].value.as < IR::V1Parser* > (); }
#line 3413 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 102: // parser_statement_list: parser_statement_list error
#line 528 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                  { yylhs.value.as < IR::V1Parser* > () = yystack_[1].value.as < IR::V1Parser* > (); }
#line 3419 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 103: // case_entry_list: %empty
#line 531 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                               { yylhs.value.as < IR::Vector<IR::CaseEntry>* > () = new IR::Vector<IR::CaseEntry>; }
#line 3425 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 104: // case_entry_list: case_entry_list case_value_list ":" name ";"
#line 533 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yystack_[3].value.as < IR::CaseEntry* > ()->action = IR::ID(yystack_[1].location, yystack_[1].value.as < IR::ID > ()); yystack_[4].value.as < IR::Vector<IR::CaseEntry>* > ()->srcInfo += yystack_[3].location + yystack_[1].location; (yylhs.value.as < IR::Vector<IR::CaseEntry>* > ()=yystack_[4].value.as < IR::Vector<IR::CaseEntry>* > ())->push_back(yystack_[3].value.as < IR::CaseEntry* > ()); }
#line 3431 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 105: // case_entry_list: case_entry_list case_value_list ":" PARSE_ERROR ";"
#line 535 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yystack_[3].value.as < IR::CaseEntry* > ()->action = IR::ID(yystack_[1].location, yystack_[1].value.as < cstring > ()); yystack_[4].value.as < IR::Vector<IR::CaseEntry>* > ()->srcInfo += yystack_[3].location + yystack_[1].location; (yylhs.value.as < IR::Vector<IR::CaseEntry>* > ()=yystack_[4].value.as < IR::Vector<IR::CaseEntry>* > ())->push_back(yystack_[3].value.as < IR::CaseEntry* > ()); }
#line 3437 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 106: // case_value_list: case_value
#line 539 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yylhs.value.as < IR::CaseEntry* > () = new IR::CaseEntry(yystack_[0].location);
                   yylhs.value.as < IR::CaseEntry* > ()->values.emplace_back(yystack_[0].value.as < CaseValue > ()); }
#line 3444 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 107: // case_value_list: case_value_list "," case_value
#line 541 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                     { (yylhs.value.as < IR::CaseEntry* > ()=yystack_[2].value.as < IR::CaseEntry* > ())->values.emplace_back(yystack_[0].value.as < CaseValue > ());
                                       yylhs.value.as < IR::CaseEntry* > ()->srcInfo += yystack_[0].location; }
#line 3451 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 108: // case_value: expression
#line 547 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yylhs.value.as < CaseValue > () = CaseValue(yystack_[0].value.as < IR::Expression* > () ? yystack_[0].value.as < IR::Expression* > () : new IR::Constant(-1), new IR::Constant(-1)); }
#line 3457 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 109: // case_value: expression MASK const_expression
#line 549 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yylhs.value.as < CaseValue > () = CaseValue(yystack_[2].value.as < IR::Expression* > () ? yystack_[2].value.as < IR::Expression* > () : new IR::Constant(-1), yystack_[0].value.as < IR::Constant* > () ? yystack_[0].value.as < IR::Constant* > () : new IR::Constant(0)); }
#line 3463 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 110: // case_value: DEFAULT
#line 551 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yylhs.value.as < CaseValue > () = CaseValue(new IR::Constant(0), new IR::Constant(0)); }
#line 3469 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 111: // parser_exception_declaration: PARSER_EXCEPTION name "{" parser_statement_list "}"
#line 559 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                                          {
          driver.clearPragmas();
          ::P4::warning(ErrorType::WARN_UNSUPPORTED,
                    "%1%: parser exception is not translated to P4-16", yystack_[4].value.as < cstring > ());
      }
#line 3479 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 113: // counter_declaration: COUNTER name "{" counter_spec_list "}"
#line 572 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yystack_[1].value.as < IR::Counter* > ()->name = IR::ID(yystack_[3].location, yystack_[3].value.as < IR::ID > ()); yystack_[1].value.as < IR::Counter* > ()->srcInfo = yystack_[4].location + yystack_[0].location; driver.global->add(yystack_[3].value.as < IR::ID > (), yystack_[1].value.as < IR::Counter* > ()); }
#line 3485 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 115: // counter_spec_list: TYPE ":" name ";"
#line 578 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::Counter* > () = new IR::Counter(driver.takePragmasAsVector()))->settype(yystack_[1].value.as < IR::ID > ()); }
#line 3491 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 116: // counter_spec_list: counter_spec_list DIRECT ":" name ";"
#line 580 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { if ((yylhs.value.as < IR::Counter* > ()=yystack_[4].value.as < IR::Counter* > ())->table)
            ::P4::error(ErrorType::ERR_INVALID, "%s: Can't attach counter to two tables", yystack_[3].location+yystack_[1].location);
        yylhs.value.as < IR::Counter* > ()->table = IR::ID(yystack_[1].location, yystack_[1].value.as < IR::ID > ());
        yylhs.value.as < IR::Counter* > ()->direct = true; }
#line 3500 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 117: // counter_spec_list: counter_spec_list STATIC ":" name ";"
#line 585 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { if ((yylhs.value.as < IR::Counter* > ()=yystack_[4].value.as < IR::Counter* > ())->table)
            ::P4::error(ErrorType::ERR_INVALID, "%s: Can't attach counter to two tables", yystack_[3].location+yystack_[1].location);
        yylhs.value.as < IR::Counter* > ()->table = IR::ID(yystack_[1].location, yystack_[1].value.as < IR::ID > ());
        yylhs.value.as < IR::Counter* > ()->direct = false; }
#line 3509 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 118: // counter_spec_list: counter_spec_list INSTANCE_COUNT ":" const_expression ";"
#line 590 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::Counter* > ()=yystack_[4].value.as < IR::Counter* > ())->instance_count = yystack_[1].value.as < IR::Constant* > () ? yystack_[1].value.as < IR::Constant* > ()->asLong() : 0; yystack_[1].value.as < IR::Constant* > () = nullptr; }
#line 3515 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 119: // counter_spec_list: counter_spec_list MAX_WIDTH ":" const_expression ";"
#line 592 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::Counter* > ()=yystack_[4].value.as < IR::Counter* > ())->max_width = yystack_[1].value.as < IR::Constant* > () ? yystack_[1].value.as < IR::Constant* > ()->asLong() : 0; yystack_[1].value.as < IR::Constant* > () = nullptr; }
#line 3521 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 120: // counter_spec_list: counter_spec_list MIN_WIDTH ":" const_expression ";"
#line 594 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::Counter* > ()=yystack_[4].value.as < IR::Counter* > ())->min_width = yystack_[1].value.as < IR::Constant* > () ? yystack_[1].value.as < IR::Constant* > ()->asLong() : 0; yystack_[1].value.as < IR::Constant* > () = nullptr; }
#line 3527 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 121: // counter_spec_list: counter_spec_list SATURATING ";"
#line 596 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::Counter* > ()=yystack_[2].value.as < IR::Counter* > ())->saturating = true; }
#line 3533 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 122: // counter_spec_list: counter_spec_list error ";"
#line 597 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                  { yylhs.value.as < IR::Counter* > () = yystack_[2].value.as < IR::Counter* > (); }
#line 3539 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 123: // counter_spec_list: counter_spec_list error
#line 598 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                              { yylhs.value.as < IR::Counter* > () = yystack_[1].value.as < IR::Counter* > (); }
#line 3545 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 124: // meter_declaration: METER name "{" meter_spec_list "}"
#line 606 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yystack_[1].value.as < IR::Meter* > ()->name = IR::ID(yystack_[3].location, yystack_[3].value.as < IR::ID > ()); yystack_[1].value.as < IR::Meter* > ()->srcInfo = yystack_[4].location + yystack_[0].location;
        driver.global->add(yystack_[3].value.as < IR::ID > (), yystack_[1].value.as < IR::Meter* > ()); }
#line 3552 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 126: // meter_spec_list: TYPE ":" name ";"
#line 613 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::Meter* > () = new IR::Meter(driver.takePragmasAsVector()))->settype(yystack_[1].value.as < IR::ID > ()); }
#line 3558 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 127: // meter_spec_list: meter_spec_list RESULT ":" field_ref ";"
#line 615 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::Meter* > ()=yystack_[4].value.as < IR::Meter* > ())->result = yystack_[1].value.as < IR::Member* > (); }
#line 3564 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 128: // meter_spec_list: meter_spec_list PRE_COLOR ":" field_ref ";"
#line 617 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::Meter* > ()=yystack_[4].value.as < IR::Meter* > ())->pre_color = yystack_[1].value.as < IR::Member* > (); }
#line 3570 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 129: // meter_spec_list: meter_spec_list DIRECT ":" name ";"
#line 619 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { if ((yylhs.value.as < IR::Meter* > ()=yystack_[4].value.as < IR::Meter* > ())->table)
            ::P4::error(ErrorType::ERR_INVALID, "%s: Can't attach meter to two tables", yystack_[3].location+yystack_[1].location);
        yylhs.value.as < IR::Meter* > ()->table = IR::ID(yystack_[1].location, yystack_[1].value.as < IR::ID > ());
        yylhs.value.as < IR::Meter* > ()->direct = true; }
#line 3579 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 130: // meter_spec_list: meter_spec_list STATIC ":" name ";"
#line 624 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { if ((yylhs.value.as < IR::Meter* > ()=yystack_[4].value.as < IR::Meter* > ())->table)
            ::P4::error(ErrorType::ERR_INVALID, "%s: Can't attach meter to two tables", yystack_[3].location+yystack_[1].location);
        yylhs.value.as < IR::Meter* > ()->table = IR::ID(yystack_[1].location, yystack_[1].value.as < IR::ID > ());
        yylhs.value.as < IR::Meter* > ()->direct = false; }
#line 3588 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 131: // meter_spec_list: meter_spec_list INSTANCE_COUNT ":" const_expression ";"
#line 629 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::Meter* > ()=yystack_[4].value.as < IR::Meter* > ())->instance_count = yystack_[1].value.as < IR::Constant* > () ? yystack_[1].value.as < IR::Constant* > ()->asLong() : 0; yystack_[1].value.as < IR::Constant* > () = nullptr; }
#line 3594 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 132: // meter_spec_list: meter_spec_list IMPLEMENTATION ":" name ";"
#line 631 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::Meter* > ()=yystack_[4].value.as < IR::Meter* > ())->implementation = IR::ID(yystack_[1].location, yystack_[1].value.as < IR::ID > ()); }
#line 3600 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 133: // meter_spec_list: meter_spec_list error ";"
#line 632 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                { yylhs.value.as < IR::Meter* > () = yystack_[2].value.as < IR::Meter* > (); }
#line 3606 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 134: // meter_spec_list: meter_spec_list error
#line 633 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                            { yylhs.value.as < IR::Meter* > () = yystack_[1].value.as < IR::Meter* > (); }
#line 3612 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 135: // register_declaration: REGISTER name "{" register_spec_list "}"
#line 641 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yystack_[1].value.as < IR::Register* > ()->name = IR::ID(yystack_[3].location, yystack_[3].value.as < IR::ID > ());
        yystack_[1].value.as < IR::Register* > ()->srcInfo = yystack_[4].location + yystack_[0].location;
        driver.global->add(yystack_[3].value.as < IR::ID > (), yystack_[1].value.as < IR::Register* > ()); }
#line 3620 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 137: // register_spec_list: WIDTH ":" const_expression ";"
#line 649 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yylhs.value.as < IR::Register* > () = new IR::Register(driver.takePragmasAsVector());
        yylhs.value.as < IR::Register* > ()->width = yystack_[1].value.as < IR::Constant* > () ? yystack_[1].value.as < IR::Constant* > ()->asLong() : 0;
        yystack_[1].value.as < IR::Constant* > () = nullptr; }
#line 3628 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 138: // register_spec_list: LAYOUT ":" name ";"
#line 653 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yylhs.value.as < IR::Register* > () = new IR::Register(driver.takePragmasAsVector());
        yylhs.value.as < IR::Register* > ()->layout = IR::ID(yystack_[1].location, yystack_[1].value.as < IR::ID > ()); }
#line 3635 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 139: // register_spec_list: register_spec_list DIRECT ":" name ";"
#line 656 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { if ((yylhs.value.as < IR::Register* > ()=yystack_[4].value.as < IR::Register* > ())->table)
            ::P4::error(ErrorType::ERR_INVALID, "%s: Can't attach register to two tables", yystack_[3].location+yystack_[1].location);
        yylhs.value.as < IR::Register* > ()->table = IR::ID(yystack_[1].location, yystack_[1].value.as < IR::ID > ());
        yylhs.value.as < IR::Register* > ()->direct = true; }
#line 3644 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 140: // register_spec_list: register_spec_list STATIC ":" name ";"
#line 661 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { if ((yylhs.value.as < IR::Register* > ()=yystack_[4].value.as < IR::Register* > ())->table)
            ::P4::error(ErrorType::ERR_INVALID, "%s: Can't attach register to two tables", yystack_[3].location+yystack_[1].location);
        yylhs.value.as < IR::Register* > ()->table = IR::ID(yystack_[1].location, yystack_[1].value.as < IR::ID > ());
        yylhs.value.as < IR::Register* > ()->direct = false; }
#line 3653 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 141: // register_spec_list: register_spec_list INSTANCE_COUNT ":" const_expression ";"
#line 666 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::Register* > ()=yystack_[4].value.as < IR::Register* > ())->instance_count = yystack_[1].value.as < IR::Constant* > () ? yystack_[1].value.as < IR::Constant* > ()->asLong() : 0; yystack_[1].value.as < IR::Constant* > () = nullptr; }
#line 3659 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 142: // register_spec_list: register_spec_list ATTRIBUTES ":" attributes ";"
#line 668 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::Register* > ()=yystack_[4].value.as < IR::Register* > ())->signed_ = yystack_[1].value.as < Attributes > ().signed_;
        yystack_[4].value.as < IR::Register* > ()->saturating = yystack_[1].value.as < Attributes > ().saturating; }
#line 3666 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 143: // register_spec_list: register_spec_list error ";"
#line 670 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                   { yylhs.value.as < IR::Register* > () = yystack_[2].value.as < IR::Register* > (); }
#line 3672 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 144: // register_spec_list: register_spec_list error
#line 671 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                               { yylhs.value.as < IR::Register* > () = yystack_[1].value.as < IR::Register* > (); }
#line 3678 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 145: // primitive_action_declaration: PRIMITIVE_ACTION name "(" name_list ")" ";"
#line 680 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { driver.clearPragmas(); yystack_[2].value.as < IR::NameList* > () = nullptr; }
#line 3684 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 146: // name_list: name
#line 683 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                { yylhs.value.as < IR::NameList* > () = new IR::NameList(yystack_[0].location, yystack_[0].value.as < IR::ID > ()); }
#line 3690 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 147: // name_list: name_list "," name
#line 684 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                         { (yylhs.value.as < IR::NameList* > ()=yystack_[2].value.as < IR::NameList* > ())->names.emplace_back(yystack_[0].location, yystack_[0].value.as < IR::ID > ());
                           yylhs.value.as < IR::NameList* > ()->srcInfo = yystack_[2].location + yystack_[0].location; }
#line 3697 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 148: // opt_name_list: %empty
#line 688 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                             { yylhs.value.as < IR::NameList* > () = nullptr; }
#line 3703 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 149: // opt_name_list: name_list
#line 689 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                { yylhs.value.as < IR::NameList* > () = yystack_[0].value.as < IR::NameList* > (); }
#line 3709 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 150: // action_function_declaration: ACTION name "(" opt_name_list ")" action_function_body
#line 698 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yystack_[0].value.as < IR::ActionFunction* > ()->name = IR::ID(yystack_[4].location, yystack_[4].value.as < IR::ID > ());
        if (yystack_[2].value.as < IR::NameList* > ()) for (auto &arg : yystack_[2].value.as < IR::NameList* > ()->names)
            yystack_[0].value.as < IR::ActionFunction* > ()->args.push_back(new IR::ActionArg(yystack_[4].value.as < IR::ID > (), arg));
        yystack_[2].value.as < IR::NameList* > () = nullptr;
        yystack_[0].value.as < IR::ActionFunction* > ()->srcInfo = yystack_[5].location + yystack_[0].location;
        driver.global->add(yystack_[4].value.as < IR::ID > (), yystack_[0].value.as < IR::ActionFunction* > ()); }
#line 3720 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 151: // action_function_body: "{" action_statement_list "}"
#line 707 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                           { yylhs.value.as < IR::ActionFunction* > () = yystack_[1].value.as < IR::ActionFunction* > (); }
#line 3726 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 152: // action_function_body: "{" action_statement_list error END
#line 708 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                           { yylhs.value.as < IR::ActionFunction* > () = yystack_[2].value.as < IR::ActionFunction* > (); }
#line 3732 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 153: // action_statement_list: %empty
#line 712 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yylhs.value.as < IR::ActionFunction* > () = new IR::ActionFunction(driver.takePragmasAsVector()); }
#line 3738 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 154: // action_statement_list: action_statement_list name "(" opt_expression_list ")" ";"
#line 714 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::ActionFunction* > () = yystack_[5].value.as < IR::ActionFunction* > ())->action.push_back(new IR::Primitive(yystack_[4].location+yystack_[1].location, yystack_[4].value.as < IR::ID > (), yystack_[2].value.as < IR::Vector<IR::Expression>* > ())); }
#line 3744 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 155: // action_statement_list: action_statement_list field_ref "=" expression ";"
#line 716 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::ActionFunction* > () = yystack_[4].value.as < IR::ActionFunction* > ())->action.push_back(new IR::Primitive(yystack_[2].location, "modify_field"_cs, yystack_[3].value.as < IR::Member* > (), yystack_[1].value.as < IR::Expression* > ())); }
#line 3750 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 156: // action_statement_list: action_statement_list field_ref "(" opt_expression_list ")" ";"
#line 718 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::ActionFunction* > () = yystack_[5].value.as < IR::ActionFunction* > ())->action.push_back(new IR::Primitive(yystack_[4].location+yystack_[1].location, yystack_[4].value.as < IR::Member* > ()->member, yystack_[4].value.as < IR::Member* > ()->expr, yystack_[2].value.as < IR::Vector<IR::Expression>* > ())); }
#line 3756 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 157: // action_statement_list: action_statement_list error ";"
#line 720 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yylhs.value.as < IR::ActionFunction* > () = yystack_[2].value.as < IR::ActionFunction* > (); }
#line 3762 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 158: // action_statement_list: action_statement_list error
#line 722 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yylhs.value.as < IR::ActionFunction* > () = yystack_[1].value.as < IR::ActionFunction* > (); }
#line 3768 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 159: // action_profile_declaration: ACTION_PROFILE name "{" action_profile_body "}"
#line 730 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yystack_[1].value.as < IR::ActionProfile* > ()->name = IR::ID(yystack_[3].location, yystack_[3].value.as < IR::ID > ()); yystack_[1].value.as < IR::ActionProfile* > ()->srcInfo = yystack_[4].location + yystack_[0].location; driver.global->add(yystack_[3].value.as < IR::ID > (), yystack_[1].value.as < IR::ActionProfile* > ()); }
#line 3774 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 160: // action_profile_body: %empty
#line 734 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yylhs.value.as < IR::ActionProfile* > () = new IR::ActionProfile(driver.takePragmasAsVector()); }
#line 3780 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 161: // action_profile_body: action_profile_body ACTIONS "{" action_list "}"
#line 736 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::ActionProfile* > ()=yystack_[4].value.as < IR::ActionProfile* > ())->actions = yystack_[1].value.as < IR::NameList* > ()->names; yystack_[1].value.as < IR::NameList* > () = nullptr; }
#line 3786 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 162: // action_profile_body: action_profile_body SIZE ":" const_expression ";"
#line 738 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::ActionProfile* > ()=yystack_[4].value.as < IR::ActionProfile* > ())->size = yystack_[1].value.as < IR::Constant* > () ? yystack_[1].value.as < IR::Constant* > ()->asLong() : 0; yystack_[1].value.as < IR::Constant* > () = nullptr; }
#line 3792 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 163: // action_profile_body: action_profile_body DYNAMIC_ACTION_SELECTION ":" name ";"
#line 740 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::ActionProfile* > ()=yystack_[4].value.as < IR::ActionProfile* > ())->selector = IR::ID(yystack_[1].location, yystack_[1].value.as < IR::ID > ()); }
#line 3798 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 164: // action_selector_declaration: ACTION_SELECTOR name "{" action_selector_body "}"
#line 744 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yystack_[1].value.as < IR::ActionSelector* > ()->name = IR::ID(yystack_[3].location, yystack_[3].value.as < IR::ID > ()); yystack_[1].value.as < IR::ActionSelector* > ()->srcInfo = yystack_[4].location + yystack_[0].location; driver.global->add(yystack_[3].value.as < IR::ID > (), yystack_[1].value.as < IR::ActionSelector* > ()); }
#line 3804 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 165: // action_selector_body: %empty
#line 748 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yylhs.value.as < IR::ActionSelector* > () = new IR::ActionSelector(driver.takePragmasAsVector()); }
#line 3810 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 166: // action_selector_body: action_selector_body SELECTION_KEY ":" name ";"
#line 749 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                                      { (yylhs.value.as < IR::ActionSelector* > ()=yystack_[4].value.as < IR::ActionSelector* > ())->key = IR::ID(yystack_[1].location, yystack_[1].value.as < IR::ID > ()); }
#line 3816 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 167: // action_selector_body: action_selector_body SELECTION_MODE ":" name ";"
#line 750 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                                       { (yylhs.value.as < IR::ActionSelector* > ()=yystack_[4].value.as < IR::ActionSelector* > ())->mode = IR::ID(yystack_[1].location, yystack_[1].value.as < IR::ID > ()); }
#line 3822 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 168: // action_selector_body: action_selector_body SELECTION_TYPE ":" name ";"
#line 751 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                                       { (yylhs.value.as < IR::ActionSelector* > ()=yystack_[4].value.as < IR::ActionSelector* > ())->type = IR::ID(yystack_[1].location, yystack_[1].value.as < IR::ID > ()); }
#line 3828 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 169: // table_declaration: TABLE name "{" table_body "}"
#line 759 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yystack_[1].value.as < IR::V1Table* > ()->name = IR::ID(yystack_[3].location, yystack_[3].value.as < IR::ID > ());
        yystack_[1].value.as < IR::V1Table* > ()->srcInfo = yystack_[4].location + yystack_[0].location;
        driver.global->add(yystack_[3].value.as < IR::ID > (), yystack_[1].value.as < IR::V1Table* > ()); }
#line 3836 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 171: // table_body: %empty
#line 766 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yylhs.value.as < IR::V1Table* > () = new IR::V1Table(driver.takePragmasAsVector()); }
#line 3842 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 172: // table_body: table_body READS "{" field_match_list "}"
#line 768 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::V1Table* > ()=yystack_[4].value.as < IR::V1Table* > ())->reads = yystack_[1].value.as < IR::Vector<IR::Expression>* > (); }
#line 3848 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 173: // table_body: table_body READS "{" field_match_list error END
#line 770 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::V1Table* > ()=yystack_[5].value.as < IR::V1Table* > ())->reads = yystack_[2].value.as < IR::Vector<IR::Expression>* > (); }
#line 3854 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 174: // table_body: table_body ACTIONS "{" action_list "}"
#line 772 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::V1Table* > ()=yystack_[4].value.as < IR::V1Table* > ())->actions = yystack_[1].value.as < IR::NameList* > ()->names; yystack_[1].value.as < IR::NameList* > () = nullptr; }
#line 3860 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 175: // table_body: table_body ACTION_PROFILE ":" name ";"
#line 774 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::V1Table* > ()=yystack_[4].value.as < IR::V1Table* > ())->action_profile = IR::ID(yystack_[1].location, yystack_[1].value.as < IR::ID > ()); }
#line 3866 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 176: // table_body: table_body MIN_SIZE ":" const_expression ";"
#line 776 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::V1Table* > ()=yystack_[4].value.as < IR::V1Table* > ())->min_size = yystack_[1].value.as < IR::Constant* > () ? yystack_[1].value.as < IR::Constant* > ()->asLong() : 0; yystack_[1].value.as < IR::Constant* > () = nullptr; }
#line 3872 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 177: // table_body: table_body MAX_SIZE ":" const_expression ";"
#line 778 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::V1Table* > ()=yystack_[4].value.as < IR::V1Table* > ())->max_size = yystack_[1].value.as < IR::Constant* > () ? yystack_[1].value.as < IR::Constant* > ()->asLong() : 0; yystack_[1].value.as < IR::Constant* > () = nullptr; }
#line 3878 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 178: // table_body: table_body SIZE ":" const_expression ";"
#line 780 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::V1Table* > ()=yystack_[4].value.as < IR::V1Table* > ())->size = yystack_[1].value.as < IR::Constant* > () ? yystack_[1].value.as < IR::Constant* > ()->asLong() : 0; yystack_[1].value.as < IR::Constant* > () = nullptr; }
#line 3884 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 179: // table_body: table_body DEFAULT_ACTION ":" name ";"
#line 782 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::V1Table* > ()=yystack_[4].value.as < IR::V1Table* > ())->default_action = IR::ID(yystack_[1].location, yystack_[1].value.as < IR::ID > ()); }
#line 3890 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 180: // table_body: table_body DEFAULT_ACTION ":" name "(" opt_expression_list ")" ";"
#line 784 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
        { (yylhs.value.as < IR::V1Table* > ()=yystack_[7].value.as < IR::V1Table* > ())->default_action = IR::ID(yystack_[4].location, yystack_[4].value.as < IR::ID > ());
          if (yystack_[2].value.as < IR::Vector<IR::Expression>* > () == nullptr) yylhs.value.as < IR::V1Table* > ()->default_action_is_const = true;
          yylhs.value.as < IR::V1Table* > ()->default_action_args = yystack_[2].value.as < IR::Vector<IR::Expression>* > (); }
#line 3898 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 181: // table_body: table_body CONST DEFAULT_ACTION ":" name ";"
#line 788 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::V1Table* > ()=yystack_[5].value.as < IR::V1Table* > ())->default_action = IR::ID(yystack_[1].location, yystack_[1].value.as < IR::ID > ());
          yylhs.value.as < IR::V1Table* > ()->default_action_is_const = true; }
#line 3905 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 182: // table_body: table_body CONST DEFAULT_ACTION ":" name "(" opt_expression_list ")" ";"
#line 791 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
        { (yylhs.value.as < IR::V1Table* > ()=yystack_[8].value.as < IR::V1Table* > ())->default_action = IR::ID(yystack_[4].location, yystack_[4].value.as < IR::ID > ());
          yylhs.value.as < IR::V1Table* > ()->default_action_args = yystack_[2].value.as < IR::Vector<IR::Expression>* > ();
	  yylhs.value.as < IR::V1Table* > ()->default_action_is_const = true; }
#line 3913 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 183: // table_body: table_body IDENTIFIER ":" expression ";"
#line 795 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { auto exp = new IR::ExpressionValue(yystack_[1].location, yystack_[1].value.as < IR::Expression* > ());
        auto prop = new IR::Property(yystack_[3].location, IR::ID(yystack_[3].location, yystack_[3].value.as < cstring > ()), exp, false);
        yystack_[4].value.as < IR::V1Table* > ()->addProperty(prop);
        yylhs.value.as < IR::V1Table* > () = yystack_[4].value.as < IR::V1Table* > (); }
#line 3922 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 184: // table_body: table_body error ";"
#line 799 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                           { yylhs.value.as < IR::V1Table* > ()=yystack_[2].value.as < IR::V1Table* > (); }
#line 3928 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 185: // table_body: table_body error
#line 800 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                       { yylhs.value.as < IR::V1Table* > ()=yystack_[1].value.as < IR::V1Table* > (); }
#line 3934 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 186: // field_match_list: %empty
#line 803 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                { yylhs.value.as < IR::Vector<IR::Expression>* > () = new IR::Vector<IR::Expression>(); }
#line 3940 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 187: // field_match_list: field_match_list field_or_masked_ref ":" name ";"
#line 805 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::Vector<IR::Expression>* > ()=yystack_[4].value.as < IR::Vector<IR::Expression>* > ())->push_back(yystack_[3].value.as < IR::Expression* > ());
        yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo += yystack_[3].location + yystack_[1].location;
        yystack_[(5) - (-2)].value.as< IR::V1Table* > ()->reads_types.push_back(IR::ID(yystack_[1].location, yystack_[1].value.as < IR::ID > ())); }
#line 3948 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 188: // field_match_list: field_match_list header_ref ":" VALID ";"
#line 809 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::Vector<IR::Expression>* > ()=yystack_[4].value.as < IR::Vector<IR::Expression>* > ())->push_back(new IR::Primitive(yystack_[3].location+yystack_[1].location, yystack_[1].value.as < cstring > (), yystack_[3].value.as < IR::Expression* > ()));
        yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo += yystack_[3].location + yystack_[1].location;
        yystack_[(5) - (-2)].value.as< IR::V1Table* > ()->reads_types.push_back(IR::ID(yystack_[1].location, yystack_[1].value.as < cstring > ())); }
#line 3956 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 189: // field_match_list: field_match_list field_or_masked_ref ":" VALID ";"
#line 813 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::Vector<IR::Expression>* > ()=yystack_[4].value.as < IR::Vector<IR::Expression>* > ())->push_back(new IR::Primitive(yystack_[3].location+yystack_[1].location, yystack_[1].value.as < cstring > (), removeRedundantValid(yystack_[3].value.as < IR::Expression* > ())));
        yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo += yystack_[3].location + yystack_[1].location;
        yystack_[(5) - (-2)].value.as< IR::V1Table* > ()->reads_types.push_back(IR::ID(yystack_[1].location, yystack_[1].value.as < cstring > ())); }
#line 3964 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 190: // field_match_list: field_match_list error ";"
#line 816 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                 { yylhs.value.as < IR::Vector<IR::Expression>* > () = yystack_[2].value.as < IR::Vector<IR::Expression>* > (); }
#line 3970 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 191: // field_match_list: field_match_list error
#line 817 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                             { yylhs.value.as < IR::Vector<IR::Expression>* > () = yystack_[1].value.as < IR::Vector<IR::Expression>* > (); }
#line 3976 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 192: // field_or_masked_ref: field_ref
#line 821 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                { yylhs.value.as < IR::Expression* > () = yystack_[0].value.as < IR::Member* > (); }
#line 3982 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 193: // field_or_masked_ref: field_ref MASK const_expression
#line 823 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yylhs.value.as < IR::Expression* > () = new IR::Mask(yystack_[1].location, yystack_[2].value.as < IR::Member* > (), yystack_[0].value.as < IR::Constant* > ()); }
#line 3988 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 194: // field_or_masked_ref: header_ref "." VALID
#line 825 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yylhs.value.as < IR::Expression* > () = new IR::Primitive(yystack_[2].location+yystack_[0].location, yystack_[0].value.as < cstring > (), yystack_[2].value.as < IR::Expression* > ()); }
#line 3994 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 195: // field_or_masked_ref: header_ref "." VALID MASK const_expression
#line 827 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yylhs.value.as < IR::Expression* > () = new IR::Mask(yystack_[1].location, new IR::Primitive(yystack_[4].location+yystack_[2].location, yystack_[2].value.as < cstring > (), yystack_[4].value.as < IR::Expression* > ()), yystack_[0].value.as < IR::Constant* > ()); }
#line 4000 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 196: // action_list: %empty
#line 830 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                           { yylhs.value.as < IR::NameList* > () = new IR::NameList(); }
#line 4006 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 197: // action_list: action_list name ";"
#line 831 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                           { (yylhs.value.as < IR::NameList* > ()=yystack_[2].value.as < IR::NameList* > ())->names.emplace_back(yystack_[1].location, yystack_[1].value.as < IR::ID > ()); }
#line 4012 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 198: // control_function_declaration: CONTROL name "{" control_statement_list "}"
#line 839 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { driver.global->add(yystack_[3].value.as < IR::ID > (), new IR::V1Control(yystack_[4].location+yystack_[0].location, IR::ID(yystack_[3].location, yystack_[3].value.as < IR::ID > ()), yystack_[1].value.as < IR::Vector<IR::Expression>* > (),
                                                 driver.takePragmasAsVector())); }
#line 4019 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 200: // control_statement_list: %empty
#line 844 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                      { yylhs.value.as < IR::Vector<IR::Expression>* > () = new IR::Vector<IR::Expression>; }
#line 4025 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 201: // control_statement_list: control_statement_list control_statement
#line 845 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                               { (yylhs.value.as < IR::Vector<IR::Expression>* > ()=yystack_[1].value.as < IR::Vector<IR::Expression>* > ())->append(*yystack_[0].value.as < IR::Vector<IR::Expression>* > ()); }
#line 4031 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 202: // control_statement_list: control_statement_list error ";"
#line 846 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                       { yylhs.value.as < IR::Vector<IR::Expression>* > () = yystack_[2].value.as < IR::Vector<IR::Expression>* > (); }
#line 4037 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 203: // control_statement_list: control_statement_list error
#line 847 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                   { yylhs.value.as < IR::Vector<IR::Expression>* > () = yystack_[1].value.as < IR::Vector<IR::Expression>* > (); }
#line 4043 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 204: // control_statement: APPLY "(" name ")" ";"
#line 852 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yylhs.value.as < IR::Vector<IR::Expression>* > () = new IR::Vector<IR::Expression>(new IR::Apply(yystack_[4].location+yystack_[1].location, IR::ID(yystack_[2].location, yystack_[2].value.as < IR::ID > ()))); }
#line 4049 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 205: // control_statement: APPLY "(" name ")" "{" apply_case_list "}"
#line 854 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yystack_[1].value.as < IR::Apply* > ()->name = IR::ID(yystack_[4].location, yystack_[4].value.as < IR::ID > ()); yystack_[1].value.as < IR::Apply* > ()->srcInfo = yystack_[6].location+yystack_[3].location; yylhs.value.as < IR::Vector<IR::Expression>* > () = new IR::Vector<IR::Expression>(yystack_[1].value.as < IR::Apply* > ()); }
#line 4055 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 206: // control_statement: IF "(" expression ")" control_statement
#line 856 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yylhs.value.as < IR::Vector<IR::Expression>* > () = new IR::Vector<IR::Expression>(new IR::If(yystack_[4].location+yystack_[2].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Vector<IR::Expression>* > (), nullptr)); }
#line 4061 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 207: // control_statement: IF "(" expression ")" control_statement ELSE control_statement
#line 858 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yylhs.value.as < IR::Vector<IR::Expression>* > () = new IR::Vector<IR::Expression>(new IR::If(yystack_[6].location+yystack_[4].location, yystack_[4].value.as < IR::Expression* > (), yystack_[2].value.as < IR::Vector<IR::Expression>* > (), yystack_[0].value.as < IR::Vector<IR::Expression>* > ())); }
#line 4067 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 208: // control_statement: name "(" ")" ";"
#line 860 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yylhs.value.as < IR::Vector<IR::Expression>* > () = new IR::Vector<IR::Expression>(new IR::Primitive(yystack_[3].location+yystack_[1].location, yystack_[3].value.as < IR::ID > ())); }
#line 4073 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 209: // control_statement: "{" control_statement_list "}"
#line 862 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yylhs.value.as < IR::Vector<IR::Expression>* > () = yystack_[1].value.as < IR::Vector<IR::Expression>* > (); }
#line 4079 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 210: // apply_case_list: %empty
#line 865 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                               { yylhs.value.as < IR::Apply* > () = new IR::Apply; }
#line 4085 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 211: // apply_case_list: apply_case_list name_list control_statement
#line 867 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
        { for (auto name : yystack_[1].value.as < IR::NameList* > ()->names) {
              yystack_[2].value.as < IR::Apply* > ()->actions[name] = yystack_[0].value.as < IR::Vector<IR::Expression>* > ();
              yystack_[2].value.as < IR::Apply* > ()->position[name] = new IR::Path(name);
          }
          yylhs.value.as < IR::Apply* > () = yystack_[2].value.as < IR::Apply* > (); }
#line 4095 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 212: // apply_case_list: apply_case_list DEFAULT control_statement
#line 873 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
        { (yylhs.value.as < IR::Apply* > ()=yystack_[2].value.as < IR::Apply* > ())->actions["default"_cs] = yystack_[0].value.as < IR::Vector<IR::Expression>* > (); }
#line 4101 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 213: // blackbox_type_declaration: BLACKBOX_TYPE name "{" blackbox_body "}"
#line 881 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { driver.global->add(yystack_[3].value.as < IR::ID > (),
          new IR::Type_Extern(yystack_[4].location+yystack_[0].location, IR::ID(yystack_[3].location, yystack_[3].value.as < IR::ID > ()), *yystack_[1].value.as < BBoxType > ().methods,
                              *yystack_[1].value.as < BBoxType > ().attribs, driver.takePragmasAsVector())); }
#line 4109 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 214: // blackbox_body: %empty
#line 886 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                             {
            yylhs.value.as < BBoxType > ().methods = new IR::Vector<IR::Method>;
            yylhs.value.as < BBoxType > ().attribs = new IR::NameMap<IR::Attribute, ordered_map>; }
#line 4117 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 215: // blackbox_body: blackbox_body ATTRIBUTE name "{" blackbox_attribute "}"
#line 890 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
          { (yylhs.value.as < BBoxType > ()=yystack_[5].value.as < BBoxType > ()).attribs->addUnique(yystack_[3].value.as < IR::ID > (), yystack_[1].value.as < IR::Attribute* > ()); }
#line 4123 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 216: // blackbox_body: blackbox_body METHOD name "(" opt_argument_list ")" ";"
#line 892 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
          { (yylhs.value.as < BBoxType > ()=yystack_[6].value.as < BBoxType > ()).methods->push_back(new IR::Method(yystack_[5].location+yystack_[4].location, yystack_[4].value.as < IR::ID > (),
                new IR::Type_Method(yystack_[3].location+yystack_[1].location, IR::Type::Void::get(), yystack_[2].value.as < IR::ParameterList* > (), yystack_[4].value.as < IR::ID > ()))); }
#line 4130 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 217: // blackbox_body: blackbox_body METHOD name "(" opt_argument_list ")" "{" blackbox_method "}"
#line 895 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
          { (yylhs.value.as < BBoxType > ()=yystack_[8].value.as < BBoxType > ()).methods->push_back(new IR::Method(yystack_[7].location+yystack_[6].location, yystack_[6].value.as < IR::ID > (),
                new IR::Type_Method(yystack_[5].location+yystack_[3].location, IR::Type::Void::get(), yystack_[4].value.as < IR::ParameterList* > (), yystack_[6].value.as < IR::ID > ()), yystack_[1].value.as < IR::Vector<IR::Annotation>* > ())); }
#line 4137 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 218: // blackbox_body: blackbox_body error
#line 897 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                          { yylhs.value.as < BBoxType > () = yystack_[1].value.as < BBoxType > (); }
#line 4143 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 219: // blackbox_attribute: %empty
#line 900 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                  { yylhs.value.as < IR::Attribute* > () = new IR::Attribute(yystack_[(0) - (-1)].value.as< IR::ID > ()); }
#line 4149 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 220: // blackbox_attribute: blackbox_attribute TYPE ":" type ";"
#line 901 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                           { (yylhs.value.as < IR::Attribute* > ()=yystack_[4].value.as < IR::Attribute* > ())->type = yystack_[1].value.as < ConstType* > (); }
#line 4155 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 221: // blackbox_attribute: blackbox_attribute EXPRESSION_LOCAL_VARIABLES "{" opt_locals_list "}"
#line 903 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
        { (yylhs.value.as < IR::Attribute* > ()=yystack_[4].value.as < IR::Attribute* > ())->locals = yystack_[1].value.as < IR::AttribLocals* > (); }
#line 4161 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 222: // blackbox_attribute: blackbox_attribute OPTIONAL ";"
#line 905 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
        { (yylhs.value.as < IR::Attribute* > ()=yystack_[2].value.as < IR::Attribute* > ())->optional = true; }
#line 4167 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 223: // blackbox_attribute: blackbox_attribute error ";"
#line 906 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                   { yylhs.value.as < IR::Attribute* > () = yystack_[2].value.as < IR::Attribute* > (); }
#line 4173 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 224: // blackbox_attribute: blackbox_attribute error
#line 907 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                               { yylhs.value.as < IR::Attribute* > () = yystack_[1].value.as < IR::Attribute* > (); }
#line 4179 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 225: // blackbox_method: %empty
#line 910 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yylhs.value.as < IR::Vector<IR::Annotation>* > () = new IR::Vector<IR::Annotation>(); }
#line 4185 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 226: // blackbox_method: blackbox_method READS "{" opt_name_list "}"
#line 912 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
       { (yylhs.value.as < IR::Vector<IR::Annotation>* > ()=yystack_[4].value.as < IR::Vector<IR::Annotation>* > ())->push_back(new IR::Annotation(yystack_[3].location, yystack_[3].value.as < cstring > (), driver.makeExpressionList(yystack_[1].value.as < IR::NameList* > ()))); }
#line 4191 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 227: // blackbox_method: blackbox_method WRITES "{" opt_name_list "}"
#line 914 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
       { (yylhs.value.as < IR::Vector<IR::Annotation>* > ()=yystack_[4].value.as < IR::Vector<IR::Annotation>* > ())->push_back(new IR::Annotation(yystack_[3].location, yystack_[3].value.as < cstring > (), driver.makeExpressionList(yystack_[1].value.as < IR::NameList* > ()))); }
#line 4197 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 228: // opt_argument_list: %empty
#line 918 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                    { yylhs.value.as < IR::ParameterList* > () = new IR::ParameterList; }
#line 4203 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 229: // opt_argument_list: argument_list
#line 919 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                    { yylhs.value.as < IR::ParameterList* > () = yystack_[0].value.as < IR::ParameterList* > (); }
#line 4209 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 230: // argument_list: argument
#line 923 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                      { yylhs.value.as < IR::ParameterList* > () = new IR::ParameterList({yystack_[0].value.as < IR::Parameter* > ()}); }
#line 4215 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 231: // argument_list: argument_list "," argument
#line 924 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                      { (yylhs.value.as < IR::ParameterList* > ()=yystack_[2].value.as < IR::ParameterList* > ())->push_back(yystack_[0].value.as < IR::Parameter* > ()); }
#line 4221 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 232: // argument: inout type name
#line 929 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
        { yylhs.value.as < IR::Parameter* > () = new IR::Parameter(yystack_[0].location, yystack_[0].value.as < IR::ID > (), yystack_[2].value.as < IR::Direction > (), yystack_[1].value.as < ConstType* > ()); }
#line 4227 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 233: // argument: OPTIONAL argument
#line 931 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
        { (yylhs.value.as < IR::Parameter* > () = yystack_[0].value.as < IR::Parameter* > ())->annotations.push_back(new IR::Annotation(yystack_[1].location, yystack_[1].value.as < cstring > (), {})); }
#line 4233 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 234: // inout: IN
#line 934 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
          { yylhs.value.as < IR::Direction > () = IR::Direction::In; }
#line 4239 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 235: // inout: OUT
#line 934 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                            { yylhs.value.as < IR::Direction > () = IR::Direction::Out; }
#line 4245 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 236: // opt_locals_list: %empty
#line 936 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yylhs.value.as < IR::AttribLocals* > () = nullptr; }
#line 4251 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 237: // opt_locals_list: locals_list
#line 936 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                     { yylhs.value.as < IR::AttribLocals* > () = yystack_[0].value.as < IR::AttribLocals* > (); }
#line 4257 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 238: // locals_list: local_var
#line 938 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                 { (yylhs.value.as < IR::AttribLocals* > () = new IR::AttribLocals())->locals[yystack_[0].value.as < IR::AttribLocal* > ()->name] = yystack_[0].value.as < IR::AttribLocal* > (); }
#line 4263 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 239: // locals_list: locals_list "," local_var
#line 939 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                 { (yylhs.value.as < IR::AttribLocals* > () = yystack_[2].value.as < IR::AttribLocals* > ())->locals[yystack_[0].value.as < IR::AttribLocal* > ()->name] = yystack_[0].value.as < IR::AttribLocal* > (); }
#line 4269 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 240: // local_var: name
#line 942 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                        { yylhs.value.as < IR::AttribLocal* > () = new IR::AttribLocal(yystack_[0].location, yystack_[0].value.as < IR::ID > ()); }
#line 4275 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 241: // local_var: type name
#line 943 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                        { yylhs.value.as < IR::AttribLocal* > () = new IR::AttribLocal(yystack_[1].location+yystack_[0].location, yystack_[1].value.as < ConstType* > (), yystack_[0].value.as < IR::ID > ()); }
#line 4281 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 242: // blackbox_instantiation: BLACKBOX name name ";"
#line 948 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
        { driver.global->add(yystack_[1].value.as < IR::ID > (),
            new IR::Declaration_Instance(yystack_[1].location, yystack_[1].value.as < IR::ID > (), driver.takePragmasAsVector(),
                                         new IR::Type_Name(yystack_[2].value.as < IR::ID > ()),
                                         new IR::Vector<IR::Argument>)); }
#line 4290 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 243: // blackbox_instantiation: BLACKBOX name name "{" blackbox_config "}"
#line 953 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
        { auto instance =
            new IR::Declaration_Instance(yystack_[3].location, yystack_[3].value.as < IR::ID > (), driver.takePragmasAsVector(),
                                         new IR::Type_Name(yystack_[4].value.as < IR::ID > ()),
                                         new IR::Vector<IR::Argument>);
          instance->properties = std::move(*yystack_[1].value.as < IR::NameMap<IR::Property>* > ());
          driver.global->add(yystack_[3].value.as < IR::ID > (), instance); }
#line 4301 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 244: // blackbox_config: %empty
#line 961 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                               { yylhs.value.as < IR::NameMap<IR::Property>* > () = new IR::NameMap<IR::Property>; }
#line 4307 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 245: // blackbox_config: blackbox_config name ":" expressions ";"
#line 963 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
          { const IR::PropertyValue *pv;
            if (yystack_[1].value.as < IR::Vector<IR::Expression>* > ()->size() == 1)
                pv = new IR::ExpressionValue(yystack_[1].location, yystack_[1].value.as < IR::Vector<IR::Expression>* > ()->front());
            else
                pv = new IR::ExpressionListValue(yystack_[1].location, std::move(*yystack_[1].value.as < IR::Vector<IR::Expression>* > ()));
            (yylhs.value.as < IR::NameMap<IR::Property>* > ()=yystack_[4].value.as < IR::NameMap<IR::Property>* > ())->add(yystack_[3].value.as < IR::ID > (), new IR::Property(yystack_[3].location+yystack_[1].location, yystack_[3].value.as < IR::ID > (), pv, false)); }
#line 4318 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 246: // blackbox_config: blackbox_config name "{" expressions "}"
#line 970 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
          { auto *pv = new IR::ExpressionListValue(std::move(*yystack_[1].value.as < IR::Vector<IR::Expression>* > ()));
            (yylhs.value.as < IR::NameMap<IR::Property>* > ()=yystack_[4].value.as < IR::NameMap<IR::Property>* > ())->add(yystack_[3].value.as < IR::ID > (), new IR::Property(yystack_[3].location+yystack_[1].location, yystack_[3].value.as < IR::ID > (), pv, false)); }
#line 4325 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 247: // expressions: %empty
#line 975 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yylhs.value.as < IR::Vector<IR::Expression>* > () = new IR::Vector<IR::Expression>; }
#line 4331 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 248: // expressions: expressions expression
#line 977 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::Vector<IR::Expression>* > ()=yystack_[1].value.as < IR::Vector<IR::Expression>* > ())->push_back(yystack_[0].value.as < IR::Expression* > ()); yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo += yystack_[0].location; }
#line 4337 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 249: // expressions: expressions "," expression
#line 979 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::Vector<IR::Expression>* > ()=yystack_[2].value.as < IR::Vector<IR::Expression>* > ())->push_back(yystack_[0].value.as < IR::Expression* > ()); yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo += yystack_[0].location; }
#line 4343 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 250: // expressions: expressions IDENTIFIER "(" expressions ")"
#line 981 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::Vector<IR::Expression>* > ()=yystack_[4].value.as < IR::Vector<IR::Expression>* > ())->push_back(new IR::Primitive(yystack_[3].location, yystack_[3].value.as < cstring > (), yystack_[1].value.as < IR::Vector<IR::Expression>* > ())); yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo += yystack_[0].location; }
#line 4349 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 251: // pragma_operands: %empty
#line 985 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { yylhs.value.as < IR::Vector<IR::Expression>* > () = new IR::Vector<IR::Expression>; }
#line 4355 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 252: // pragma_operands: pragma_operands pragma_operand
#line 987 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::Vector<IR::Expression>* > ()=yystack_[1].value.as < IR::Vector<IR::Expression>* > ())->push_back(yystack_[0].value.as < IR::Expression* > ()); yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo += yystack_[0].location; }
#line 4361 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 253: // pragma_operands: pragma_operands "," pragma_operand
#line 989 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
      { (yylhs.value.as < IR::Vector<IR::Expression>* > ()=yystack_[2].value.as < IR::Vector<IR::Expression>* > ())->push_back(yystack_[0].value.as < IR::Expression* > ()); yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo += yystack_[0].location; }
#line 4367 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 254: // pragma_operand: INTEGER
#line 993 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
              { yylhs.value.as < IR::Expression* > () = parseConstant(yystack_[0].location, yystack_[0].value.as < UnparsedConstant > (), 0); }
#line 4373 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 255: // pragma_operand: STRING_LITERAL
#line 994 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                     { yylhs.value.as < IR::Expression* > () = new IR::StringLiteral(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4379 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 256: // pragma_operand: name
#line 995 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
           { yylhs.value.as < IR::Expression* > () = new IR::StringLiteral(yystack_[0].location, yystack_[0].value.as < IR::ID > ()); }
#line 4385 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 257: // pragma_operand: name "." name
#line 996 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                    { yylhs.value.as < IR::Expression* > () = new IR::StringLiteral(yystack_[2].location+yystack_[0].location, yystack_[2].value.as < IR::ID > () + '.' + yystack_[0].value.as < IR::ID > ()); }
#line 4391 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 258: // expression: VALID "(" header_or_field_ref ")"
#line 1004 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                        { yylhs.value.as < IR::Expression* > () = new IR::Primitive(yystack_[3].location+yystack_[0].location, yystack_[3].value.as < cstring > (), yystack_[1].value.as < IR::Expression* > ()); }
#line 4397 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 259: // expression: CURRENT "(" const_expression "," const_expression ")"
#line 1006 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::Primitive(yystack_[5].location+yystack_[0].location, yystack_[5].value.as < cstring > (), yystack_[3].value.as < IR::Constant* > (), yystack_[1].value.as < IR::Constant* > ()); }
#line 4403 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 260: // expression: field_ref
#line 1007 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                { yylhs.value.as < IR::Expression* > () = yystack_[0].value.as < IR::Member* > (); }
#line 4409 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 261: // expression: header_ref
#line 1008 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yylhs.value.as < IR::Expression* > () = yystack_[0].value.as < IR::Expression* > (); }
#line 4415 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 262: // expression: header_ref "." VALID
#line 1009 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                           { yylhs.value.as < IR::Expression* > () = new IR::Primitive(yystack_[2].location+yystack_[0].location, yystack_[0].value.as < cstring > (), yystack_[2].value.as < IR::Expression* > ()); }
#line 4421 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 263: // expression: LATEST "." name
#line 1010 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                      { yylhs.value.as < IR::Expression* > () = new IR::Member(yystack_[2].location+yystack_[0].location,
                                            new IR::PathExpression(IR::ID(yystack_[2].location, yystack_[2].value.as < cstring > ())),
                                            IR::ID(yystack_[0].location, yystack_[0].value.as < IR::ID > ())); }
#line 4429 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 264: // expression: INTEGER
#line 1013 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = parseConstant(yystack_[0].location, yystack_[0].value.as < UnparsedConstant > (), 0); }
#line 4435 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 265: // expression: "(" expression ")"
#line 1014 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = yystack_[1].value.as < IR::Expression* > (); }
#line 4441 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 266: // expression: "!" expression
#line 1015 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::LNot(yystack_[1].location, yystack_[0].value.as < IR::Expression* > ()); }
#line 4447 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 267: // expression: "~" expression
#line 1016 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Cmpl(yystack_[1].location, yystack_[0].value.as < IR::Expression* > ()); }
#line 4453 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 268: // expression: "-" expression
#line 1017 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Neg(yystack_[1].location, yystack_[0].value.as < IR::Expression* > ()); }
#line 4459 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 269: // expression: "+" expression
#line 1018 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = yystack_[0].value.as < IR::Expression* > (); }
#line 4465 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 270: // expression: expression "*" expression
#line 1019 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Mul(yystack_[1].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 4471 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 271: // expression: expression "/" expression
#line 1020 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Div(yystack_[1].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 4477 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 272: // expression: expression "%" expression
#line 1021 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Mod(yystack_[1].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 4483 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 273: // expression: expression "+" expression
#line 1022 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Add(yystack_[1].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 4489 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 274: // expression: expression "-" expression
#line 1023 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Sub(yystack_[1].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 4495 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 275: // expression: expression "<<" expression
#line 1024 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Shl(yystack_[1].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 4501 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 276: // expression: expression ">>" expression
#line 1025 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Shr(yystack_[1].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 4507 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 277: // expression: expression "<=" expression
#line 1026 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Leq(yystack_[1].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 4513 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 278: // expression: expression ">=" expression
#line 1027 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Geq(yystack_[1].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 4519 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 279: // expression: expression "<" expression
#line 1028 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Lss(yystack_[1].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 4525 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 280: // expression: expression ">" expression
#line 1029 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Grt(yystack_[1].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 4531 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 281: // expression: expression "!=" expression
#line 1030 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Neq(yystack_[1].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 4537 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 282: // expression: expression "==" expression
#line 1031 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Equ(yystack_[1].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 4543 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 283: // expression: expression "&" expression
#line 1032 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::BAnd(yystack_[1].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 4549 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 284: // expression: expression "^" expression
#line 1033 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::BXor(yystack_[1].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 4555 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 285: // expression: expression "|" expression
#line 1034 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::BOr(yystack_[1].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 4561 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 286: // expression: expression "&&" expression
#line 1035 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::LAnd(yystack_[1].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 4567 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 287: // expression: expression "||" expression
#line 1036 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::LOr(yystack_[1].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 4573 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 288: // expression: TRUE
#line 1037 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::BoolLiteral(yystack_[0].location, true); }
#line 4579 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 289: // expression: FALSE
#line 1038 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::BoolLiteral(yystack_[0].location, false); }
#line 4585 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 290: // header_or_field_ref: header_ref
#line 1042 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yylhs.value.as < IR::Expression* > () = yystack_[0].value.as < IR::Expression* > (); }
#line 4591 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 291: // header_or_field_ref: field_ref
#line 1043 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                { yylhs.value.as < IR::Expression* > () = yystack_[0].value.as < IR::Member* > (); }
#line 4597 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 292: // header_ref: name
#line 1047 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                    { yylhs.value.as < IR::Expression* > () = new IR::PathExpression(IR::ID(yystack_[0].location, yystack_[0].value.as < IR::ID > ())); }
#line 4603 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 293: // header_ref: header_ref "[" expression "]"
#line 1048 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                    { yylhs.value.as < IR::Expression* > () = new IR::HeaderStackItemRef(yystack_[3].location+yystack_[0].location, yystack_[3].value.as < IR::Expression* > (), yystack_[1].value.as < IR::Expression* > ()); }
#line 4609 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 294: // field_ref: header_ref "." name
#line 1052 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
         { yylhs.value.as < IR::Member* > () = new IR::Member(yystack_[2].location+yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), IR::ID(yystack_[0].location, yystack_[0].value.as < IR::ID > ())); }
#line 4615 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 295: // const_expression: expression
#line 1056 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
        { if (!(yylhs.value.as < IR::Constant* > () = driver.constantFold(&*yystack_[0].value.as < IR::Expression* > ())))
                ::P4::error(ErrorType::ERR_INVALID, "%s: Non constant expression", yystack_[0].location); }
#line 4622 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 296: // expression_list: expression
#line 1061 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yylhs.value.as < IR::Vector<IR::Expression>* > () = new IR::Vector<IR::Expression>(yystack_[0].value.as < IR::Expression* > ()); yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo = yystack_[0].location; }
#line 4628 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 297: // expression_list: expression_list "," expression
#line 1062 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                     { (yylhs.value.as < IR::Vector<IR::Expression>* > ()=yystack_[2].value.as < IR::Vector<IR::Expression>* > ())->push_back(yystack_[0].value.as < IR::Expression* > ()); yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo += yystack_[0].location; }
#line 4634 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 298: // opt_expression_list: %empty
#line 1065 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                   { yylhs.value.as < IR::Vector<IR::Expression>* > () = nullptr; }
#line 4640 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 299: // opt_expression_list: expression_list
#line 1065 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                                                       { yylhs.value.as < IR::Vector<IR::Expression>* > () = yystack_[0].value.as < IR::Vector<IR::Expression>* > (); }
#line 4646 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 300: // name: IDENTIFIER
#line 1067 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4652 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 301: // name: ACTION
#line 1068 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
             { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4658 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 302: // name: ACTIONS
#line 1069 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
              { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4664 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 303: // name: ACTION_PROFILE
#line 1070 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                     { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4670 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 304: // name: ACTION_SELECTOR
#line 1071 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                      { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4676 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 305: // name: ALGORITHM
#line 1072 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4682 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 306: // name: ATTRIBUTE
#line 1073 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4688 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 307: // name: ATTRIBUTES
#line 1074 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4694 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 308: // name: BIT
#line 1075 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
          { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4700 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 309: // name: BLACKBOX
#line 1076 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
               { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4706 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 310: // name: BLACKBOX_TYPE
#line 1077 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                    { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4712 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 311: // name: BLOCK
#line 1078 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
            { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4718 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 312: // name: BOOL
#line 1079 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
           { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4724 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 313: // name: CALCULATED_FIELD
#line 1080 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                       { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4730 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 314: // name: CONTROL
#line 1081 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
              { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4736 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 315: // name: COUNTER
#line 1082 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
              { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4742 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 316: // name: DEFAULT_ACTION
#line 1083 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                     { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4748 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 317: // name: CONST
#line 1084 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
            { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4754 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 318: // name: DIRECT
#line 1085 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
             { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4760 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 319: // name: DROP
#line 1086 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
           { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4766 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 320: // name: DYNAMIC_ACTION_SELECTION
#line 1087 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                               { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4772 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 321: // name: EXPRESSION
#line 1088 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4778 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 322: // name: EXPRESSION_LOCAL_VARIABLES
#line 1089 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                                 { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4784 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 323: // name: EXTRACT
#line 1090 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
              { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4790 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 324: // name: FIELD_LIST
#line 1091 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4796 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 325: // name: FIELD_LIST_CALCULATION
#line 1092 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                             { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4802 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 326: // name: FIELDS
#line 1093 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
             { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4808 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 327: // name: HEADER
#line 1094 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
             { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4814 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 328: // name: HEADER_TYPE
#line 1095 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                  { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4820 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 329: // name: IMPLEMENTATION
#line 1096 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                     { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4826 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 330: // name: IN
#line 1097 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
         { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4832 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 331: // name: INPUT
#line 1098 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
            { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4838 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 332: // name: INSTANCE_COUNT
#line 1099 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                     { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4844 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 333: // name: INT
#line 1100 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
          { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4850 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 334: // name: LAYOUT
#line 1101 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
             { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4856 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 335: // name: LENGTH
#line 1102 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
             { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4862 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 336: // name: MASK
#line 1103 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
           { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4868 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 337: // name: MAX_LENGTH
#line 1104 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4874 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 338: // name: MAX_SIZE
#line 1105 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
               { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4880 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 339: // name: MAX_WIDTH
#line 1106 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4886 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 340: // name: METADATA
#line 1107 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
               { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4892 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 341: // name: METER
#line 1108 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
            { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4898 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 342: // name: METHOD
#line 1109 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
             { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4904 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 343: // name: MIN_SIZE
#line 1110 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
               { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4910 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 344: // name: MIN_WIDTH
#line 1111 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4916 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 345: // name: OPTIONAL
#line 1112 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
               { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4922 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 346: // name: OUT
#line 1113 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
          { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4928 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 347: // name: OUTPUT_WIDTH
#line 1114 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                   { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4934 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 348: // name: PARSER
#line 1115 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
             { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4940 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 349: // name: PARSER_VALUE_SET
#line 1116 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                       { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4946 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 350: // name: PARSER_EXCEPTION
#line 1117 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                       { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4952 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 351: // name: PRE_COLOR
#line 1118 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4958 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 352: // name: PRIMITIVE_ACTION
#line 1119 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                       { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4964 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 353: // name: READS
#line 1120 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
            { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4970 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 354: // name: REGISTER
#line 1121 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
               { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4976 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 355: // name: RESULT
#line 1122 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
             { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4982 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 356: // name: RETURN
#line 1123 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
             { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4988 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 357: // name: SATURATING
#line 1124 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                 { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4994 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 358: // name: SELECTION_KEY
#line 1125 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                    { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 5000 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 359: // name: SELECTION_MODE
#line 1126 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                     { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 5006 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 360: // name: SELECTION_TYPE
#line 1127 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                     { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 5012 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 361: // name: SET_METADATA
#line 1128 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
                   { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 5018 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 362: // name: SIGNED
#line 1129 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
             { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 5024 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 363: // name: SIZE
#line 1130 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
           { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 5030 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 364: // name: STATIC
#line 1131 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
             { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 5036 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 365: // name: STRING
#line 1132 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
             { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 5042 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 366: // name: TABLE
#line 1133 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
            { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 5048 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 367: // name: TYPE
#line 1134 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
           { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 5054 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 368: // name: UPDATE
#line 1135 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
             { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 5060 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 369: // name: VERIFY
#line 1136 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
             { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 5066 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 370: // name: WIDTH
#line 1137 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
            { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 5072 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;

  case 371: // name: WRITES
#line 1138 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
             { yylhs.value.as < IR::ID > () = IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 5078 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"
    break;


#line 5082 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"

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
  V1Parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  V1Parser::yytnamerr_ (const char *yystr)
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
  V1Parser::symbol_name (symbol_kind_type yysymbol)
  {
    return yytnamerr_ (yytname_[yysymbol]);
  }



  // V1Parser::context.
  V1Parser::context::context (const V1Parser& yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
  V1Parser::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
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
  V1Parser::yy_syntax_error_arguments_ (const context& yyctx,
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
  V1Parser::yysyntax_error_ (const context& yyctx) const
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


  const short V1Parser::yypact_ninf_ = -669;

  const short V1Parser::yytable_ninf_ = -367;

  const short
  V1Parser::yypact_[] =
  {
    -669,    29,   230,  -669,  -669,  -669,  3713,  3713,  3713,  3713,
    3713,  3713,  3713,  3713,  3713,  3713,  3713,  3713,  3713,  3713,
    3713,  3713,  3713,  -669,  3713,  3713,  3713,  -669,  -669,  -669,
    -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,
    -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,
    -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,
    -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,
    -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,
    -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,
    -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,
    -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,
    -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,    31,
      52,    66,  3713,    86,    17,   127,  -669,   136,   236,    45,
     238,  3713,   239,  3713,   254,   255,    83,   264,  3107,   121,
     276,   277,  3713,  -669,  -669,    68,  -669,  2196,  3713,  -669,
    -669,   -59,  -669,  -669,  -669,    46,    10,   281,   114,  -669,
    -669,  -669,  3195,  -669,  -669,  -669,  -669,   250,  3713,   -42,
    -669,   207,   279,  -669,     6,    57,  -669,  -669,    36,  2196,
    2196,  2196,  2196,  2196,   278,  -669,   292,  -669,   299,  -669,
    4168,   108,  -669,  -669,    20,   928,   312,    41,  1412,    23,
    2196,  -669,   306,    35,  -669,   293,   327,   125,   702,   824,
    -669,  3713,   166,   333,   334,    26,    33,  3713,   342,  -669,
     343,   337,   340,  -669,   344,   346,   347,  2566,  -669,  -669,
    3713,  3713,  -669,  -669,  -669,  4068,  -669,  2196,  3713,  3713,
    2196,  2196,  2196,  2196,  2196,  2196,  2196,  2196,  2196,  2196,
    2196,  2196,  2196,  2196,  2196,  2196,  -669,  2196,  2196,  3283,
      49,  -669,  3713,  3713,    50,  -669,  -669,   348,   351,  -669,
     354,  3713,    53,  -669,   352,   353,   355,   356,   357,   358,
    -669,   359,   573,    59,  -669,   173,   364,   362,  4191,   367,
    -669,   393,  -669,  2656,  -669,  3713,    60,  -669,   366,   368,
     369,   370,   373,   374,    94,  -669,   371,   384,  3713,  3369,
     385,  4010,    96,  -669,  -669,   390,  3713,  2196,   158,  -669,
     398,   400,   406,   409,   182,  -669,   422,   418,   394,   420,
     421,   423,   429,   425,   426,  -669,  -669,  -669,  -669,  3713,
    2196,  3713,  3713,  3713,  -669,   220,   434,   431,  -669,   430,
    -669,   435,    17,  -669,   401,   401,   338,   338,   628,   598,
    4207,  4207,   345,   345,  -669,  -669,  -669,   428,   304,   193,
     401,   401,  -669,  -669,  -669,   399,   399,  -669,  -669,  1032,
    3713,  2196,   439,   437,  -669,  -669,  3713,  2196,  2196,  2196,
    -669,  3713,  -669,  -669,  -669,  -669,  -669,  3713,  -669,  2196,
     438,  1122,  -669,  -669,   443,   440,  -669,  -669,  3713,  3713,
    2196,  3713,  3713,  3713,  -669,  -669,  -669,  3713,   441,   442,
     444,  2196,  2196,  -669,  -669,   445,   447,  -669,  -669,    42,
    3713,  2196,  3713,  -669,  -669,  -669,  3713,   446,  3713,  2196,
    2196,  -669,  2196,  2196,  1212,  2746,   465,   466,   467,   468,
     472,  -669,  -669,  -669,   -34,  2196,  -669,   450,   474,   476,
     478,  -669,   486,  4093,   481,  -669,   482,   483,   484,   485,
     488,  2836,   489,  2926,   490,  -669,   518,   448,   215,   197,
     241,   243,   259,   261,   223,   284,   307,   309,   325,  3713,
     499,  2196,  -669,   498,   500,   501,   502,   503,   504,   242,
    -669,  2196,  -669,  4040,   667,  -669,  -669,  -669,  -669,   183,
    -669,   505,   506,   509,  3016,   510,  3713,   224,   511,   512,
    1302,   513,  3917,   185,  -669,   120,   522,  -669,   516,  -669,
    -669,  -669,  -669,  -669,  1524,  1636,    24,  -669,   -34,  -669,
     523,   521,  -669,   297,   525,  2196,  -669,  -669,   123,  2386,
    -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,   520,
    -669,  -669,   526,   454,   432,   436,   524,  1972,   528,  -669,
    -669,  -669,  -669,  -669,  -669,   529,  4191,   187,  2196,  -669,
      42,  -669,  -669,  -669,  -669,  -669,  -669,   269,  2196,  -669,
    -669,  -669,   191,  -669,   530,    71,   487,  -669,  -669,  -669,
    -669,  2196,  2196,  2196,  -669,  -669,  2196,   537,  4191,  -669,
     532,  -669,   544,   534,   539,  -669,   179,   -34,   545,  -669,
    -669,  -669,  -669,  -669,   546,  -669,  -669,  -669,  -669,  3713,
    -669,  4118,  -669,  -669,   515,  -669,  2196,   542,  -669,   549,
     567,  -669,  -669,   568,  -669,  -669,  -669,   571,  2196,  4143,
    -669,  2196,  -669,   565,   569,  -669,  -669,  3455,   508,  3541,
    2196,   572,  3948,   590,  4191,  -669,  -669,  3799,  -669,   297,
    -669,  -669,  -669,  -669,  -669,  2476,  2386,  3979,  2196,  -669,
    -669,    42,   585,  -669,  4191,   586,   599,   592,   594,   595,
     596,   553,  -669,   602,  -669,   614,  1748,  3713,   577,   618,
    -669,  -669,   617,     1,  -669,  2386,  2295,  -669,  -669,   621,
     206,  -669,  1860,  -669,   622,  -669,  -669,  -669,  -669,  2196,
    -669,  -669,  -669,  -669,  -669,  3799,  -669,  -669,   634,   635,
    -669,  -669,  -669,  -669,  -669,  -669,    15,  -669,   479,  -669,
    -669,  -669,  3713,  3713,  3627,  2084,  2196,   637,   638,   625,
     629,  -669,  -669,  -669,  -669,  -669,  -669
  };

  const short
  V1Parser::yydefact_[] =
  {
       3,     0,     0,     1,    25,     2,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   251,     0,     0,     0,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   317,   316,   318,   319,   320,   323,   321,   322,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   300,     0,
       0,     0,     0,     0,     0,     0,   292,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   148,   160,   165,     0,   214,     0,     0,    83,
     200,     0,    67,    66,    72,     0,     0,    61,     0,    93,
      90,    93,     0,    24,   255,   254,   252,   256,     0,     0,
     171,   149,     0,   146,     0,     0,   244,   242,     0,     0,
       0,     0,     0,     0,     0,   289,     0,   288,     0,   264,
       0,   261,   260,   294,     0,     0,     0,     0,     0,     0,
       0,    58,     0,     0,    63,     0,     0,     0,     0,     0,
     253,     0,     0,     0,     0,     0,     0,     0,     0,   159,
       0,     0,     0,   164,     0,     0,     0,     0,   218,   213,
       0,     0,   269,   268,   267,     0,   266,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   293,     0,     0,     0,
      87,    81,     0,     0,   203,   200,   198,     0,     0,   201,
       0,     0,   123,   113,     0,     0,     0,     0,     0,     0,
      65,     0,     0,    78,    70,     0,     0,     0,   295,     0,
      30,     0,    26,     0,    60,     0,   134,   124,     0,     0,
       0,     0,     0,     0,   102,    91,   319,   323,     0,   356,
     361,     0,   102,   111,   257,     0,     0,     0,   144,   135,
       0,     0,     0,     0,   185,   169,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   147,   153,   150,   196,     0,
       0,     0,     0,     0,   243,     0,     0,     0,   265,     0,
     263,     0,   290,   291,   277,   278,   275,   276,   286,   287,
     281,   282,   273,   274,   270,   271,   272,   285,   283,   284,
     279,   280,   262,    82,    86,    88,    88,   199,   202,     0,
       0,     0,     0,     0,   114,   122,     0,     0,     0,     0,
     121,     0,    69,    68,    71,    77,   196,     0,    79,     0,
       0,     0,    27,    62,     0,     0,   125,   133,     0,     0,
       0,     0,     0,     0,    92,   101,   100,     0,     0,     0,
       0,     0,     0,   112,   145,     0,     0,   136,   143,     0,
       0,     0,     0,   170,   184,   196,     0,     0,     0,     0,
       0,   186,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   247,   247,   219,   228,     0,   258,     0,     0,     0,
     203,   209,     0,     0,     0,   115,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    59,     0,    41,    45,    47,
      48,    49,    50,    51,    52,    54,    56,    55,    57,     0,
       0,     0,   126,     0,     0,     0,     0,     0,     0,     0,
      99,     0,    97,     0,     0,   138,   137,    40,    39,     0,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   158,   151,     0,   292,   161,     0,   163,
     162,   166,   167,   168,     0,     0,     0,   234,     0,   235,
       0,   229,   230,     0,     0,     0,    84,    85,     0,     0,
     208,   116,   118,   119,   120,   117,    75,    74,    73,     0,
      76,    29,     0,    43,     0,     0,     0,     0,     0,   129,
     132,   131,   128,   127,   130,     0,   296,     0,     0,    96,
       0,   142,   139,   141,   140,   174,   175,     0,   298,   179,
     177,   176,   191,   172,     0,     0,   192,   178,   183,   152,
     157,   298,     0,   298,   197,   246,     0,   300,   248,   245,
     224,   215,     0,     0,     0,   233,     0,     0,    45,    47,
      48,    49,    50,    51,    52,    54,    56,    55,    57,     0,
     259,     0,   210,   204,   206,    80,     0,     0,    28,     0,
       0,    32,    34,    35,    33,    64,    94,     0,     0,     0,
      38,   298,   181,   299,     0,   173,   190,     0,     0,     0,
       0,     0,     0,     0,   249,   247,   223,   236,   222,     0,
     225,   216,   231,   232,    89,     0,     0,     0,     0,    46,
      53,     0,     0,   103,   297,     0,     0,     0,     0,     0,
       0,   194,   193,     0,   155,     0,     0,     0,     0,   237,
     238,   240,     0,     0,   205,     0,     0,   207,    42,     0,
       0,    31,     0,    95,     0,   180,   189,   187,   188,     0,
     156,   154,   250,   241,   221,     0,   220,   217,     0,     0,
     212,   211,    44,    36,    98,   110,     0,   106,   108,   182,
     195,   239,   148,   148,     0,     0,     0,     0,     0,     0,
       0,   107,   109,   226,   227,   105,   104
  };

  const short
  V1Parser::yypgoto_[] =
  {
    -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,   -16,    87,
    -669,  -669,  -384,  -669,  -669,  -669,  -669,  -669,  -669,  -669,
    -669,  -669,  -669,  -669,   290,  -669,  -669,   507,  -669,  -669,
     -57,  -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,  -163,
    -668,  -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,
    -669,  -669,  -368,  -669,   424,  -519,  -669,  -669,  -669,  -669,
    -669,  -669,  -669,  -506,  -669,  -669,  -669,   -35,  -669,  -669,
    -429,  -669,   533,   -74,  -669,    11,    22,  -197,   195,  -560,
      -6
  };

  const short
  V1Parser::yydefgoto_[] =
  {
       0,     1,     2,    27,   203,   401,   643,   682,   509,   510,
     563,   638,   697,    28,    29,   205,   293,    30,   198,    31,
     199,   473,    32,   194,   458,    33,    34,   208,   712,   736,
     737,    35,    36,   197,    37,   207,    38,   215,    39,   171,
     172,    40,   337,   444,    41,   174,    42,   175,    43,   216,
     520,   594,   445,    44,   195,   269,   675,    45,   178,   536,
     703,   540,   541,   542,   543,   698,   699,   700,    46,   227,
     534,   138,   166,   288,   351,   191,   192,   289,   653,   654,
     126
  };

  const short
  V1Parser::yytable_[] =
  {
     119,   120,   121,   122,   123,   212,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   489,   139,   140,
     141,   260,   124,   535,   283,   610,   727,   318,   471,     3,
     634,   219,   615,   125,   324,   213,   291,   228,   537,   147,
     349,   661,   272,   663,   220,   261,   744,   745,   284,   611,
     148,   319,   373,   377,   538,   539,   384,   196,   325,   142,
     292,   229,   394,   406,   285,   221,   273,   514,   200,   152,
     320,   326,   327,   190,   747,   748,   143,   202,   214,   230,
     153,   201,   223,   321,   374,   378,   328,   612,   385,   329,
     144,   686,   176,   147,   395,   407,   286,   414,   274,   423,
     322,   728,   658,   177,   659,   232,   233,   234,   235,   236,
     146,   672,   613,   287,   330,   275,   145,   222,   160,   331,
     426,   231,   729,   276,   282,   155,   296,   157,   277,   415,
     147,   415,   167,   332,   311,   311,   173,   262,   323,   263,
     614,   259,   193,   447,   333,   278,   507,   632,   601,   168,
     297,   149,   508,   279,   602,   334,   167,   707,   633,   629,
     150,   427,   173,   224,   225,   226,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   298,   370,   371,   433,   730,   731,   599,   270,
     467,   468,   469,   428,   655,   315,   299,   396,   217,   300,
     242,   243,   474,   670,   397,   314,   248,   249,   250,   251,
     252,   335,   254,   495,   671,   580,   647,   434,   581,   648,
     600,   345,  -311,   301,   346,   347,   656,   302,  -311,  -311,
     206,     4,   350,     5,   512,   733,   696,   303,   580,   217,
    -308,   564,   518,   519,   451,   521,  -308,  -308,  -333,   565,
     352,   452,   588,   193,  -333,  -333,   375,   376,   544,   589,
     151,   353,   154,   156,   147,   383,  -312,     6,  -315,     7,
       8,   575,  -312,  -312,  -315,  -315,     9,    10,   158,   159,
      11,    12,    13,   211,  -321,   702,  -325,   404,   161,   405,
    -321,  -321,  -325,  -325,   568,    14,    15,   651,    16,    17,
     169,   170,   418,   420,   652,   204,   237,   463,   218,  -341,
     425,   242,   243,    18,    19,  -341,  -341,   248,   249,   250,
     251,   252,    20,    21,    22,   238,    23,   239,   294,    24,
     290,    25,  -354,   446,  -365,   448,   449,   450,  -354,  -354,
    -365,  -365,   618,   271,    26,   619,   620,   503,   504,   621,
    -366,   248,   249,   250,   251,   252,  -366,  -366,   295,   622,
     250,   251,   252,   623,   316,   317,   336,   338,   339,   522,
     644,   340,   624,   270,   462,   341,   380,   342,   343,   381,
     466,   625,   382,   386,   387,   470,   388,   389,   398,   391,
     400,   472,   390,   399,   392,   490,   402,   408,   626,   409,
     410,   411,   493,   494,   412,   413,   416,   498,   242,   243,
     627,   628,   417,   421,   248,   249,   250,   251,   252,   253,
     254,   255,   124,   124,   511,   424,   513,   576,   499,   429,
     515,   430,   517,   496,   497,   242,   243,   431,   526,   528,
     432,   248,   249,   250,   251,   252,   435,   254,   255,   436,
     437,   438,   439,   441,   440,   124,   442,   443,   453,   454,
     608,   608,   455,   692,   456,   528,   525,   559,   464,   457,
     501,   631,   465,   475,   491,   492,   500,   516,   545,   502,
     505,   709,   506,   566,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     529,   530,   531,   532,   649,   257,   258,   533,   528,   546,
     587,   547,   706,   378,   576,   548,   550,   551,   552,   553,
     554,   561,   740,   555,   557,   560,   562,   576,   662,   576,
     567,   595,   664,   569,   637,   570,   571,   572,   573,   574,
     582,   583,   596,   270,   584,   586,   590,   591,   597,   752,
     603,   604,   616,   617,   630,   635,   639,   636,   746,   641,
     640,   657,   677,   645,   646,   665,   660,   666,   667,   668,
     669,   564,   565,   678,   684,   676,   679,   576,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   680,   683,   681,   648,   687,   257,
     258,   693,   724,   240,   241,   242,   243,   244,   393,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   695,
     711,   713,   608,   673,   257,   258,   690,   715,   714,   716,
     717,   718,   719,   240,   241,   242,   243,   720,   738,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   721,
     725,   689,   726,   193,   257,   258,   732,   739,   742,   743,
     755,   701,   753,   754,   756,   710,   459,   650,   209,   173,
     270,   738,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   751,   379,
     741,   723,     0,   257,   258,   210,   577,     0,     0,   270,
     270,     0,   579,   304,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   179,   180,     0,     0,   701,
       0,     0,     0,   181,     0,     0,     0,   305,     0,     0,
     182,     0,   183,     0,     0,     0,   173,   173,   750,    47,
      48,    49,    50,    51,     0,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,   184,     0,    63,    64,
     306,    66,     0,   307,    68,    69,   185,    70,    71,    72,
      73,    74,     0,    75,    76,    77,    78,    79,   186,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,   308,    94,    95,    96,     0,     0,     0,
      97,    98,    99,   100,   101,   309,   103,     0,   104,   105,
     106,   310,   108,   109,   110,   111,   112,   187,   113,   114,
     188,   115,   116,   117,   118,   312,   189,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   179,   180,     0,
       0,     0,     0,     0,     0,   181,     0,     0,     0,   313,
       0,     0,   182,     0,   183,     0,     0,     0,     0,     0,
       0,    47,    48,    49,    50,    51,     0,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,   184,     0,
      63,    64,   306,    66,     0,   307,    68,    69,   185,    70,
      71,    72,    73,    74,     0,    75,    76,    77,    78,    79,
     186,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,   308,    94,    95,    96,     0,
       0,     0,    97,    98,    99,   100,   101,   309,   103,   264,
     104,   105,   106,   310,   108,   109,   110,   111,   112,   187,
     113,   114,   188,   115,   116,   117,   118,     0,   189,     0,
       0,     0,   265,   266,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,    48,    49,    50,    51,
     267,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,     0,     0,    63,    64,    65,    66,     0,    67,
      68,    69,     0,    70,    71,    72,    73,    74,   268,    75,
      76,    77,    78,    79,     0,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,     0,
      94,    95,    96,     0,     0,     0,    97,    98,    99,   100,
     101,   102,   103,   460,   104,   105,   106,   107,   108,   109,
     110,   111,   112,     0,   113,   114,     0,   115,   116,   117,
     118,     0,     0,     0,     0,     0,   265,   461,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
      48,    49,    50,    51,   267,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,     0,     0,    63,    64,
      65,    66,     0,    67,    68,    69,     0,    70,    71,    72,
      73,    74,   268,    75,    76,    77,    78,    79,     0,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,   476,    94,    95,    96,     0,     0,     0,
      97,    98,    99,   100,   101,   102,   103,     0,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   477,   113,   114,
       0,   115,   116,   117,   118,     0,     0,     0,     0,    47,
      48,    49,    50,    51,     0,    52,    53,   478,    55,    56,
     479,   480,    59,    60,   481,    62,     0,     0,    63,    64,
      65,    66,     0,    67,   482,    69,     0,    70,   483,    72,
      73,    74,     0,    75,    76,    77,    78,   484,     0,    80,
      81,    82,    83,    84,    85,    86,   485,    88,    89,    90,
      91,    92,    93,   523,    94,    95,    96,     0,     0,     0,
      97,    98,    99,   486,   101,   102,   103,     0,   104,   105,
     106,   107,   108,   109,   110,   487,   488,   524,   113,   114,
       0,   115,   116,   117,   118,     0,     0,     0,     0,    47,
      48,    49,    50,    51,     0,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,     0,     0,    63,    64,
      65,    66,     0,    67,    68,    69,     0,    70,    71,    72,
      73,    74,     0,    75,    76,    77,    78,    79,     0,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,   592,    94,    95,    96,     0,     0,     0,
      97,    98,    99,   100,   101,   102,   103,     0,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   593,   113,   114,
       0,   115,   116,   117,   118,     0,     0,     0,     0,    47,
      48,    49,    50,    51,     0,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,     0,     0,    63,    64,
      65,    66,     0,    67,    68,    69,     0,    70,    71,    72,
      73,    74,     0,    75,    76,    77,    78,    79,     0,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,     0,    94,    95,    96,     0,     0,     0,
      97,    98,    99,   100,   101,   102,   103,     0,   104,   105,
     106,   107,   108,   109,   110,   111,   112,     0,   113,   114,
       0,   115,   116,   117,   118,   179,   180,     0,     0,     0,
       0,     0,     0,   181,     0,     0,     0,   280,     0,     0,
     182,     0,   183,     0,     0,     0,     0,     0,     0,    47,
      48,    49,    50,    51,     0,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,   184,     0,    63,    64,
      65,    66,     0,    67,    68,    69,   185,    70,    71,    72,
      73,    74,     0,    75,    76,    77,    78,    79,   186,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,     0,    94,    95,    96,   281,     0,     0,
      97,    98,    99,   100,   101,   102,   103,     0,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   187,   113,   114,
     188,   115,   116,   117,   118,     0,   189,   179,   180,     0,
       0,     0,     0,     0,     0,   181,     0,     0,     0,   605,
       0,     0,   182,     0,   183,     0,   606,     0,     0,     0,
       0,    47,    48,    49,    50,    51,     0,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,   184,     0,
      63,    64,    65,    66,     0,    67,    68,    69,   185,    70,
      71,    72,    73,    74,     0,    75,    76,    77,    78,    79,
     186,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,     0,    94,    95,    96,     0,
       0,     0,    97,    98,    99,   100,   101,   102,   103,     0,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   187,
     113,   114,   188,   115,   116,   117,   607,     0,   189,   179,
     180,     0,     0,     0,     0,     0,     0,   181,     0,     0,
       0,     0,     0,     0,   182,     0,   183,     0,   606,     0,
       0,   609,     0,    47,    48,    49,    50,    51,     0,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
     184,     0,    63,    64,    65,    66,     0,    67,    68,    69,
     185,    70,    71,    72,    73,    74,     0,    75,    76,    77,
      78,    79,   186,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,     0,    94,    95,
      96,     0,     0,     0,    97,    98,    99,   100,   101,   102,
     103,     0,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   187,   113,   114,   188,   115,   116,   117,   607,     0,
     189,   179,   180,     0,     0,     0,     0,     0,     0,   181,
       0,     0,     0,     0,     0,     0,   182,   722,   183,     0,
     606,     0,     0,     0,     0,    47,    48,    49,    50,    51,
       0,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,   184,     0,    63,    64,    65,    66,     0,    67,
      68,    69,   185,    70,    71,    72,    73,    74,     0,    75,
      76,    77,    78,    79,   186,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,     0,
      94,    95,    96,     0,     0,     0,    97,    98,    99,   100,
     101,   102,   103,     0,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   187,   113,   114,   188,   115,   116,   117,
     607,     0,   189,   179,   180,     0,     0,     0,     0,     0,
       0,   181,     0,     0,     0,   734,     0,     0,   182,     0,
     183,     0,     0,     0,     0,     0,     0,    47,    48,    49,
      50,    51,     0,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,   184,   735,    63,    64,    65,    66,
       0,    67,    68,    69,   185,    70,    71,    72,    73,    74,
       0,    75,    76,    77,    78,    79,   186,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,     0,    94,    95,    96,     0,     0,     0,    97,    98,
      99,   100,   101,   102,   103,     0,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   187,   113,   114,   188,   115,
     116,   117,   118,     0,   189,   179,   180,   642,     0,     0,
       0,     0,     0,   181,     0,     0,     0,     0,     0,     0,
     182,     0,   183,     0,     0,     0,     0,     0,     0,    47,
      48,    49,    50,    51,     0,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,   184,     0,    63,    64,
      65,    66,     0,    67,    68,    69,   185,    70,    71,    72,
      73,    74,     0,    75,    76,    77,    78,    79,   186,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,     0,    94,    95,    96,     0,     0,     0,
      97,    98,    99,   100,   101,   102,   103,     0,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   187,   113,   114,
     188,   115,   116,   117,   118,     0,   189,   179,   180,     0,
       0,     0,     0,     0,     0,   181,     0,     0,     0,     0,
       0,     0,   182,     0,   183,     0,     0,     0,     0,     0,
       0,    47,    48,    49,    50,    51,     0,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,   184,   735,
      63,    64,    65,    66,     0,    67,    68,    69,   185,    70,
      71,    72,    73,    74,     0,    75,    76,    77,    78,    79,
     186,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,     0,    94,    95,    96,     0,
       0,     0,    97,    98,    99,   100,   101,   102,   103,     0,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   187,
     113,   114,   188,   115,   116,   117,   118,     0,   189,   179,
     180,     0,     0,     0,     0,     0,     0,   181,     0,     0,
       0,     0,     0,     0,   182,     0,   183,     0,     0,     0,
       0,     0,     0,    47,    48,    49,    50,    51,     0,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
     184,     0,    63,    64,    65,    66,     0,    67,    68,    69,
     185,    70,    71,    72,    73,    74,     0,    75,    76,    77,
      78,    79,   186,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,     0,    94,    95,
      96,     0,     0,     0,    97,    98,    99,   100,   101,   102,
     103,     0,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   187,   113,   114,   188,   115,   116,   117,   118,   265,
     189,     0,     0,     0,     0,     0,     0,   217,     0,     0,
       0,     0,    47,    48,    49,    50,    51,   267,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,     0,
       0,    63,    64,    65,    66,     0,    67,    68,    69,     0,
      70,    71,    72,    73,    74,   268,    75,    76,    77,    78,
      79,     0,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,     0,    94,    95,    96,
       0,     0,     0,    97,    98,    99,   100,   101,   102,   103,
       0,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     265,   113,   114,     0,   115,   116,   117,   118,     0,     0,
       0,     0,     0,    47,    48,    49,    50,    51,   267,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,     0,    63,    64,    65,    66,     0,    67,    68,    69,
       0,    70,    71,    72,    73,    74,   268,    75,    76,    77,
      78,    79,     0,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,     0,    94,    95,
      96,     0,     0,     0,    97,    98,    99,   100,   101,   102,
     103,     0,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   704,   113,   114,     0,   115,   116,   117,   118,     0,
       0,     0,     0,    47,    48,    49,    50,    51,     0,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,   705,    63,    64,    65,    66,     0,    67,    68,    69,
       0,    70,    71,    72,    73,    74,     0,    75,    76,    77,
      78,    79,     0,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,     0,    94,    95,
      96,     0,     0,     0,    97,    98,    99,   100,   101,   102,
     103,     0,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   344,   113,   114,     0,   115,   116,   117,   118,     0,
       0,     0,     0,    47,    48,    49,    50,    51,     0,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,     0,    63,    64,    65,    66,     0,    67,    68,    69,
       0,    70,    71,    72,    73,    74,     0,    75,    76,    77,
      78,    79,     0,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,     0,    94,    95,
      96,     0,     0,     0,    97,    98,    99,   100,   101,   102,
     103,     0,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   403,   113,   114,     0,   115,   116,   117,   118,     0,
       0,     0,     0,    47,    48,    49,    50,    51,     0,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,     0,    63,    64,    65,    66,     0,    67,    68,    69,
       0,    70,    71,    72,    73,    74,     0,    75,    76,    77,
      78,    79,     0,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,     0,    94,    95,
      96,     0,     0,     0,    97,    98,    99,   100,   101,   102,
     103,     0,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   527,   113,   114,     0,   115,   116,   117,   118,     0,
       0,     0,     0,    47,    48,    49,    50,    51,     0,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,     0,    63,    64,    65,    66,     0,    67,    68,    69,
       0,    70,    71,    72,    73,    74,     0,    75,    76,    77,
      78,    79,     0,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,     0,    94,    95,
      96,     0,     0,     0,    97,    98,    99,   100,   101,   102,
     103,     0,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   556,   113,   114,     0,   115,   116,   117,   118,     0,
       0,     0,     0,    47,    48,    49,    50,    51,     0,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,     0,    63,    64,    65,    66,     0,    67,    68,    69,
       0,    70,    71,    72,    73,    74,     0,    75,    76,    77,
      78,    79,     0,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,     0,    94,    95,
      96,     0,     0,     0,    97,    98,    99,   100,   101,   102,
     103,     0,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   558,   113,   114,     0,   115,   116,   117,   118,     0,
       0,     0,     0,    47,    48,    49,    50,    51,     0,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,     0,    63,    64,    65,    66,     0,    67,    68,    69,
       0,    70,    71,    72,    73,    74,     0,    75,    76,    77,
      78,    79,     0,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,     0,    94,    95,
      96,     0,     0,     0,    97,    98,    99,   100,   101,   102,
     103,     0,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   585,   113,   114,     0,   115,   116,   117,   118,     0,
       0,     0,     0,    47,    48,    49,    50,    51,     0,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,     0,    63,    64,    65,    66,     0,    67,    68,    69,
       0,    70,    71,    72,    73,    74,     0,    75,    76,    77,
      78,    79,     0,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,     0,    94,    95,
      96,     0,     0,     0,    97,    98,    99,   100,   101,   102,
     103,     0,   104,   105,   106,   107,   108,   109,   110,   111,
     112,     0,   113,   114,     0,   115,   116,   117,   118,   162,
       0,     0,     0,   163,    47,    48,    49,    50,    51,     0,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,     0,     0,    63,    64,    65,    66,     0,    67,    68,
      69,     0,    70,    71,    72,    73,    74,     0,    75,    76,
      77,    78,    79,     0,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,     0,    94,
      95,    96,     0,     0,     0,    97,    98,    99,   100,   101,
     102,   103,     0,   104,   105,   106,   107,   108,   109,   110,
     111,   112,     0,   113,   114,     0,   115,   116,   117,   118,
     164,   165,    47,    48,    49,    50,    51,     0,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,     0,
       0,    63,    64,    65,    66,     0,    67,    68,    69,     0,
      70,    71,    72,    73,    74,     0,    75,    76,    77,    78,
      79,     0,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,     0,    94,    95,    96,
       0,     0,     0,    97,    98,    99,   100,   101,   102,   103,
       0,   104,   105,   106,   107,   108,   109,   110,   111,   112,
       0,   113,   114,     0,   115,   116,   117,   118,   164,   165,
      47,    48,    49,    50,    51,     0,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,     0,     0,    63,
      64,    65,    66,     0,    67,    68,    69,     0,    70,    71,
      72,    73,    74,     0,    75,    76,    77,    78,    79,     0,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,     0,    94,    95,    96,     0,     0,
       0,    97,    98,    99,   100,   101,   102,   103,     0,   104,
     105,   106,   107,   108,   109,   110,   111,   112,     0,   113,
     114,   372,   115,   116,   117,   118,    47,    48,    49,    50,
      51,     0,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,     0,     0,    63,    64,    65,    66,     0,
      67,    68,    69,     0,    70,    71,    72,    73,    74,     0,
      75,    76,    77,    78,    79,     0,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
       0,    94,    95,    96,     0,     0,     0,    97,    98,    99,
     100,   101,   102,   103,   419,   104,   105,   106,   107,   108,
     109,   110,   111,   112,     0,   113,   114,     0,   115,   116,
     117,   118,    47,    48,    49,    50,    51,     0,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,     0,
       0,    63,    64,    65,    66,     0,    67,    68,    69,     0,
      70,    71,    72,    73,    74,     0,    75,    76,    77,    78,
      79,     0,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,     0,    94,    95,    96,
       0,     0,     0,    97,    98,    99,   100,   101,   102,   103,
       0,   104,   105,   106,   107,   108,   109,   110,   111,   112,
       0,   113,   114,   688,   115,   116,   117,   118,    47,    48,
      49,    50,    51,     0,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,     0,     0,    63,    64,    65,
      66,     0,    67,    68,    69,     0,    70,    71,    72,    73,
      74,     0,    75,    76,    77,    78,    79,     0,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,     0,    94,    95,    96,     0,     0,     0,    97,
      98,    99,   100,   101,   102,   103,     0,   104,   105,   106,
     107,   108,   109,   110,   111,   112,     0,   113,   114,   691,
     115,   116,   117,   118,    47,    48,    49,    50,    51,     0,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,     0,     0,    63,    64,    65,    66,     0,    67,    68,
      69,     0,    70,    71,    72,    73,    74,     0,    75,    76,
      77,    78,    79,     0,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,   749,    94,
      95,    96,     0,     0,     0,    97,    98,    99,   100,   101,
     102,   103,     0,   104,   105,   106,   107,   108,   109,   110,
     111,   112,     0,   113,   114,     0,   115,   116,   117,   118,
      47,    48,    49,    50,    51,     0,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,     0,     0,    63,
      64,    65,    66,     0,    67,    68,    69,     0,    70,    71,
      72,    73,    74,     0,    75,    76,    77,    78,    79,     0,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,     0,    94,    95,    96,     0,     0,
       0,    97,    98,    99,   100,   101,   102,   103,     0,   104,
     105,   106,   107,   108,   109,   110,   111,   112,     0,   113,
     114,     0,   115,   116,   117,   118,    47,    48,    49,    50,
      51,     0,    52,    53,   478,    55,    56,   479,   480,    59,
      60,   481,    62,     0,     0,    63,    64,    65,    66,     0,
      67,   482,    69,     0,    70,   483,    72,    73,    74,     0,
      75,    76,    77,    78,   484,     0,    80,    81,    82,    83,
      84,    85,    86,   485,    88,    89,    90,    91,    92,    93,
       0,    94,    95,    96,     0,     0,     0,    97,    98,    99,
     486,   101,   102,   103,     0,   104,   105,   106,   107,   108,
     109,   110,   487,   488,     0,   113,   114,     0,   115,   116,
     117,   118,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,     0,     0,
       0,     0,     0,   257,   258,     0,     0,     0,     0,     0,
       0,     0,   598,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,     0,
       0,     0,     0,     0,   257,   258,     0,     0,     0,     0,
       0,     0,     0,   694,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
       0,     0,     0,     0,     0,   257,   258,     0,     0,     0,
       0,     0,     0,     0,   708,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,     0,     0,     0,     0,     0,   257,   258,     0,     0,
       0,     0,     0,     0,   422,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,     0,     0,     0,     0,     0,   257,   258,     0,     0,
       0,     0,   578,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,     0,
       0,     0,     0,     0,   257,   258,     0,   348,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,     0,     0,     0,     0,     0,   257,
     258,     0,   549,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,     0,
       0,     0,     0,     0,   257,   258,     0,   674,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,     0,     0,     0,     0,     0,   257,
     258,     0,   685,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,     0,
       0,   256,     0,     0,   257,   258,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   240,   241,   242,   243,     0,   257,   258,     0,
     248,   249,   250,   251,   252,   253,   254,   255,     0,     0,
       0,     0,     0,   257,   258
  };

  const short
  V1Parser::yycheck_[] =
  {
       6,     7,     8,     9,    10,   168,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,   401,    24,    25,
      26,     1,    11,   452,     1,     1,    25,     1,   396,     0,
     549,    25,   538,    11,     1,    77,     1,     1,    72,    22,
     237,   601,     1,   603,    38,    25,    31,    32,    25,    25,
      33,    25,     3,     3,    88,    89,     3,   116,    25,    28,
      25,    25,     3,     3,    41,    59,    25,   435,    22,    24,
      44,    38,    39,   147,   742,   743,    24,    67,   120,    43,
      35,    35,    25,    57,    35,    35,    53,    63,    35,    56,
      24,   651,    24,    22,    35,    35,    73,     3,    57,     3,
      74,   100,    31,    35,    33,   179,   180,   181,   182,   183,
      24,   617,    88,    90,    81,    74,   122,   111,    35,    86,
     317,    85,   121,    82,   198,   131,     1,   133,    87,    35,
      22,    35,   138,   100,   208,   209,   142,   117,   112,   119,
     116,    33,   148,   340,   111,   104,   104,    24,    28,    28,
      25,    24,   110,   112,    34,   122,   162,   676,    35,   543,
      24,     3,   168,   106,   107,   108,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,    57,   257,   258,     3,   705,   706,     3,   195,
     387,   388,   389,    35,     3,    29,    71,    24,    32,    74,
       7,     8,   399,    24,    31,   211,    13,    14,    15,    16,
      17,   217,    19,   410,    35,    32,    29,    35,    35,    32,
      35,   227,    25,    98,   230,   231,    35,   102,    31,    32,
     116,     1,   238,     3,   431,    29,   665,   112,    32,    32,
      25,    26,   439,   440,    24,   442,    31,    32,    25,    26,
     239,    31,    28,   259,    31,    32,   262,   263,   455,    35,
      24,   239,    24,    24,    22,   271,    25,    37,    25,    39,
      40,    29,    31,    32,    31,    32,    46,    47,    24,    24,
      50,    51,    52,    33,    25,   669,    25,   293,    24,   295,
      31,    32,    31,    32,   491,    65,    66,    28,    68,    69,
      24,    24,   308,   309,    35,    24,    28,   381,    29,    25,
     316,     7,     8,    83,    84,    31,    32,    13,    14,    15,
      16,    17,    92,    93,    94,    33,    96,    28,    35,    99,
      24,   101,    25,   339,    25,   341,   342,   343,    31,    32,
      31,    32,    45,    31,   114,    48,    49,   421,   422,    52,
      25,    13,    14,    15,    16,    17,    31,    32,    31,    62,
      15,    16,    17,    66,    31,    31,    24,    24,    31,   443,
     567,    31,    75,   379,   380,    31,    28,    31,    31,    28,
     386,    84,    28,    31,    31,   391,    31,    31,    24,    31,
      23,   397,    35,    31,    35,   401,     3,    31,   101,    31,
      31,    31,   408,   409,    31,    31,    35,   413,     7,     8,
     113,   114,    28,    28,    13,    14,    15,    16,    17,    18,
      19,    20,   411,   412,   430,    35,   432,   501,   417,    31,
     436,    31,   438,   411,   412,     7,     8,    31,   444,   445,
      31,    13,    14,    15,    16,    17,    24,    19,    20,    31,
      56,    31,    31,    24,    31,   444,    31,    31,    24,    28,
     534,   535,    32,   660,    29,   471,   444,   473,    29,    70,
      28,   545,    35,    35,    31,    35,    35,    31,    28,    35,
      35,   678,    35,   489,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      35,    35,    35,    35,   578,    26,    27,    35,   514,    35,
     516,    35,   675,    35,   588,    29,    35,    35,    35,    35,
      35,     3,   719,    35,    35,    35,    78,   601,   602,   603,
      31,   520,   606,    35,    80,    35,    35,    35,    35,    35,
      35,    35,   520,   549,    35,    35,    35,    35,    35,   746,
      28,    35,    29,    32,    29,    35,   124,    31,    79,    35,
     124,    31,   636,    35,    35,    28,    79,    35,    24,    35,
      31,    26,    26,    31,   648,    60,    27,   651,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    27,    24,    28,    32,    29,    26,
      27,    29,    25,     5,     6,     7,     8,     9,    35,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    29,
      35,    35,   696,   629,    26,    27,   118,    35,    29,    35,
      35,    35,    79,     5,     6,     7,     8,    35,   712,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    35,
      32,   657,    35,   659,    26,    27,    35,    35,    24,    24,
      35,   667,    25,    25,    35,   681,   376,   580,   161,   675,
     676,   745,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,   745,   265,
     725,   697,    -1,    26,    27,   162,   501,    -1,    -1,   705,
     706,    -1,    35,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    13,    14,    -1,    -1,   725,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    25,    -1,    -1,
      28,    -1,    30,    -1,    -1,    -1,   742,   743,   744,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    56,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    -1,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    -1,    -1,    -1,
      98,    99,   100,   101,   102,   103,   104,    -1,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,     1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    25,
      -1,    -1,    28,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,    39,    40,    41,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    -1,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    -1,
      -1,    -1,    98,    99,   100,   101,   102,   103,   104,     1,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,    -1,   124,    -1,
      -1,    -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    56,    57,    58,    59,    -1,    61,
      62,    63,    -1,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      92,    93,    94,    -1,    -1,    -1,    98,    99,   100,   101,
     102,   103,   104,     1,   106,   107,   108,   109,   110,   111,
     112,   113,   114,    -1,   116,   117,    -1,   119,   120,   121,
     122,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    56,    57,
      58,    59,    -1,    61,    62,    63,    -1,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    -1,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,     1,    92,    93,    94,    -1,    -1,    -1,
      98,    99,   100,   101,   102,   103,   104,    -1,   106,   107,
     108,   109,   110,   111,   112,   113,   114,    25,   116,   117,
      -1,   119,   120,   121,   122,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    56,    57,
      58,    59,    -1,    61,    62,    63,    -1,    65,    66,    67,
      68,    69,    -1,    71,    72,    73,    74,    75,    -1,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,     1,    92,    93,    94,    -1,    -1,    -1,
      98,    99,   100,   101,   102,   103,   104,    -1,   106,   107,
     108,   109,   110,   111,   112,   113,   114,    25,   116,   117,
      -1,   119,   120,   121,   122,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    56,    57,
      58,    59,    -1,    61,    62,    63,    -1,    65,    66,    67,
      68,    69,    -1,    71,    72,    73,    74,    75,    -1,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,     1,    92,    93,    94,    -1,    -1,    -1,
      98,    99,   100,   101,   102,   103,   104,    -1,   106,   107,
     108,   109,   110,   111,   112,   113,   114,    25,   116,   117,
      -1,   119,   120,   121,   122,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    56,    57,
      58,    59,    -1,    61,    62,    63,    -1,    65,    66,    67,
      68,    69,    -1,    71,    72,    73,    74,    75,    -1,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    92,    93,    94,    -1,    -1,    -1,
      98,    99,   100,   101,   102,   103,   104,    -1,   106,   107,
     108,   109,   110,   111,   112,   113,   114,    -1,   116,   117,
      -1,   119,   120,   121,   122,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    25,    -1,    -1,
      28,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    56,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    -1,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    92,    93,    94,    95,    -1,    -1,
      98,    99,   100,   101,   102,   103,   104,    -1,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,    -1,   124,    13,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    25,
      -1,    -1,    28,    -1,    30,    -1,    32,    -1,    -1,    -1,
      -1,    37,    38,    39,    40,    41,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    -1,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    92,    93,    94,    -1,
      -1,    -1,    98,    99,   100,   101,   102,   103,   104,    -1,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,    -1,   124,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    30,    -1,    32,    -1,
      -1,    35,    -1,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    56,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    92,    93,
      94,    -1,    -1,    -1,    98,    99,   100,   101,   102,   103,
     104,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    -1,
     124,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,    -1,
      32,    -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    56,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    -1,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      92,    93,    94,    -1,    -1,    -1,    98,    99,   100,   101,
     102,   103,   104,    -1,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,    -1,   124,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    25,    -1,    -1,    28,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      -1,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    92,    93,    94,    -1,    -1,    -1,    98,    99,
     100,   101,   102,   103,   104,    -1,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,    -1,   124,    13,    14,    15,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    56,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    -1,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    92,    93,    94,    -1,    -1,    -1,
      98,    99,   100,   101,   102,   103,   104,    -1,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,    -1,   124,    13,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,    39,    40,    41,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    -1,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    92,    93,    94,    -1,
      -1,    -1,    98,    99,   100,   101,   102,   103,   104,    -1,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,    -1,   124,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    56,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    92,    93,
      94,    -1,    -1,    -1,    98,    99,   100,   101,   102,   103,
     104,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    24,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    56,    57,    58,    59,    -1,    61,    62,    63,    -1,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    -1,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    92,    93,    94,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      24,   116,   117,    -1,   119,   120,   121,   122,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    56,    57,    58,    59,    -1,    61,    62,    63,
      -1,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    -1,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    92,    93,
      94,    -1,    -1,    -1,    98,    99,   100,   101,   102,   103,
     104,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,    25,   116,   117,    -1,   119,   120,   121,   122,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    56,    57,    58,    59,    -1,    61,    62,    63,
      -1,    65,    66,    67,    68,    69,    -1,    71,    72,    73,
      74,    75,    -1,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    92,    93,
      94,    -1,    -1,    -1,    98,    99,   100,   101,   102,   103,
     104,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,    25,   116,   117,    -1,   119,   120,   121,   122,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    56,    57,    58,    59,    -1,    61,    62,    63,
      -1,    65,    66,    67,    68,    69,    -1,    71,    72,    73,
      74,    75,    -1,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    92,    93,
      94,    -1,    -1,    -1,    98,    99,   100,   101,   102,   103,
     104,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,    25,   116,   117,    -1,   119,   120,   121,   122,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    56,    57,    58,    59,    -1,    61,    62,    63,
      -1,    65,    66,    67,    68,    69,    -1,    71,    72,    73,
      74,    75,    -1,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    92,    93,
      94,    -1,    -1,    -1,    98,    99,   100,   101,   102,   103,
     104,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,    25,   116,   117,    -1,   119,   120,   121,   122,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    56,    57,    58,    59,    -1,    61,    62,    63,
      -1,    65,    66,    67,    68,    69,    -1,    71,    72,    73,
      74,    75,    -1,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    92,    93,
      94,    -1,    -1,    -1,    98,    99,   100,   101,   102,   103,
     104,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,    25,   116,   117,    -1,   119,   120,   121,   122,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    56,    57,    58,    59,    -1,    61,    62,    63,
      -1,    65,    66,    67,    68,    69,    -1,    71,    72,    73,
      74,    75,    -1,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    92,    93,
      94,    -1,    -1,    -1,    98,    99,   100,   101,   102,   103,
     104,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,    25,   116,   117,    -1,   119,   120,   121,   122,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    56,    57,    58,    59,    -1,    61,    62,    63,
      -1,    65,    66,    67,    68,    69,    -1,    71,    72,    73,
      74,    75,    -1,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    92,    93,
      94,    -1,    -1,    -1,    98,    99,   100,   101,   102,   103,
     104,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,    25,   116,   117,    -1,   119,   120,   121,   122,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    56,    57,    58,    59,    -1,    61,    62,    63,
      -1,    65,    66,    67,    68,    69,    -1,    71,    72,    73,
      74,    75,    -1,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    92,    93,
      94,    -1,    -1,    -1,    98,    99,   100,   101,   102,   103,
     104,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,    -1,   116,   117,    -1,   119,   120,   121,   122,    32,
      -1,    -1,    -1,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,    56,    57,    58,    59,    -1,    61,    62,
      63,    -1,    65,    66,    67,    68,    69,    -1,    71,    72,
      73,    74,    75,    -1,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    92,
      93,    94,    -1,    -1,    -1,    98,    99,   100,   101,   102,
     103,   104,    -1,   106,   107,   108,   109,   110,   111,   112,
     113,   114,    -1,   116,   117,    -1,   119,   120,   121,   122,
     123,   124,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    56,    57,    58,    59,    -1,    61,    62,    63,    -1,
      65,    66,    67,    68,    69,    -1,    71,    72,    73,    74,
      75,    -1,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    92,    93,    94,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      -1,   116,   117,    -1,   119,   120,   121,   122,   123,   124,
      37,    38,    39,    40,    41,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    56,
      57,    58,    59,    -1,    61,    62,    63,    -1,    65,    66,
      67,    68,    69,    -1,    71,    72,    73,    74,    75,    -1,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    -1,    92,    93,    94,    -1,    -1,
      -1,    98,    99,   100,   101,   102,   103,   104,    -1,   106,
     107,   108,   109,   110,   111,   112,   113,   114,    -1,   116,
     117,   118,   119,   120,   121,   122,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    56,    57,    58,    59,    -1,
      61,    62,    63,    -1,    65,    66,    67,    68,    69,    -1,
      71,    72,    73,    74,    75,    -1,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    92,    93,    94,    -1,    -1,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,    -1,   116,   117,    -1,   119,   120,
     121,   122,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    56,    57,    58,    59,    -1,    61,    62,    63,    -1,
      65,    66,    67,    68,    69,    -1,    71,    72,    73,    74,
      75,    -1,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    92,    93,    94,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      -1,   116,   117,   118,   119,   120,   121,   122,    37,    38,
      39,    40,    41,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    56,    57,    58,
      59,    -1,    61,    62,    63,    -1,    65,    66,    67,    68,
      69,    -1,    71,    72,    73,    74,    75,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    92,    93,    94,    -1,    -1,    -1,    98,
      99,   100,   101,   102,   103,   104,    -1,   106,   107,   108,
     109,   110,   111,   112,   113,   114,    -1,   116,   117,   118,
     119,   120,   121,   122,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,    56,    57,    58,    59,    -1,    61,    62,
      63,    -1,    65,    66,    67,    68,    69,    -1,    71,    72,
      73,    74,    75,    -1,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    -1,    -1,    -1,    98,    99,   100,   101,   102,
     103,   104,    -1,   106,   107,   108,   109,   110,   111,   112,
     113,   114,    -1,   116,   117,    -1,   119,   120,   121,   122,
      37,    38,    39,    40,    41,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    56,
      57,    58,    59,    -1,    61,    62,    63,    -1,    65,    66,
      67,    68,    69,    -1,    71,    72,    73,    74,    75,    -1,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    -1,    92,    93,    94,    -1,    -1,
      -1,    98,    99,   100,   101,   102,   103,   104,    -1,   106,
     107,   108,   109,   110,   111,   112,   113,   114,    -1,   116,
     117,    -1,   119,   120,   121,   122,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    56,    57,    58,    59,    -1,
      61,    62,    63,    -1,    65,    66,    67,    68,    69,    -1,
      71,    72,    73,    74,    75,    -1,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    92,    93,    94,    -1,    -1,    -1,    98,    99,   100,
     101,   102,   103,   104,    -1,   106,   107,   108,   109,   110,
     111,   112,   113,   114,    -1,   116,   117,    -1,   119,   120,
     121,   122,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    34,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,
      -1,    -1,    32,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    29,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    26,
      27,    -1,    29,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    29,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    26,
      27,    -1,    29,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    23,    -1,    -1,    26,    27,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     5,     6,     7,     8,    -1,    26,    27,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    26,    27
  };

  const unsigned char
  V1Parser::yystos_[] =
  {
       0,   127,   128,     0,     1,     3,    37,    39,    40,    46,
      47,    50,    51,    52,    65,    66,    68,    69,    83,    84,
      92,    93,    94,    96,    99,   101,   114,   129,   139,   140,
     143,   145,   148,   151,   152,   157,   158,   160,   162,   164,
     167,   170,   172,   174,   179,   183,   194,    37,    38,    39,
      40,    41,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    56,    57,    58,    59,    61,    62,    63,
      65,    66,    67,    68,    69,    71,    72,    73,    74,    75,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    92,    93,    94,    98,    99,   100,
     101,   102,   103,   104,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   116,   117,   119,   120,   121,   122,   206,
     206,   206,   206,   206,   201,   202,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   197,   206,
     206,   206,    28,    24,    24,   206,    24,    22,    33,    24,
      24,    24,    24,    35,    24,   206,    24,   206,    24,    24,
      35,    24,    32,    36,   123,   124,   198,   206,    28,    24,
      24,   165,   166,   206,   171,   173,    24,    35,   184,    13,
      14,    21,    28,    30,    54,    64,    76,   115,   118,   124,
     199,   201,   202,   206,   149,   180,   116,   159,   144,   146,
      22,    35,    67,   130,    24,   141,   116,   161,   153,   153,
     198,    33,   165,    77,   120,   163,   175,    32,    29,    25,
      38,    59,   111,    25,   106,   107,   108,   195,     1,    25,
      43,    85,   199,   199,   199,   199,   199,    28,    33,    28,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    23,    26,    27,    33,
       1,    25,   117,   119,     1,    24,    25,    42,    70,   181,
     206,    31,     1,    25,    57,    74,    82,    87,   104,   112,
      25,    95,   199,     1,    25,    41,    73,    90,   199,   203,
      24,     1,    25,   142,    35,    31,     1,    25,    57,    71,
      74,    98,   102,   112,     1,    25,    58,    61,    91,   103,
     109,   199,     1,    25,   206,    29,    31,    31,     1,    25,
      44,    57,    74,   112,     1,    25,    38,    39,    53,    56,
      81,    86,   100,   111,   122,   206,    24,   168,    24,    31,
      31,    31,    31,    31,    25,   206,   206,   206,    29,   203,
     206,   200,   201,   202,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   118,     3,    35,   206,   206,     3,    35,   180,
      28,    28,    28,   206,     3,    35,    31,    31,    31,    31,
      35,    31,    35,    35,     3,    35,    24,    31,    24,    31,
      23,   131,     3,    25,   206,   206,     3,    35,    31,    31,
      31,    31,    31,    31,     3,    35,    35,    28,   206,   105,
     206,    28,    34,     3,    35,   206,   203,     3,    35,    31,
      31,    31,    31,     3,    35,    24,    31,    56,    31,    31,
      31,    24,    31,    31,   169,   178,   206,   203,   206,   206,
     206,    24,    31,    24,    28,    32,    29,    70,   150,   150,
       1,    25,   206,   199,    29,    35,   206,   203,   203,   203,
     206,   178,   206,   147,   203,    35,     1,    25,    45,    48,
      49,    52,    62,    66,    75,    84,   101,   113,   114,   138,
     206,    31,    35,   206,   206,   203,   202,   202,   206,   201,
      35,    28,    35,   199,   199,    35,    35,   104,   110,   134,
     135,   206,   203,   206,   178,   206,    31,   206,   203,   203,
     176,   203,   199,     1,    25,   202,   206,    25,   206,    35,
      35,    35,    35,    35,   196,   196,   185,    72,    88,    89,
     187,   188,   189,   190,   203,    28,    35,    35,    29,    29,
      35,    35,    35,    35,    35,    35,    25,    35,    25,   206,
      35,     3,    78,   136,    26,    26,   206,    31,   203,    35,
      35,    35,    35,    35,    35,    29,   199,   204,    32,    35,
      32,    35,    35,    35,    35,    25,    35,   206,    28,    35,
      35,    35,     1,    25,   177,   201,   202,    35,    35,     3,
      35,    28,    34,    28,    35,    25,    32,   122,   199,    35,
       1,    25,    63,    88,   116,   189,    29,    32,    45,    48,
      49,    52,    62,    66,    75,    84,   101,   113,   114,   138,
      29,   199,    24,    35,   181,    35,    31,    80,   137,   124,
     124,    35,    15,   132,   203,    35,    35,    29,    32,   199,
     135,    28,    35,   204,   205,     3,    35,    31,    31,    33,
      79,   205,   199,   205,   199,    28,    35,    24,    35,    31,
      24,    35,   189,   206,    29,   182,    60,   199,    31,    27,
      27,    28,   133,    24,   199,    29,   205,    29,   118,   206,
     118,   118,   203,    29,    35,    29,   196,   138,   191,   192,
     193,   206,   138,   186,    25,    55,   165,   181,    35,   203,
     134,    35,   154,    35,    29,    35,    35,    35,    35,    79,
      35,    35,    29,   206,    25,    32,    35,    25,   100,   121,
     181,   181,    35,    29,    25,    55,   155,   156,   199,    35,
     203,   193,    24,    24,    31,    32,    79,   166,   166,    91,
     206,   156,   203,    25,    25,    35,    35
  };

  const unsigned char
  V1Parser::yyr1_[] =
  {
       0,   126,   127,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   129,   129,   130,   130,
     131,   131,   131,   132,   132,   133,   133,   134,   134,   135,
     135,   136,   136,   137,   137,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   139,   139,
     140,   141,   141,   142,   142,   143,   143,   144,   144,   144,
     145,   145,   146,   146,   146,   146,   146,   146,   146,   147,
     147,   148,   148,   149,   149,   149,   149,   149,   150,   150,
     151,   152,   152,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   154,   154,   154,   155,   155,   156,   156,
     156,   157,   157,   158,   158,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   160,   160,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   162,   162,   163,   163,   163,
     163,   163,   163,   163,   163,   164,   165,   165,   166,   166,
     167,   168,   168,   169,   169,   169,   169,   169,   169,   170,
     171,   171,   171,   171,   172,   173,   173,   173,   173,   174,
     174,   175,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   176,   176,   176,   176,
     176,   176,   177,   177,   177,   177,   178,   178,   179,   179,
     180,   180,   180,   180,   181,   181,   181,   181,   181,   181,
     182,   182,   182,   183,   184,   184,   184,   184,   184,   185,
     185,   185,   185,   185,   185,   186,   186,   186,   187,   187,
     188,   188,   189,   189,   190,   190,   191,   191,   192,   192,
     193,   193,   194,   194,   195,   195,   195,   196,   196,   196,
     196,   197,   197,   197,   198,   198,   198,   198,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     200,   200,   201,   201,   202,   203,   204,   204,   205,   205,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   206
  };

  const signed char
  V1Parser::yyr2_[] =
  {
       0,     2,     2,     0,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     4,     2,     5,     6,     6,     5,
       0,     6,     4,     1,     1,     0,     3,     1,     3,     1,
       1,     0,     4,     0,     4,     1,     4,     1,     1,     1,
       1,     1,     1,     4,     1,     1,     1,     1,     4,     7,
       5,     0,     3,     0,     5,     5,     3,     0,     3,     3,
       5,     6,     0,     5,     5,     5,     5,     3,     2,     0,
       3,     5,     6,     0,     5,     5,     3,     2,     0,     4,
       3,     5,     6,     0,     6,     8,     5,     4,     9,     4,
       3,     3,     2,     0,     5,     5,     1,     3,     1,     3,
       1,     5,     6,     5,     6,     4,     5,     5,     5,     5,
       5,     3,     3,     2,     5,     6,     4,     5,     5,     5,
       5,     5,     5,     3,     2,     5,     6,     4,     4,     5,
       5,     5,     5,     3,     2,     6,     1,     3,     0,     1,
       6,     3,     4,     0,     6,     5,     6,     3,     2,     5,
       0,     5,     5,     5,     5,     0,     5,     5,     5,     5,
       6,     0,     5,     6,     5,     5,     5,     5,     5,     5,
       8,     6,     9,     5,     3,     2,     0,     5,     5,     5,
       3,     2,     1,     3,     3,     5,     0,     3,     5,     6,
       0,     2,     3,     2,     5,     7,     5,     7,     4,     3,
       0,     3,     3,     5,     0,     6,     7,     9,     2,     0,
       5,     5,     3,     3,     2,     0,     5,     5,     0,     1,
       1,     3,     3,     2,     1,     1,     0,     1,     1,     3,
       1,     2,     4,     6,     0,     5,     5,     0,     2,     3,
       5,     0,     2,     3,     1,     1,     1,     3,     4,     6,
       1,     1,     3,     3,     1,     3,     2,     2,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     4,     3,     1,     1,     3,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
  };


#if YYDEBUG || 1
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const V1Parser::yytname_[] =
  {
  "\"end of file\"", "error", "\"invalid token\"", "END",
  "UNEXPECTED_TOKEN", "\"<=\"", "\">=\"", "\"<<\"", "\">>\"", "\"&&\"",
  "\"||\"", "\"!=\"", "\"==\"", "\"+\"", "\"-\"", "\"*\"", "\"/\"",
  "\"%\"", "\"|\"", "\"&\"", "\"^\"", "\"~\"", "\"[\"", "\"]\"", "\"{\"",
  "\"}\"", "\"<\"", "\">\"", "\"(\"", "\")\"", "\"!\"", "\":\"", "\",\"",
  "\".\"", "\"=\"", "\";\"", "NEWLINE", "ACTION", "ACTIONS",
  "ACTION_PROFILE", "ACTION_SELECTOR", "ALGORITHM", "APPLY", "ATTRIBUTE",
  "ATTRIBUTES", "BIT", "BLACKBOX", "BLACKBOX_TYPE", "BLOCK", "BOOL",
  "CALCULATED_FIELD", "CONTROL", "COUNTER", "CONST", "CURRENT", "DEFAULT",
  "DEFAULT_ACTION", "DIRECT", "DROP", "DYNAMIC_ACTION_SELECTION", "ELSE",
  "EXTRACT", "EXPRESSION", "EXPRESSION_LOCAL_VARIABLES", "FALSE",
  "FIELD_LIST", "FIELD_LIST_CALCULATION", "FIELDS", "HEADER",
  "HEADER_TYPE", "IF", "IMPLEMENTATION", "IN", "INPUT", "INSTANCE_COUNT",
  "INT", "LATEST", "LAYOUT", "LENGTH", "MASK", "MAX_LENGTH", "MAX_SIZE",
  "MAX_WIDTH", "METADATA", "METER", "METHOD", "MIN_SIZE", "MIN_WIDTH",
  "OPTIONAL", "OUT", "OUTPUT_WIDTH", "PARSE_ERROR", "PARSER",
  "PARSER_VALUE_SET", "PARSER_EXCEPTION", "PAYLOAD", "PRAGMA", "PREFIX",
  "PRE_COLOR", "PRIMITIVE_ACTION", "READS", "REGISTER", "RESULT", "RETURN",
  "SATURATING", "SELECT", "SELECTION_KEY", "SELECTION_MODE",
  "SELECTION_TYPE", "SET_METADATA", "SIGNED", "SIZE", "STATIC", "STRING",
  "TABLE", "TRUE", "TYPE", "UPDATE", "VALID", "VERIFY", "WIDTH", "WRITES",
  "IDENTIFIER", "STRING_LITERAL", "INTEGER", "EXPRLIST", "$accept",
  "program", "input", "header_type_declaration", "header_dec_body",
  "field_declarations", "bit_width", "opt_field_modifiers", "attributes",
  "attrib", "opt_length", "opt_max_length", "type", "header_instance",
  "metadata_instance", "opt_metadata_initializer",
  "metadata_field_init_list", "field_list_declaration",
  "field_list_entries", "field_list_calculation_declaration",
  "field_list_calculation_body", "field_list_list",
  "calculated_field_declaration", "update_verify_spec_list",
  "opt_condition", "value_set_declaration", "parser_function_declaration",
  "parser_statement_list", "case_entry_list", "case_value_list",
  "case_value", "parser_exception_declaration", "counter_declaration",
  "counter_spec_list", "meter_declaration", "meter_spec_list",
  "register_declaration", "register_spec_list",
  "primitive_action_declaration", "name_list", "opt_name_list",
  "action_function_declaration", "action_function_body",
  "action_statement_list", "action_profile_declaration",
  "action_profile_body", "action_selector_declaration",
  "action_selector_body", "table_declaration", "table_body",
  "field_match_list", "field_or_masked_ref", "action_list",
  "control_function_declaration", "control_statement_list",
  "control_statement", "apply_case_list", "blackbox_type_declaration",
  "blackbox_body", "blackbox_attribute", "blackbox_method",
  "opt_argument_list", "argument_list", "argument", "inout",
  "opt_locals_list", "locals_list", "local_var", "blackbox_instantiation",
  "blackbox_config", "expressions", "pragma_operands", "pragma_operand",
  "expression", "header_or_field_ref", "header_ref", "field_ref",
  "const_expression", "expression_list", "opt_expression_list", "name", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const short
  V1Parser::yyrline_[] =
  {
       0,   267,   267,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   292,   300,   307,   311,   313,
     317,   319,   325,   330,   335,   339,   340,   344,   345,   349,
     350,   354,   355,   360,   361,   366,   367,   369,   370,   371,
     372,   373,   374,   375,   377,   378,   379,   380,   388,   391,
     399,   404,   405,   408,   409,   418,   420,   425,   426,   428,
     437,   439,   443,   444,   448,   453,   458,   463,   464,   468,
     469,   474,   476,   480,   481,   483,   485,   486,   489,   490,
     498,   506,   508,   512,   513,   515,   517,   519,   521,   523,
     525,   527,   528,   531,   532,   534,   539,   541,   546,   548,
     550,   559,   564,   571,   573,   577,   579,   584,   589,   591,
     593,   595,   597,   598,   605,   608,   612,   614,   616,   618,
     623,   628,   630,   632,   633,   640,   644,   648,   652,   655,
     660,   665,   667,   670,   671,   679,   683,   684,   688,   689,
     697,   707,   708,   712,   713,   715,   717,   719,   721,   729,
     734,   735,   737,   739,   743,   748,   749,   750,   751,   758,
     762,   766,   767,   769,   771,   773,   775,   777,   779,   781,
     783,   787,   790,   794,   799,   800,   803,   804,   808,   812,
     816,   817,   821,   822,   824,   826,   830,   831,   838,   841,
     844,   845,   846,   847,   851,   853,   855,   857,   859,   861,
     865,   866,   872,   880,   886,   889,   891,   894,   897,   900,
     901,   902,   904,   906,   907,   910,   911,   913,   918,   919,
     923,   924,   928,   930,   934,   934,   936,   936,   938,   939,
     942,   943,   947,   952,   961,   962,   969,   974,   976,   978,
     980,   985,   986,   988,   993,   994,   995,   996,  1004,  1005,
    1007,  1008,  1009,  1010,  1013,  1014,  1015,  1016,  1017,  1018,
    1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,  1027,  1028,
    1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,  1037,  1038,
    1042,  1043,  1047,  1048,  1051,  1055,  1061,  1062,  1065,  1065,
    1067,  1068,  1069,  1070,  1071,  1072,  1073,  1074,  1075,  1076,
    1077,  1078,  1079,  1080,  1081,  1082,  1083,  1084,  1085,  1086,
    1087,  1088,  1089,  1090,  1091,  1092,  1093,  1094,  1095,  1096,
    1097,  1098,  1099,  1100,  1101,  1102,  1103,  1104,  1105,  1106,
    1107,  1108,  1109,  1110,  1111,  1112,  1113,  1114,  1115,  1116,
    1117,  1118,  1119,  1120,  1121,  1122,  1123,  1124,  1125,  1126,
    1127,  1128,  1129,  1130,  1131,  1132,  1133,  1134,  1135,  1136,
    1137,  1138
  };

  void
  V1Parser::yy_stack_print_ () const
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
  V1Parser::yy_reduce_print_ (int yyrule) const
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


#line 23 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
} } // P4::V1
#line 6787 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.cpp"

#line 1141 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"


namespace P4 {

void V1::V1Parser::error(const Util::SourceInfo& location,
                         const std::string& message) {
    driver.onParseError(location, message);
}

static const IR::Expression *removeRedundantValid(const IR::Expression *e) {
    if (auto *prim = e->to<IR::Primitive>()) {
        if (prim->name == "valid")
            return prim->operands.at(0); }
    return e;
}

}  // namespace P4
