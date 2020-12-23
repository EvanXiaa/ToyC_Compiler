/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "c.y" /* yacc.c:339  */

#include "node.h"
#include <cstdio>
#include <cstdlib>

BlockNode *programBlock; /* the top level root node of our final AST */

using namespace std;

extern "C" int yylex();
int yyparse();
extern "C" FILE *yyin;
void yyerror(const char *s);
bool debug = false;

#line 82 "c.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "c.tab.hpp".  */
#ifndef YY_YY_C_TAB_HPP_INCLUDED
# define YY_YY_C_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    I_CONSTANT = 259,
    F_CONSTANT = 260,
    STRING_LITERAL = 261,
    FUNC_NAME = 262,
    SIZEOF = 263,
    B_CONSTANT = 264,
    BOOL = 265,
    CHAR = 266,
    SHORT = 267,
    INT = 268,
    LONG = 269,
    SIGNED = 270,
    UNSIGNED = 271,
    FLOAT = 272,
    DOUBLE = 273,
    VOID = 274,
    AND_OP = 275,
    OR_OP = 276,
    EQ_OP = 277,
    LE_OP = 278,
    GE_OP = 279,
    CASE = 280,
    DEFAULT = 281,
    IF = 282,
    ELSE = 283,
    SWITCH = 284,
    WHILE = 285,
    DO = 286,
    FOR = 287,
    GOTO = 288,
    CONTINUE = 289,
    BREAK = 290,
    RETURN = 291,
    PTR_OP = 292,
    INC_OP = 293,
    DEC_OP = 294,
    LEFT_OP = 295,
    RIGHT_OP = 296,
    NE_OP = 297,
    MUL_ASSIGN = 298,
    DIV_ASSIGN = 299,
    MOD_ASSIGN = 300,
    ADD_ASSIGN = 301,
    SUB_ASSIGN = 302,
    LEFT_ASSIGN = 303,
    RIGHT_ASSIGN = 304,
    AND_ASSIGN = 305,
    XOR_ASSIGN = 306,
    OR_ASSIGN = 307,
    TYPEDEF_NAME = 308,
    ENUMERATION_CONSTANT = 309,
    TYPEDEF = 310,
    EXTERN = 311,
    STATIC = 312,
    AUTO = 313,
    REGISTER = 314,
    INLINE = 315,
    CONST = 316,
    RESTRICT = 317,
    VOLATILE = 318,
    STRUCT = 319,
    UNION = 320,
    ENUM = 321,
    ELLIPSIS = 322,
    COMPLEX = 323,
    IMAGINARY = 324,
    ALIGNAS = 325,
    ALIGNOF = 326,
    ATOMIC = 327,
    GENERIC = 328,
    NORETURN = 329,
    STATIC_ASSERT = 330,
    THREAD_LOCAL = 331
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "c.y" /* yacc.c:355  */

	BlockNode *block;
	ExprNode *expr;
	StmtNode *stmt;
	IdentiferNode *ident;
	NIdentifierParam *identparam;
	VariableDeclaration *var_decl;
	AssignmentNode *var_init;
	QualStorageTypeNode *var_stor;
	std::vector<ExprNode*> *exprvec;
	std::vector<VariableDeclaration*> *varvec;
	std::string *string;
	int token;
	CommonDeclarationNode *common_dec;

#line 215 "c.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_C_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 232 "c.tab.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  52
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2500

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  101
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  277
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  482

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   331

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    99,     2,     2,     2,    26,    31,     2,
      89,    90,    23,    22,    91,    24,    96,    25,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    97,    20,
      35,    21,    36,   100,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    94,     2,    95,    29,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    92,    30,    93,    98,     2,     2,     2,
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
      15,    16,    17,    18,    19,    27,    28,    32,    33,    34,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    89,    89,    93,    94,    95,   101,   102,   107,   108,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   127,   131,   132,   136,   137,   141,   142,   146,   160,
     161,   162,   168,   169,   176,   186,   191,   196,   201,   206,
     212,   217,   221,   226,   229,   230,   231,   235,   236,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   259,   260,   264,   268,   269,   273,   274,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   303,
     307,   308,   309,   310,   311,   315,   316,   320,   321,   327,
     328,   333,   334,   339,   340,   348,   349,   354,   358,   359,
     363,   364,   368,   369,   374,   375,   376,   380,   381,   382,
     383,   391,   396,   402,   403,   407,   408,   409,   412,   415,
     418,   424,   425,   426,   427,   428,   432,   433,   434,   440,
     445,   450,   451,   458,   463,   464,   468,   469,   470,   471,
     475,   479,   483,   488,   489,   490,   491,   495,   499,   500,
     501,   502,   503,   504,   508,   509,   513,   514,   515,   516,
     517,   518,   522,   523,   524,   528,   529,   533,   535,   538,
     539,   540,   545,   546,   550,   551,   552,   557,   558,   562,
     563,   567,   568,   569,   570,   574,   575,   580,   581,   582,
     583,   584,   585,   586,   587,   588,   589,   590,   591,   592,
     593,   594,   595,   599,   600,   601,   602,   603,   604,   609,
     610,   611,   612,   613,   617,   618,   619,   620,   621,   622,
     623,   626,   629,   630,   634,   635,   638,   641,   653,   654,
     655,   659,   660,   664,   665,   666,   667,   671,   672,   673,
     677,   678,   679,   683,   684,   685,   686,   687,   691,   692,
     694,   699,   700,   704,   705,   709,   710,   713,   714,   718,
     719,   723,   724,   728,   729,   737,   741,   742
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "I_CONSTANT", "F_CONSTANT",
  "STRING_LITERAL", "FUNC_NAME", "SIZEOF", "B_CONSTANT", "BOOL", "CHAR",
  "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "VOID",
  "';'", "'='", "'+'", "'*'", "'-'", "'/'", "'%'", "AND_OP", "OR_OP",
  "'^'", "'|'", "'&'", "EQ_OP", "LE_OP", "GE_OP", "'<'", "'>'", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "NE_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "TYPEDEF_NAME", "ENUMERATION_CONSTANT",
  "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "INLINE", "CONST",
  "RESTRICT", "VOLATILE", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "COMPLEX",
  "IMAGINARY", "ALIGNAS", "ALIGNOF", "ATOMIC", "GENERIC", "NORETURN",
  "STATIC_ASSERT", "THREAD_LOCAL", "'('", "')'", "','", "'{'", "'}'",
  "'['", "']'", "'.'", "':'", "'~'", "'!'", "'?'", "$accept", "program",
  "abstract_declarator", "alignment_specifier", "argument_expression_list",
  "assignment_operator", "atomic_type_specifier", "block_item_list",
  "block_item", "compound_statement", "constant", "declaration",
  "declarator", "declaration_specifiers", "declaration_list",
  "direct_declarator", "designation", "designator_list", "designator",
  "direct_abstract_declarator", "enumeration_constant", "enum_specifier",
  "enumerator_list", "enumerator", "external_declaration",
  "expression_statement", "function_definition", "function_specifier",
  "generic_selection", "generic_assoc_list", "generic_association",
  "identifier_list", "initializer", "initializer_list", "init_declarator",
  "init_declarator_list", "iteration_statement", "jump_statement",
  "labeled_statement", "parameter_type_list", "parameter_list",
  "parameter_declaration", "pointer", "selection_statement",
  "specifier_qualifier_list", "static_assert_declaration", "statement",
  "string", "storage_class_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "type_name",
  "translation_unit", "type_qualifier", "type_qualifier_list",
  "type_specifier", "unary_operator", "primary_expression",
  "postfix_expression", "unary_expression", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "constant_expression",
  "expression", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
      59,    61,    43,    42,    45,    47,    37,   275,   276,    94,
     124,    38,   277,   278,   279,    60,    62,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,    40,
      41,    44,   123,   125,    91,    93,    46,    58,   126,    33,
      63
};
# endif

