// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton interface for Bison LALR(1) parsers in C++

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


/**
 ** \file /media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.hpp
 ** Define the P4::V1::parser class.
 */

// C++ LALR(1) parser skeleton written by Akim Demaille.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

#ifndef YY_YY_MEDIA_T_SCRATCH_P4_P4C_FRONTENDS_PARSERS_V1_V1PARSER_HPP_INCLUDED
# define YY_YY_MEDIA_T_SCRATCH_P4_P4C_FRONTENDS_PARSERS_V1_V1PARSER_HPP_INCLUDED
// "%code requires" blocks.
#line 39 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"

#include "ir/ir.h"

namespace P4 {
namespace V1 {
class V1Lexer;
class V1ParserDriver;

using namespace P4::literals;

struct BBoxType {
    IR::Vector<IR::Method>* methods;
    IR::NameMap<IR::Attribute, ordered_map>* attribs;
};

struct HeaderType {
    IR::Vector<IR::Annotation>* annotations;
    IR::IndexedVector<IR::StructField>* fields;
};

struct Attributes {
    bool signed_ = false;
    bool saturating = false;
    IR::Vector<IR::Annotation> annotations;
    Attributes &merge(const Attributes &a) {
        signed_ |= a.signed_;
        saturating |= a.saturating;
        annotations.append(a.annotations);
        return *this; }
};

}  // namespace V1

inline std::ostream& operator<<(std::ostream& out, const V1::BBoxType& bboxType) {
    out << "BBoxType(" << bboxType.methods << ',' << bboxType.attribs << ')';
    return out;
}

inline std::ostream& operator<<(std::ostream& out, const V1::HeaderType& headerType) {
    out << "HeaderType(" << headerType.annotations << ',' << headerType.fields << ')';
    return out;
}

inline std::ostream& operator<<(std::ostream& out, const V1::Attributes& a) {
    return out << "Attributes(" << (a.signed_ ? "signed," : "") <<
                  (a.saturating ? "saturating," : "") << a.annotations << ')'; }

typedef std::pair<const IR::Expression*, const IR::Constant*> CaseValue;

inline std::ostream& operator<<(std::ostream& out, const CaseValue& caseValue) {
    out << "CaseValue(" << caseValue.first << ',' << caseValue.second << ')';
    return out;
}

// Bison uses the types you provide to %type to make constructors for the
// variant type it uses under the hood, but its code generation is a little
// naive and it always prepends 'const' to the type. This is problematic when
// the symbol type we want is itself const, since duplicate const qualifiers are
// forbidden in C++. We avoid the problem using a typedef.
typedef const IR::Type ConstType;

}  // namespace P4

#ifndef YYDEBUG
#define YYDEBUG 1
#endif

#define YY_NULLPTR nullptr

#include "frontends/common/constantParsing.h"
#include "lib/cstring.h"
#include "lib/error.h"
#include "lib/source_file.h"

#line 124 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.hpp"

# include <cassert>
# include <cstdlib> // std::abort
# include <iostream>
# include <stdexcept>
# include <string>
# include <vector>

#if defined __cplusplus
# define YY_CPLUSPLUS __cplusplus
#else
# define YY_CPLUSPLUS 199711L
#endif

// Support move semantics when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_MOVE           std::move
# define YY_MOVE_OR_COPY   move
# define YY_MOVE_REF(Type) Type&&
# define YY_RVREF(Type)    Type&&
# define YY_COPY(Type)     Type
#else
# define YY_MOVE
# define YY_MOVE_OR_COPY   copy
# define YY_MOVE_REF(Type) Type&
# define YY_RVREF(Type)    const Type&
# define YY_COPY(Type)     const Type&
#endif

// Support noexcept when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_NOEXCEPT noexcept
# define YY_NOTHROW
#else
# define YY_NOEXCEPT
# define YY_NOTHROW throw ()
#endif

// Support constexpr when possible.
#if 201703 <= YY_CPLUSPLUS
# define YY_CONSTEXPR constexpr
#else
# define YY_CONSTEXPR
#endif

#include <typeinfo>
#ifndef YY_ASSERT
# include <cassert>
# define YY_ASSERT assert
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

#line 23 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
namespace P4 { namespace V1 {
#line 265 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.hpp"




  /// A Bison parser.
  class V1Parser
  {
  public:
#ifdef YYSTYPE
# ifdef __GNUC__
#  pragma GCC message "bison: do not #define YYSTYPE in C++, use %define api.value.type"
# endif
    typedef YYSTYPE value_type;
#else
  /// A buffer to store and retrieve objects.
  ///
  /// Sort of a variant, but does not keep track of the nature
  /// of the stored data, since that knowledge is available
  /// via the current parser state.
  class value_type
  {
  public:
    /// Type of *this.
    typedef value_type self_type;

    /// Empty construction.
    value_type () YY_NOEXCEPT
      : yyraw_ ()
      , yytypeid_ (YY_NULLPTR)
    {}

    /// Construct and fill.
    template <typename T>
    value_type (YY_RVREF (T) t)
      : yytypeid_ (&typeid (T))
    {
      YY_ASSERT (sizeof (T) <= size);
      new (yyas_<T> ()) T (YY_MOVE (t));
    }

#if 201103L <= YY_CPLUSPLUS
    /// Non copyable.
    value_type (const self_type&) = delete;
    /// Non copyable.
    self_type& operator= (const self_type&) = delete;
#endif

    /// Destruction, allowed only if empty.
    ~value_type () YY_NOEXCEPT
    {
      YY_ASSERT (!yytypeid_);
    }

# if 201103L <= YY_CPLUSPLUS
    /// Instantiate a \a T in here from \a t.
    template <typename T, typename... U>
    T&
    emplace (U&&... u)
    {
      YY_ASSERT (!yytypeid_);
      YY_ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T (std::forward <U>(u)...);
    }
# else
    /// Instantiate an empty \a T in here.
    template <typename T>
    T&
    emplace ()
    {
      YY_ASSERT (!yytypeid_);
      YY_ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T ();
    }

    /// Instantiate a \a T in here from \a t.
    template <typename T>
    T&
    emplace (const T& t)
    {
      YY_ASSERT (!yytypeid_);
      YY_ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T (t);
    }
# endif

    /// Instantiate an empty \a T in here.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build ()
    {
      return emplace<T> ();
    }

    /// Instantiate a \a T in here from \a t.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build (const T& t)
    {
      return emplace<T> (t);
    }

    /// Accessor to a built \a T.
    template <typename T>
    T&
    as () YY_NOEXCEPT
    {
      YY_ASSERT (yytypeid_);
      YY_ASSERT (*yytypeid_ == typeid (T));
      YY_ASSERT (sizeof (T) <= size);
      return *yyas_<T> ();
    }

    /// Const accessor to a built \a T (for %printer).
    template <typename T>
    const T&
    as () const YY_NOEXCEPT
    {
      YY_ASSERT (yytypeid_);
      YY_ASSERT (*yytypeid_ == typeid (T));
      YY_ASSERT (sizeof (T) <= size);
      return *yyas_<T> ();
    }

    /// Swap the content with \a that, of same type.
    ///
    /// Both variants must be built beforehand, because swapping the actual
    /// data requires reading it (with as()), and this is not possible on
    /// unconstructed variants: it would require some dynamic testing, which
    /// should not be the variant's responsibility.
    /// Swapping between built and (possibly) non-built is done with
    /// self_type::move ().
    template <typename T>
    void
    swap (self_type& that) YY_NOEXCEPT
    {
      YY_ASSERT (yytypeid_);
      YY_ASSERT (*yytypeid_ == *that.yytypeid_);
      std::swap (as<T> (), that.as<T> ());
    }

    /// Move the content of \a that to this.
    ///
    /// Destroys \a that.
    template <typename T>
    void
    move (self_type& that)
    {
# if 201103L <= YY_CPLUSPLUS
      emplace<T> (std::move (that.as<T> ()));
# else
      emplace<T> ();
      swap<T> (that);
# endif
      that.destroy<T> ();
    }

# if 201103L <= YY_CPLUSPLUS
    /// Move the content of \a that to this.
    template <typename T>
    void
    move (self_type&& that)
    {
      emplace<T> (std::move (that.as<T> ()));
      that.destroy<T> ();
    }
#endif

    /// Copy the content of \a that to this.
    template <typename T>
    void
    copy (const self_type& that)
    {
      emplace<T> (that.as<T> ());
    }

    /// Destroy the stored \a T.
    template <typename T>
    void
    destroy ()
    {
      as<T> ().~T ();
      yytypeid_ = YY_NULLPTR;
    }

  private:
#if YY_CPLUSPLUS < 201103L
    /// Non copyable.
    value_type (const self_type&);
    /// Non copyable.
    self_type& operator= (const self_type&);
#endif

    /// Accessor to raw memory as \a T.
    template <typename T>
    T*
    yyas_ () YY_NOEXCEPT
    {
      void *yyp = yyraw_;
      return static_cast<T*> (yyp);
     }

    /// Const accessor to raw memory as \a T.
    template <typename T>
    const T*
    yyas_ () const YY_NOEXCEPT
    {
      const void *yyp = yyraw_;
      return static_cast<const T*> (yyp);
     }

    /// An auxiliary type to compute the largest semantic type.
    union union_type
    {
      // opt_field_modifiers
      // attributes
      // attrib
      char dummy1[sizeof (Attributes)];

      // blackbox_body
      char dummy2[sizeof (BBoxType)];

      // case_value
      char dummy3[sizeof (CaseValue)];

      // bit_width
      // type
      char dummy4[sizeof (ConstType*)];

      // header_dec_body
      // field_declarations
      char dummy5[sizeof (HeaderType)];

      // action_function_body
      // action_statement_list
      char dummy6[sizeof (IR::ActionFunction*)];

      // action_profile_body
      char dummy7[sizeof (IR::ActionProfile*)];

      // action_selector_body
      char dummy8[sizeof (IR::ActionSelector*)];

      // apply_case_list
      char dummy9[sizeof (IR::Apply*)];

      // local_var
      char dummy10[sizeof (IR::AttribLocal*)];

      // opt_locals_list
      // locals_list
      char dummy11[sizeof (IR::AttribLocals*)];

      // blackbox_attribute
      char dummy12[sizeof (IR::Attribute*)];

      // update_verify_spec_list
      char dummy13[sizeof (IR::CalculatedField*)];

      // case_value_list
      char dummy14[sizeof (IR::CaseEntry*)];

      // const_expression
      char dummy15[sizeof (IR::Constant*)];

      // counter_spec_list
      char dummy16[sizeof (IR::Counter*)];

      // inout
      char dummy17[sizeof (IR::Direction)];

      // opt_condition
      // field_or_masked_ref
      // pragma_operand
      // expression
      // header_or_field_ref
      // header_ref
      char dummy18[sizeof (IR::Expression*)];

      // field_list_entries
      char dummy19[sizeof (IR::FieldList*)];

      // field_list_calculation_body
      char dummy20[sizeof (IR::FieldListCalculation*)];

      // name
      char dummy21[sizeof (IR::ID)];

      // field_ref
      char dummy22[sizeof (IR::Member*)];

      // meter_spec_list
      char dummy23[sizeof (IR::Meter*)];

      // field_list_list
      // name_list
      // opt_name_list
      // action_list
      char dummy24[sizeof (IR::NameList*)];

      // blackbox_config
      char dummy25[sizeof (IR::NameMap<IR::Property>*)];

      // argument
      char dummy26[sizeof (IR::Parameter*)];

      // opt_argument_list
      // argument_list
      char dummy27[sizeof (IR::ParameterList*)];

      // register_spec_list
      char dummy28[sizeof (IR::Register*)];

      // parser_statement_list
      char dummy29[sizeof (IR::V1Parser*)];

      // table_body
      char dummy30[sizeof (IR::V1Table*)];

      // blackbox_method
      char dummy31[sizeof (IR::Vector<IR::Annotation>*)];

