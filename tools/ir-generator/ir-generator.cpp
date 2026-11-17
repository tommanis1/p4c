/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 17 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
 /* -*-C++-*- */
// some of these includes are needed by lex-generated file

#include <assert.h>
#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

#include <iostream>
#include <cerrno>
#include <vector>

#include "lib/cstring.h"
#include "lib/source_file.h"
#include "lib/error.h"
#include "tools/ir-generator/irclass.h"

#ifndef YYDEBUG
#define YYDEBUG 1
#endif

namespace P4 {

#define YYLTYPE Util::SourceInfo
#define YYLLOC_DEFAULT(Cur, Rhs, N)                                     \
    ((Cur) = (N) ? YYRHSLOC(Rhs, 1) + YYRHSLOC(Rhs, N)                  \
                 : Util::SourceInfo(sources, YYRHSLOC(Rhs, 0).getEnd()))

template<typename... Args>
void yyerror(const char *fmt, Args&&... args);

static std::vector<IrElement*> global;
static CommentBlock *currCommentBlock = nullptr;

namespace {  // anonymous namespace
static int yylex();

static Util::InputSources *sources = new Util::InputSources;
static IrNamespace *current_namespace = LookupScope().resolve(0);


#line 114 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"

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

#include "ir-generator.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ABSTRACT = 3,                   /* ABSTRACT  */
  YYSYMBOL_APPLY = 4,                      /* APPLY  */
  YYSYMBOL_CLASS = 5,                      /* CLASS  */
  YYSYMBOL_CONST = 6,                      /* CONST  */
  YYSYMBOL_DBLCOL = 7,                     /* DBLCOL  */
  YYSYMBOL_DEFAULT = 8,                    /* DEFAULT  */
  YYSYMBOL_DELETE = 9,                     /* DELETE  */
  YYSYMBOL_ENUM = 10,                      /* ENUM  */
  YYSYMBOL_INLINE = 11,                    /* INLINE  */
  YYSYMBOL_INTERFACE = 12,                 /* INTERFACE  */
  YYSYMBOL_NAMESPACE = 13,                 /* NAMESPACE  */
  YYSYMBOL_NEW = 14,                       /* NEW  */
  YYSYMBOL_NULLOK = 15,                    /* NULLOK  */
  YYSYMBOL_OPERATOR = 16,                  /* OPERATOR  */
  YYSYMBOL_OPTIONAL = 17,                  /* OPTIONAL  */
  YYSYMBOL_PRIVATE = 18,                   /* PRIVATE  */
  YYSYMBOL_PROTECTED = 19,                 /* PROTECTED  */
  YYSYMBOL_PUBLIC = 20,                    /* PUBLIC  */
  YYSYMBOL_STATIC = 21,                    /* STATIC  */
  YYSYMBOL_VARIANT = 22,                   /* VARIANT  */
  YYSYMBOL_VIRTUAL = 23,                   /* VIRTUAL  */
  YYSYMBOL_BLOCK = 24,                     /* BLOCK  */
  YYSYMBOL_COMMENTBLOCK = 25,              /* COMMENTBLOCK  */
  YYSYMBOL_IDENTIFIER = 26,                /* IDENTIFIER  */
  YYSYMBOL_INCLUDE = 27,                   /* INCLUDE  */
  YYSYMBOL_INTEGER = 28,                   /* INTEGER  */
  YYSYMBOL_NO = 29,                        /* NO  */
  YYSYMBOL_STRING = 30,                    /* STRING  */
  YYSYMBOL_ZERO = 31,                      /* ZERO  */
  YYSYMBOL_EMITBLOCK = 32,                 /* EMITBLOCK  */
  YYSYMBOL_33_ = 33,                       /* '{'  */
  YYSYMBOL_34_ = 34,                       /* '}'  */
  YYSYMBOL_35_ = 35,                       /* ';'  */
  YYSYMBOL_36_ = 36,                       /* ':'  */
  YYSYMBOL_37_ = 37,                       /* ','  */
  YYSYMBOL_38_ = 38,                       /* '('  */
  YYSYMBOL_39_ = 39,                       /* ')'  */
  YYSYMBOL_40_ = 40,                       /* '='  */
  YYSYMBOL_41_ = 41,                       /* '!'  */
  YYSYMBOL_42_ = 42,                       /* '<'  */
  YYSYMBOL_43_ = 43,                       /* '>'  */
  YYSYMBOL_44_ = 44,                       /* '*'  */
  YYSYMBOL_45_ = 45,                       /* '-'  */
  YYSYMBOL_46_ = 46,                       /* '['  */
  YYSYMBOL_47_ = 47,                       /* ']'  */
  YYSYMBOL_48_ = 48,                       /* '&'  */
  YYSYMBOL_49_ = 49,                       /* '+'  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_input = 51,                     /* input  */
  YYSYMBOL_element = 52,                   /* element  */
  YYSYMBOL_53_1 = 53,                      /* $@1  */
  YYSYMBOL_54_2 = 54,                      /* $@2  */
  YYSYMBOL_scope = 55,                     /* scope  */
  YYSYMBOL_irclass = 56,                   /* irclass  */
  YYSYMBOL_57_3 = 57,                      /* @3  */
  YYSYMBOL_parentList = 58,                /* parentList  */
  YYSYMBOL_nonEmptyParentList = 59,        /* nonEmptyParentList  */
  YYSYMBOL_kind = 60,                      /* kind  */
  YYSYMBOL_partList = 61,                  /* partList  */
  YYSYMBOL_part = 62,                      /* part  */
  YYSYMBOL_63_4 = 63,                      /* $@4  */
  YYSYMBOL_64_5 = 64,                      /* @5  */
  YYSYMBOL_method = 65,                    /* method  */
  YYSYMBOL_66_6 = 66,                      /* @6  */
  YYSYMBOL_67_7 = 67,                      /* $@7  */
  YYSYMBOL_68_8 = 68,                      /* @8  */
  YYSYMBOL_methodName = 69,                /* methodName  */
  YYSYMBOL_optArgList = 70,                /* optArgList  */
  YYSYMBOL_argList = 71,                   /* argList  */
  YYSYMBOL_optConst = 72,                  /* optConst  */
  YYSYMBOL_optOverride = 73,               /* optOverride  */
  YYSYMBOL_body = 74,                      /* body  */
  YYSYMBOL_irField = 75,                   /* irField  */
  YYSYMBOL_modifier = 76,                  /* modifier  */
  YYSYMBOL_modifiers = 77,                 /* modifiers  */
  YYSYMBOL_fieldName = 78,                 /* fieldName  */
  YYSYMBOL_optInitializer = 79,            /* optInitializer  */
  YYSYMBOL_lookup_scope = 80,              /* lookup_scope  */
  YYSYMBOL_nonRefType = 81,                /* nonRefType  */
  YYSYMBOL_type = 82,                      /* type  */
  YYSYMBOL_type_args = 83,                 /* type_args  */
  YYSYMBOL_type_arg = 84,                  /* type_arg  */
  YYSYMBOL_optTypeList = 85,               /* optTypeList  */
  YYSYMBOL_typeList = 86,                  /* typeList  */
  YYSYMBOL_constFieldInit = 87,            /* constFieldInit  */
  YYSYMBOL_expression = 88,                /* expression  */
  YYSYMBOL_name = 89                       /* name  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 106 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"
static void
symbol_print(FILE* file, int type, YYSTYPE value)
{
    switch (type)
    {
    case EMITBLOCK:
        fprintf(file, "%s%s", value.emit.impl ? "/*impl*/ " : "", value.emit.block.c_str());
        break;
    case BLOCK:
    case COMMENTBLOCK:
    case IDENTIFIER:
    case STRING:
    case NO:
    case INTEGER:
    case ZERO:
        fprintf(file, "%s", value.str.c_str());
        break;
    default:
        break;
    }
}