#define YYPACT_NINF -361

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-361)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2205,  -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,
    -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,
    -361,  -361,  -361,    32,  -361,  -361,   -62,   -46,  -361,     3,
    -361,   125,  2306,  -361,  -361,   159,  -361,  -361,  -361,  2306,
    -361,  2306,  -361,    36,  2205,  2306,  2306,    76,   177,   790,
    2416,  1702,  -361,  -361,  -361,  -361,   185,   162,  2072,   -19,
    -361,   152,    68,  -361,  -361,   109,  2324,  -361,  -361,  -361,
     177,  -361,   137,   -27,  -361,  -361,  -361,  -361,  -361,  -361,
    1738,  -361,  -361,  -361,  -361,  -361,  1774,  1774,  -361,   122,
     142,   790,  -361,  -361,  -361,  -361,   163,  -361,   145,  2416,
    2416,  1702,  -361,   167,  -361,  -361,   189,   169,    25,    23,
       6,   219,   224,   235,   241,    54,  -361,   180,   187,   198,
    -361,  -361,  -361,   185,   202,  1407,   499,  -361,  -361,   159,
    2098,  1864,   383,  -361,   162,   -19,  2324,    29,  -361,  1967,
    -361,   129,  1702,    20,  -361,   790,  -361,   790,  -361,  -361,
    2416,  1702,   208,   223,  -361,  -361,   164,  1945,   927,  -361,
     101,   105,  -361,  -361,  -361,  -361,   301,  -361,  -361,  1457,
    1702,   311,  1702,  1702,  1702,  1702,  1702,  1702,  1702,  1702,
    1702,  1702,  1702,  1702,  1702,  1702,  1702,  1702,  1702,  1702,
    1702,  -361,  -361,   310,  -361,  -361,  -361,  1357,  -361,  -361,
     226,  -361,  1702,   230,   236,   253,   260,   877,   261,   327,
     333,   334,  1507,  -361,   596,  -361,  -361,  -361,  -361,  -361,
    -361,  -361,  -361,  -361,   154,   335,  -361,  -361,  -361,  -361,
      21,   182,   265,   266,  -361,   267,  1202,  -361,   982,   268,
    -361,  1988,  -361,  1702,   264,   155,  -361,  -361,  -361,    28,
    -361,  -361,  -361,  -361,   275,   276,   277,   279,  1557,  -361,
    -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,
    1702,  -361,  1702,  -361,   278,   282,   280,  1202,  -361,  1037,
     281,  2181,  1092,   101,  -361,  -361,   210,  -361,   -65,  -361,
    -361,  -361,  -361,   189,   189,   169,   169,    25,    25,    25,
      25,    23,    23,     6,   219,   224,   235,   241,   -30,   287,
    1702,   375,  1407,   140,  -361,  -361,   132,   877,   284,   877,
    1702,  1702,  1702,   341,   693,   365,  -361,  -361,  -361,   156,
    -361,  -361,  -361,  1831,  -361,  -361,    66,  -361,   390,  -361,
    2284,  -361,  1202,   300,   304,  1702,  -361,   305,  -361,  -361,
    -361,  1702,  -361,    30,  -361,   309,   309,  -361,  2402,  1357,
    -361,  -361,  -361,  -361,  -361,  -361,  1202,   308,  1702,  -361,
     313,  -361,  -361,   306,   314,  1202,  -361,  1147,   315,  -361,
    1702,  -361,  1702,   384,   317,  -361,  -361,  -361,  -361,  1257,
    -361,  -361,   877,  -361,   212,   216,   220,   324,  1594,  1594,
    -361,  -361,  -361,  -361,  -361,   320,  -361,  -361,   321,  -361,
    -361,  -361,   322,   228,  -361,   325,   173,   326,  -361,   328,
    -361,  -361,  -361,  1202,   329,  1702,  -361,   330,  -361,  -361,
    -361,  -361,  -361,  -361,  1407,  -361,  -361,   877,   877,   877,
    1702,  1630,  1666,  -361,  -361,  1702,  -361,  2402,  1702,  1307,
    -361,  -361,  -361,   331,  -361,   336,  -361,  -361,   377,  -361,
    -361,   242,   877,   247,   877,   250,  -361,  -361,  -361,  -361,
    -361,  -361,   877,   408,  -361,   877,  -361,   877,  -361,  -361,
    -361,  -361
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   206,   198,   199,   200,   201,   204,   205,   202,   203,
     197,   212,   166,   167,   168,   170,   171,   105,   191,   192,
     193,   175,   176,     0,   207,   208,     0,   194,   106,     0,
     169,     0,    46,   209,   100,     0,   211,   189,    99,    44,
      34,    38,   210,     0,     2,    42,    40,    94,     0,     0,
       0,     0,     1,    45,    49,    32,   149,     0,   122,    36,
     123,     0,     0,    43,    37,   174,     0,   190,    41,    39,
       0,    89,    98,     0,    95,   219,    28,    29,   164,   165,
       0,    30,   215,   214,   216,   213,     0,     0,    31,     0,
       0,     0,   217,   218,   220,   223,   188,   221,     0,   156,
     154,     0,   224,   234,   241,   243,   247,   250,   253,   258,
     261,   263,   265,   267,   269,   271,   275,     0,     0,     0,
     194,   148,   195,   147,     0,     0,     0,   104,    47,     0,
       0,     0,     0,    33,     0,    35,     0,     0,   181,     0,
     177,     0,     0,     0,    90,     0,   238,     0,   235,   236,
       0,     0,     0,   241,   273,   276,     0,     0,     0,   187,
       5,     4,     6,   155,   153,   237,     0,   230,   231,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,    21,     0,   146,   196,    50,     0,   121,   116,
     219,   101,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,    22,   159,    24,   160,   162,
     163,   158,   161,    25,     0,   122,   103,    48,   112,    61,
     145,     0,     0,   140,   141,   214,     0,    51,     0,     0,
     124,     0,   179,     0,   186,     0,   182,   172,   178,     0,
      92,    97,    91,    96,     0,     0,     0,     0,     0,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       0,   222,     0,    85,     0,     0,   214,     0,    69,     0,
       0,     0,     0,     3,   229,   226,     0,     8,     0,   228,
     244,   245,   246,   248,   249,   251,   252,   256,   257,   254,
     255,   259,   260,   262,   264,   266,   268,   270,     0,     0,
       0,     0,     0,     0,    64,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   132,   133,   134,     0,
      27,    23,   102,     0,   144,   143,     4,    62,     0,    60,
       0,    52,     0,     0,   214,     0,    58,     0,    59,   173,
     184,     0,   180,     0,    93,   239,     0,   240,     0,     0,
     242,   274,   277,    68,    86,    70,     0,     0,     0,    75,
       0,    76,    87,     0,   214,     0,    77,     0,     0,   227,
       0,   225,     0,     0,     0,    67,   117,    63,    65,     0,
     114,   136,     0,   138,     0,     0,     0,     0,     0,     0,
     131,   135,   113,   139,   142,     0,    54,    55,     0,    57,
     185,   183,     0,     0,   108,     0,     0,     0,    72,     0,
      74,    88,    78,     0,     0,     0,    83,     0,    84,     9,
     272,   157,    66,   115,     0,   120,   137,     0,     0,     0,
       0,     0,     0,    53,    56,     0,   107,     0,     0,     0,
     232,    71,    73,     0,    80,     0,    81,   119,   151,   152,
     125,     0,     0,     0,     0,     0,   111,   109,   110,   233,
      79,    82,     0,     0,   129,     0,   127,     0,   150,   126,
     130,   128
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -361,  -361,   -74,  -361,  -361,  -361,  -361,  -361,   221,    53,
    -361,   -33,   -17,    40,  -361,   -60,  -360,  -361,   117,  -148,
    -361,  -361,   366,  -127,   393,  -157,  -361,  -361,  -361,  -361,
      -9,  -361,  -114,    80,   312,  -361,  -361,  -361,  -361,  -111,
    -361,   100,   -28,  -361,   -63,   -32,   -93,  -361,  -361,  -361,
    -361,   307,  -125,  -361,    89,    82,  -361,   -49,  -113,   -45,
    -361,  -361,  -361,   -39,   -21,   172,   174,   115,    22,   259,
     262,   258,   263,   270,  -361,   -43,    52,   -36,   -82
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    31,   274,    32,   286,   270,    33,   214,   215,   216,
      94,    34,   124,   129,   130,    59,   312,   313,   314,   160,
      72,    36,    73,    74,    37,   218,    38,    39,    95,   413,
     414,   231,   315,   316,    60,    61,   219,   220,   221,   275,
     233,   234,    62,   222,    96,    40,   223,    97,    41,    42,
      43,   139,   140,   245,   246,   415,    44,    45,   123,    46,
     101,   102,   103,   153,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   154,   155,   117,   224
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      99,    99,   135,   137,   100,   100,   116,   122,   116,   156,
     104,   198,   104,   283,   248,   119,   253,    99,    58,   238,
     232,   100,   159,    71,    54,   128,   272,    49,   121,   434,
     381,    71,    54,    54,   138,    47,   163,   164,   183,    65,
      35,   146,    99,    50,    56,   279,   100,   148,   149,   242,
      99,    99,    56,    56,   100,   100,   179,   180,   181,   182,
     184,   272,   104,   156,   143,   156,   144,   382,   161,    54,
     131,    54,    53,   137,   195,   132,   137,   177,   178,    63,
     165,    64,   189,   122,    35,    68,    69,    99,   288,   434,
      99,   100,    51,   217,   100,   194,    99,   227,    99,   116,
     100,    99,   100,   104,   138,   100,   251,   138,   308,   122,
     333,   127,   225,   252,   323,   158,   248,   225,    57,    57,
     244,   354,   253,   342,    48,    52,   243,   243,    66,   161,
     329,    98,   118,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   290,   291,   292,   190,   333,   334,    57,   142,   116,
     158,   387,    54,   104,   366,    54,   318,   399,    70,   377,
     373,   230,   133,   152,   332,   352,   401,   199,   137,    55,
      71,   217,    56,   226,   239,    56,    56,   122,   283,   195,
     281,   175,    99,   176,   157,   282,   100,   230,   386,   158,
     116,   136,   336,   257,   104,   301,   302,   350,    56,   138,
     280,   150,   172,   335,   173,   174,   166,   167,   168,   104,
     249,   287,   250,   389,   391,   390,   393,   254,   122,   255,
     195,   151,   256,   122,   310,   162,   311,   360,   394,   395,
     396,   441,   442,   134,   259,   272,   353,   272,    57,   199,
     185,    57,   157,   186,   271,   272,   169,   158,    18,    19,
      20,   170,   423,   171,   449,   187,   450,   116,   188,   120,
     191,   104,   337,   338,   384,   435,   135,   192,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   343,   193,
     347,   398,   196,   195,   297,   298,   299,   300,   258,   436,
     379,   380,   437,   272,   284,   336,   438,   272,   116,    99,
     439,   272,   104,   100,   289,   410,   309,   195,   446,   447,
     457,   230,   361,   317,   362,   320,   122,   319,   195,   367,
     325,   370,   473,   272,   378,   435,   244,   475,   272,   430,
     477,   272,   321,   104,   458,   459,   460,   293,   294,   322,
     324,   295,   296,   326,   327,   339,   125,   340,   461,   463,
     465,   351,   341,   348,   199,   355,   356,   357,   363,   474,
     358,   476,   364,   230,   195,   365,   371,   383,   385,   478,
     230,   392,   480,   397,   481,   400,    75,    76,    77,    78,
      79,    80,    81,   402,   405,   406,   421,   408,    99,   407,
     409,   359,   100,   418,   431,    82,   235,    84,   420,   422,
     428,   199,   432,   440,    85,   443,   444,   472,   417,   445,
     419,   451,   448,   452,   454,   456,   470,   424,   479,   427,
     388,   471,   429,    86,    87,   331,   141,    67,   467,   416,
     404,   199,   411,   241,   303,   305,   240,     0,   304,    88,
       0,   306,   236,     0,     0,     0,    18,    19,    20,   307,
       0,     0,     0,     0,     0,     0,    89,   120,    90,     0,
       0,     0,    91,     0,     0,   453,     0,   455,   237,     0,
       0,    92,    93,     0,     0,     0,   199,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   466,     0,     0,
     468,   199,   200,    76,    77,    78,    79,    80,    81,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,   201,
       0,    82,    83,    84,     0,     0,     0,     0,     0,     0,
      85,     0,     0,     0,     0,     0,   202,   203,   204,     0,
     205,   206,   207,   208,   209,   210,   211,   212,     0,    86,
      87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    88,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,    26,    89,    27,    90,    28,    29,    30,    91,     0,
       0,   126,   213,     0,     0,     0,     0,    92,    93,   200,
      76,    77,    78,    79,    80,    81,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,   201,     0,    82,    83,
      84,     0,     0,     0,     0,     0,     0,    85,     0,     0,
       0,     0,     0,   202,   203,   204,     0,   205,   206,   207,
     208,   209,   210,   211,   212,     0,    86,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    88,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,    26,    89,
      27,    90,    28,    29,    30,    91,     0,     0,   126,   330,
       0,     0,     0,     0,    92,    93,    75,    76,    77,    78,
      79,    80,    81,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,   201,     0,    82,    83,    84,     0,     0,
       0,     0,     0,     0,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    86,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    88,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,    25,    26,    89,    27,    90,    28,
      29,    30,    91,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    75,    76,    77,    78,    79,    80,    81,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
       0,     0,    82,    83,    84,     0,     0,     0,     0,     0,
       0,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      86,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    88,     0,     0,     0,
       0,     0,     0,    18,    19,    20,    21,    22,    23,     0,
      24,    25,     0,    89,    27,    90,     0,     0,     0,    91,
     200,    76,    77,    78,    79,    80,    81,     0,    92,    93,
       0,     0,     0,     0,     0,     0,     0,   201,     0,    82,
      83,    84,     0,     0,     0,     0,     0,     0,    85,     0,
       0,     0,     0,     0,   202,   203,   204,     0,   205,   206,
     207,   208,   209,   210,   211,   212,     0,    86,    87,     0,
      75,    76,    77,    78,    79,    80,    81,     0,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,     0,    82,
     276,    84,     0,     0,     0,     0,     0,     0,    85,     0,
      89,     0,    90,     0,     0,     0,    91,     0,     0,   126,
       0,     0,     0,     0,     0,    92,    93,    86,    87,     0,
       0,     0,     0,     0,     0,    75,    76,    77,    78,    79,
      80,    81,     0,    88,     0,     0,   277,     0,     0,     0,
      18,    19,    20,     0,    82,   344,    84,     0,     0,     0,
      89,   120,    90,    85,     0,     0,    91,     0,     0,     0,
       0,     0,   278,     0,     0,    92,    93,     0,     0,     0,
       0,     0,    86,    87,     0,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,     0,    88,     0,
       0,   345,     0,     0,     0,    18,    19,    20,     0,    82,
      83,    84,     0,     0,     0,    89,   120,    90,    85,     0,
       0,    91,     0,     0,     0,     0,     0,   346,     0,     0,
      92,    93,     0,     0,     0,     0,     0,    86,    87,     0,
       0,     0,     0,     0,     0,    75,    76,    77,    78,    79,
      80,    81,     0,    88,     0,     0,   368,     0,     0,     0,
      18,    19,    20,     0,    82,   374,    84,     0,     0,     0,
      89,   120,    90,    85,     0,     0,    91,     0,     0,     0,
       0,     0,   369,     0,     0,    92,    93,     0,     0,     0,
       0,     0,    86,    87,     0,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,     0,    88,     0,
       0,   375,     0,     0,     0,    18,    19,    20,     0,    82,
      83,    84,     0,     0,     0,    89,   120,    90,    85,     0,
       0,    91,     0,     0,     0,     0,     0,   376,     0,     0,
      92,    93,     0,     0,     0,     0,     0,    86,    87,     0,
       0,     0,     0,     0,     0,    75,    76,    77,    78,    79,
      80,    81,     0,    88,     0,     0,   425,     0,     0,     0,
      18,    19,    20,     0,    82,    83,    84,     0,     0,     0,
      89,   120,    90,    85,     0,     0,    91,     0,     0,     0,
       0,     0,   426,     0,     0,    92,    93,     0,     0,     0,
       0,     0,    86,    87,     0,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,     0,    88,     0,
       0,     0,     0,     0,     0,    18,    19,    20,     0,    82,
      83,    84,     0,     0,     0,    89,   120,    90,    85,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    93,     0,     0,     0,     0,     0,    86,    87,     0,
      75,    76,    77,    78,    79,    80,    81,     0,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,     0,    82,
      83,    84,     0,     0,     0,     0,     0,     0,    85,     0,
      89,     0,    90,     0,     0,     0,    91,     0,     0,   197,
     433,   310,     0,   311,     0,    92,    93,    86,    87,     0,
      75,    76,    77,    78,    79,    80,    81,     0,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,     0,    82,
      83,    84,     0,     0,     0,     0,     0,     0,    85,     0,
      89,     0,    90,     0,     0,     0,    91,     0,     0,   197,
     469,   310,     0,   311,     0,    92,    93,    86,    87,     0,
      75,    76,    77,    78,    79,    80,    81,     0,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,     0,    82,
      83,    84,     0,     0,     0,     0,     0,     0,    85,     0,
      89,     0,    90,     0,     0,     0,    91,     0,     0,   197,
       0,   310,     0,   311,     0,    92,    93,    86,    87,     0,
      75,    76,    77,    78,    79,    80,    81,     0,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,     0,    82,
      83,    84,     0,     0,     0,     0,     0,     0,    85,     0,
      89,     0,    90,     0,     0,     0,    91,     0,     0,   197,
       0,     0,     0,     0,     0,    92,    93,    86,    87,     0,
      75,    76,    77,    78,    79,    80,    81,     0,     0,     0,
       0,     0,     0,    88,     0,     0,     0,   328,     0,    82,
      83,    84,     0,     0,     0,     0,     0,     0,    85,     0,
      89,     0,    90,     0,     0,     0,    91,   285,     0,     0,
       0,     0,     0,     0,     0,    92,    93,    86,    87,     0,
      75,    76,    77,    78,    79,    80,    81,     0,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,     0,    82,
      83,    84,     0,     0,     0,     0,     0,     0,    85,     0,
      89,     0,    90,     0,     0,     0,    91,    75,    76,    77,
      78,    79,    80,    81,     0,    92,    93,    86,    87,     0,
       0,     0,     0,     0,   201,     0,    82,    83,    84,     0,
       0,     0,     0,    88,     0,    85,     0,     0,     0,     0,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    81,
      89,     0,    90,     0,    86,    87,    91,     0,     0,   359,
       0,     0,    82,    83,    84,    92,    93,     0,     0,     0,
      88,    85,     0,     0,     0,     0,     0,     0,     0,    75,
      76,    77,    78,    79,    80,    81,     0,    89,     0,    90,
      86,    87,     0,    91,     0,     0,     0,     0,    82,    83,
      84,     0,    92,    93,     0,     0,    88,    85,     0,     0,
       0,     0,     0,     0,     0,    75,    76,    77,    78,    79,
      80,    81,     0,    89,     0,    90,    86,    87,     0,    91,
     462,     0,     0,     0,    82,    83,    84,     0,    92,    93,
       0,     0,    88,    85,     0,     0,     0,     0,     0,     0,
       0,    75,    76,    77,    78,    79,    80,    81,     0,    89,
       0,    90,    86,    87,     0,    91,   464,     0,     0,     0,
      82,    83,    84,     0,    92,    93,     0,     0,    88,    85,
       0,     0,     0,     0,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    81,     0,    89,     0,    90,    86,    87,
       0,    91,     0,     0,     0,     0,    82,    83,    84,     0,
      92,    93,     0,     0,    88,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    89,     0,    90,    86,    87,     0,   145,     0,     0,
       0,     0,     0,     0,    54,     0,    92,    93,     0,     0,
      88,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,     0,     0,     0,    56,     0,     0,    89,     0,    90,
       0,     0,     0,   147,     0,     0,     0,   228,     0,     0,
       0,     0,    92,    93,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,     0,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,    25,    26,     0,    27,     0,    28,     0,    30,
     333,   273,     0,     0,     0,   158,     0,     0,     0,    11,
       0,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,    25,    26,     0,    27,     0,
      28,     0,    30,     0,   229,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,     0,     0,     0,    56,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,     0,     0,
      11,     0,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,    25,    26,     0,    27,
       0,    28,    11,    30,   157,   273,     0,     0,     0,   158,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,    27,     0,    11,    29,     0,     0,     0,     0,     0,
     247,    18,    19,    20,    21,    22,    23,     0,    24,    25,
       0,     0,    27,     0,     0,    29,     0,     0,     0,     0,
       0,   349,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,     0,   125,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,     0,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,    26,     0,    27,     0,    28,    29,
      30,     0,     0,    11,   126,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
      26,     0,    27,     0,    28,    29,    30,     0,     0,     0,
     126,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,     0,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,    25,    26,     0,    27,     0,    28,     0,    30,
      11,   372,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,    25,    26,     0,    27,
       0,    28,    29,    30,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,     0,     0,     0,     0,     0,    11,
       0,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,   403,    24,    25,    26,     0,    27,     0,
      28,    11,    30,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,    26,    11,
      27,     0,    28,     0,    30,     0,     0,    18,    19,    20,
      21,    22,    23,     0,    24,    25,     0,     0,    27,     0,
       0,    29,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,     0,     0,     0,     0,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,     0,     0,     0,     0,
     412,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,     0,     0,
       0,     0,     0,     0,     0,    18,    19,    20,    21,    22,
      23,    11,    24,    25,     0,     0,    27,     0,     0,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
      27
};