      // case_entry_list
      char dummy32[sizeof (IR::Vector<IR::CaseEntry>*)];

      // field_match_list
      // control_statement_list
      // control_statement
      // expressions
      // pragma_operands
      // expression_list
      // opt_expression_list
      char dummy33[sizeof (IR::Vector<IR::Expression>*)];

      // INTEGER
      char dummy34[sizeof (UnparsedConstant)];

      // ACTION
      // ACTIONS
      // ACTION_PROFILE
      // ACTION_SELECTOR
      // ALGORITHM
      // APPLY
      // ATTRIBUTE
      // ATTRIBUTES
      // BIT
      // BLACKBOX
      // BLACKBOX_TYPE
      // BLOCK
      // BOOL
      // CALCULATED_FIELD
      // CONTROL
      // COUNTER
      // CONST
      // CURRENT
      // DEFAULT
      // DEFAULT_ACTION
      // DIRECT
      // DROP
      // DYNAMIC_ACTION_SELECTION
      // ELSE
      // EXTRACT
      // EXPRESSION
      // EXPRESSION_LOCAL_VARIABLES
      // FALSE
      // FIELD_LIST
      // FIELD_LIST_CALCULATION
      // FIELDS
      // HEADER
      // HEADER_TYPE
      // IF
      // IMPLEMENTATION
      // IN
      // INPUT
      // INSTANCE_COUNT
      // INT
      // LATEST
      // LAYOUT
      // LENGTH
      // MASK
      // MAX_LENGTH
      // MAX_SIZE
      // MAX_WIDTH
      // METADATA
      // METER
      // METHOD
      // MIN_SIZE
      // MIN_WIDTH
      // OPTIONAL
      // OUT
      // OUTPUT_WIDTH
      // PARSE_ERROR
      // PARSER
      // PARSER_VALUE_SET
      // PARSER_EXCEPTION
      // PAYLOAD
      // PRAGMA
      // PREFIX
      // PRE_COLOR
      // PRIMITIVE_ACTION
      // READS
      // REGISTER
      // RESULT
      // RETURN
      // SATURATING
      // SELECT
      // SELECTION_KEY
      // SELECTION_MODE
      // SELECTION_TYPE
      // SET_METADATA
      // SIGNED
      // SIZE
      // STATIC
      // STRING
      // TABLE
      // TRUE
      // TYPE
      // UPDATE
      // VALID
      // VERIFY
      // WIDTH
      // WRITES
      // IDENTIFIER
      // STRING_LITERAL
      char dummy35[sizeof (cstring)];
    };

    /// The size of the largest semantic type.
    enum { size = sizeof (union_type) };

    /// A buffer to store semantic values.
    union
    {
      /// Strongest alignment constraints.
      long double yyalign_me_;
      /// A buffer large enough to store any of the semantic values.
      char yyraw_[size];
    };

    /// Whether the content is built: if defined, the name of the stored type.
    const std::type_info *yytypeid_;
  };

#endif
    /// Backward compatibility (Bison 3.8).
    typedef value_type semantic_type;

    /// Symbol locations.
    typedef P4::Util::SourceInfo location_type;

    /// Syntax errors thrown from user actions.
    struct syntax_error : std::runtime_error
    {
      syntax_error (const location_type& l, const std::string& m)
        : std::runtime_error (m)
        , location (l)
      {}

      syntax_error (const syntax_error& s)
        : std::runtime_error (s.what ())
        , location (s.location)
      {}

      ~syntax_error () YY_NOEXCEPT YY_NOTHROW;

      location_type location;
    };

    /// Token kinds.
    struct token
    {
      enum token_kind_type
      {
        TOK_YYEMPTY = -2,
    TOK_YYEOF = 0,                 // "end of file"
    TOK_YYerror = 256,             // error
    TOK_YYUNDEF = 257,             // "invalid token"
    TOK_END = 258,                 // END
    TOK_UNEXPECTED_TOKEN = 259,    // UNEXPECTED_TOKEN
    TOK_LE = 260,                  // "<="
    TOK_GE = 261,                  // ">="
    TOK_SHL = 262,                 // "<<"
    TOK_SHR = 263,                 // ">>"
    TOK_AND = 264,                 // "&&"
    TOK_OR = 265,                  // "||"
    TOK_NE = 266,                  // "!="
    TOK_EQ = 267,                  // "=="
    TOK_PLUS = 268,                // "+"
    TOK_MINUS = 269,               // "-"
    TOK_MUL = 270,                 // "*"
    TOK_DIV = 271,                 // "/"
    TOK_MOD = 272,                 // "%"
    TOK_BIT_OR = 273,              // "|"
    TOK_BIT_AND = 274,             // "&"
    TOK_BIT_XOR = 275,             // "^"
    TOK_COMPLEMENT = 276,          // "~"
    TOK_L_BRACKET = 277,           // "["
    TOK_R_BRACKET = 278,           // "]"
    TOK_L_BRACE = 279,             // "{"
    TOK_R_BRACE = 280,             // "}"
    TOK_L_ANGLE = 281,             // "<"
    TOK_R_ANGLE = 282,             // ">"
    TOK_L_PAREN = 283,             // "("
    TOK_R_PAREN = 284,             // ")"
    TOK_NOT = 285,                 // "!"
    TOK_COLON = 286,               // ":"
    TOK_COMMA = 287,               // ","
    TOK_DOT = 288,                 // "."
    TOK_ASSIGN = 289,              // "="
    TOK_SEMICOLON = 290,           // ";"
    TOK_NEWLINE = 291,             // NEWLINE
    TOK_ACTION = 292,              // ACTION
    TOK_ACTIONS = 293,             // ACTIONS
    TOK_ACTION_PROFILE = 294,      // ACTION_PROFILE
    TOK_ACTION_SELECTOR = 295,     // ACTION_SELECTOR
    TOK_ALGORITHM = 296,           // ALGORITHM
    TOK_APPLY = 297,               // APPLY
    TOK_ATTRIBUTE = 298,           // ATTRIBUTE
    TOK_ATTRIBUTES = 299,          // ATTRIBUTES
    TOK_BIT = 300,                 // BIT
    TOK_BLACKBOX = 301,            // BLACKBOX
    TOK_BLACKBOX_TYPE = 302,       // BLACKBOX_TYPE
    TOK_BLOCK = 303,               // BLOCK
    TOK_BOOL = 304,                // BOOL
    TOK_CALCULATED_FIELD = 305,    // CALCULATED_FIELD
    TOK_CONTROL = 306,             // CONTROL
    TOK_COUNTER = 307,             // COUNTER
    TOK_CONST = 308,               // CONST
    TOK_CURRENT = 309,             // CURRENT
    TOK_DEFAULT = 310,             // DEFAULT
    TOK_DEFAULT_ACTION = 311,      // DEFAULT_ACTION
    TOK_DIRECT = 312,              // DIRECT
    TOK_DROP = 313,                // DROP
    TOK_DYNAMIC_ACTION_SELECTION = 314, // DYNAMIC_ACTION_SELECTION
    TOK_ELSE = 315,                // ELSE
    TOK_EXTRACT = 316,             // EXTRACT
    TOK_EXPRESSION = 317,          // EXPRESSION
    TOK_EXPRESSION_LOCAL_VARIABLES = 318, // EXPRESSION_LOCAL_VARIABLES
    TOK_FALSE = 319,               // FALSE
    TOK_FIELD_LIST = 320,          // FIELD_LIST
    TOK_FIELD_LIST_CALCULATION = 321, // FIELD_LIST_CALCULATION
    TOK_FIELDS = 322,              // FIELDS
    TOK_HEADER = 323,              // HEADER
    TOK_HEADER_TYPE = 324,         // HEADER_TYPE
    TOK_IF = 325,                  // IF
    TOK_IMPLEMENTATION = 326,      // IMPLEMENTATION
    TOK_IN = 327,                  // IN
    TOK_INPUT = 328,               // INPUT
    TOK_INSTANCE_COUNT = 329,      // INSTANCE_COUNT
    TOK_INT = 330,                 // INT
    TOK_LATEST = 331,              // LATEST
    TOK_LAYOUT = 332,              // LAYOUT
    TOK_LENGTH = 333,              // LENGTH
    TOK_MASK = 334,                // MASK
    TOK_MAX_LENGTH = 335,          // MAX_LENGTH
    TOK_MAX_SIZE = 336,            // MAX_SIZE
    TOK_MAX_WIDTH = 337,           // MAX_WIDTH
    TOK_METADATA = 338,            // METADATA
    TOK_METER = 339,               // METER
    TOK_METHOD = 340,              // METHOD
    TOK_MIN_SIZE = 341,            // MIN_SIZE
    TOK_MIN_WIDTH = 342,           // MIN_WIDTH
    TOK_OPTIONAL = 343,            // OPTIONAL
    TOK_OUT = 344,                 // OUT
    TOK_OUTPUT_WIDTH = 345,        // OUTPUT_WIDTH
    TOK_PARSE_ERROR = 346,         // PARSE_ERROR
    TOK_PARSER = 347,              // PARSER
    TOK_PARSER_VALUE_SET = 348,    // PARSER_VALUE_SET
    TOK_PARSER_EXCEPTION = 349,    // PARSER_EXCEPTION
    TOK_PAYLOAD = 350,             // PAYLOAD
    TOK_PRAGMA = 351,              // PRAGMA
    TOK_PREFIX = 352,              // PREFIX
    TOK_PRE_COLOR = 353,           // PRE_COLOR
    TOK_PRIMITIVE_ACTION = 354,    // PRIMITIVE_ACTION
    TOK_READS = 355,               // READS
    TOK_REGISTER = 356,            // REGISTER
    TOK_RESULT = 357,              // RESULT
    TOK_RETURN = 358,              // RETURN
    TOK_SATURATING = 359,          // SATURATING
    TOK_SELECT = 360,              // SELECT
    TOK_SELECTION_KEY = 361,       // SELECTION_KEY
    TOK_SELECTION_MODE = 362,      // SELECTION_MODE
    TOK_SELECTION_TYPE = 363,      // SELECTION_TYPE
    TOK_SET_METADATA = 364,        // SET_METADATA
    TOK_SIGNED = 365,              // SIGNED
    TOK_SIZE = 366,                // SIZE
    TOK_STATIC = 367,              // STATIC
    TOK_STRING = 368,              // STRING
    TOK_TABLE = 369,               // TABLE
    TOK_TRUE = 370,                // TRUE
    TOK_TYPE = 371,                // TYPE
    TOK_UPDATE = 372,              // UPDATE
    TOK_VALID = 373,               // VALID
    TOK_VERIFY = 374,              // VERIFY
    TOK_WIDTH = 375,               // WIDTH
    TOK_WRITES = 376,              // WRITES
    TOK_IDENTIFIER = 377,          // IDENTIFIER
    TOK_STRING_LITERAL = 378,      // STRING_LITERAL
    TOK_INTEGER = 379,             // INTEGER
    TOK_EXPRLIST = 380             // EXPRLIST
      };
      /// Backward compatibility alias (Bison 3.6).
      typedef token_kind_type yytokentype;
    };

    /// Token kind, as returned by yylex.
    typedef token::token_kind_type token_kind_type;

    /// Backward compatibility alias (Bison 3.6).
    typedef token_kind_type token_type;