#define YYPRINT(file, type, value)   symbol_print(file, type, value)

#include "ir-generator-lex.c"
#pragma GCC diagnostic pop

// FIXME: should receive string_view
static cstring canon_name(cstring name) {
    /* canonical method names for backwards compatibility */
    if (name == "visitchildren") return "visit_children"_cs;
    return name;
}

static void pushCurrentComment() {
    if (currCommentBlock) {
        global.push_back(currCommentBlock);
        currCommentBlock = nullptr;
    }
}


#line 284 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"


#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
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


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   212

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  120
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  194

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   287


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,     2,     2,     2,    48,     2,
      38,    39,    44,    49,    37,    45,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    36,    35,
      42,    40,    43,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    46,     2,    47,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    33,     2,    34,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   156,   156,   157,   161,   167,   173,   176,   182,   183,
     182,   188,   192,   193,   194,   199,   198,   205,   206,   210,
     211,   215,   216,   217,   221,   222,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   239,   242,   243,
     245,   250,   252,   255,   262,   254,   267,   266,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   299,
     299,   302,   306,   312,   312,   315,   316,   319,   320,   321,
     322,   323,   327,   331,   335,   342,   343,   344,   345,   346,
     349,   349,   351,   351,   354,   355,   356,   360,   361,   362,
     365,   366,   367,   368,   369,   372,   373,   374,   375,   376,
     377,   378,   382,   383,   387,   388,   392,   393,   397,   398,
     401,   407,   407,   407,   407,   408,   409,   410,   413,   414,
     415
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ABSTRACT", "APPLY",
  "CLASS", "CONST", "DBLCOL", "DEFAULT", "DELETE", "ENUM", "INLINE",
  "INTERFACE", "NAMESPACE", "NEW", "NULLOK", "OPERATOR", "OPTIONAL",
  "PRIVATE", "PROTECTED", "PUBLIC", "STATIC", "VARIANT", "VIRTUAL",
  "BLOCK", "COMMENTBLOCK", "IDENTIFIER", "INCLUDE", "INTEGER", "NO",
  "STRING", "ZERO", "EMITBLOCK", "'{'", "'}'", "';'", "':'", "','", "'('",
  "')'", "'='", "'!'", "'<'", "'>'", "'*'", "'-'", "'['", "']'", "'&'",
  "'+'", "$accept", "input", "element", "$@1", "$@2", "scope", "irclass",
  "@3", "parentList", "nonEmptyParentList", "kind", "partList", "part",
  "$@4", "@5", "method", "@6", "$@7", "@8", "methodName", "optArgList",
  "argList", "optConst", "optOverride", "body", "irField", "modifier",
  "modifiers", "fieldName", "optInitializer", "lookup_scope", "nonRefType",
  "type", "type_args", "type_arg", "optTypeList", "typeList",
  "constFieldInit", "expression", "name", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-123)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-49)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -123,    60,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,    30,    33,  -123,    53,  -123,    21,   -28,
    -123,    74,   -18,  -123,     6,  -123,    87,    64,     8,    22,
       5,  -123,    71,   100,  -123,    74,  -123,    97,    74,    92,
      68,  -123,  -123,  -123,  -123,  -123,  -123,     5,  -123,    -2,
      45,  -123,    77,  -123,  -123,   118,    74,    74,  -123,  -123,
    -123,  -123,     7,    89,    90,    91,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,   155,  -123,     5,   110,    94,  -123,   103,
     125,   132,  -123,  -123,  -123,     6,  -123,  -123,   142,  -123,
    -123,   116,  -123,    51,   -17,  -123,     0,  -123,    74,   126,
     139,  -123,    73,   134,   140,   -20,    26,  -123,   122,    74,
    -123,   104,  -123,  -123,  -123,   137,   141,   148,     5,  -123,
    -123,  -123,   148,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
      65,    74,   163,  -123,  -123,  -123,  -123,   -11,    14,  -123,
      83,   156,  -123,   157,    13,  -123,   153,    -3,    14,  -123,
     154,   145,   169,   163,    74,  -123,    29,  -123,   135,  -123,
     148,   158,    74,   148,  -123,  -123,  -123,    12,   159,  -123,
     161,   133,     3,  -123,  -123,   193,  -123,  -123,  -123,    62,
    -123,   148,  -123,   174,   166,   167,   168,  -123,  -123,   133,
    -123,  -123,  -123,  -123
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,    22,    23,    21,     8,     5,     7,     6,
      11,     3,     4,    12,     0,    13,     0,     9,    17,     0,
      14,     0,     0,     2,     0,    87,    90,    18,     0,    95,
      19,    15,     0,     0,    88,     0,    92,    91,     0,     0,
       0,    99,    96,    24,    10,   101,    98,    20,    89,   104,
       0,   102,     0,   100,    97,    80,   106,     0,    93,    94,
      34,    35,     0,     0,     0,     0,    38,    27,    26,    16,
      25,    32,    31,     0,    33,   108,     0,   107,   103,     0,
       0,     0,    28,    29,    30,     0,    76,    75,     0,    77,
      78,     0,    79,    90,     0,    81,     0,   105,     0,     0,
       0,    39,     0,     0,     0,    53,    55,    57,     0,     0,
      43,     0,    41,    42,    83,    82,     0,    84,   109,    36,
      40,    82,    84,    49,    50,    51,    54,    52,    56,    58,
       0,    60,     0,   118,   113,   112,   114,     0,   111,    46,
       0,     0,    24,     0,     0,    44,    59,     0,   117,   110,
       0,     0,     0,     0,    60,    86,    85,    72,    80,    73,
      84,     0,     0,    84,   115,   116,   119,     0,     0,    37,
       0,     0,     0,    61,   120,    63,    74,    67,    71,     0,
      45,    84,    64,    65,     0,     0,     0,    62,    66,     0,
      69,    70,    68,    47
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -123,   181,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,    63,  -123,  -123,  -123,  -123,  -123,  -123,  -123,   111,
      52,  -123,  -123,  -123,    19,  -123,  -123,  -123,   -94,  -120,
    -123,   -23,   -21,   101,   152,  -123,  -123,  -123,    72,  -122
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    11,    14,    19,    16,    12,    43,    22,    27,
      13,    55,    70,    79,   142,    71,   131,   161,   154,    94,
     145,   146,   183,   189,   180,    72,    95,    73,   117,   141,
      28,    29,    49,    50,    51,    76,    77,    74,   137,   138
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      30,    33,   143,    40,    40,    23,    40,   112,   122,    40,
     148,    40,    80,    25,    47,    31,    88,   114,   113,   152,
     125,   152,   126,   163,   149,    36,   115,   150,    20,   181,
     114,   167,    26,    81,    37,    75,    56,    15,   151,   121,
     170,    41,    41,   173,    41,    42,    42,    41,    42,    41,
     160,    42,    96,    42,   153,   174,   153,    21,    34,    17,
       2,   187,   102,     3,    38,     4,   127,   150,    39,   128,
     184,   185,     5,     6,     3,   -48,     4,   118,   151,    18,
      24,    25,    57,     5,     6,     7,   -48,     8,    58,   110,
     114,   111,     9,   186,    34,    10,     7,   132,     8,   121,
      26,    35,    57,     9,    48,    44,    10,   155,   144,   133,
     147,   134,    53,   135,   136,    38,    54,    45,   132,    39,
      52,    46,    60,    61,    59,    82,    83,    84,    62,    99,
     133,    98,   134,   147,   135,   136,    63,    64,    65,    60,
      61,   172,    38,    66,    45,    62,    39,    67,    46,    97,
      68,   100,    69,    63,    64,    65,   101,   177,   109,   119,
      66,    85,    25,   120,    67,   129,    86,    68,   178,   169,
      87,    88,    89,   179,   123,   -48,    90,    91,    92,   139,
     124,    93,   103,   104,   105,   106,   107,   108,   140,   133,
     162,   157,   159,   164,   165,   166,   176,   171,   175,   182,
     188,   190,   191,   192,    32,   158,   168,   116,   193,    78,
     130,     0,   156
};