static const yytype_int16 yycheck[] =
{
      49,    50,    62,    66,    49,    50,    49,    56,    51,    91,
      49,   125,    51,   161,   139,    51,   143,    66,    35,   132,
     131,    66,    96,     3,     3,    58,    91,    89,    56,   389,
      95,     3,     3,     3,    66,     3,    99,   100,    32,     3,
       0,    80,    91,    89,    23,   158,    91,    86,    87,    20,
      99,   100,    23,    23,    99,   100,    33,    34,    35,    36,
      54,    91,   101,   145,    91,   147,    93,    97,    96,     3,
      89,     3,    32,   136,   123,    94,   139,    52,    53,    39,
     101,    41,    28,   132,    44,    45,    46,   136,   170,   449,
     139,   136,    89,   126,   139,   123,   145,   130,   147,   142,
     145,   150,   147,   142,   136,   150,   142,   139,   190,   158,
      89,    58,   129,    93,   207,    94,   241,   134,    89,    89,
     137,    93,   249,   236,    92,     0,    97,    97,    92,   157,
     212,    49,    50,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   172,   173,   174,   100,    89,   230,    89,    21,   202,
      94,    21,     3,   202,   277,     3,   202,   324,    92,   282,
     281,   131,    20,    91,    20,    20,    20,   125,   241,    20,
       3,   214,    23,   130,   132,    23,    23,   236,   336,   238,
      89,    22,   241,    24,    89,    94,   241,   157,   312,    94,
     243,    92,   230,   151,   243,   183,   184,   243,    23,   241,
     158,    89,    23,   230,    25,    26,    49,    50,    51,   258,
      91,   169,    93,    91,   317,    93,   319,   145,   277,   147,
     279,    89,   150,   282,    94,    90,    96,   258,   320,   321,
     322,   398,   399,    91,    21,    91,    91,    91,    89,   197,
      31,    89,    89,    29,    90,    91,    89,    94,    73,    74,
      75,    94,   375,    96,    91,    30,    93,   310,    27,    84,
      90,   310,    90,    91,   310,   389,   336,    90,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,   236,    91,
     238,   324,    90,   342,   179,   180,   181,   182,    90,   392,
      90,    91,    90,    91,     3,   333,    90,    91,   351,   358,
      90,    91,   351,   358,     3,   351,     6,   366,    90,    91,
     434,   281,   270,    97,   272,    89,   375,    97,   377,   277,
       3,   279,    90,    91,   282,   449,   353,    90,    91,   382,
      90,    91,    89,   382,   437,   438,   439,   175,   176,    89,
      89,   177,   178,    20,    20,    90,    21,    91,   440,   441,
     442,    97,    95,    95,   312,    90,    90,    90,    90,   462,
      91,   464,    90,   333,   423,    95,    95,    90,     3,   472,
     340,    97,   475,    42,   477,    20,     3,     4,     5,     6,
       7,     8,     9,     3,   342,    95,    90,   345,   447,    95,
      95,    92,   447,    95,    20,    22,    23,    24,    95,    95,
      95,   359,    95,    89,    31,    95,    95,    40,   366,    97,
     368,    95,    97,    95,    95,    95,    95,   375,    20,   377,
     313,    95,   380,    50,    51,   214,    70,    44,   447,   359,
     340,   389,   353,   136,   185,   187,   134,    -1,   186,    66,
      -1,   188,    69,    -1,    -1,    -1,    73,    74,    75,   189,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,    -1,
      -1,    -1,    89,    -1,    -1,   423,    -1,   425,    95,    -1,
      -1,    98,    99,    -1,    -1,    -1,   434,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   445,    -1,    -1,
     448,   449,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    -1,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    -1,
      -1,    92,    93,    -1,    -1,    -1,    -1,    98,    99,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    -1,    -1,    92,    93,
      -1,    -1,    -1,    -1,    98,    99,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    -1,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    99,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    -1,
      80,    81,    -1,    83,    84,    85,    -1,    -1,    -1,    89,
       3,     4,     5,     6,     7,     8,     9,    -1,    98,    99,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    37,    38,    39,    -1,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,    51,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      83,    -1,    85,    -1,    -1,    -1,    89,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    -1,    98,    99,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    66,    -1,    -1,    69,    -1,    -1,    -1,
      73,    74,    75,    -1,    22,    23,    24,    -1,    -1,    -1,
      83,    84,    85,    31,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    95,    -1,    -1,    98,    99,    -1,    -1,    -1,
      -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    66,    -1,
      -1,    69,    -1,    -1,    -1,    73,    74,    75,    -1,    22,
      23,    24,    -1,    -1,    -1,    83,    84,    85,    31,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,
      98,    99,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    66,    -1,    -1,    69,    -1,    -1,    -1,
      73,    74,    75,    -1,    22,    23,    24,    -1,    -1,    -1,
      83,    84,    85,    31,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    95,    -1,    -1,    98,    99,    -1,    -1,    -1,
      -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    66,    -1,
      -1,    69,    -1,    -1,    -1,    73,    74,    75,    -1,    22,
      23,    24,    -1,    -1,    -1,    83,    84,    85,    31,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,
      98,    99,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    66,    -1,    -1,    69,    -1,    -1,    -1,
      73,    74,    75,    -1,    22,    23,    24,    -1,    -1,    -1,
      83,    84,    85,    31,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    95,    -1,    -1,    98,    99,    -1,    -1,    -1,
      -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    -1,    22,
      23,    24,    -1,    -1,    -1,    83,    84,    85,    31,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    99,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      83,    -1,    85,    -1,    -1,    -1,    89,    -1,    -1,    92,
      93,    94,    -1,    96,    -1,    98,    99,    50,    51,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      83,    -1,    85,    -1,    -1,    -1,    89,    -1,    -1,    92,
      93,    94,    -1,    96,    -1,    98,    99,    50,    51,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      83,    -1,    85,    -1,    -1,    -1,    89,    -1,    -1,    92,
      -1,    94,    -1,    96,    -1,    98,    99,    50,    51,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      83,    -1,    85,    -1,    -1,    -1,    89,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    -1,    98,    99,    50,    51,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    20,    -1,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      83,    -1,    85,    -1,    -1,    -1,    89,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    99,    50,    51,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      83,    -1,    85,    -1,    -1,    -1,    89,     3,     4,     5,
       6,     7,     8,     9,    -1,    98,    99,    50,    51,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    22,    23,    24,    -1,
      -1,    -1,    -1,    66,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      83,    -1,    85,    -1,    50,    51,    89,    -1,    -1,    92,
      -1,    -1,    22,    23,    24,    98,    99,    -1,    -1,    -1,
      66,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    83,    -1,    85,
      50,    51,    -1,    89,    -1,    -1,    -1,    -1,    22,    23,
      24,    -1,    98,    99,    -1,    -1,    66,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    83,    -1,    85,    50,    51,    -1,    89,
      90,    -1,    -1,    -1,    22,    23,    24,    -1,    98,    99,
      -1,    -1,    66,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    83,
      -1,    85,    50,    51,    -1,    89,    90,    -1,    -1,    -1,
      22,    23,    24,    -1,    98,    99,    -1,    -1,    66,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    83,    -1,    85,    50,    51,
      -1,    89,    -1,    -1,    -1,    -1,    22,    23,    24,    -1,
      98,    99,    -1,    -1,    66,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    85,    50,    51,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    98,    99,    -1,    -1,
      66,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    23,    -1,    -1,    83,    -1,    85,
      -1,    -1,    -1,    89,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    98,    99,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    80,    81,    82,    -1,    84,    -1,    86,    -1,    88,
      89,    90,    -1,    -1,    -1,    94,    -1,    -1,    -1,    65,
      -1,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    -1,    80,    81,    82,    -1,    84,    -1,
      86,    -1,    88,    -1,    90,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      65,    -1,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    -1,    80,    81,    82,    -1,    84,
      -1,    86,    65,    88,    89,    90,    -1,    -1,    -1,    94,
      73,    74,    75,    76,    77,    78,    -1,    80,    81,    -1,
      -1,    84,    -1,    65,    87,    -1,    -1,    -1,    -1,    -1,
      93,    73,    74,    75,    76,    77,    78,    -1,    80,    81,
      -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    93,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    -1,    80,    81,    82,    -1,    84,    -1,    86,    87,
      88,    -1,    -1,    65,    92,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    -1,    80,    81,
      82,    -1,    84,    -1,    86,    87,    88,    -1,    -1,    -1,
      92,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    80,    81,    82,    -1,    84,    -1,    86,    -1,    88,
      65,    90,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    -1,    80,    81,    82,    -1,    84,
      -1,    86,    87,    88,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    -1,    84,    -1,
      86,    65,    88,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    80,    81,    82,    65,
      84,    -1,    86,    -1,    88,    -1,    -1,    73,    74,    75,
      76,    77,    78,    -1,    80,    81,    -1,    -1,    84,    -1,
      -1,    87,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,    65,    80,    81,    -1,    -1,    84,    -1,    -1,    73,
      74,    75,    76,    77,    78,    -1,    80,    81,    -1,    -1,
      84
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    65,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    80,    81,    82,    84,    86,    87,
      88,   102,   104,   107,   112,   114,   122,   125,   127,   128,
     146,   149,   150,   151,   157,   158,   160,     3,    92,    89,
      89,    89,     0,   114,     3,    20,    23,    89,   113,   116,
     135,   136,   143,   114,   114,     3,    92,   125,   114,   114,
      92,     3,   121,   123,   124,     3,     4,     5,     6,     7,
       8,     9,    22,    23,    24,    31,    50,    51,    66,    83,
      85,    89,    98,    99,   111,   129,   145,   148,   156,   158,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   178,   156,   178,
      84,   143,   158,   159,   113,    21,    92,   110,   112,   114,
     115,    89,    94,    20,    91,   116,    92,   145,   146,   152,
     153,   123,    21,    91,    93,    89,   164,    89,   164,   164,
      89,    89,   156,   164,   176,   177,   179,    89,    94,   103,
     120,   143,    90,   145,   145,   165,    49,    50,    51,    89,
      94,    96,    23,    25,    26,    22,    24,    52,    53,    33,
      34,    35,    36,    32,    54,    31,    29,    30,    27,    28,
     100,    90,    90,    91,   143,   158,    90,    92,   133,   177,
       3,    20,    37,    38,    39,    41,    42,    43,    44,    45,
      46,    47,    48,    93,   108,   109,   110,   112,   126,   137,
     138,   139,   144,   147,   179,   113,   110,   112,     3,    90,
     114,   132,   140,   141,   142,    23,    69,    95,   159,   177,
     135,   152,    20,    97,   113,   154,   155,    93,   153,    91,
      93,   178,    93,   124,   156,   156,   156,   177,    90,    21,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
     106,    90,    91,    90,   103,   140,    23,    69,    95,   159,
     177,    89,    94,   120,     3,    90,   105,   177,   179,     3,
     165,   165,   165,   166,   166,   167,   167,   168,   168,   168,
     168,   169,   169,   170,   171,   172,   173,   174,   179,     6,
      94,    96,   117,   118,   119,   133,   134,    97,   178,    97,
      89,    89,    89,   147,    89,     3,    20,    20,    20,   179,
      93,   109,    20,    89,   103,   113,   143,    90,    91,    90,
      91,    95,   159,   177,    23,    69,    95,   177,    95,    93,
     178,    97,    20,    91,    93,    90,    90,    90,    91,    92,
     165,   177,   177,    90,    90,    95,   159,   177,    69,    95,
     177,    95,    90,   140,    23,    69,    95,   159,   177,    90,
      91,    95,    97,    90,   178,     3,   133,    21,   119,    91,
      93,   147,    97,   147,   179,   179,   179,    42,   112,   126,
      20,    20,     3,    79,   142,   177,    95,    95,   177,    95,
     178,   155,    38,   130,   131,   156,   134,   177,    95,   177,
      95,    90,    95,   159,   177,    69,    95,   177,    95,   177,
     176,    20,    95,    93,   117,   133,   147,    90,    90,    90,
      89,   126,   126,    95,    95,    97,    90,    91,    97,    91,
      93,    95,    95,   177,    95,   177,    95,   133,   147,   147,
     147,   179,    90,   179,    90,   179,   177,   131,   177,    93,
      95,    95,    40,    90,   147,    90,   147,    90,   147,    20,
     147,   147
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   101,   102,   103,   103,   103,   104,   104,   105,   105,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   107,   108,   108,   109,   109,   110,   110,   111,   111,
     111,   111,   112,   112,   112,   113,   113,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   115,   115,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   117,   118,   118,   119,   119,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   121,
     122,   122,   122,   122,   122,   123,   123,   124,   124,   125,
     125,   126,   126,   127,   127,   128,   128,   129,   130,   130,
     131,   131,   132,   132,   133,   133,   133,   134,   134,   134,
     134,   135,   135,   136,   136,   137,   137,   137,   137,   137,
     137,   138,   138,   138,   138,   138,   139,   139,   139,   140,
     140,   141,   141,   142,   142,   142,   143,   143,   143,   143,
     144,   144,   144,   145,   145,   145,   145,   146,   147,   147,
     147,   147,   147,   147,   148,   148,   149,   149,   149,   149,
     149,   149,   150,   150,   150,   151,   151,   152,   152,   153,
     153,   153,   154,   154,   155,   155,   155,   156,   156,   157,
     157,   158,   158,   158,   158,   159,   159,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   161,   161,   161,   161,   161,   161,   162,
     162,   162,   162,   162,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   164,   164,   164,   164,   164,   164,
     164,   165,   165,   166,   166,   166,   166,   167,   167,   167,
     168,   168,   168,   169,   169,   169,   169,   169,   170,   170,
     170,   171,   171,   172,   172,   173,   173,   174,   174,   175,
     175,   176,   176,   177,   177,   178,   179,   179
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     4,     4,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     2,     1,     1,     2,     3,     1,     1,
       1,     1,     2,     3,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     1,     2,     1,
       3,     3,     4,     6,     5,     5,     6,     5,     4,     4,
       4,     3,     4,     2,     1,     2,     3,     2,     3,     2,
       3,     5,     4,     5,     4,     3,     3,     3,     4,     6,
       5,     5,     6,     4,     4,     2,     3,     3,     4,     1,
       4,     5,     5,     6,     2,     1,     3,     3,     1,     1,
       1,     1,     2,     4,     3,     1,     1,     6,     1,     3,
       3,     3,     1,     3,     3,     4,     1,     2,     1,     4,
       3,     3,     1,     1,     3,     5,     7,     6,     7,     6,
       7,     3,     2,     2,     2,     3,     3,     4,     3,     3,
       1,     1,     3,     2,     2,     1,     3,     2,     2,     1,
       7,     5,     5,     2,     1,     2,     1,     7,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     5,     2,     1,     1,     1,     2,     2,
       3,     1,     1,     3,     2,     3,     1,     2,     1,     1,
       2,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     4,     3,     4,     3,     3,
       2,     2,     6,     7,     1,     2,     2,     2,     2,     4,
       4,     1,     4,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     3,     1,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 89 "c.y" /* yacc.c:1646  */
    { programBlock = (yyvsp[0].block); }
#line 2093 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 93 "c.y" /* yacc.c:1646  */
    {}
#line 2099 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 94 "c.y" /* yacc.c:1646  */
    {}
#line 2105 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 95 "c.y" /* yacc.c:1646  */
    {}
#line 2111 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 101 "c.y" /* yacc.c:1646  */
    {}
#line 2117 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 102 "c.y" /* yacc.c:1646  */
    {}
#line 2123 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 107 "c.y" /* yacc.c:1646  */
    { (yyval.exprvec) = new ExpressionList(); (yyval.exprvec)->push_back((yyvsp[0].expr));}
#line 2129 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 108 "c.y" /* yacc.c:1646  */
    { (yyvsp[-2].exprvec)->push_back((yyvsp[0].expr));}
#line 2135 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 131 "c.y" /* yacc.c:1646  */
    { (yyval.block) = new BlockNode(); (yyval.block)->statements.push_back((yyvsp[0].stmt)); }
#line 2141 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 132 "c.y" /* yacc.c:1646  */
    { (yyvsp[-1].block)->statements.push_back((yyvsp[0].stmt)); }
#line 2147 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 136 "c.y" /* yacc.c:1646  */
    {}
#line 2153 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 137 "c.y" /* yacc.c:1646  */
    {}
#line 2159 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 141 "c.y" /* yacc.c:1646  */
    { (yyval.block) = new BlockNode(); }
#line 2165 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 142 "c.y" /* yacc.c:1646  */
    { (yyval.block)  = (yyvsp[-1].block); }
#line 2171 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 146 "c.y" /* yacc.c:1646  */
    {
		if(isdigit( ((yyvsp[0].string)->c_str())[0] )){
			long val = atol((yyvsp[0].string)->c_str());
			if(val > 2147483647){
				(yyval.expr) = new LongNode(val);
			}else{
		 		(yyval.expr) = new IntNode(atoi((yyvsp[0].string)->c_str()));
	 		}
		  delete (yyvsp[0].string);
		}else{
			(yyval.expr) = new CharNode(((yyvsp[0].string)->c_str())[1]);
		}
			cout<<"Detected as I__CONSTANT\n";
	 }
#line 2190 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 160 "c.y" /* yacc.c:1646  */
    { (yyval.expr) = new DoubleNode(atof((yyvsp[0].string)->c_str())); delete (yyvsp[0].string);cout<<"Detected as IF__CONSTANT\n";  }
#line 2196 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 161 "c.y" /* yacc.c:1646  */
    { (yyval.expr) = new BoolNode(*(yyvsp[0].string)); delete (yyvsp[0].string);cout<<"Detected as B__CONSTANT\n" ; }
#line 2202 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 168 "c.y" /* yacc.c:1646  */
    {}
#line 2208 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 169 "c.y" /* yacc.c:1646  */
    {

		 if((new CHK_TYPE())->isFunc(*(yyvsp[-1].var_init)))
		 	(yyval.stmt) = new FunctionDeclarationNode(*(yyvsp[-2].var_stor), *(yyvsp[-1].var_init));
			else
			(yyval.stmt) = new VariableDeclaration(*(yyvsp[-2].var_stor), *(yyvsp[-1].var_init));
	 }
#line 2220 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 186 "c.y" /* yacc.c:1646  */
    {

		(yyvsp[0].common_dec)->setIsPtr(true);
		(yyval.expr) = (yyvsp[0].common_dec);
	}
#line 2230 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 191 "c.y" /* yacc.c:1646  */
    { }
#line 2236 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 196 "c.y" /* yacc.c:1646  */
    {
		cout<<"----dec_spec 1\n";
		(yyval.var_stor) = new QualStorageTypeNode(NULL, (yyvsp[-1].ident), (yyvsp[0].var_stor));

	}
#line 2246 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 201 "c.y" /* yacc.c:1646  */
    {
cout<<"----dec_spec 2\n";
		(yyval.var_stor) = new QualStorageTypeNode();
		(yyval.var_stor)->setStorage((yyvsp[0].ident));
	}
#line 2256 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 206 "c.y" /* yacc.c:1646  */
    {
cout<<"----dec_spec 3\n";
		/* $$ = new QualStorageTypeNode($<var_stor>2); */
		(yyvsp[0].var_stor)->setType((yyvsp[-1].ident));
		(yyval.var_stor) = (yyvsp[0].var_stor);
}
#line 2267 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 212 "c.y" /* yacc.c:1646  */
    {
cout<<"----dec_spec 4 (type_specifier)\n";
		 (yyval.var_stor) = new QualStorageTypeNode();
		 (yyval.var_stor)->setType((yyvsp[0].ident));
	 }
#line 2277 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 217 "c.y" /* yacc.c:1646  */
    {
cout<<"----dec_spec 5\n";
		(yyvsp[0].var_stor)->setQualifier((yyvsp[-1].ident));
		(yyval.var_stor) =  (yyvsp[0].var_stor);}
#line 2286 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 221 "c.y" /* yacc.c:1646  */
    {
cout<<"----dec_spec 6\n";
		(yyval.var_stor) = new QualStorageTypeNode();
		(yyval.var_stor)->setQualifier((yyvsp[0].ident));
		}
#line 2296 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 226 "c.y" /* yacc.c:1646  */
    {
		cout<<"----dec_spec 7\n";
	}
#line 2304 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 229 "c.y" /* yacc.c:1646  */
    {cout<<"----dec_spec 8\n";}
#line 2310 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 230 "c.y" /* yacc.c:1646  */
    {cout<<"----dec_spec 9\n";}
#line 2316 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 231 "c.y" /* yacc.c:1646  */
    {cout<<"----dec_spec 10\n";}
#line 2322 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 242 "c.y" /* yacc.c:1646  */
    {(yyval.common_dec) = new AssignmentNode(new IdentiferNode(*(yyvsp[0].string))); delete (yyvsp[0].string);  }
#line 2328 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 243 "c.y" /* yacc.c:1646  */
    {(yyval.common_dec) = new AssignmentNode(new IdentiferNode(*(yyvsp[-1].expr)));cout<<"----dir_dec: \"(declarator)\"(2)"<<endl;}
#line 2334 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 244 "c.y" /* yacc.c:1646  */
    {}
#line 2340 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 245 "c.y" /* yacc.c:1646  */
    {}
#line 2346 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 246 "c.y" /* yacc.c:1646  */
    {}
#line 2352 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 247 "c.y" /* yacc.c:1646  */
    {}
#line 2358 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 248 "c.y" /* yacc.c:1646  */
    {}
#line 2364 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 249 "c.y" /* yacc.c:1646  */
    {}
#line 2370 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 250 "c.y" /* yacc.c:1646  */
    {}
#line 2376 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 251 "c.y" /* yacc.c:1646  */
    {}
#line 2382 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 252 "c.y" /* yacc.c:1646  */
    {}
#line 2388 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 253 "c.y" /* yacc.c:1646  */
    {

		 (yyvsp[-1].identparam)->setId((yyvsp[-3].common_dec));
		 cout<<(yyvsp[-1].identparam)->arguments.front()->storageType->type->name<<endl;
		 (yyval.common_dec) = (yyvsp[-1].identparam);
	 }
#line 2399 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 259 "c.y" /* yacc.c:1646  */
    { (yyval.common_dec) = new NIdentifierParam(*(yyvsp[-2].common_dec), true);}
#line 2405 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 260 "c.y" /* yacc.c:1646  */
    {}
#line 2411 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 278 "c.y" /* yacc.c:1646  */
    {{}}
#line 2417 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 327 "c.y" /* yacc.c:1646  */
    {cout<<"----ext_dec 1 (func_def)\n";}
#line 2423 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 328 "c.y" /* yacc.c:1646  */
    {cout<<"----ext_dec 2 (dec)";}
#line 2429 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 333 "c.y" /* yacc.c:1646  */
    {}
#line 2435 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 334 "c.y" /* yacc.c:1646  */
    {cout<<"----exp_stmt: expression ;"<<endl;}
#line 2441 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 339 "c.y" /* yacc.c:1646  */
    {cout<<"--func_def 1\n";}
#line 2447 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 340 "c.y" /* yacc.c:1646  */
    {
		cout<<"--func_def 2(dec_spec declarator compound_statement)\n";
		// TODO this can be a struct also
		cout<<"Name: "<<(yyvsp[-2].var_stor)->type->name<<endl;
		(yyval.stmt) = new FunctionDefinitionNode(*(yyvsp[-2].var_stor), *(yyvsp[-1].expr), *(yyvsp[0].block));}
#line 2457 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 374 "c.y" /* yacc.c:1646  */
    {cout<<"----initializer 1"<<endl;}
#line 2463 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 375 "c.y" /* yacc.c:1646  */
    {cout<<"----initializer 2"<<endl;}
#line 2469 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 376 "c.y" /* yacc.c:1646  */
    {cout<<"----initializer 3"<<endl;}
#line 2475 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 380 "c.y" /* yacc.c:1646  */
    {cout<<"----init_list 1"<<endl;}
#line 2481 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 381 "c.y" /* yacc.c:1646  */
    {cout<<"----init_list 2"<<endl;}
#line 2487 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 391 "c.y" /* yacc.c:1646  */
    {
		cout<<"----in_dec 1 (declarator = initializer)"<<endl;
		(yyval.var_init) = new AssignmentNode(*(yyvsp[-2].expr), (yyvsp[0].expr));
		(yyval.var_init)->setOp((yyvsp[-1].token));
	}
#line 2497 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 396 "c.y" /* yacc.c:1646  */
    {}
#line 2503 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 402 "c.y" /* yacc.c:1646  */
    {}
#line 2509 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 403 "c.y" /* yacc.c:1646  */
    {}
#line 2515 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 407 "c.y" /* yacc.c:1646  */
    {(yyval.stmt) = new WhileLoopNode((yyvsp[-2].expr),(yyvsp[0].block));}
#line 2521 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 408 "c.y" /* yacc.c:1646  */
    {(yyval.stmt) = new DoWhileLoopNode((yyvsp[-2].expr),(yyvsp[-5].block));}
#line 2527 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 409 "c.y" /* yacc.c:1646  */
    {
		(yyval.stmt) = new ForLoopNode((yyvsp[-3].expr),(yyvsp[-2].expr),NULL,(yyvsp[0].block));
	}
#line 2535 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 412 "c.y" /* yacc.c:1646  */
    {
		(yyval.stmt) = new ForLoopNode((yyvsp[-4].expr),(yyvsp[-3].expr),(yyvsp[-2].expr),(yyvsp[0].block));
	}
#line 2543 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 415 "c.y" /* yacc.c:1646  */
    {
		(yyval.stmt) = new ForLoopNode((yyvsp[-3].stmt),(yyvsp[-2].expr),NULL,(yyvsp[0].block));
	}
#line 2551 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 418 "c.y" /* yacc.c:1646  */
    {
		(yyval.stmt) = new ForLoopNode((yyvsp[-4].stmt),(yyvsp[-3].expr),(yyvsp[-2].expr),(yyvsp[0].block));
	}
#line 2559 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 427 "c.y" /* yacc.c:1646  */
    {(yyval.stmt) = new ReturnStatementNode();}
#line 2565 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 428 "c.y" /* yacc.c:1646  */
    {(yyval.stmt) = new ReturnStatementNode((yyvsp[-1].expr));}
#line 2571 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 440 "c.y" /* yacc.c:1646  */
    {(yyval.identparam) = new NIdentifierParam(*(yyvsp[-2].varvec));
		(yyval.identparam)->setEllipsis(true);

		cout<<(yyval.identparam)->arguments.front()->storageType->type->name<<endl;
	}
#line 2581 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 445 "c.y" /* yacc.c:1646  */
    { (yyval.identparam) = new NIdentifierParam(*(yyvsp[0].varvec)); }
#line 2587 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 450 "c.y" /* yacc.c:1646  */
    { (yyval.varvec) = new VariableList(); (yyval.varvec)->push_back((yyvsp[0].var_decl)); }
#line 2593 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 451 "c.y" /* yacc.c:1646  */
    { (yyvsp[-2].varvec)->push_back((yyvsp[0].var_decl)); }
#line 2599 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 458 "c.y" /* yacc.c:1646  */
    {
		 (yyval.var_decl) = new VariableDeclaration(*(yyvsp[-1].var_stor), *(yyvsp[0].expr));

		cout<<(yyval.var_decl)->storageType->type->name<<endl;
	}
#line 2609 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 463 "c.y" /* yacc.c:1646  */
    {}
#line 2615 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 464 "c.y" /* yacc.c:1646  */
    {}
#line 2621 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 468 "c.y" /* yacc.c:1646  */
    {}
#line 2627 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 469 "c.y" /* yacc.c:1646  */
    {}
#line 2633 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 470 "c.y" /* yacc.c:1646  */
    {}
#line 2639 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 471 "c.y" /* yacc.c:1646  */
    {}
#line 2645 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 475 "c.y" /* yacc.c:1646  */
    {

		(yyval.stmt) = new IfNode((yyvsp[-4].expr),(yyvsp[-2].block),(yyvsp[0].block));
	}
#line 2654 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 479 "c.y" /* yacc.c:1646  */
    {

		(yyval.stmt) = new IfNode((yyvsp[-2].expr), (yyvsp[0].block));
	}
#line 2663 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 499 "c.y" /* yacc.c:1646  */
    {}
#line 2669 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 500 "c.y" /* yacc.c:1646  */
    {}
#line 2675 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 501 "c.y" /* yacc.c:1646  */
    {}
#line 2681 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 502 "c.y" /* yacc.c:1646  */
    {}
#line 2687 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 503 "c.y" /* yacc.c:1646  */
    {}
#line 2693 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 504 "c.y" /* yacc.c:1646  */
    {}
#line 2699 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 508 "c.y" /* yacc.c:1646  */
    {(yyval.expr) = new StringNode(*(yyvsp[0].string));delete (yyvsp[0].string);}
#line 2705 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 562 "c.y" /* yacc.c:1646  */
    { (yyval.block) = new BlockNode(); (yyval.block)->statements.push_back((yyvsp[0].stmt)); }
#line 2711 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 563 "c.y" /* yacc.c:1646  */
    { (yyvsp[-1].block)->statements.push_back((yyvsp[0].stmt)); }
#line 2717 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 580 "c.y" /* yacc.c:1646  */
    { (yyval.ident) = new IdentiferNode(*(yyvsp[0].string)); delete (yyvsp[0].string); }
#line 2723 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 581 "c.y" /* yacc.c:1646  */
    { (yyval.ident) = new IdentiferNode(*(yyvsp[0].string)); delete (yyvsp[0].string); }
#line 2729 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 582 "c.y" /* yacc.c:1646  */
    { (yyval.ident) = new IdentiferNode(*(yyvsp[0].string)); delete (yyvsp[0].string); }
#line 2735 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 583 "c.y" /* yacc.c:1646  */
    { (yyval.ident) = new IdentiferNode(*(yyvsp[0].string)); delete (yyvsp[0].string); }
#line 2741 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 584 "c.y" /* yacc.c:1646  */
    { (yyval.ident) = new IdentiferNode(*(yyvsp[0].string)); delete (yyvsp[0].string); }
#line 2747 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 585 "c.y" /* yacc.c:1646  */
    { (yyval.ident) = new IdentiferNode(*(yyvsp[0].string)); delete (yyvsp[0].string); }
#line 2753 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 586 "c.y" /* yacc.c:1646  */
    { (yyval.ident) = new IdentiferNode(*(yyvsp[0].string)); delete (yyvsp[0].string); }
#line 2759 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 587 "c.y" /* yacc.c:1646  */
    { (yyval.ident) = new IdentiferNode(*(yyvsp[0].string)); delete (yyvsp[0].string); }
#line 2765 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 588 "c.y" /* yacc.c:1646  */
    { (yyval.ident) = new IdentiferNode(*(yyvsp[0].string)); delete (yyvsp[0].string); }
#line 2771 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 589 "c.y" /* yacc.c:1646  */
    { (yyval.ident) = new IdentiferNode(*(yyvsp[0].string)); delete (yyvsp[0].string); }
#line 2777 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 609 "c.y" /* yacc.c:1646  */
    {(yyval.expr) = new IdentiferNode(*(yyvsp[0].string)); delete (yyvsp[0].string); }
#line 2783 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 610 "c.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr); }
#line 2789 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 611 "c.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);}
#line 2795 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 612 "c.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[-1].expr);}
#line 2801 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 613 "c.y" /* yacc.c:1646  */
    {}
#line 2807 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 617 "c.y" /* yacc.c:1646  */
    {if(debug)cout<<"---- postfix_expression 1"<<endl;}
#line 2813 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 618 "c.y" /* yacc.c:1646  */
    { }
#line 2819 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 619 "c.y" /* yacc.c:1646  */
    {(yyval.expr) = new FunctionCallNode(*(yyvsp[-2].expr));}
#line 2825 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 620 "c.y" /* yacc.c:1646  */
    {(yyval.expr) = new FunctionCallNode(*(yyvsp[-3].expr), *(yyvsp[-1].exprvec)) ;}
#line 2831 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 621 "c.y" /* yacc.c:1646  */
    { }
#line 2837 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 622 "c.y" /* yacc.c:1646  */
    { }
#line 2843 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 623 "c.y" /* yacc.c:1646  */
    {
		(yyval.expr) = new UnaryOperatorNode(*(yyvsp[-1].expr), (yyvsp[0].token), false);
		}
#line 2851 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 626 "c.y" /* yacc.c:1646  */
    {
		(yyval.expr) = new UnaryOperatorNode(*(yyvsp[-1].expr), (yyvsp[0].token), false);
		 }
#line 2859 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 629 "c.y" /* yacc.c:1646  */
    { }
#line 2865 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 630 "c.y" /* yacc.c:1646  */
    { }
#line 2871 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 634 "c.y" /* yacc.c:1646  */
    {cout<<"---- unary_expression 1"<<endl;}
#line 2877 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 635 "c.y" /* yacc.c:1646  */
    {
		(yyval.expr) = new UnaryOperatorNode(*(yyvsp[0].expr), (yyvsp[-1].token), true);
		}
#line 2885 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 638 "c.y" /* yacc.c:1646  */
    {
		(yyval.expr) = new UnaryOperatorNode(*(yyvsp[0].expr), (yyvsp[-1].token), true);
		}
#line 2893 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 641 "c.y" /* yacc.c:1646  */
    {
		if(dynamic_cast<IntNode *>((yyvsp[0].expr))){
		 (yyval.expr) = new IntNode((yyvsp[-1].token), (yyvsp[0].expr)) ;
	 }else if(dynamic_cast<DoubleNode *>((yyvsp[0].expr))){
		 (yyval.expr) = new DoubleNode((yyvsp[-1].token), (yyvsp[0].expr)) ;
	 }else if(dynamic_cast<LongNode *>((yyvsp[0].expr))){
		 (yyval.expr) = new LongNode((yyvsp[-1].token), (yyvsp[0].expr)) ;
	 }else{
		 cout<<"ERRROR Here in parser\n";
	 }
		 cout<<"Single Unary\n";
	 }
#line 2910 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 653 "c.y" /* yacc.c:1646  */
    {}
#line 2916 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 654 "c.y" /* yacc.c:1646  */
    {}
#line 2922 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 655 "c.y" /* yacc.c:1646  */
    {}
#line 2928 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 660 "c.y" /* yacc.c:1646  */
    {}
#line 2934 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 664 "c.y" /* yacc.c:1646  */
    {cout<<"---- mult_expression 1"<<endl;}
#line 2940 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 665 "c.y" /* yacc.c:1646  */
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr));}
#line 2946 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 666 "c.y" /* yacc.c:1646  */
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr));}
#line 2952 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 667 "c.y" /* yacc.c:1646  */
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr));}
#line 2958 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 671 "c.y" /* yacc.c:1646  */
    {}