    /// Symbol kinds.
    struct symbol_kind
    {
      enum symbol_kind_type
      {
        YYNTOKENS = 126, ///< Number of tokens.
        S_YYEMPTY = -2,
        S_YYEOF = 0,                             // "end of file"
        S_YYerror = 1,                           // error
        S_YYUNDEF = 2,                           // "invalid token"
        S_END = 3,                               // END
        S_UNEXPECTED_TOKEN = 4,                  // UNEXPECTED_TOKEN
        S_LE = 5,                                // "<="
        S_GE = 6,                                // ">="
        S_SHL = 7,                               // "<<"
        S_SHR = 8,                               // ">>"
        S_AND = 9,                               // "&&"
        S_OR = 10,                               // "||"
        S_NE = 11,                               // "!="
        S_EQ = 12,                               // "=="
        S_PLUS = 13,                             // "+"
        S_MINUS = 14,                            // "-"
        S_MUL = 15,                              // "*"
        S_DIV = 16,                              // "/"
        S_MOD = 17,                              // "%"
        S_BIT_OR = 18,                           // "|"
        S_BIT_AND = 19,                          // "&"
        S_BIT_XOR = 20,                          // "^"
        S_COMPLEMENT = 21,                       // "~"
        S_L_BRACKET = 22,                        // "["
        S_R_BRACKET = 23,                        // "]"
        S_L_BRACE = 24,                          // "{"
        S_R_BRACE = 25,                          // "}"
        S_L_ANGLE = 26,                          // "<"
        S_R_ANGLE = 27,                          // ">"
        S_L_PAREN = 28,                          // "("
        S_R_PAREN = 29,                          // ")"
        S_NOT = 30,                              // "!"
        S_COLON = 31,                            // ":"
        S_COMMA = 32,                            // ","
        S_DOT = 33,                              // "."
        S_ASSIGN = 34,                           // "="
        S_SEMICOLON = 35,                        // ";"
        S_NEWLINE = 36,                          // NEWLINE
        S_ACTION = 37,                           // ACTION
        S_ACTIONS = 38,                          // ACTIONS
        S_ACTION_PROFILE = 39,                   // ACTION_PROFILE
        S_ACTION_SELECTOR = 40,                  // ACTION_SELECTOR
        S_ALGORITHM = 41,                        // ALGORITHM
        S_APPLY = 42,                            // APPLY
        S_ATTRIBUTE = 43,                        // ATTRIBUTE
        S_ATTRIBUTES = 44,                       // ATTRIBUTES
        S_BIT = 45,                              // BIT
        S_BLACKBOX = 46,                         // BLACKBOX
        S_BLACKBOX_TYPE = 47,                    // BLACKBOX_TYPE
        S_BLOCK = 48,                            // BLOCK
        S_BOOL = 49,                             // BOOL
        S_CALCULATED_FIELD = 50,                 // CALCULATED_FIELD
        S_CONTROL = 51,                          // CONTROL
        S_COUNTER = 52,                          // COUNTER
        S_CONST = 53,                            // CONST
        S_CURRENT = 54,                          // CURRENT
        S_DEFAULT = 55,                          // DEFAULT
        S_DEFAULT_ACTION = 56,                   // DEFAULT_ACTION
        S_DIRECT = 57,                           // DIRECT
        S_DROP = 58,                             // DROP
        S_DYNAMIC_ACTION_SELECTION = 59,         // DYNAMIC_ACTION_SELECTION
        S_ELSE = 60,                             // ELSE
        S_EXTRACT = 61,                          // EXTRACT
        S_EXPRESSION = 62,                       // EXPRESSION
        S_EXPRESSION_LOCAL_VARIABLES = 63,       // EXPRESSION_LOCAL_VARIABLES
        S_FALSE = 64,                            // FALSE
        S_FIELD_LIST = 65,                       // FIELD_LIST
        S_FIELD_LIST_CALCULATION = 66,           // FIELD_LIST_CALCULATION
        S_FIELDS = 67,                           // FIELDS
        S_HEADER = 68,                           // HEADER
        S_HEADER_TYPE = 69,                      // HEADER_TYPE
        S_IF = 70,                               // IF
        S_IMPLEMENTATION = 71,                   // IMPLEMENTATION
        S_IN = 72,                               // IN
        S_INPUT = 73,                            // INPUT
        S_INSTANCE_COUNT = 74,                   // INSTANCE_COUNT
        S_INT = 75,                              // INT
        S_LATEST = 76,                           // LATEST
        S_LAYOUT = 77,                           // LAYOUT
        S_LENGTH = 78,                           // LENGTH
        S_MASK = 79,                             // MASK
        S_MAX_LENGTH = 80,                       // MAX_LENGTH
        S_MAX_SIZE = 81,                         // MAX_SIZE
        S_MAX_WIDTH = 82,                        // MAX_WIDTH
        S_METADATA = 83,                         // METADATA
        S_METER = 84,                            // METER
        S_METHOD = 85,                           // METHOD
        S_MIN_SIZE = 86,                         // MIN_SIZE
        S_MIN_WIDTH = 87,                        // MIN_WIDTH
        S_OPTIONAL = 88,                         // OPTIONAL
        S_OUT = 89,                              // OUT
        S_OUTPUT_WIDTH = 90,                     // OUTPUT_WIDTH
        S_PARSE_ERROR = 91,                      // PARSE_ERROR
        S_PARSER = 92,                           // PARSER
        S_PARSER_VALUE_SET = 93,                 // PARSER_VALUE_SET
        S_PARSER_EXCEPTION = 94,                 // PARSER_EXCEPTION
        S_PAYLOAD = 95,                          // PAYLOAD
        S_PRAGMA = 96,                           // PRAGMA
        S_PREFIX = 97,                           // PREFIX
        S_PRE_COLOR = 98,                        // PRE_COLOR
        S_PRIMITIVE_ACTION = 99,                 // PRIMITIVE_ACTION
        S_READS = 100,                           // READS
        S_REGISTER = 101,                        // REGISTER
        S_RESULT = 102,                          // RESULT
        S_RETURN = 103,                          // RETURN
        S_SATURATING = 104,                      // SATURATING
        S_SELECT = 105,                          // SELECT
        S_SELECTION_KEY = 106,                   // SELECTION_KEY
        S_SELECTION_MODE = 107,                  // SELECTION_MODE
        S_SELECTION_TYPE = 108,                  // SELECTION_TYPE
        S_SET_METADATA = 109,                    // SET_METADATA
        S_SIGNED = 110,                          // SIGNED
        S_SIZE = 111,                            // SIZE
        S_STATIC = 112,                          // STATIC
        S_STRING = 113,                          // STRING
        S_TABLE = 114,                           // TABLE
        S_TRUE = 115,                            // TRUE
        S_TYPE = 116,                            // TYPE
        S_UPDATE = 117,                          // UPDATE
        S_VALID = 118,                           // VALID
        S_VERIFY = 119,                          // VERIFY
        S_WIDTH = 120,                           // WIDTH
        S_WRITES = 121,                          // WRITES
        S_IDENTIFIER = 122,                      // IDENTIFIER
        S_STRING_LITERAL = 123,                  // STRING_LITERAL
        S_INTEGER = 124,                         // INTEGER
        S_EXPRLIST = 125,                        // EXPRLIST
        S_YYACCEPT = 126,                        // $accept
        S_program = 127,                         // program
        S_input = 128,                           // input
        S_header_type_declaration = 129,         // header_type_declaration
        S_header_dec_body = 130,                 // header_dec_body
        S_field_declarations = 131,              // field_declarations
        S_bit_width = 132,                       // bit_width
        S_opt_field_modifiers = 133,             // opt_field_modifiers
        S_attributes = 134,                      // attributes
        S_attrib = 135,                          // attrib
        S_opt_length = 136,                      // opt_length
        S_opt_max_length = 137,                  // opt_max_length
        S_type = 138,                            // type
        S_header_instance = 139,                 // header_instance
        S_metadata_instance = 140,               // metadata_instance
        S_opt_metadata_initializer = 141,        // opt_metadata_initializer
        S_metadata_field_init_list = 142,        // metadata_field_init_list
        S_field_list_declaration = 143,          // field_list_declaration
        S_field_list_entries = 144,              // field_list_entries
        S_field_list_calculation_declaration = 145, // field_list_calculation_declaration
        S_field_list_calculation_body = 146,     // field_list_calculation_body
        S_field_list_list = 147,                 // field_list_list
        S_calculated_field_declaration = 148,    // calculated_field_declaration
        S_update_verify_spec_list = 149,         // update_verify_spec_list
        S_opt_condition = 150,                   // opt_condition
        S_value_set_declaration = 151,           // value_set_declaration
        S_parser_function_declaration = 152,     // parser_function_declaration
        S_parser_statement_list = 153,           // parser_statement_list
        S_case_entry_list = 154,                 // case_entry_list
        S_case_value_list = 155,                 // case_value_list
        S_case_value = 156,                      // case_value
        S_parser_exception_declaration = 157,    // parser_exception_declaration
        S_counter_declaration = 158,             // counter_declaration
        S_counter_spec_list = 159,               // counter_spec_list
        S_meter_declaration = 160,               // meter_declaration
        S_meter_spec_list = 161,                 // meter_spec_list
        S_register_declaration = 162,            // register_declaration
        S_register_spec_list = 163,              // register_spec_list
        S_primitive_action_declaration = 164,    // primitive_action_declaration
        S_name_list = 165,                       // name_list
        S_opt_name_list = 166,                   // opt_name_list
        S_action_function_declaration = 167,     // action_function_declaration
        S_action_function_body = 168,            // action_function_body
        S_action_statement_list = 169,           // action_statement_list
        S_action_profile_declaration = 170,      // action_profile_declaration
        S_action_profile_body = 171,             // action_profile_body
        S_action_selector_declaration = 172,     // action_selector_declaration
        S_action_selector_body = 173,            // action_selector_body
        S_table_declaration = 174,               // table_declaration
        S_table_body = 175,                      // table_body
        S_field_match_list = 176,                // field_match_list
        S_field_or_masked_ref = 177,             // field_or_masked_ref
        S_action_list = 178,                     // action_list
        S_control_function_declaration = 179,    // control_function_declaration
        S_control_statement_list = 180,          // control_statement_list
        S_control_statement = 181,               // control_statement
        S_apply_case_list = 182,                 // apply_case_list
        S_blackbox_type_declaration = 183,       // blackbox_type_declaration
        S_blackbox_body = 184,                   // blackbox_body
        S_blackbox_attribute = 185,              // blackbox_attribute
        S_blackbox_method = 186,                 // blackbox_method
        S_opt_argument_list = 187,               // opt_argument_list
        S_argument_list = 188,                   // argument_list
        S_argument = 189,                        // argument
        S_inout = 190,                           // inout
        S_opt_locals_list = 191,                 // opt_locals_list
        S_locals_list = 192,                     // locals_list
        S_local_var = 193,                       // local_var
        S_blackbox_instantiation = 194,          // blackbox_instantiation
        S_blackbox_config = 195,                 // blackbox_config
        S_expressions = 196,                     // expressions
        S_pragma_operands = 197,                 // pragma_operands
        S_pragma_operand = 198,                  // pragma_operand
        S_expression = 199,                      // expression
        S_header_or_field_ref = 200,             // header_or_field_ref
        S_header_ref = 201,                      // header_ref
        S_field_ref = 202,                       // field_ref
        S_const_expression = 203,                // const_expression
        S_expression_list = 204,                 // expression_list
        S_opt_expression_list = 205,             // opt_expression_list
        S_name = 206                             // name
      };
    };

    /// (Internal) symbol kind.
    typedef symbol_kind::symbol_kind_type symbol_kind_type;

    /// The number of tokens.
    static const symbol_kind_type YYNTOKENS = symbol_kind::YYNTOKENS;

    /// A complete symbol.
    ///
    /// Expects its Base type to provide access to the symbol kind
    /// via kind ().
    ///
    /// Provide access to semantic value and location.
    template <typename Base>
    struct basic_symbol : Base
    {
      /// Alias to Base.
      typedef Base super_type;