static const yytype_int16 yycheck[] =
{
      21,    24,   122,     6,     6,    33,     6,    24,   102,     6,
     132,     6,     5,     7,    35,    33,    16,    17,    35,     7,
      40,     7,    42,    26,    35,    17,    26,    38,     7,    26,
      17,   153,    26,    26,    26,    56,    38,     7,    49,    26,
     160,    44,    44,   163,    44,    48,    48,    44,    48,    44,
     144,    48,    73,    48,    42,    43,    42,    36,     7,    26,
       0,   181,    85,     3,    42,     5,    40,    38,    46,    43,
       8,     9,    12,    13,     3,    24,     5,    98,    49,    26,
       6,     7,    37,    12,    13,    25,    35,    27,    43,    38,
      17,    40,    32,    31,     7,    35,    25,    14,    27,    26,
      26,    37,    37,    32,     7,    34,    35,    24,    43,    26,
     131,    28,    44,    30,    31,    42,    48,    44,    14,    46,
      28,    48,     4,     5,    47,    36,    36,    36,    10,    26,
      26,    37,    28,   154,    30,    31,    18,    19,    20,     4,
       5,   162,    42,    25,    44,    10,    46,    29,    48,    39,
      32,    26,    34,    18,    19,    20,    24,    24,    42,    33,
      25,     6,     7,    24,    29,    43,    11,    32,    35,    34,
      15,    16,    17,    40,    40,    38,    21,    22,    23,    38,
      40,    26,    40,    41,    42,    43,    44,    45,    40,    26,
      37,    35,    35,    39,    49,    26,    35,    39,    39,     6,
      26,    35,    35,    35,    23,   142,   154,    96,   189,    57,
     109,    -1,   140
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    51,     0,     3,     5,    12,    13,    25,    27,    32,
      35,    52,    56,    60,    53,     7,    55,    26,    26,    54,
       7,    36,    58,    33,     6,     7,    26,    59,    80,    81,
      82,    33,    51,    81,     7,    37,    17,    26,    42,    46,
       6,    44,    48,    57,    34,    44,    48,    82,     7,    82,
      83,    84,    28,    44,    48,    61,    38,    37,    43,    47,
       4,     5,    10,    18,    19,    20,    25,    29,    32,    34,
      62,    65,    75,    77,    87,    82,    85,    86,    84,    63,
       5,    26,    36,    36,    36,     6,    11,    15,    16,    17,
      21,    22,    23,    26,    69,    76,    82,    39,    37,    26,
      26,    24,    81,    40,    41,    42,    43,    44,    45,    42,
      38,    40,    24,    35,    17,    26,    69,    78,    82,    33,
      24,    26,    78,    40,    40,    40,    42,    40,    43,    43,
      83,    66,    14,    26,    28,    30,    31,    88,    89,    38,
      40,    79,    64,    79,    43,    70,    71,    82,    89,    35,
      38,    49,     7,    42,    68,    24,    88,    35,    61,    35,
      78,    67,    37,    26,    39,    49,    26,    89,    70,    34,
      79,    39,    82,    79,    43,    39,    35,    24,    35,    40,
      74,    26,     6,    72,     8,     9,    31,    79,    26,    73,
      35,    35,    35,    74
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    51,    52,    52,    52,    52,    53,    54,
      52,    52,    55,    55,    55,    57,    56,    58,    58,    59,
      59,    60,    60,    60,    61,    61,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    63,    64,    62,    62,    62,
      62,    65,    65,    66,    67,    65,    68,    65,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    70,
      70,    71,    71,    72,    72,    73,    73,    74,    74,    74,
      74,    74,    75,    75,    75,    76,    76,    76,    76,    76,
      77,    77,    78,    78,    79,    79,    79,    80,    80,    80,
      81,    81,    81,    81,    81,    82,    82,    82,    82,    82,
      82,    82,    83,    83,    84,    84,    85,    85,    86,    86,
      87,    88,    88,    88,    88,    88,    88,    88,    89,    89,
      89
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     0,     0,
       7,     1,     0,     1,     3,     0,     8,     0,     2,     1,
       3,     1,     1,     1,     0,     2,     1,     1,     2,     2,
       2,     1,     1,     1,     1,     0,     0,     7,     1,     3,
       4,     3,     3,     0,     0,     8,     0,    10,     1,     3,
       3,     3,     3,     2,     3,     2,     3,     2,     3,     1,
       0,     3,     5,     0,     1,     0,     1,     1,     3,     3,
       3,     1,     5,     6,     8,     1,     1,     1,     1,     1,
       0,     2,     1,     1,     0,     2,     2,     1,     2,     3,
       1,     2,     2,     4,     4,     1,     2,     3,     3,     2,
       3,     3,     1,     3,     1,     4,     0,     1,     1,     3,
       5,     1,     1,     1,     1,     3,     3,     2,     1,     3,
       4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 4: /* element: irclass  */
#line 161 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
              {
        if (currCommentBlock) {
            (yyvsp[0].irClass)->comments.push_back(currCommentBlock);
            currCommentBlock = nullptr;
        }
        global.push_back((yyvsp[0].irClass)); }
#line 1773 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 5: /* element: COMMENTBLOCK  */
#line 167 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                    {
        if (!currCommentBlock) {
            currCommentBlock = new CommentBlock((yylsp[0]), (yyvsp[0].str));
        } else {
            currCommentBlock->append((yyvsp[0].str));
            currCommentBlock->srcInfo += (yylsp[0]); }}