#line 2964 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 672 "c.y" /* yacc.c:1646  */
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr));}
#line 2970 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 673 "c.y" /* yacc.c:1646  */
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr));}
#line 2976 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 677 "c.y" /* yacc.c:1646  */
    {}
#line 2982 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 678 "c.y" /* yacc.c:1646  */
    {}
#line 2988 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 679 "c.y" /* yacc.c:1646  */
    {}
#line 2994 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 683 "c.y" /* yacc.c:1646  */
    {}
#line 3000 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 684 "c.y" /* yacc.c:1646  */
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr));}
#line 3006 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 685 "c.y" /* yacc.c:1646  */
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr));}
#line 3012 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 686 "c.y" /* yacc.c:1646  */
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr));}
#line 3018 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 687 "c.y" /* yacc.c:1646  */
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr));}
#line 3024 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 691 "c.y" /* yacc.c:1646  */
    {}
#line 3030 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 692 "c.y" /* yacc.c:1646  */
    {(yyval.expr) = new ExprBoolNode( (yyvsp[-1].token), (yyvsp[-2].expr), (yyvsp[0].expr));
		}
#line 3037 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 694 "c.y" /* yacc.c:1646  */
    {(yyval.expr) = new ExprBoolNode((yyvsp[-1].token), (yyvsp[-2].expr) , (yyvsp[0].expr));
		}