      /// Default constructor.
      basic_symbol () YY_NOEXCEPT
        : value ()
        , location ()
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      basic_symbol (basic_symbol&& that)
        : Base (std::move (that))
        , value ()
        , location (std::move (that.location))
      {
        switch (this->kind ())
    {
      case symbol_kind::S_opt_field_modifiers: // opt_field_modifiers
      case symbol_kind::S_attributes: // attributes
      case symbol_kind::S_attrib: // attrib
        value.move< Attributes > (std::move (that.value));
        break;

      case symbol_kind::S_blackbox_body: // blackbox_body
        value.move< BBoxType > (std::move (that.value));
        break;

      case symbol_kind::S_case_value: // case_value
        value.move< CaseValue > (std::move (that.value));
        break;

      case symbol_kind::S_bit_width: // bit_width
      case symbol_kind::S_type: // type
        value.move< ConstType* > (std::move (that.value));
        break;

      case symbol_kind::S_header_dec_body: // header_dec_body
      case symbol_kind::S_field_declarations: // field_declarations
        value.move< HeaderType > (std::move (that.value));
        break;

      case symbol_kind::S_action_function_body: // action_function_body
      case symbol_kind::S_action_statement_list: // action_statement_list
        value.move< IR::ActionFunction* > (std::move (that.value));
        break;

      case symbol_kind::S_action_profile_body: // action_profile_body
        value.move< IR::ActionProfile* > (std::move (that.value));
        break;

      case symbol_kind::S_action_selector_body: // action_selector_body
        value.move< IR::ActionSelector* > (std::move (that.value));
        break;

      case symbol_kind::S_apply_case_list: // apply_case_list
        value.move< IR::Apply* > (std::move (that.value));
        break;

      case symbol_kind::S_local_var: // local_var
        value.move< IR::AttribLocal* > (std::move (that.value));
        break;

      case symbol_kind::S_opt_locals_list: // opt_locals_list
      case symbol_kind::S_locals_list: // locals_list
        value.move< IR::AttribLocals* > (std::move (that.value));
        break;

      case symbol_kind::S_blackbox_attribute: // blackbox_attribute
        value.move< IR::Attribute* > (std::move (that.value));
        break;

      case symbol_kind::S_update_verify_spec_list: // update_verify_spec_list
        value.move< IR::CalculatedField* > (std::move (that.value));
        break;

      case symbol_kind::S_case_value_list: // case_value_list
        value.move< IR::CaseEntry* > (std::move (that.value));
        break;

      case symbol_kind::S_const_expression: // const_expression
        value.move< IR::Constant* > (std::move (that.value));
        break;

      case symbol_kind::S_counter_spec_list: // counter_spec_list
        value.move< IR::Counter* > (std::move (that.value));
        break;

      case symbol_kind::S_inout: // inout
        value.move< IR::Direction > (std::move (that.value));
        break;

      case symbol_kind::S_opt_condition: // opt_condition
      case symbol_kind::S_field_or_masked_ref: // field_or_masked_ref
      case symbol_kind::S_pragma_operand: // pragma_operand
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_header_or_field_ref: // header_or_field_ref
      case symbol_kind::S_header_ref: // header_ref
        value.move< IR::Expression* > (std::move (that.value));
        break;

      case symbol_kind::S_field_list_entries: // field_list_entries
        value.move< IR::FieldList* > (std::move (that.value));
        break;

      case symbol_kind::S_field_list_calculation_body: // field_list_calculation_body
        value.move< IR::FieldListCalculation* > (std::move (that.value));
        break;

      case symbol_kind::S_name: // name
        value.move< IR::ID > (std::move (that.value));
        break;

      case symbol_kind::S_field_ref: // field_ref
        value.move< IR::Member* > (std::move (that.value));
        break;

      case symbol_kind::S_meter_spec_list: // meter_spec_list
        value.move< IR::Meter* > (std::move (that.value));
        break;

      case symbol_kind::S_field_list_list: // field_list_list
      case symbol_kind::S_name_list: // name_list
      case symbol_kind::S_opt_name_list: // opt_name_list
      case symbol_kind::S_action_list: // action_list
        value.move< IR::NameList* > (std::move (that.value));
        break;

      case symbol_kind::S_blackbox_config: // blackbox_config
        value.move< IR::NameMap<IR::Property>* > (std::move (that.value));
        break;

      case symbol_kind::S_argument: // argument
        value.move< IR::Parameter* > (std::move (that.value));
        break;

      case symbol_kind::S_opt_argument_list: // opt_argument_list
      case symbol_kind::S_argument_list: // argument_list
        value.move< IR::ParameterList* > (std::move (that.value));
        break;

      case symbol_kind::S_register_spec_list: // register_spec_list
        value.move< IR::Register* > (std::move (that.value));
        break;

      case symbol_kind::S_parser_statement_list: // parser_statement_list
        value.move< IR::V1Parser* > (std::move (that.value));
        break;

      case symbol_kind::S_table_body: // table_body
        value.move< IR::V1Table* > (std::move (that.value));
        break;

      case symbol_kind::S_blackbox_method: // blackbox_method
        value.move< IR::Vector<IR::Annotation>* > (std::move (that.value));
        break;

      case symbol_kind::S_case_entry_list: // case_entry_list
        value.move< IR::Vector<IR::CaseEntry>* > (std::move (that.value));
        break;

      case symbol_kind::S_field_match_list: // field_match_list
      case symbol_kind::S_control_statement_list: // control_statement_list
      case symbol_kind::S_control_statement: // control_statement
      case symbol_kind::S_expressions: // expressions
      case symbol_kind::S_pragma_operands: // pragma_operands
      case symbol_kind::S_expression_list: // expression_list
      case symbol_kind::S_opt_expression_list: // opt_expression_list
        value.move< IR::Vector<IR::Expression>* > (std::move (that.value));
        break;

      case symbol_kind::S_INTEGER: // INTEGER
        value.move< UnparsedConstant > (std::move (that.value));
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
        value.move< cstring > (std::move (that.value));
        break;

      default:
        break;
    }

      }
#endif

      /// Copy constructor.
      basic_symbol (const basic_symbol& that);

      /// Constructors for typed symbols.
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, location_type&& l)
        : Base (t)
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const location_type& l)
        : Base (t)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, Attributes&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const Attributes& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, BBoxType&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const BBoxType& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, CaseValue&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const CaseValue& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, ConstType*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const ConstType*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, HeaderType&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const HeaderType& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, IR::ActionFunction*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const IR::ActionFunction*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, IR::ActionProfile*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const IR::ActionProfile*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, IR::ActionSelector*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const IR::ActionSelector*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, IR::Apply*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const IR::Apply*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, IR::AttribLocal*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const IR::AttribLocal*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, IR::AttribLocals*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const IR::AttribLocals*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, IR::Attribute*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const IR::Attribute*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, IR::CalculatedField*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const IR::CalculatedField*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, IR::CaseEntry*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const IR::CaseEntry*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, IR::Constant*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const IR::Constant*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, IR::Counter*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const IR::Counter*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, IR::Direction&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const IR::Direction& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, IR::Expression*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const IR::Expression*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, IR::FieldList*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const IR::FieldList*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, IR::FieldListCalculation*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const IR::FieldListCalculation*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, IR::ID&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const IR::ID& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, IR::Member*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const IR::Member*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, IR::Meter*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const IR::Meter*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, IR::NameList*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const IR::NameList*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, IR::NameMap<IR::Property>*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const IR::NameMap<IR::Property>*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, IR::Parameter*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const IR::Parameter*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, IR::ParameterList*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const IR::ParameterList*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, IR::Register*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const IR::Register*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, IR::V1Parser*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const IR::V1Parser*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, IR::V1Table*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const IR::V1Table*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, IR::Vector<IR::Annotation>*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const IR::Vector<IR::Annotation>*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, IR::Vector<IR::CaseEntry>*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const IR::Vector<IR::CaseEntry>*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, IR::Vector<IR::Expression>*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const IR::Vector<IR::Expression>*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, UnparsedConstant&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const UnparsedConstant& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, cstring&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const cstring& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

      /// Destroy the symbol.
      ~basic_symbol ()
      {
        clear ();
      }



      /// Destroy contents, and record that is empty.
      void clear () YY_NOEXCEPT
      {
        // User destructor.
        symbol_kind_type yykind = this->kind ();
        basic_symbol<Base>& yysym = *this;
        (void) yysym;
        switch (yykind)
        {
       default:
          break;
        }

        // Value type destructor.
switch (yykind)
    {
      case symbol_kind::S_opt_field_modifiers: // opt_field_modifiers
      case symbol_kind::S_attributes: // attributes
      case symbol_kind::S_attrib: // attrib
        value.template destroy< Attributes > ();
        break;

      case symbol_kind::S_blackbox_body: // blackbox_body
        value.template destroy< BBoxType > ();
        break;

      case symbol_kind::S_case_value: // case_value
        value.template destroy< CaseValue > ();
        break;

      case symbol_kind::S_bit_width: // bit_width
      case symbol_kind::S_type: // type
        value.template destroy< ConstType* > ();
        break;

      case symbol_kind::S_header_dec_body: // header_dec_body
      case symbol_kind::S_field_declarations: // field_declarations
        value.template destroy< HeaderType > ();
        break;

      case symbol_kind::S_action_function_body: // action_function_body
      case symbol_kind::S_action_statement_list: // action_statement_list
        value.template destroy< IR::ActionFunction* > ();
        break;

      case symbol_kind::S_action_profile_body: // action_profile_body
        value.template destroy< IR::ActionProfile* > ();
        break;

      case symbol_kind::S_action_selector_body: // action_selector_body
        value.template destroy< IR::ActionSelector* > ();
        break;

      case symbol_kind::S_apply_case_list: // apply_case_list
        value.template destroy< IR::Apply* > ();
        break;

      case symbol_kind::S_local_var: // local_var
        value.template destroy< IR::AttribLocal* > ();
        break;

      case symbol_kind::S_opt_locals_list: // opt_locals_list
      case symbol_kind::S_locals_list: // locals_list
        value.template destroy< IR::AttribLocals* > ();
        break;

      case symbol_kind::S_blackbox_attribute: // blackbox_attribute
        value.template destroy< IR::Attribute* > ();
        break;

      case symbol_kind::S_update_verify_spec_list: // update_verify_spec_list
        value.template destroy< IR::CalculatedField* > ();
        break;

      case symbol_kind::S_case_value_list: // case_value_list
        value.template destroy< IR::CaseEntry* > ();
        break;

      case symbol_kind::S_const_expression: // const_expression
        value.template destroy< IR::Constant* > ();
        break;

      case symbol_kind::S_counter_spec_list: // counter_spec_list
        value.template destroy< IR::Counter* > ();
        break;

      case symbol_kind::S_inout: // inout
        value.template destroy< IR::Direction > ();
        break;

      case symbol_kind::S_opt_condition: // opt_condition
      case symbol_kind::S_field_or_masked_ref: // field_or_masked_ref
      case symbol_kind::S_pragma_operand: // pragma_operand
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_header_or_field_ref: // header_or_field_ref
      case symbol_kind::S_header_ref: // header_ref
        value.template destroy< IR::Expression* > ();
        break;

      case symbol_kind::S_field_list_entries: // field_list_entries
        value.template destroy< IR::FieldList* > ();
        break;

      case symbol_kind::S_field_list_calculation_body: // field_list_calculation_body
        value.template destroy< IR::FieldListCalculation* > ();
        break;

      case symbol_kind::S_name: // name
        value.template destroy< IR::ID > ();
        break;

      case symbol_kind::S_field_ref: // field_ref
        value.template destroy< IR::Member* > ();
        break;

      case symbol_kind::S_meter_spec_list: // meter_spec_list
        value.template destroy< IR::Meter* > ();
        break;

      case symbol_kind::S_field_list_list: // field_list_list
      case symbol_kind::S_name_list: // name_list
      case symbol_kind::S_opt_name_list: // opt_name_list
      case symbol_kind::S_action_list: // action_list
        value.template destroy< IR::NameList* > ();
        break;

      case symbol_kind::S_blackbox_config: // blackbox_config
        value.template destroy< IR::NameMap<IR::Property>* > ();
        break;

      case symbol_kind::S_argument: // argument
        value.template destroy< IR::Parameter* > ();
        break;

      case symbol_kind::S_opt_argument_list: // opt_argument_list
      case symbol_kind::S_argument_list: // argument_list
        value.template destroy< IR::ParameterList* > ();
        break;

      case symbol_kind::S_register_spec_list: // register_spec_list
        value.template destroy< IR::Register* > ();
        break;

      case symbol_kind::S_parser_statement_list: // parser_statement_list
        value.template destroy< IR::V1Parser* > ();
        break;

      case symbol_kind::S_table_body: // table_body
        value.template destroy< IR::V1Table* > ();
        break;

      case symbol_kind::S_blackbox_method: // blackbox_method
        value.template destroy< IR::Vector<IR::Annotation>* > ();
        break;

      case symbol_kind::S_case_entry_list: // case_entry_list
        value.template destroy< IR::Vector<IR::CaseEntry>* > ();
        break;

      case symbol_kind::S_field_match_list: // field_match_list
      case symbol_kind::S_control_statement_list: // control_statement_list
      case symbol_kind::S_control_statement: // control_statement
      case symbol_kind::S_expressions: // expressions
      case symbol_kind::S_pragma_operands: // pragma_operands
      case symbol_kind::S_expression_list: // expression_list
      case symbol_kind::S_opt_expression_list: // opt_expression_list
        value.template destroy< IR::Vector<IR::Expression>* > ();
        break;

      case symbol_kind::S_INTEGER: // INTEGER
        value.template destroy< UnparsedConstant > ();
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
        value.template destroy< cstring > ();
        break;

      default:
        break;
    }

        Base::clear ();
      }