#line 1784 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 6: /* element: EMITBLOCK  */
#line 173 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                {
        pushCurrentComment();
        global.push_back(new EmitBlock((yylsp[0]), (yyvsp[0].emit).impl, (yyvsp[0].emit).block)); }
#line 1792 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 7: /* element: INCLUDE  */
#line 176 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
              {
        pushCurrentComment();
        if ((yyvsp[0].str).startsWith("#include_impl")) {
            global.push_back(new EmitBlock((yylsp[0]), true, (yyvsp[0].str).substr(0, 7) + (yyvsp[0].str).substr(13)));
        } else {
            global.push_back(new EmitBlock((yylsp[0]), false, (yyvsp[0].str))); } }
#line 1803 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 8: /* $@1: %empty  */
#line 182 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                { BEGIN(PARSE_BRACKET); }
#line 1809 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 9: /* $@2: %empty  */
#line 183 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                 { current_namespace = IrNamespace::get(current_namespace, (yyvsp[0].str)); }
#line 1815 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 10: /* element: NAMESPACE $@1 IDENTIFIER $@2 '{' input '}'  */
#line 184 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                    {
        current_namespace = current_namespace->parent;
        pushCurrentComment();
        }
#line 1824 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 11: /* element: ';'  */
#line 188 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                       { pushCurrentComment(); }
#line 1830 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 12: /* scope: %empty  */
#line 192 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                        { (yyval.irNamespace) = current_namespace; }
#line 1836 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 13: /* scope: DBLCOL  */
#line 193 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                        { (yyval.irNamespace) = nullptr; }
#line 1842 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 14: /* scope: scope IDENTIFIER DBLCOL  */
#line 194 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                { (yyval.irNamespace) = IrNamespace::get((yyvsp[-2].irNamespace), (yyvsp[-1].str)); }
#line 1848 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 15: /* @3: %empty  */
#line 199 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
      { (yyval.irClass) = new IrClass((yylsp[-2]), (yyvsp[-3].irNamespace), (yyvsp[-4].kind), (yyvsp[-2].str), (yyvsp[-1].types)); }