#line 3044 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 700 "c.y" /* yacc.c:1646  */
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr));}
#line 3050 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 705 "c.y" /* yacc.c:1646  */
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr));}
#line 3056 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 710 "c.y" /* yacc.c:1646  */
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr));}
#line 3062 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 714 "c.y" /* yacc.c:1646  */
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr));}
#line 3068 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 719 "c.y" /* yacc.c:1646  */
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr));}
#line 3074 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 724 "c.y" /* yacc.c:1646  */
    {}
#line 3080 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 728 "c.y" /* yacc.c:1646  */
    {cout<<"---- assignment_expression 1"<<endl;}
#line 3086 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 729 "c.y" /* yacc.c:1646  */
    {
		cout<<"---- assignment_expression 2"<<endl;
		(yyval.expr) = new AssignmentNode(*(yyvsp[-2].expr), (yyvsp[0].expr));
		((AssignmentNode *)(yyval.expr))->setOp((yyvsp[-1].token));
	}
#line 3096 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 737 "c.y" /* yacc.c:1646  */
    {}
#line 3102 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 741 "c.y" /* yacc.c:1646  */
    {}
#line 3108 "c.tab.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 742 "c.y" /* yacc.c:1646  */
    {}
#line 3114 "c.tab.cpp" /* yacc.c:1646  */
    break;


#line 3118 "c.tab.cpp" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



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
                      yytoken, &yylval);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 747 "c.y" /* yacc.c:1906  */

#include <stdio.h>

void yyerror(const char *s)
{
	//fflush(stdout);
	printf("*** %s\n", s);
}