      /// The user-facing name of this symbol.
      std::string name () const YY_NOEXCEPT
      {
        return V1Parser::symbol_name (this->kind ());
      }

      /// Backward compatibility (Bison 3.6).
      symbol_kind_type type_get () const YY_NOEXCEPT;

      /// Whether empty.
      bool empty () const YY_NOEXCEPT;

      /// Destructive move, \a s is emptied into this.
      void move (basic_symbol& s);

      /// The semantic value.
      value_type value;

      /// The location.
      location_type location;

    private:
#if YY_CPLUSPLUS < 201103L
      /// Assignment operator.
      basic_symbol& operator= (const basic_symbol& that);
#endif
    };

    /// Type access provider for token (enum) based symbols.
    struct by_kind
    {
      /// The symbol kind as needed by the constructor.
      typedef token_kind_type kind_type;

      /// Default constructor.
      by_kind () YY_NOEXCEPT;

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      by_kind (by_kind&& that) YY_NOEXCEPT;
#endif

      /// Copy constructor.
      by_kind (const by_kind& that) YY_NOEXCEPT;

      /// Constructor from (external) token numbers.
      by_kind (kind_type t) YY_NOEXCEPT;



      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol kind from \a that.
      void move (by_kind& that);

      /// The (internal) type number (corresponding to \a type).
      /// \a empty when empty.
      symbol_kind_type kind () const YY_NOEXCEPT;

      /// Backward compatibility (Bison 3.6).
      symbol_kind_type type_get () const YY_NOEXCEPT;

      /// The symbol kind.
      /// \a S_YYEMPTY when empty.
      symbol_kind_type kind_;
    };

    /// Backward compatibility for a private implementation detail (Bison 3.6).
    typedef by_kind by_type;

    /// "External" symbols: returned by the scanner.
    struct symbol_type : basic_symbol<by_kind>
    {
      /// Superclass.
      typedef basic_symbol<by_kind> super_type;

      /// Empty symbol.
      symbol_type () YY_NOEXCEPT {}

      /// Constructor for valueless symbols, and symbols from each type.
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, location_type l)
        : super_type (token_kind_type (tok), std::move (l))
#else
      symbol_type (int tok, const location_type& l)
        : super_type (token_kind_type (tok), l)
#endif
      {
#if !defined _MSC_VER || defined __clang__
        YY_ASSERT (tok == token::TOK_YYEOF
                   || (token::TOK_YYerror <= tok && tok <= token::TOK_NEWLINE)
                   || tok == token::TOK_EXPRLIST);
#endif
      }
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, UnparsedConstant v, location_type l)
        : super_type (token_kind_type (tok), std::move (v), std::move (l))
#else
      symbol_type (int tok, const UnparsedConstant& v, const location_type& l)
        : super_type (token_kind_type (tok), v, l)
#endif
      {
#if !defined _MSC_VER || defined __clang__
        YY_ASSERT (tok == token::TOK_INTEGER);
#endif
      }
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, cstring v, location_type l)
        : super_type (token_kind_type (tok), std::move (v), std::move (l))
#else
      symbol_type (int tok, const cstring& v, const location_type& l)
        : super_type (token_kind_type (tok), v, l)
#endif
      {
#if !defined _MSC_VER || defined __clang__
        YY_ASSERT ((token::TOK_ACTION <= tok && tok <= token::TOK_STRING_LITERAL));
#endif
      }
    };

    /// Build a parser object.
    V1Parser (P4::V1::V1ParserDriver& driver_yyarg, P4::V1::V1Lexer& lexer_yyarg);
    virtual ~V1Parser ();

#if 201103L <= YY_CPLUSPLUS
    /// Non copyable.
    V1Parser (const V1Parser&) = delete;
    /// Non copyable.
    V1Parser& operator= (const V1Parser&) = delete;
#endif

    /// Parse.  An alias for parse ().
    /// \returns  0 iff parsing succeeded.
    int operator() ();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    virtual int parse ();

#if YYDEBUG
    /// The current debugging stream.
    std::ostream& debug_stream () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

    /// Report a syntax error.
    /// \param loc    where the syntax error is found.
    /// \param msg    a description of the syntax error.
    virtual void error (const location_type& loc, const std::string& msg);

    /// Report a syntax error.
    void error (const syntax_error& err);

    /// The user-facing name of the symbol whose (internal) number is
    /// YYSYMBOL.  No bounds checking.
    static std::string symbol_name (symbol_kind_type yysymbol);

    // Implementation of make_symbol for each token kind.
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_YYEOF (location_type l)
      {
        return symbol_type (token::TOK_YYEOF, std::move (l));
      }