#line 1854 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 16: /* irclass: kind scope IDENTIFIER parentList '{' @3 partList '}'  */
#line 201 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
      { (yyval.irClass) = (yyvsp[-2].irClass); }
#line 1860 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 17: /* parentList: %empty  */
#line 205 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                { (yyval.types) = nullptr; }
#line 1866 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 18: /* parentList: ':' nonEmptyParentList  */
#line 206 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                { (yyval.types) = (yyvsp[0].types); }
#line 1872 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 19: /* nonEmptyParentList: type  */
#line 210 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                        { ((yyval.types) = new std::vector<const Type *>())->push_back((yyvsp[0].type)); }
#line 1878 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 20: /* nonEmptyParentList: nonEmptyParentList ',' type  */
#line 211 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                        { ((yyval.types) = (yyvsp[-2].types))->push_back((yyvsp[0].type)); }
#line 1884 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 21: /* kind: INTERFACE  */
#line 215 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                        { (yyval.kind) = NodeKind::Interface; BEGIN(PARSE_BRACKET); }
#line 1890 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 22: /* kind: ABSTRACT  */
#line 216 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                        { (yyval.kind) = NodeKind::Abstract; BEGIN(PARSE_BRACKET); }
#line 1896 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 23: /* kind: CLASS  */
#line 217 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                        { (yyval.kind) = NodeKind::Concrete; BEGIN(PARSE_BRACKET); }
#line 1902 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 24: /* partList: %empty  */
#line 221 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                          { (yyval.irClass) = (yyvsp[0].irClass); }
#line 1908 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 25: /* partList: partList part  */
#line 222 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                          { (yyval.irClass) = (yyvsp[-1].irClass);
                            if ((yyvsp[0].irElement)) {
                                (yyvsp[0].irElement)->access = (yyval.irClass)->current_access;
                                (yyvsp[0].irElement)->clss = (yyval.irClass);
                                (yyval.irClass)->elements.push_back((yyvsp[0].irElement)); } }
#line 1918 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 26: /* part: EMITBLOCK  */
#line 230 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                      { (yyval.irElement) = new EmitBlock((yylsp[0]), (yyvsp[0].emit).impl, (yyvsp[0].emit).block); }
#line 1924 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 27: /* part: NO  */
#line 231 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                      { (yyval.irElement) = new IrNo((yylsp[0]), (yyvsp[0].str)); }
#line 1930 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 28: /* part: PRIVATE ':'  */
#line 232 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                      { (yyval.irElement) = nullptr; (yyvsp[-2].irClass)->current_access = IrElement::Private; }
#line 1936 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 29: /* part: PROTECTED ':'  */
#line 233 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                      { (yyval.irElement) = nullptr; (yyvsp[-2].irClass)->current_access = IrElement::Protected; }
#line 1942 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 30: /* part: PUBLIC ':'  */
#line 234 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                      { (yyval.irElement) = nullptr; (yyvsp[-2].irClass)->current_access = IrElement::Public; }
#line 1948 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 31: /* part: irField  */
#line 235 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                      { (yyval.irElement) = (yyvsp[0].irField); }
#line 1954 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 32: /* part: method  */
#line 236 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                      { (yyval.irElement) = (yyvsp[0].irMethod); }
#line 1960 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 33: /* part: constFieldInit  */
#line 237 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                      { (yyval.irElement) = (yyvsp[0].constFieldInit); }
#line 1966 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 34: /* part: APPLY  */
#line 238 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                      { (yyval.irElement) = new IrApply((yylsp[0])); }
#line 1972 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 35: /* $@4: %empty  */
#line 239 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                      { BEGIN(PARSE_BRACKET); }
#line 1978 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 36: /* @5: %empty  */
#line 240 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                      { (yyval.irClass) = new IrClass((yylsp[-2]), &(yyvsp[-4].irClass)->local, NodeKind::Nested, (yyvsp[-1].str)); }
#line 1984 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 37: /* part: CLASS $@4 IDENTIFIER '{' @5 partList '}'  */
#line 241 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                      { (yyval.irElement) = (yyvsp[-2].irClass); }
#line 1990 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 38: /* part: COMMENTBLOCK  */
#line 242 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                      { (yyval.irElement) = new CommentBlock((yylsp[0]), (yyvsp[0].str)); }
#line 1996 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 39: /* part: ENUM IDENTIFIER BLOCK  */
#line 243 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                            {
                        (yyval.irElement) = new IrEnumType((yylsp[-2]), &(yyvsp[-3].irClass)->local, (yyvsp[-1].str), false, (yyvsp[0].str)); }
#line 2003 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 40: /* part: ENUM CLASS IDENTIFIER BLOCK  */
#line 245 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                  {
                        (yyval.irElement) = new IrEnumType((yylsp[-3]), &(yyvsp[-4].irClass)->local, (yyvsp[-1].str), true, (yyvsp[0].str)); }
#line 2010 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 41: /* method: modifiers methodName BLOCK  */
#line 251 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
          { (yyval.irMethod) = new IrMethod((yylsp[-1]), canon_name((yyvsp[-1].str)), (yyvsp[0].str)); }
#line 2016 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 42: /* method: modifiers methodName ';'  */
#line 253 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
          { (yyval.irMethod) = new IrMethod((yylsp[-1]), canon_name((yyvsp[-1].str))); }
#line 2022 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 43: /* @6: %empty  */
#line 255 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
          { if ((yyvsp[-1].str) != (yyvsp[-3].irClass)->name)
                yyerror("constructor name %s doesn't match class name %s", (yyvsp[-1].str).c_str(),
                        (yyvsp[-3].irClass)->name.c_str());
            if ((yyvsp[-2].i) & ~IrField::Inline)
                yyerror("%s invalid on constructor", IrElement::modifier((yyvsp[-2].i)));
            ((yyval.irMethod) = new IrMethod((yylsp[-1]), (yyvsp[-1].str)))->inImpl = !((yyvsp[-2].i) & IrField::Inline);
            (yyval.irMethod)->clss = (yyvsp[-3].irClass); }
#line 2034 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 44: /* $@7: %empty  */
#line 262 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                 { BEGIN(PARSE_CTOR_INIT); }
#line 2040 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 45: /* method: modifiers IDENTIFIER '(' @6 optArgList $@7 ')' body  */
#line 263 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
          { ((yyval.irMethod) = (yyvsp[-4].irMethod))->body = (yyvsp[0].str);
            (yyval.irMethod)->isUser = true;
            BEGIN(NORMAL); }
#line 2048 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 46: /* @8: %empty  */
#line 267 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
          { ((yyval.irMethod) = new IrMethod((yylsp[-1]), (yyvsp[-1].str)))->rtype = (yyvsp[-2].type);
            (yyval.irMethod)->inImpl = !((yyvsp[-3].i) & IrMethod::Inline);
            (yyval.irMethod)->isStatic = ((yyvsp[-3].i) & IrMethod::Static);
            (yyval.irMethod)->isVirtual = ((yyvsp[-3].i) & IrMethod::Virtual);
            (yyval.irMethod)->clss = (yyvsp[-4].irClass);
            if (auto mod = (yyvsp[-3].i) & ~(IrMethod::Inline | IrMethod::Static | IrMethod::Virtual))
                yyerror("'%s' invalid on method", IrMethod::modifier(mod)); }
#line 2060 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 47: /* method: modifiers type methodName '(' @8 optArgList ')' optConst optOverride body  */
#line 275 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
          { ((yyval.irMethod) = (yyvsp[-5].irMethod))->body = (yyvsp[0].str);
            if (!(yyvsp[0].str) || (yyvsp[0].str).startsWith("=")) {
                if (!(yyval.irMethod)->inImpl)
                    yyerror("inline method %v with no body", (yyvsp[-7].str).c_str());
                (yyval.irMethod)->inImpl = false; }
            (yyval.irMethod)->isUser = true;
            (yyval.irMethod)->isConst = (yyvsp[-2].i);
            (yyval.irMethod)->isOverride = (yyvsp[-1].i); }
#line 2073 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 49: /* methodName: OPERATOR '=' '='  */
#line 287 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                { (yyval.str) = "operator=="_cs; }
#line 2079 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 50: /* methodName: OPERATOR '!' '='  */
#line 288 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                { (yyval.str) = "operator!="_cs; }
#line 2085 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 51: /* methodName: OPERATOR '<' '='  */
#line 289 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                { (yyval.str) = "operator<="_cs; }
#line 2091 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 52: /* methodName: OPERATOR '>' '='  */
#line 290 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                { (yyval.str) = "operator>="_cs; }
#line 2097 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 53: /* methodName: OPERATOR '<'  */
#line 291 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                { (yyval.str) = "operator<"_cs; }
#line 2103 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 54: /* methodName: OPERATOR '<' '<'  */
#line 292 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                { (yyval.str) = "operator<<"_cs; }
#line 2109 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 55: /* methodName: OPERATOR '>'  */
#line 293 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                { (yyval.str) = "operator>"_cs; }
#line 2115 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 56: /* methodName: OPERATOR '>' '>'  */
#line 294 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                { (yyval.str) = "operator>>"_cs; }
#line 2121 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 57: /* methodName: OPERATOR '*'  */
#line 295 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                { (yyval.str) = "operator*"_cs; }
#line 2127 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 58: /* methodName: OPERATOR '-' '>'  */
#line 296 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                { (yyval.str) = "operator->"_cs; }
#line 2133 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 61: /* argList: type IDENTIFIER optInitializer  */
#line 303 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
            { auto *field = new IrField((yylsp[-1]), (yyvsp[-2].type), (yyvsp[-1].str), (yyvsp[0].str));
              field->clss = (yyvsp[-3].irMethod)->clss;
              (yyvsp[-3].irMethod)->args.push_back(field); }