#else
      static
      symbol_type
      make_YYEOF (const location_type& l)
      {
        return symbol_type (token::TOK_YYEOF, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_YYerror (location_type l)
      {
        return symbol_type (token::TOK_YYerror, std::move (l));
      }
#else
      static
      symbol_type
      make_YYerror (const location_type& l)
      {
        return symbol_type (token::TOK_YYerror, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_YYUNDEF (location_type l)
      {
        return symbol_type (token::TOK_YYUNDEF, std::move (l));
      }
#else
      static
      symbol_type
      make_YYUNDEF (const location_type& l)
      {
        return symbol_type (token::TOK_YYUNDEF, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_END (location_type l)
      {
        return symbol_type (token::TOK_END, std::move (l));
      }
#else
      static
      symbol_type
      make_END (const location_type& l)
      {
        return symbol_type (token::TOK_END, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_UNEXPECTED_TOKEN (location_type l)
      {
        return symbol_type (token::TOK_UNEXPECTED_TOKEN, std::move (l));
      }
#else
      static
      symbol_type
      make_UNEXPECTED_TOKEN (const location_type& l)
      {
        return symbol_type (token::TOK_UNEXPECTED_TOKEN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LE (location_type l)
      {
        return symbol_type (token::TOK_LE, std::move (l));
      }
#else
      static
      symbol_type
      make_LE (const location_type& l)
      {
        return symbol_type (token::TOK_LE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_GE (location_type l)
      {
        return symbol_type (token::TOK_GE, std::move (l));
      }
#else
      static
      symbol_type
      make_GE (const location_type& l)
      {
        return symbol_type (token::TOK_GE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SHL (location_type l)
      {
        return symbol_type (token::TOK_SHL, std::move (l));
      }
#else
      static
      symbol_type
      make_SHL (const location_type& l)
      {
        return symbol_type (token::TOK_SHL, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SHR (location_type l)
      {
        return symbol_type (token::TOK_SHR, std::move (l));
      }
#else
      static
      symbol_type
      make_SHR (const location_type& l)
      {
        return symbol_type (token::TOK_SHR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_AND (location_type l)
      {
        return symbol_type (token::TOK_AND, std::move (l));
      }
#else
      static
      symbol_type
      make_AND (const location_type& l)
      {
        return symbol_type (token::TOK_AND, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OR (location_type l)
      {
        return symbol_type (token::TOK_OR, std::move (l));
      }
#else
      static
      symbol_type
      make_OR (const location_type& l)
      {
        return symbol_type (token::TOK_OR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NE (location_type l)
      {
        return symbol_type (token::TOK_NE, std::move (l));
      }
#else
      static
      symbol_type
      make_NE (const location_type& l)
      {
        return symbol_type (token::TOK_NE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EQ (location_type l)
      {
        return symbol_type (token::TOK_EQ, std::move (l));
      }
#else
      static
      symbol_type
      make_EQ (const location_type& l)
      {
        return symbol_type (token::TOK_EQ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PLUS (location_type l)
      {
        return symbol_type (token::TOK_PLUS, std::move (l));
      }
#else
      static
      symbol_type
      make_PLUS (const location_type& l)
      {
        return symbol_type (token::TOK_PLUS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MINUS (location_type l)
      {
        return symbol_type (token::TOK_MINUS, std::move (l));
      }
#else
      static
      symbol_type
      make_MINUS (const location_type& l)
      {
        return symbol_type (token::TOK_MINUS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MUL (location_type l)
      {
        return symbol_type (token::TOK_MUL, std::move (l));
      }
#else
      static
      symbol_type
      make_MUL (const location_type& l)
      {
        return symbol_type (token::TOK_MUL, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DIV (location_type l)
      {
        return symbol_type (token::TOK_DIV, std::move (l));
      }
#else
      static
      symbol_type
      make_DIV (const location_type& l)
      {
        return symbol_type (token::TOK_DIV, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MOD (location_type l)
      {
        return symbol_type (token::TOK_MOD, std::move (l));
      }
#else
      static
      symbol_type
      make_MOD (const location_type& l)
      {
        return symbol_type (token::TOK_MOD, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BIT_OR (location_type l)
      {
        return symbol_type (token::TOK_BIT_OR, std::move (l));
      }
#else
      static
      symbol_type
      make_BIT_OR (const location_type& l)
      {
        return symbol_type (token::TOK_BIT_OR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BIT_AND (location_type l)
      {
        return symbol_type (token::TOK_BIT_AND, std::move (l));
      }
#else
      static
      symbol_type
      make_BIT_AND (const location_type& l)
      {
        return symbol_type (token::TOK_BIT_AND, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BIT_XOR (location_type l)
      {
        return symbol_type (token::TOK_BIT_XOR, std::move (l));
      }
#else
      static
      symbol_type
      make_BIT_XOR (const location_type& l)
      {
        return symbol_type (token::TOK_BIT_XOR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_COMPLEMENT (location_type l)
      {
        return symbol_type (token::TOK_COMPLEMENT, std::move (l));
      }
#else
      static
      symbol_type
      make_COMPLEMENT (const location_type& l)
      {
        return symbol_type (token::TOK_COMPLEMENT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_L_BRACKET (location_type l)
      {
        return symbol_type (token::TOK_L_BRACKET, std::move (l));
      }
#else
      static
      symbol_type
      make_L_BRACKET (const location_type& l)
      {
        return symbol_type (token::TOK_L_BRACKET, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_R_BRACKET (location_type l)
      {
        return symbol_type (token::TOK_R_BRACKET, std::move (l));
      }
#else
      static
      symbol_type
      make_R_BRACKET (const location_type& l)
      {
        return symbol_type (token::TOK_R_BRACKET, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_L_BRACE (location_type l)
      {
        return symbol_type (token::TOK_L_BRACE, std::move (l));
      }
#else
      static
      symbol_type
      make_L_BRACE (const location_type& l)
      {
        return symbol_type (token::TOK_L_BRACE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_R_BRACE (location_type l)
      {
        return symbol_type (token::TOK_R_BRACE, std::move (l));
      }
#else
      static
      symbol_type
      make_R_BRACE (const location_type& l)
      {
        return symbol_type (token::TOK_R_BRACE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_L_ANGLE (location_type l)
      {
        return symbol_type (token::TOK_L_ANGLE, std::move (l));
      }
#else
      static
      symbol_type
      make_L_ANGLE (const location_type& l)
      {
        return symbol_type (token::TOK_L_ANGLE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_R_ANGLE (location_type l)
      {
        return symbol_type (token::TOK_R_ANGLE, std::move (l));
      }
#else
      static
      symbol_type
      make_R_ANGLE (const location_type& l)
      {
        return symbol_type (token::TOK_R_ANGLE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_L_PAREN (location_type l)
      {
        return symbol_type (token::TOK_L_PAREN, std::move (l));
      }
#else
      static
      symbol_type
      make_L_PAREN (const location_type& l)
      {
        return symbol_type (token::TOK_L_PAREN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_R_PAREN (location_type l)
      {
        return symbol_type (token::TOK_R_PAREN, std::move (l));
      }
#else
      static
      symbol_type
      make_R_PAREN (const location_type& l)
      {
        return symbol_type (token::TOK_R_PAREN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NOT (location_type l)
      {
        return symbol_type (token::TOK_NOT, std::move (l));
      }
#else
      static
      symbol_type
      make_NOT (const location_type& l)
      {
        return symbol_type (token::TOK_NOT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_COLON (location_type l)
      {
        return symbol_type (token::TOK_COLON, std::move (l));
      }
#else
      static
      symbol_type
      make_COLON (const location_type& l)
      {
        return symbol_type (token::TOK_COLON, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_COMMA (location_type l)
      {
        return symbol_type (token::TOK_COMMA, std::move (l));
      }
#else
      static
      symbol_type
      make_COMMA (const location_type& l)
      {
        return symbol_type (token::TOK_COMMA, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOT (location_type l)
      {
        return symbol_type (token::TOK_DOT, std::move (l));
      }
#else
      static
      symbol_type
      make_DOT (const location_type& l)
      {
        return symbol_type (token::TOK_DOT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ASSIGN (location_type l)
      {
        return symbol_type (token::TOK_ASSIGN, std::move (l));
      }
#else
      static
      symbol_type
      make_ASSIGN (const location_type& l)
      {
        return symbol_type (token::TOK_ASSIGN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SEMICOLON (location_type l)
      {
        return symbol_type (token::TOK_SEMICOLON, std::move (l));
      }
#else
      static
      symbol_type
      make_SEMICOLON (const location_type& l)
      {
        return symbol_type (token::TOK_SEMICOLON, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NEWLINE (location_type l)
      {
        return symbol_type (token::TOK_NEWLINE, std::move (l));
      }
#else
      static
      symbol_type
      make_NEWLINE (const location_type& l)
      {
        return symbol_type (token::TOK_NEWLINE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ACTION (cstring v, location_type l)
      {
        return symbol_type (token::TOK_ACTION, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_ACTION (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_ACTION, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ACTIONS (cstring v, location_type l)
      {
        return symbol_type (token::TOK_ACTIONS, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_ACTIONS (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_ACTIONS, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ACTION_PROFILE (cstring v, location_type l)
      {
        return symbol_type (token::TOK_ACTION_PROFILE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_ACTION_PROFILE (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_ACTION_PROFILE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ACTION_SELECTOR (cstring v, location_type l)
      {
        return symbol_type (token::TOK_ACTION_SELECTOR, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_ACTION_SELECTOR (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_ACTION_SELECTOR, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ALGORITHM (cstring v, location_type l)
      {
        return symbol_type (token::TOK_ALGORITHM, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_ALGORITHM (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_ALGORITHM, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_APPLY (cstring v, location_type l)
      {
        return symbol_type (token::TOK_APPLY, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_APPLY (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_APPLY, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ATTRIBUTE (cstring v, location_type l)
      {
        return symbol_type (token::TOK_ATTRIBUTE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_ATTRIBUTE (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_ATTRIBUTE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ATTRIBUTES (cstring v, location_type l)
      {
        return symbol_type (token::TOK_ATTRIBUTES, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_ATTRIBUTES (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_ATTRIBUTES, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BIT (cstring v, location_type l)
      {
        return symbol_type (token::TOK_BIT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_BIT (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_BIT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BLACKBOX (cstring v, location_type l)
      {
        return symbol_type (token::TOK_BLACKBOX, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_BLACKBOX (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_BLACKBOX, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BLACKBOX_TYPE (cstring v, location_type l)
      {
        return symbol_type (token::TOK_BLACKBOX_TYPE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_BLACKBOX_TYPE (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_BLACKBOX_TYPE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BLOCK (cstring v, location_type l)
      {
        return symbol_type (token::TOK_BLOCK, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_BLOCK (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_BLOCK, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BOOL (cstring v, location_type l)
      {
        return symbol_type (token::TOK_BOOL, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_BOOL (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_BOOL, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CALCULATED_FIELD (cstring v, location_type l)
      {
        return symbol_type (token::TOK_CALCULATED_FIELD, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_CALCULATED_FIELD (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_CALCULATED_FIELD, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CONTROL (cstring v, location_type l)
      {
        return symbol_type (token::TOK_CONTROL, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_CONTROL (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_CONTROL, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_COUNTER (cstring v, location_type l)
      {
        return symbol_type (token::TOK_COUNTER, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_COUNTER (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_COUNTER, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CONST (cstring v, location_type l)
      {
        return symbol_type (token::TOK_CONST, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_CONST (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_CONST, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CURRENT (cstring v, location_type l)
      {
        return symbol_type (token::TOK_CURRENT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_CURRENT (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_CURRENT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DEFAULT (cstring v, location_type l)
      {
        return symbol_type (token::TOK_DEFAULT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_DEFAULT (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_DEFAULT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DEFAULT_ACTION (cstring v, location_type l)
      {
        return symbol_type (token::TOK_DEFAULT_ACTION, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_DEFAULT_ACTION (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_DEFAULT_ACTION, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DIRECT (cstring v, location_type l)
      {
        return symbol_type (token::TOK_DIRECT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_DIRECT (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_DIRECT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DROP (cstring v, location_type l)
      {
        return symbol_type (token::TOK_DROP, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_DROP (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_DROP, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DYNAMIC_ACTION_SELECTION (cstring v, location_type l)
      {
        return symbol_type (token::TOK_DYNAMIC_ACTION_SELECTION, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_DYNAMIC_ACTION_SELECTION (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_DYNAMIC_ACTION_SELECTION, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ELSE (cstring v, location_type l)
      {
        return symbol_type (token::TOK_ELSE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_ELSE (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_ELSE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EXTRACT (cstring v, location_type l)
      {
        return symbol_type (token::TOK_EXTRACT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_EXTRACT (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_EXTRACT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EXPRESSION (cstring v, location_type l)
      {
        return symbol_type (token::TOK_EXPRESSION, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_EXPRESSION (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_EXPRESSION, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EXPRESSION_LOCAL_VARIABLES (cstring v, location_type l)
      {
        return symbol_type (token::TOK_EXPRESSION_LOCAL_VARIABLES, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_EXPRESSION_LOCAL_VARIABLES (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_EXPRESSION_LOCAL_VARIABLES, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FALSE (cstring v, location_type l)
      {
        return symbol_type (token::TOK_FALSE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_FALSE (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_FALSE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FIELD_LIST (cstring v, location_type l)
      {
        return symbol_type (token::TOK_FIELD_LIST, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_FIELD_LIST (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_FIELD_LIST, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FIELD_LIST_CALCULATION (cstring v, location_type l)
      {
        return symbol_type (token::TOK_FIELD_LIST_CALCULATION, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_FIELD_LIST_CALCULATION (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_FIELD_LIST_CALCULATION, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FIELDS (cstring v, location_type l)
      {
        return symbol_type (token::TOK_FIELDS, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_FIELDS (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_FIELDS, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_HEADER (cstring v, location_type l)
      {
        return symbol_type (token::TOK_HEADER, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_HEADER (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_HEADER, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_HEADER_TYPE (cstring v, location_type l)
      {
        return symbol_type (token::TOK_HEADER_TYPE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_HEADER_TYPE (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_HEADER_TYPE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IF (cstring v, location_type l)
      {
        return symbol_type (token::TOK_IF, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_IF (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_IF, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IMPLEMENTATION (cstring v, location_type l)
      {
        return symbol_type (token::TOK_IMPLEMENTATION, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_IMPLEMENTATION (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_IMPLEMENTATION, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IN (cstring v, location_type l)
      {
        return symbol_type (token::TOK_IN, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_IN (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_IN, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INPUT (cstring v, location_type l)
      {
        return symbol_type (token::TOK_INPUT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_INPUT (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_INPUT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INSTANCE_COUNT (cstring v, location_type l)
      {
        return symbol_type (token::TOK_INSTANCE_COUNT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_INSTANCE_COUNT (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_INSTANCE_COUNT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INT (cstring v, location_type l)
      {
        return symbol_type (token::TOK_INT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_INT (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_INT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LATEST (cstring v, location_type l)
      {
        return symbol_type (token::TOK_LATEST, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_LATEST (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_LATEST, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LAYOUT (cstring v, location_type l)
      {
        return symbol_type (token::TOK_LAYOUT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_LAYOUT (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_LAYOUT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LENGTH (cstring v, location_type l)
      {
        return symbol_type (token::TOK_LENGTH, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_LENGTH (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_LENGTH, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MASK (cstring v, location_type l)
      {
        return symbol_type (token::TOK_MASK, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_MASK (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_MASK, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MAX_LENGTH (cstring v, location_type l)
      {
        return symbol_type (token::TOK_MAX_LENGTH, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_MAX_LENGTH (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_MAX_LENGTH, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MAX_SIZE (cstring v, location_type l)
      {
        return symbol_type (token::TOK_MAX_SIZE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_MAX_SIZE (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_MAX_SIZE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MAX_WIDTH (cstring v, location_type l)
      {
        return symbol_type (token::TOK_MAX_WIDTH, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_MAX_WIDTH (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_MAX_WIDTH, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_METADATA (cstring v, location_type l)
      {
        return symbol_type (token::TOK_METADATA, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_METADATA (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_METADATA, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_METER (cstring v, location_type l)
      {
        return symbol_type (token::TOK_METER, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_METER (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_METER, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_METHOD (cstring v, location_type l)
      {
        return symbol_type (token::TOK_METHOD, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_METHOD (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_METHOD, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MIN_SIZE (cstring v, location_type l)
      {
        return symbol_type (token::TOK_MIN_SIZE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_MIN_SIZE (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_MIN_SIZE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MIN_WIDTH (cstring v, location_type l)
      {
        return symbol_type (token::TOK_MIN_WIDTH, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_MIN_WIDTH (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_MIN_WIDTH, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OPTIONAL (cstring v, location_type l)
      {
        return symbol_type (token::TOK_OPTIONAL, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_OPTIONAL (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_OPTIONAL, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OUT (cstring v, location_type l)
      {
        return symbol_type (token::TOK_OUT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_OUT (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_OUT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OUTPUT_WIDTH (cstring v, location_type l)
      {
        return symbol_type (token::TOK_OUTPUT_WIDTH, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_OUTPUT_WIDTH (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_OUTPUT_WIDTH, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PARSE_ERROR (cstring v, location_type l)
      {
        return symbol_type (token::TOK_PARSE_ERROR, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_PARSE_ERROR (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_PARSE_ERROR, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PARSER (cstring v, location_type l)
      {
        return symbol_type (token::TOK_PARSER, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_PARSER (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_PARSER, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PARSER_VALUE_SET (cstring v, location_type l)
      {
        return symbol_type (token::TOK_PARSER_VALUE_SET, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_PARSER_VALUE_SET (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_PARSER_VALUE_SET, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PARSER_EXCEPTION (cstring v, location_type l)
      {
        return symbol_type (token::TOK_PARSER_EXCEPTION, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_PARSER_EXCEPTION (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_PARSER_EXCEPTION, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PAYLOAD (cstring v, location_type l)
      {
        return symbol_type (token::TOK_PAYLOAD, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_PAYLOAD (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_PAYLOAD, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PRAGMA (cstring v, location_type l)
      {
        return symbol_type (token::TOK_PRAGMA, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_PRAGMA (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_PRAGMA, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PREFIX (cstring v, location_type l)
      {
        return symbol_type (token::TOK_PREFIX, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_PREFIX (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_PREFIX, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PRE_COLOR (cstring v, location_type l)
      {
        return symbol_type (token::TOK_PRE_COLOR, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_PRE_COLOR (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_PRE_COLOR, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PRIMITIVE_ACTION (cstring v, location_type l)
      {
        return symbol_type (token::TOK_PRIMITIVE_ACTION, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_PRIMITIVE_ACTION (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_PRIMITIVE_ACTION, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_READS (cstring v, location_type l)
      {
        return symbol_type (token::TOK_READS, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_READS (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_READS, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_REGISTER (cstring v, location_type l)
      {
        return symbol_type (token::TOK_REGISTER, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_REGISTER (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_REGISTER, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RESULT (cstring v, location_type l)
      {
        return symbol_type (token::TOK_RESULT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_RESULT (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_RESULT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RETURN (cstring v, location_type l)
      {
        return symbol_type (token::TOK_RETURN, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_RETURN (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_RETURN, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SATURATING (cstring v, location_type l)
      {
        return symbol_type (token::TOK_SATURATING, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_SATURATING (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_SATURATING, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SELECT (cstring v, location_type l)
      {
        return symbol_type (token::TOK_SELECT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_SELECT (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_SELECT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SELECTION_KEY (cstring v, location_type l)
      {
        return symbol_type (token::TOK_SELECTION_KEY, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_SELECTION_KEY (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_SELECTION_KEY, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SELECTION_MODE (cstring v, location_type l)
      {
        return symbol_type (token::TOK_SELECTION_MODE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_SELECTION_MODE (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_SELECTION_MODE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SELECTION_TYPE (cstring v, location_type l)
      {
        return symbol_type (token::TOK_SELECTION_TYPE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_SELECTION_TYPE (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_SELECTION_TYPE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SET_METADATA (cstring v, location_type l)
      {
        return symbol_type (token::TOK_SET_METADATA, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_SET_METADATA (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_SET_METADATA, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SIGNED (cstring v, location_type l)
      {
        return symbol_type (token::TOK_SIGNED, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_SIGNED (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_SIGNED, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SIZE (cstring v, location_type l)
      {
        return symbol_type (token::TOK_SIZE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_SIZE (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_SIZE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_STATIC (cstring v, location_type l)
      {
        return symbol_type (token::TOK_STATIC, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_STATIC (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_STATIC, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_STRING (cstring v, location_type l)
      {
        return symbol_type (token::TOK_STRING, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_STRING (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_STRING, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TABLE (cstring v, location_type l)
      {
        return symbol_type (token::TOK_TABLE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_TABLE (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_TABLE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TRUE (cstring v, location_type l)
      {
        return symbol_type (token::TOK_TRUE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_TRUE (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_TRUE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TYPE (cstring v, location_type l)
      {
        return symbol_type (token::TOK_TYPE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_TYPE (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_TYPE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_UPDATE (cstring v, location_type l)
      {
        return symbol_type (token::TOK_UPDATE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_UPDATE (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_UPDATE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VALID (cstring v, location_type l)
      {
        return symbol_type (token::TOK_VALID, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_VALID (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_VALID, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VERIFY (cstring v, location_type l)
      {
        return symbol_type (token::TOK_VERIFY, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_VERIFY (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_VERIFY, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_WIDTH (cstring v, location_type l)
      {
        return symbol_type (token::TOK_WIDTH, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_WIDTH (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_WIDTH, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_WRITES (cstring v, location_type l)
      {
        return symbol_type (token::TOK_WRITES, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_WRITES (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_WRITES, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IDENTIFIER (cstring v, location_type l)
      {
        return symbol_type (token::TOK_IDENTIFIER, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_IDENTIFIER (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_IDENTIFIER, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_STRING_LITERAL (cstring v, location_type l)
      {
        return symbol_type (token::TOK_STRING_LITERAL, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_STRING_LITERAL (const cstring& v, const location_type& l)
      {
        return symbol_type (token::TOK_STRING_LITERAL, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INTEGER (UnparsedConstant v, location_type l)
      {
        return symbol_type (token::TOK_INTEGER, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_INTEGER (const UnparsedConstant& v, const location_type& l)
      {
        return symbol_type (token::TOK_INTEGER, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EXPRLIST (location_type l)
      {
        return symbol_type (token::TOK_EXPRLIST, std::move (l));
      }
#else
      static
      symbol_type
      make_EXPRLIST (const location_type& l)
      {
        return symbol_type (token::TOK_EXPRLIST, l);
      }
#endif


    class context
    {
    public:
      context (const V1Parser& yyparser, const symbol_type& yyla);
      const symbol_type& lookahead () const YY_NOEXCEPT { return yyla_; }
      symbol_kind_type token () const YY_NOEXCEPT { return yyla_.kind (); }
      const location_type& location () const YY_NOEXCEPT { return yyla_.location; }

      /// Put in YYARG at most YYARGN of the expected tokens, and return the
      /// number of tokens stored in YYARG.  If YYARG is null, return the
      /// number of expected tokens (guaranteed to be less than YYNTOKENS).
      int expected_tokens (symbol_kind_type yyarg[], int yyargn) const;

    private:
      const V1Parser& yyparser_;
      const symbol_type& yyla_;
    };

  private:
#if YY_CPLUSPLUS < 201103L
    /// Non copyable.
    V1Parser (const V1Parser&);
    /// Non copyable.
    V1Parser& operator= (const V1Parser&);
#endif


    /// Stored state numbers (used for stacks).
    typedef short state_type;

    /// The arguments of the error message.
    int yy_syntax_error_arguments_ (const context& yyctx,
                                    symbol_kind_type yyarg[], int yyargn) const;

    /// Generate an error message.
    /// \param yyctx     the context in which the error occurred.
    virtual std::string yysyntax_error_ (const context& yyctx) const;
    /// Compute post-reduction state.
    /// \param yystate   the current state
    /// \param yysym     the nonterminal to push on the stack
    static state_type yy_lr_goto_state_ (state_type yystate, int yysym);

    /// Whether the given \c yypact_ value indicates a defaulted state.
    /// \param yyvalue   the value to check
    static bool yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT;

    /// Whether the given \c yytable_ value indicates a syntax error.
    /// \param yyvalue   the value to check
    static bool yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT;

    static const short yypact_ninf_;
    static const short yytable_ninf_;

    /// Convert a scanner token kind \a t to a symbol kind.
    /// In theory \a t should be a token_kind_type, but character literals
    /// are valid, yet not members of the token_kind_type enum.
    static symbol_kind_type yytranslate_ (int t) YY_NOEXCEPT;

    /// Convert the symbol name \a n to a form suitable for a diagnostic.
    static std::string yytnamerr_ (const char *yystr);

    /// For a symbol, its name in clear.
    static const char* const yytname_[];


    // Tables.
    // YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
    // STATE-NUM.
    static const short yypact_[];

    // YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
    // Performed when YYTABLE does not specify something else to do.  Zero
    // means the default is an error.
    static const short yydefact_[];

    // YYPGOTO[NTERM-NUM].
    static const short yypgoto_[];

    // YYDEFGOTO[NTERM-NUM].
    static const short yydefgoto_[];

    // YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
    // positive, shift that token.  If negative, reduce the rule whose
    // number is the opposite.  If YYTABLE_NINF, syntax error.
    static const short yytable_[];

    static const short yycheck_[];

    // YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
    // state STATE-NUM.
    static const unsigned char yystos_[];

    // YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.
    static const unsigned char yyr1_[];

    // YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.
    static const signed char yyr2_[];


#if YYDEBUG
    // YYRLINE[YYN] -- Source line where rule number YYN was defined.
    static const short yyrline_[];
    /// Report on the debug stream that the rule \a r is going to be reduced.
    virtual void yy_reduce_print_ (int r) const;
    /// Print the state stack on the debug stream.
    virtual void yy_stack_print_ () const;

    /// Debugging level.
    int yydebug_;
    /// Debug stream.
    std::ostream* yycdebug_;

    /// \brief Display a symbol kind, value and location.
    /// \param yyo    The output stream.
    /// \param yysym  The symbol.
    template <typename Base>
    void yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const;
#endif

    /// \brief Reclaim the memory associated to a symbol.
    /// \param yymsg     Why this token is reclaimed.
    ///                  If null, print nothing.
    /// \param yysym     The symbol.
    template <typename Base>
    void yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const;

  private:
    /// Type access provider for state based symbols.
    struct by_state
    {
      /// Default constructor.
      by_state () YY_NOEXCEPT;

      /// The symbol kind as needed by the constructor.
      typedef state_type kind_type;

      /// Constructor.
      by_state (kind_type s) YY_NOEXCEPT;

      /// Copy constructor.
      by_state (const by_state& that) YY_NOEXCEPT;

      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol kind from \a that.
      void move (by_state& that);

      /// The symbol kind (corresponding to \a state).
      /// \a symbol_kind::S_YYEMPTY when empty.
      symbol_kind_type kind () const YY_NOEXCEPT;

      /// The state number used to denote an empty symbol.
      /// We use the initial state, as it does not have a value.
      enum { empty_state = 0 };

      /// The state.
      /// \a empty when empty.
      state_type state;
    };

    /// "Internal" symbol: element of the stack.
    struct stack_symbol_type : basic_symbol<by_state>
    {
      /// Superclass.
      typedef basic_symbol<by_state> super_type;
      /// Construct an empty symbol.
      stack_symbol_type ();
      /// Move or copy construction.
      stack_symbol_type (YY_RVREF (stack_symbol_type) that);
      /// Steal the contents from \a sym to build this.
      stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) sym);
#if YY_CPLUSPLUS < 201103L
      /// Assignment, needed by push_back by some old implementations.
      /// Moves the contents of that.
      stack_symbol_type& operator= (stack_symbol_type& that);

      /// Assignment, needed by push_back by other implementations.
      /// Needed by some other old implementations.
      stack_symbol_type& operator= (const stack_symbol_type& that);
#endif
    };

    /// A stack with random access from its top.
    template <typename T, typename S = std::vector<T> >
    class stack
    {
    public:
      // Hide our reversed order.
      typedef typename S::iterator iterator;
      typedef typename S::const_iterator const_iterator;
      typedef typename S::size_type size_type;
      typedef typename std::ptrdiff_t index_type;

      stack (size_type n = 200) YY_NOEXCEPT
        : seq_ (n)
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Non copyable.
      stack (const stack&) = delete;
      /// Non copyable.
      stack& operator= (const stack&) = delete;
#endif

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      const T&
      operator[] (index_type i) const
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      T&
      operator[] (index_type i)
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Steal the contents of \a t.
      ///
      /// Close to move-semantics.
      void
      push (YY_MOVE_REF (T) t)
      {
        seq_.push_back (T ());
        operator[] (0).move (t);
      }

      /// Pop elements from the stack.
      void
      pop (std::ptrdiff_t n = 1) YY_NOEXCEPT
      {
        for (; 0 < n; --n)
          seq_.pop_back ();
      }

      /// Pop all elements from the stack.
      void
      clear () YY_NOEXCEPT
      {
        seq_.clear ();
      }

      /// Number of elements on the stack.
      index_type
      size () const YY_NOEXCEPT
      {
        return index_type (seq_.size ());
      }

      /// Iterator on top of the stack (going downwards).
      const_iterator
      begin () const YY_NOEXCEPT
      {
        return seq_.begin ();
      }

      /// Bottom of the stack.
      const_iterator
      end () const YY_NOEXCEPT
      {
        return seq_.end ();
      }

      /// Present a slice of the top of a stack.
      class slice
      {
      public:
        slice (const stack& stack, index_type range) YY_NOEXCEPT
          : stack_ (stack)
          , range_ (range)
        {}

        const T&
        operator[] (index_type i) const
        {
          return stack_[range_ - i];
        }

      private:
        const stack& stack_;
        index_type range_;
      };

    private:
#if YY_CPLUSPLUS < 201103L
      /// Non copyable.
      stack (const stack&);
      /// Non copyable.
      stack& operator= (const stack&);
#endif
      /// The wrapped container.
      S seq_;
    };


    /// Stack type.
    typedef stack<stack_symbol_type> stack_type;

    /// The stack.
    stack_type yystack_;

    /// Push a new state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param sym  the symbol
    /// \warning the contents of \a s.value is stolen.
    void yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym);

    /// Push a new look ahead token on the state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param s    the state
    /// \param sym  the symbol (for its value and location).
    /// \warning the contents of \a sym.value is stolen.
    void yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym);

    /// Pop \a n symbols from the stack.
    void yypop_ (int n = 1) YY_NOEXCEPT;

    /// Constants.
    enum
    {
      yylast_ = 4234,     ///< Last index in yytable_.
      yynnts_ = 81,  ///< Number of nonterminal symbols.
      yyfinal_ = 3 ///< Termination state number.
    };


    // User arguments.
    P4::V1::V1ParserDriver& driver;
    P4::V1::V1Lexer& lexer;

  };

  inline
  V1Parser::symbol_kind_type
  V1Parser::yytranslate_ (int t) YY_NOEXCEPT
  {
    // YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to
    // TOKEN-NUM as returned by yylex.
    static
    const signed char
    translate_table[] =
    {
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125
    };
    // Last valid token kind.
    const int code_max = 380;

    if (t <= 0)
      return symbol_kind::S_YYEOF;
    else if (t <= code_max)
      return static_cast <symbol_kind_type> (translate_table[t]);
    else
      return symbol_kind::S_YYUNDEF;
  }

  // basic_symbol.
  template <typename Base>
  V1Parser::basic_symbol<Base>::basic_symbol (const basic_symbol& that)
    : Base (that)
    , value ()
    , location (that.location)
  {
    switch (this->kind ())
    {
      case symbol_kind::S_opt_field_modifiers: // opt_field_modifiers
      case symbol_kind::S_attributes: // attributes
      case symbol_kind::S_attrib: // attrib
        value.copy< Attributes > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_blackbox_body: // blackbox_body
        value.copy< BBoxType > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_case_value: // case_value
        value.copy< CaseValue > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_bit_width: // bit_width
      case symbol_kind::S_type: // type
        value.copy< ConstType* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_header_dec_body: // header_dec_body
      case symbol_kind::S_field_declarations: // field_declarations
        value.copy< HeaderType > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_action_function_body: // action_function_body
      case symbol_kind::S_action_statement_list: // action_statement_list
        value.copy< IR::ActionFunction* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_action_profile_body: // action_profile_body
        value.copy< IR::ActionProfile* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_action_selector_body: // action_selector_body
        value.copy< IR::ActionSelector* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_apply_case_list: // apply_case_list
        value.copy< IR::Apply* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_local_var: // local_var
        value.copy< IR::AttribLocal* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_opt_locals_list: // opt_locals_list
      case symbol_kind::S_locals_list: // locals_list
        value.copy< IR::AttribLocals* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_blackbox_attribute: // blackbox_attribute
        value.copy< IR::Attribute* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_update_verify_spec_list: // update_verify_spec_list
        value.copy< IR::CalculatedField* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_case_value_list: // case_value_list
        value.copy< IR::CaseEntry* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_const_expression: // const_expression
        value.copy< IR::Constant* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_counter_spec_list: // counter_spec_list
        value.copy< IR::Counter* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_inout: // inout
        value.copy< IR::Direction > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_opt_condition: // opt_condition
      case symbol_kind::S_field_or_masked_ref: // field_or_masked_ref
      case symbol_kind::S_pragma_operand: // pragma_operand
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_header_or_field_ref: // header_or_field_ref
      case symbol_kind::S_header_ref: // header_ref
        value.copy< IR::Expression* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_field_list_entries: // field_list_entries
        value.copy< IR::FieldList* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_field_list_calculation_body: // field_list_calculation_body
        value.copy< IR::FieldListCalculation* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_name: // name
        value.copy< IR::ID > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_field_ref: // field_ref
        value.copy< IR::Member* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_meter_spec_list: // meter_spec_list
        value.copy< IR::Meter* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_field_list_list: // field_list_list
      case symbol_kind::S_name_list: // name_list
      case symbol_kind::S_opt_name_list: // opt_name_list
      case symbol_kind::S_action_list: // action_list
        value.copy< IR::NameList* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_blackbox_config: // blackbox_config
        value.copy< IR::NameMap<IR::Property>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_argument: // argument
        value.copy< IR::Parameter* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_opt_argument_list: // opt_argument_list
      case symbol_kind::S_argument_list: // argument_list
        value.copy< IR::ParameterList* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_register_spec_list: // register_spec_list
        value.copy< IR::Register* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_parser_statement_list: // parser_statement_list
        value.copy< IR::V1Parser* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_table_body: // table_body
        value.copy< IR::V1Table* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_blackbox_method: // blackbox_method
        value.copy< IR::Vector<IR::Annotation>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_case_entry_list: // case_entry_list
        value.copy< IR::Vector<IR::CaseEntry>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_field_match_list: // field_match_list
      case symbol_kind::S_control_statement_list: // control_statement_list
      case symbol_kind::S_control_statement: // control_statement
      case symbol_kind::S_expressions: // expressions
      case symbol_kind::S_pragma_operands: // pragma_operands
      case symbol_kind::S_expression_list: // expression_list
      case symbol_kind::S_opt_expression_list: // opt_expression_list
        value.copy< IR::Vector<IR::Expression>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INTEGER: // INTEGER
        value.copy< UnparsedConstant > (YY_MOVE (that.value));
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
        value.copy< cstring > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

  }




  template <typename Base>
  V1Parser::symbol_kind_type
  V1Parser::basic_symbol<Base>::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }


  template <typename Base>
  bool
  V1Parser::basic_symbol<Base>::empty () const YY_NOEXCEPT
  {
    return this->kind () == symbol_kind::S_YYEMPTY;
  }

  template <typename Base>
  void
  V1Parser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move (s);
    switch (this->kind ())
    {
      case symbol_kind::S_opt_field_modifiers: // opt_field_modifiers
      case symbol_kind::S_attributes: // attributes
      case symbol_kind::S_attrib: // attrib
        value.move< Attributes > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_blackbox_body: // blackbox_body
        value.move< BBoxType > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_case_value: // case_value
        value.move< CaseValue > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_bit_width: // bit_width
      case symbol_kind::S_type: // type
        value.move< ConstType* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_header_dec_body: // header_dec_body
      case symbol_kind::S_field_declarations: // field_declarations
        value.move< HeaderType > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_action_function_body: // action_function_body
      case symbol_kind::S_action_statement_list: // action_statement_list
        value.move< IR::ActionFunction* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_action_profile_body: // action_profile_body
        value.move< IR::ActionProfile* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_action_selector_body: // action_selector_body
        value.move< IR::ActionSelector* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_apply_case_list: // apply_case_list
        value.move< IR::Apply* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_local_var: // local_var
        value.move< IR::AttribLocal* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_opt_locals_list: // opt_locals_list
      case symbol_kind::S_locals_list: // locals_list
        value.move< IR::AttribLocals* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_blackbox_attribute: // blackbox_attribute
        value.move< IR::Attribute* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_update_verify_spec_list: // update_verify_spec_list
        value.move< IR::CalculatedField* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_case_value_list: // case_value_list
        value.move< IR::CaseEntry* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_const_expression: // const_expression
        value.move< IR::Constant* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_counter_spec_list: // counter_spec_list
        value.move< IR::Counter* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_inout: // inout
        value.move< IR::Direction > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_opt_condition: // opt_condition
      case symbol_kind::S_field_or_masked_ref: // field_or_masked_ref
      case symbol_kind::S_pragma_operand: // pragma_operand
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_header_or_field_ref: // header_or_field_ref
      case symbol_kind::S_header_ref: // header_ref
        value.move< IR::Expression* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_field_list_entries: // field_list_entries
        value.move< IR::FieldList* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_field_list_calculation_body: // field_list_calculation_body
        value.move< IR::FieldListCalculation* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_name: // name
        value.move< IR::ID > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_field_ref: // field_ref
        value.move< IR::Member* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_meter_spec_list: // meter_spec_list
        value.move< IR::Meter* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_field_list_list: // field_list_list
      case symbol_kind::S_name_list: // name_list
      case symbol_kind::S_opt_name_list: // opt_name_list
      case symbol_kind::S_action_list: // action_list
        value.move< IR::NameList* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_blackbox_config: // blackbox_config
        value.move< IR::NameMap<IR::Property>* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_argument: // argument
        value.move< IR::Parameter* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_opt_argument_list: // opt_argument_list
      case symbol_kind::S_argument_list: // argument_list
        value.move< IR::ParameterList* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_register_spec_list: // register_spec_list
        value.move< IR::Register* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_parser_statement_list: // parser_statement_list
        value.move< IR::V1Parser* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_table_body: // table_body
        value.move< IR::V1Table* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_blackbox_method: // blackbox_method
        value.move< IR::Vector<IR::Annotation>* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_case_entry_list: // case_entry_list
        value.move< IR::Vector<IR::CaseEntry>* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_field_match_list: // field_match_list
      case symbol_kind::S_control_statement_list: // control_statement_list
      case symbol_kind::S_control_statement: // control_statement
      case symbol_kind::S_expressions: // expressions
      case symbol_kind::S_pragma_operands: // pragma_operands
      case symbol_kind::S_expression_list: // expression_list
      case symbol_kind::S_opt_expression_list: // opt_expression_list
        value.move< IR::Vector<IR::Expression>* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_INTEGER: // INTEGER
        value.move< UnparsedConstant > (YY_MOVE (s.value));
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
        value.move< cstring > (YY_MOVE (s.value));
        break;

      default:
        break;
    }

    location = YY_MOVE (s.location);
  }

  // by_kind.
  inline
  V1Parser::by_kind::by_kind () YY_NOEXCEPT
    : kind_ (symbol_kind::S_YYEMPTY)
  {}

#if 201103L <= YY_CPLUSPLUS
  inline
  V1Parser::by_kind::by_kind (by_kind&& that) YY_NOEXCEPT
    : kind_ (that.kind_)
  {
    that.clear ();
  }
#endif

  inline
  V1Parser::by_kind::by_kind (const by_kind& that) YY_NOEXCEPT
    : kind_ (that.kind_)
  {}

  inline
  V1Parser::by_kind::by_kind (token_kind_type t) YY_NOEXCEPT
    : kind_ (yytranslate_ (t))
  {}



  inline
  void
  V1Parser::by_kind::clear () YY_NOEXCEPT
  {
    kind_ = symbol_kind::S_YYEMPTY;
  }

  inline
  void
  V1Parser::by_kind::move (by_kind& that)
  {
    kind_ = that.kind_;
    that.clear ();
  }

  inline
  V1Parser::symbol_kind_type
  V1Parser::by_kind::kind () const YY_NOEXCEPT
  {
    return kind_;
  }


  inline
  V1Parser::symbol_kind_type
  V1Parser::by_kind::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }


#line 23 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.ypp"
} } // P4::V1
#line 5230 "/media/t/scratch/p4/p4c/frontends/parsers/v1/v1parser.hpp"




#endif // !YY_YY_MEDIA_T_SCRATCH_P4_P4C_FRONTENDS_PARSERS_V1_V1PARSER_HPP_INCLUDED