#line 2141 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 62: /* argList: argList ',' type IDENTIFIER optInitializer  */
#line 307 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
            { auto *field = new IrField((yylsp[-1]), (yyvsp[-2].type), (yyvsp[-1].str), (yyvsp[0].str));
              field->clss = (yyvsp[-5].irMethod)->clss;
              (yyvsp[-5].irMethod)->args.push_back(field); }
#line 2149 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 63: /* optConst: %empty  */
#line 312 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
           { (yyval.i) = false; }
#line 2155 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 64: /* optConst: CONST  */
#line 312 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                   { (yyval.i) = true; }
#line 2161 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 65: /* optOverride: %empty  */
#line 315 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
      { (yyval.i) = false; }
#line 2167 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 66: /* optOverride: IDENTIFIER  */
#line 316 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                      { if (!((yyval.i) = (yyvsp[0].str) == "override"))
                            yyerror("syntax error, expecting override or method body"); }
#line 2174 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 68: /* body: '=' ZERO ';'  */
#line 320 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                      { (yyval.str) = "= 0;"_cs; }
#line 2180 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 69: /* body: '=' DEFAULT ';'  */
#line 321 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                      { (yyval.str) = "= default;"_cs; }
#line 2186 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 70: /* body: '=' DELETE ';'  */
#line 322 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                      { (yyval.str) = "= delete;"_cs; }
#line 2192 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 71: /* body: ';'  */
#line 323 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                      { (yyval.str) = {}; }
#line 2198 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 72: /* irField: modifiers type fieldName optInitializer ';'  */
#line 328 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
          { (yyval.irField) = new IrField((yylsp[-2]), (yyvsp[-3].type), (yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[-4].i));
            if ((yyvsp[-4].i) & IrElement::Virtual)
                yyerror("virtual invalid on field %s", (yyvsp[-2].str).c_str()); }
#line 2206 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 73: /* irField: modifiers CONST nonRefType fieldName optInitializer ';'  */
#line 332 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
          { (yyval.irField) = new IrField((yylsp[-2]), (yyvsp[-3].type), (yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[-5].i) | IrElement::Const);
            if ((yyvsp[-5].i) & IrElement::Virtual)
                yyerror("virtual invalid on field %s", (yyvsp[-2].str).c_str()); }
#line 2214 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 74: /* irField: modifiers VARIANT '<' type_args '>' fieldName optInitializer ';'  */
#line 336 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
          { (yyval.irField) = new IrVariantField((yylsp[-2]), (yyvsp[-4].types), (yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[-7].i));
            if ((yyvsp[-7].i) & IrElement::Virtual)
                yyerror("virtual invalid on field %s", (yyvsp[-2].str).c_str()); }
#line 2222 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 75: /* modifier: NULLOK  */
#line 342 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                { (yyval.i) = IrElement::NullOK; }
#line 2228 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 76: /* modifier: INLINE  */
#line 343 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                { (yyval.i) = IrElement::Inline; }
#line 2234 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 77: /* modifier: OPTIONAL  */
#line 344 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                { (yyval.i) = IrElement::Optional; }
#line 2240 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 78: /* modifier: STATIC  */
#line 345 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                { (yyval.i) = IrElement::Static; }
#line 2246 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 79: /* modifier: VIRTUAL  */
#line 346 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                { (yyval.i) = IrElement::Virtual; }
#line 2252 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 80: /* modifiers: %empty  */
#line 349 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
            { (yyval.i) = 0; }
#line 2258 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 81: /* modifiers: modifiers modifier  */
#line 349 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                             { (yyval.i) = (yyvsp[-1].i) | (yyvsp[0].i); }
#line 2264 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 83: /* fieldName: OPTIONAL  */
#line 351 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                 { (yyval.str) = "optional"_cs; }
#line 2270 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 84: /* optInitializer: %empty  */
#line 354 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                        { (yyval.str) = {}; }
#line 2276 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 85: /* optInitializer: '=' expression  */
#line 355 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                        { (yyval.str) = (yyvsp[0].str); }
#line 2282 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 86: /* optInitializer: '=' BLOCK  */
#line 356 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                        { (yyval.str) = (yyvsp[0].str); }
#line 2288 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 87: /* lookup_scope: DBLCOL  */
#line 360 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                        { (yyval.lookup) = new LookupScope(); }
#line 2294 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 88: /* lookup_scope: IDENTIFIER DBLCOL  */
#line 361 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                        { (yyval.lookup) = new LookupScope(0, (yyvsp[-1].str)); }
#line 2300 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 89: /* lookup_scope: lookup_scope IDENTIFIER DBLCOL  */
#line 362 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                        { (yyval.lookup) = new LookupScope((yyvsp[-2].lookup), (yyvsp[-1].str)); }
#line 2306 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 90: /* nonRefType: IDENTIFIER  */
#line 365 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                        { (yyval.type) = new NamedType((yylsp[0]), 0, (yyvsp[0].str)); }
#line 2312 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 91: /* nonRefType: lookup_scope IDENTIFIER  */
#line 366 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                        { (yyval.type) = new NamedType((yylsp[0]), (yyvsp[-1].lookup), (yyvsp[0].str)); }
#line 2318 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 92: /* nonRefType: lookup_scope OPTIONAL  */
#line 367 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                        { (yyval.type) = new NamedType((yylsp[0]), (yyvsp[-1].lookup), "optional"_cs); }
#line 2324 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 93: /* nonRefType: nonRefType '<' type_args '>'  */
#line 368 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                        { (yyval.type) = new TemplateInstantiation((yylsp[-3])+(yylsp[0]), (yyvsp[-3].type), *(yyvsp[-1].types)); }
#line 2330 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 94: /* nonRefType: nonRefType '[' INTEGER ']'  */
#line 369 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                        { (yyval.type) = new ArrayType((yylsp[-3])+(yylsp[0]), (yyvsp[-3].type), atoi((yyvsp[-1].str).c_str())); }
#line 2336 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 96: /* type: type '&'  */
#line 373 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                        { (yyval.type) = new ReferenceType((yyvsp[-1].type)); }
#line 2342 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 97: /* type: type CONST '&'  */
#line 374 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                        { (yyval.type) = new ReferenceType((yyvsp[-2].type), true); }
#line 2348 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 98: /* type: CONST nonRefType '&'  */
#line 375 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                        { (yyval.type) = new ReferenceType((yyvsp[-1].type), true); }
#line 2354 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 99: /* type: type '*'  */
#line 376 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                        { (yyval.type) = new PointerType((yyvsp[-1].type)); }
#line 2360 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 100: /* type: type CONST '*'  */
#line 377 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                        { (yyval.type) = new PointerType((yyvsp[-2].type), true); }
#line 2366 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 101: /* type: CONST nonRefType '*'  */
#line 378 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                        { (yyval.type) = new PointerType((yyvsp[-1].type), true); }
#line 2372 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 102: /* type_args: type_arg  */
#line 382 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                        { (yyval.types) = new std::vector<const Type *>{(yyvsp[0].type)}; }
#line 2378 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 103: /* type_args: type_args ',' type_arg  */
#line 383 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                        { ((yyval.types) = (yyvsp[-2].types))->push_back((yyvsp[0].type)); }
#line 2384 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 104: /* type_arg: type  */
#line 387 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                        { (yyval.type) = (yyvsp[0].type); }
#line 2390 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 105: /* type_arg: type '(' optTypeList ')'  */
#line 388 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                        { (yyval.type) = new FunctionType((yyvsp[-3].type), *(yyvsp[-1].types)); }
#line 2396 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 106: /* optTypeList: %empty  */
#line 392 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                        { (yyval.types) = new std::vector<const Type *>(); }
#line 2402 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 107: /* optTypeList: typeList  */
#line 393 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                        { (yyval.types) = (yyvsp[0].types); }
#line 2408 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 108: /* typeList: type  */
#line 397 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                        { (yyval.types) = new std::vector<const Type *>{(yyvsp[0].type)}; }
#line 2414 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 109: /* typeList: typeList ',' type  */
#line 398 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                        { ((yyval.types) = (yyvsp[-2].types))->push_back((yyvsp[0].type)); }
#line 2420 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 110: /* constFieldInit: modifiers IDENTIFIER '=' expression ';'  */
#line 402 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
          { (yyval.constFieldInit) = new ConstFieldInitializer((yylsp[-3]), (yyvsp[-3].str), (yyvsp[-1].str));
            if ((yyvsp[-4].i)) yyerror("%s invalid on constant", IrElement::modifier((yyvsp[-4].i))); }
#line 2427 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 115: /* expression: expression '(' ')'  */
#line 408 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                        { (yyval.str) = (yyvsp[-2].str) + "()"; }
#line 2433 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 116: /* expression: expression '+' '+'  */
#line 409 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                        { (yyval.str) = (yyvsp[-2].str) + "++"; }
#line 2439 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 117: /* expression: NEW name  */
#line 410 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                        { (yyval.str) = "new " + (yyvsp[0].str); }
#line 2445 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 119: /* name: name DBLCOL IDENTIFIER  */
#line 414 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                { (yyval.str) = (yyvsp[-2].str) + "::" + (yyvsp[0].str); }
#line 2451 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;

  case 120: /* name: name '<' name '>'  */
#line 415 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"
                                { (yyval.str) = (yyvsp[-3].str) + "<" + (yyvsp[-1].str) + ">"; }
#line 2457 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"
    break;


#line 2461 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 420 "/media/t/scratch/p4/p4c/tools/ir-generator/ir-generator.ypp"

}  // end anonymous namespace

template<typename... Args>
void yyerror(const char *fmt, Args&&... args) {
    auto& context = BaseCompileContext::get();
    if (!strcmp(fmt, "syntax error, unexpected IDENTIFIER")) {
        context.errorReporter().parser_error(sources,
                                             "syntax error, unexpected IDENTIFIER \"%s\"",
                                             yylval.str.c_str());
        return;
    }
    context.errorReporter().parser_error(sources, fmt, std::forward<Args>(args)...);
}

IrDefinitions *parse(char** files, int count) {
    int errors = 0;
    class IrgenCompileContext : public BaseCompileContext { } ctxt;
    AutoCompileContext ctxt_ctl(&ctxt);
#ifdef YYDEBUG
    if (const char *p = getenv("YYDEBUG"))
        yydebug = atoi(p);
#endif
    if (count <= 0) {
        ::P4::error(ErrorType::ERR_EXPECTED, "No input files specified");
        errors = 1; }

    for (int i = 0; i < count; i++) {
        if (FILE *fp = fopen(files[i], "r")) {
            sources->mapLine(files[i], 1);
            yyrestart(fp);
            BEGIN(NORMAL);
            errors |= yyparse();
            fclose(fp);
            if (errors & 2) {
                error(ErrorType::ERR_OVERLIMIT, "out of memory");
                break; }
        } else {
            ::P4::error(ErrorType::ERR_IO, "Cannot open file %s", files[i]);
            perror("");
            errors |= 1; } }

    return errors ? nullptr : new IrDefinitions(global);
}

}  // namespace P4

