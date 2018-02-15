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

#line 67 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    UNARY = 258,
    NO_ELSE = 259,
    ELSE = 260,
    GE_OP = 261,
    LE_OP = 262,
    EQ_OP = 263,
    NE_OP = 264,
    IF = 265,
    WHILE = 266,
    FOR = 267,
    CONTINUE = 268,
    BREAK = 269,
    RETURN = 270,
    SIZEOF = 271,
    INC_OP = 272,
    DEC_OP = 273,
    LEFT_OP = 274,
    RIGHT_OP = 275,
    AND_OP = 276,
    OR_OP = 277,
    NOT_OP = 278,
    XOR_OP = 279,
    MUL_OP = 280,
    DIV_OP = 281,
    ADD_OP = 282,
    SUB_OP = 283,
    MOD_OP = 284,
    MUL_ASSIGN = 285,
    DIV_ASSIGN = 286,
    MOD_ASSIGN = 287,
    ADD_ASSIGN = 288,
    LEFT_ASSIGN = 289,
    RIGHT_ASSIGN = 290,
    DEF = 291,
    SUB_ASSIGN = 292,
    AND_ASSIGN = 293,
    XOR_ASSIGN = 294,
    OR_ASSIGN = 295,
    INT = 296,
    FLOAT = 297,
    CHAR = 298,
    UNSIGNED = 299,
    SIGNED = 300,
    VOID = 301,
    LONG = 302,
    SHORT = 303,
    IDENTIFIER = 304,
    CONST_INT = 305,
    CONST_FLOAT = 306,
    STRING_LITERAL = 307,
    CONST_CHAR = 308
  };
#endif
/* Tokens.  */
#define UNARY 258
#define NO_ELSE 259
#define ELSE 260
#define GE_OP 261
#define LE_OP 262
#define EQ_OP 263
#define NE_OP 264
#define IF 265
#define WHILE 266
#define FOR 267
#define CONTINUE 268
#define BREAK 269
#define RETURN 270
#define SIZEOF 271
#define INC_OP 272
#define DEC_OP 273
#define LEFT_OP 274
#define RIGHT_OP 275
#define AND_OP 276
#define OR_OP 277
#define NOT_OP 278
#define XOR_OP 279
#define MUL_OP 280
#define DIV_OP 281
#define ADD_OP 282
#define SUB_OP 283
#define MOD_OP 284
#define MUL_ASSIGN 285
#define DIV_ASSIGN 286
#define MOD_ASSIGN 287
#define ADD_ASSIGN 288
#define LEFT_ASSIGN 289
#define RIGHT_ASSIGN 290
#define DEF 291
#define SUB_ASSIGN 292
#define AND_ASSIGN 293
#define XOR_ASSIGN 294
#define OR_ASSIGN 295
#define INT 296
#define FLOAT 297
#define CHAR 298
#define UNSIGNED 299
#define SIGNED 300
#define VOID 301
#define LONG 302
#define SHORT 303
#define IDENTIFIER 304
#define CONST_INT 305
#define CONST_FLOAT 306
#define STRING_LITERAL 307
#define CONST_CHAR 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 1 "parser.y" /* yacc.c:355  */

double val;
char lval[100];

#line 218 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 32 "parser.y" /* yacc.c:358  */

	#include<stdio.h>
	#include<string.h>
	#include "lib.h"  
	int yylex(void);
	int yyerror(const char *s);
	int success = 1;
	char type[20], temp[20];
	char token[100];
	FILE *yyin;

#line 246 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   892

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  78
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  157
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  256

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    74,     2,     2,     2,    17,    19,     2,
      67,    68,    15,    13,    72,    14,    71,    16,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    77,    66,
       6,     8,     7,    76,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    69,     2,    70,    75,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    64,    18,    65,    73,     2,     2,     2,
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
       5,     9,    10,    11,    12,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    47,    47,    48,    52,    53,    54,    55,    56,    60,
      61,    62,    63,    67,    68,    72,    73,    77,    78,    82,
      83,    87,    88,    89,    93,    94,    95,    96,   100,   101,
     102,   103,   107,   108,   112,   113,   114,   115,   116,   117,
     121,   122,   123,   124,   125,   126,   127,   131,   132,   136,
     137,   138,   139,   140,   141,   145,   146,   147,   148,   149,
     150,   154,   155,   159,   160,   161,   162,   166,   167,   168,
     172,   173,   174,   178,   179,   180,   181,   182,   186,   187,
     188,   192,   193,   197,   198,   202,   203,   207,   208,   212,
     213,   217,   218,   222,   223,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   241,   242,   246,   250,
     254,   255,   259,   260,   261,   262,   263,   264,   265,   266,
     270,   271,   275,   276,   280,   281,   285,   286,   287,   288,
     289,   290,   291,   295,   299,   300,   304,   305,   306,   310,
     311,   315,   316,   320,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   336,   337,   338,   342,   343
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "UNARY", "NO_ELSE", "ELSE", "'<'", "'>'",
  "'='", "GE_OP", "LE_OP", "EQ_OP", "NE_OP", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'|'", "'&'", "IF", "WHILE", "FOR", "CONTINUE", "BREAK", "RETURN",
  "SIZEOF", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "AND_OP", "OR_OP",
  "NOT_OP", "XOR_OP", "MUL_OP", "DIV_OP", "ADD_OP", "SUB_OP", "MOD_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "LEFT_ASSIGN",
  "RIGHT_ASSIGN", "DEF", "SUB_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "INT", "FLOAT", "CHAR", "UNSIGNED", "SIGNED", "VOID",
  "LONG", "SHORT", "IDENTIFIER", "CONST_INT", "CONST_FLOAT",
  "STRING_LITERAL", "CONST_CHAR", "'{'", "'}'", "';'", "'('", "')'", "'['",
  "']'", "'.'", "','", "'~'", "'!'", "'^'", "'?'", "':'", "$accept",
  "init_state", "statement", "compound_statement", "many_declarations",
  "many_statements", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "function_definition",
  "global_declaration", "simplest_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "data_type", "init_declarator_list",
  "init_declarator", "specifier_qualifier_list", "declarator",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "id_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,    60,    62,    61,   261,
     262,   263,   264,    43,    45,    42,    47,    37,   124,    38,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   123,   125,    59,    40,    41,    91,
      93,    46,    44,   126,    33,    94,    63,    58
};
# endif

#define YYPACT_NINF -152

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-152)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     572,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
     -32,    41,  -152,  -152,  -152,   -32,   834,   307,   101,  -152,
    -152,   -19,  -152,   179,  -152,   201,   122,   481,  -152,   820,
    -152,   -32,  -152,  -152,   -32,   497,  -152,   820,  -152,  -152,
    -152,  -152,   -46,   -18,    -2,    56,    79,   519,   731,   747,
     747,  -152,  -152,  -152,  -152,  -152,  -152,  -152,   353,  -152,
    -152,  -152,  -152,   257,   273,  -152,  -152,  -152,  -152,  -152,
      15,   107,   769,  -152,   182,    26,    58,    53,    59,    64,
      78,   144,   141,   -22,  -152,  -152,   -16,  -152,  -152,   -35,
     114,   120,  -152,     5,  -152,  -152,  -152,   131,  -152,  -152,
      -3,  -152,   497,  -152,  -152,  -152,   769,   769,   575,  -152,
    -152,  -152,   -15,   353,  -152,   769,  -152,  -152,    17,   834,
     126,   143,  -152,   329,  -152,  -152,  -152,  -152,   591,   769,
     153,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,  -152,   769,  -152,   769,   769,   769,   769,   769,   769,
     769,   769,   769,   769,   769,   769,   769,   769,   769,   769,
     769,   769,   769,  -152,   769,   793,   642,   135,  -152,   138,
    -152,   834,  -152,   158,  -152,  -152,   -17,    33,    34,   575,
    -152,   150,  -152,  -152,   812,  -152,   769,  -152,  -152,    42,
    -152,    39,  -152,  -152,  -152,  -152,  -152,   182,   182,    26,
      26,    58,    58,    58,    58,    53,    53,    59,    64,    78,
     144,   141,   -54,  -152,  -152,   170,   171,  -152,   172,   406,
     658,  -152,  -152,  -152,   425,   409,   409,   680,  -152,  -152,
    -152,   769,  -152,   769,  -152,  -152,  -152,  -152,   173,  -152,
     174,  -152,  -152,   235,  -152,   409,    44,  -152,  -152,  -152,
    -152,   409,  -152,   409,  -152,  -152
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   115,   117,   113,   119,   118,   112,   116,   114,   126,
       0,     0,    32,     2,    33,     0,   111,     0,     0,     1,
       3,     0,   120,   122,   110,     0,     0,     0,    31,     0,
      13,     0,   127,   109,     0,     0,    29,     0,    57,    58,
      56,    55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,    36,    35,    38,    37,     9,    17,     0,    59,
      60,    15,     4,     0,     0,     5,     8,     6,     7,    40,
      49,    61,     0,    63,    67,    70,    73,    78,    81,    83,
      85,    87,    89,    91,    93,   106,     0,   139,   132,   138,
       0,   133,   134,     0,   129,    61,   108,     0,    30,    14,
     122,   121,     0,   153,   123,    28,     0,     0,     0,    24,
      25,    26,     0,     0,    53,     0,    50,    51,     0,   125,
     141,     0,    11,     0,    10,    16,    45,    46,     0,     0,
       0,    95,    96,    97,    98,    99,   101,   102,   100,   103,
     104,   105,     0,    52,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,     0,     0,     0,   136,   137,   143,
     130,     0,   131,     0,   128,   156,     0,     0,     0,     0,
      27,     0,    39,   124,     0,   142,     0,    12,    42,     0,
      47,     0,    44,    94,    64,    65,    66,    68,    69,    71,
      72,    74,    75,    77,    76,    79,    80,    82,    84,    86,
      88,    90,     0,   107,   149,     0,     0,   145,     0,     0,
       0,   135,   140,   154,     0,     0,     0,     0,    54,    62,
      43,     0,    41,     0,   150,   144,   146,   151,     0,   147,
       0,   155,   157,    19,    21,     0,     0,    48,    92,   152,
     148,     0,    22,     0,    20,    23
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -152,  -152,   -62,     8,   183,   184,  -104,  -152,  -152,  -152,
    -152,   234,  -152,  -152,  -152,   -20,  -152,   -66,   -44,    36,
       7,   -38,    92,    93,    91,   109,   112,  -152,   -24,   -21,
    -152,   -39,  -151,     9,     0,  -152,  -152,   255,   185,     2,
     -25,  -152,   119,  -152,   178,   -76,  -152,   -80,  -152
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    61,    62,    29,    64,    65,    66,    67,    68,
      12,    13,    69,    70,   189,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
     142,    86,    97,    30,    31,    16,    21,    22,   120,    17,
     215,    91,    92,    93,   121,   216,   169,   104,   176
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      15,    90,   125,    96,   179,    35,   143,    95,   112,    14,
     161,    15,    18,   168,   103,   218,    24,    23,   164,   118,
      14,   106,   175,   233,     9,    28,    89,     9,   114,   116,
     117,    36,   165,   100,   166,    10,   100,    98,    99,   147,
     148,    19,   126,   127,   185,   105,    99,    33,   223,   107,
     163,   180,    95,    34,   162,   224,   164,   164,   119,   151,
     152,   125,   153,   154,    26,   108,    27,   177,   178,   240,
     155,   156,    99,   172,   118,   227,   118,   173,   194,   195,
     196,   103,   128,   157,   129,   182,   130,   149,   150,   164,
     191,   167,     1,     2,     3,     4,     5,     6,     7,     8,
       9,   225,   226,   197,   198,   164,   164,   190,    10,   232,
     230,   164,   253,   119,   231,   131,   164,   205,   206,   119,
     229,   193,   109,   212,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    96,   213,   242,   110,    95,   132,   133,   134,
     135,   136,   137,   158,   138,   139,   140,   141,   201,   202,
     203,   204,   159,   243,   244,    89,    95,    18,    26,    32,
      27,    89,   160,     1,     2,     3,     4,     5,     6,     7,
       8,    87,   170,   252,    89,   199,   200,    35,   246,   254,
      88,   255,   171,   184,   238,   166,    96,   144,   145,   146,
      95,   174,    26,   103,    27,   219,    37,   220,    63,   248,
     247,   186,   192,    95,    38,    39,    40,   222,   228,    89,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
       1,     2,     3,     4,     5,     6,     7,     8,   234,   235,
     251,   249,   236,    25,   250,    20,    26,   123,    27,   207,
     209,   208,     1,     2,     3,     4,     5,     6,     7,     8,
      51,    52,    53,    54,    55,    25,    56,    57,    58,   210,
      38,    39,    40,   211,    59,    60,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    38,    39,    40,   101,
     221,   181,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,     0,     0,   183,     0,     0,     0,     1,     2,
       3,     4,     5,     6,     7,     8,    51,    52,    53,    54,
      55,    25,   122,    57,    58,     0,     0,     0,     0,     0,
      59,    60,    51,    52,    53,    54,    55,    25,   124,    57,
      58,     0,    38,    39,    40,     0,    59,    60,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,     1,     2,
       3,     4,     5,     6,     7,     8,    38,    39,    40,     0,
       0,    25,    41,     0,    26,     0,    27,     0,     0,    48,
      49,    50,     0,     0,     0,     0,     0,     0,    51,    52,
      53,    54,    55,    25,   187,    57,    58,     0,     0,     0,
       0,     0,    59,    60,     1,     2,     3,     4,     5,     6,
       7,     8,    51,    52,    53,    54,    55,     0,     0,     0,
      58,     0,    38,    39,    40,     0,    59,    60,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    38,    39,
      40,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,    48,    49,    50,     0,     0,     0,     1,     2,     3,
       4,     5,     6,     7,     8,     0,     0,     0,    51,    52,
      53,    54,    55,    25,   237,    57,    58,     0,     0,     0,
       0,     0,    59,    60,    51,    52,    53,    54,    55,   102,
     241,     0,    58,     0,    38,    39,    40,     0,    59,    60,
      41,     0,     0,     0,     0,     0,     0,    48,    49,    50,
      38,    39,    40,     0,     0,     0,    41,     0,     0,     0,
       0,     0,     0,    48,    49,    50,     0,     0,     0,     0,
       0,     0,    38,    39,    40,     0,     0,     0,    41,     0,
      51,    52,    53,    54,    55,    48,    49,    50,    58,     0,
       0,    94,     0,     0,    59,    60,    51,    52,    53,    54,
      55,   102,     0,     0,    58,     0,     0,     0,     0,     0,
      59,    60,     0,     0,     0,     0,     0,     0,    51,    52,
      53,    54,    55,     0,     0,   111,    58,     0,    38,    39,
      40,     0,    59,    60,    41,     0,     0,     0,     0,     0,
       0,    48,    49,    50,    38,    39,    40,     0,     0,     0,
      41,     0,     0,     0,     0,     0,     0,    48,    49,    50,
       0,     0,     0,     1,     2,     3,     4,     5,     6,     7,
       8,     9,     0,     0,    51,    52,    53,    54,    55,    10,
       0,    57,    58,     0,     0,     0,     0,     0,    59,    60,
      51,    52,    53,    54,    55,    38,    39,    40,    58,   188,
       0,    41,     0,     0,    59,    60,     0,     0,    48,    49,
      50,    38,    39,    40,     0,     0,     0,    41,     0,     0,
       0,     0,     0,     0,    48,    49,    50,     0,     0,     0,
       0,     0,     0,    38,    39,    40,     0,     0,     0,    41,
       0,    51,    52,    53,    54,    55,    48,    49,    50,    58,
       0,     0,   217,     0,     0,    59,    60,    51,    52,    53,
      54,    55,     0,     0,     0,    58,     0,     0,   239,     0,
       0,    59,    60,     0,     0,     0,     0,     0,     0,    51,
      52,    53,    54,    55,    38,    39,    40,    58,   245,     0,
      41,     0,     0,    59,    60,     0,     0,    48,    49,    50,
      38,    39,    40,     0,     0,     0,    41,     0,     0,     0,
       0,     0,     0,    48,    49,    50,     0,     0,     0,     0,
       0,     0,    38,    39,    40,     0,     0,     0,    41,     0,
      51,    52,    53,    54,    55,    48,    49,    50,   113,     0,
       0,     0,     0,     0,    59,    60,    51,    52,    53,    54,
      55,     0,     0,     0,   115,     0,     0,     0,     0,     0,
      59,    60,     0,     0,     0,     0,     0,     0,    51,    52,
      53,    54,    55,     0,     0,     0,    58,     0,     0,     0,
       0,     0,    59,    60,     1,     2,     3,     4,     5,     6,
       7,     8,     9,     0,     0,     0,     0,     0,     0,     0,
     165,   214,   166,     1,     2,     3,     4,     5,     6,     7,
       8,     1,     2,     3,     4,     5,     6,     7,     8,   184,
     214,   166,     0,     0,    25,     1,     2,     3,     4,     5,
       6,     7,     8
};

static const yytype_int16 yycheck[] =
{
       0,    26,    64,    27,   108,     8,    72,    27,    47,     0,
      32,    11,    10,    89,    35,   166,    16,    15,    72,    58,
      11,    67,   102,    77,    59,    17,    26,    59,    48,    49,
      50,    23,    67,    31,    69,    67,    34,    29,    29,    13,
      14,     0,    27,    28,   120,    37,    37,    66,    65,    67,
      66,    66,    72,    72,    76,    72,    72,    72,    58,     6,
       7,   123,     9,    10,    67,    67,    69,   106,   107,   220,
      11,    12,    63,    68,   113,   179,   115,    72,   144,   145,
     146,   102,    67,    19,    69,    68,    71,    29,    30,    72,
     129,    89,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    68,    68,   147,   148,    72,    72,   128,    67,    70,
      68,    72,    68,   113,    72,     8,    72,   155,   156,   119,
     186,   142,    66,   162,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   166,   164,   224,    66,   166,    40,    41,    42,
      43,    44,    45,    75,    47,    48,    49,    50,   151,   152,
     153,   154,    18,   225,   226,   165,   186,   165,    67,    68,
      69,   171,    31,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    68,   245,   184,   149,   150,     8,   227,   251,
      68,   253,    72,    67,   219,    69,   220,    15,    16,    17,
     220,    70,    67,   224,    69,    67,    23,    69,    25,   233,
     231,    68,    59,   233,    13,    14,    15,    59,    68,   219,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      51,    52,    53,    54,    55,    56,    57,    58,    68,    68,
       5,    68,    70,    64,    70,    11,    67,    63,    69,   157,
     159,   158,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,   160,
      13,    14,    15,   161,    73,    74,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    13,    14,    15,    34,
     171,   113,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    -1,   119,    -1,    -1,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,
      73,    74,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    -1,    13,    14,    15,    -1,    73,    74,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    51,    52,
      53,    54,    55,    56,    57,    58,    13,    14,    15,    -1,
      -1,    64,    19,    -1,    67,    -1,    69,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    -1,    73,    74,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      67,    -1,    13,    14,    15,    -1,    73,    74,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    13,    14,
      15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    64,    68,    66,    67,    -1,    -1,    -1,
      -1,    -1,    73,    74,    59,    60,    61,    62,    63,    64,
      65,    -1,    67,    -1,    13,    14,    15,    -1,    73,    74,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      13,    14,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    -1,
      59,    60,    61,    62,    63,    26,    27,    28,    67,    -1,
      -1,    70,    -1,    -1,    73,    74,    59,    60,    61,    62,
      63,    64,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    -1,    -1,    66,    67,    -1,    13,    14,
      15,    -1,    73,    74,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    13,    14,    15,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    -1,    59,    60,    61,    62,    63,    67,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    73,    74,
      59,    60,    61,    62,    63,    13,    14,    15,    67,    68,
      -1,    19,    -1,    -1,    73,    74,    -1,    -1,    26,    27,
      28,    13,    14,    15,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      -1,    59,    60,    61,    62,    63,    26,    27,    28,    67,
      -1,    -1,    70,    -1,    -1,    73,    74,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    67,    -1,    -1,    70,    -1,
      -1,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    13,    14,    15,    67,    68,    -1,
      19,    -1,    -1,    73,    74,    -1,    -1,    26,    27,    28,
      13,    14,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    -1,
      59,    60,    61,    62,    63,    26,    27,    28,    67,    -1,
      -1,    -1,    -1,    -1,    73,    74,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    73,    74,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    51,    52,    53,    54,    55,    56,    57,
      58,    51,    52,    53,    54,    55,    56,    57,    58,    67,
      68,    69,    -1,    -1,    64,    51,    52,    53,    54,    55,
      56,    57,    58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      67,    79,    88,    89,   111,   112,   113,   117,   117,     0,
      89,   114,   115,   117,   112,    64,    67,    69,    81,    82,
     111,   112,    68,    66,    72,     8,    81,    82,    13,    14,
      15,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    59,    60,    61,    62,    63,    65,    66,    67,    73,
      74,    80,    81,    82,    83,    84,    85,    86,    87,    90,
      91,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   109,    59,    68,   112,
     118,   119,   120,   121,    70,    93,   106,   110,    81,   111,
     117,   115,    64,   107,   125,    81,    67,    67,    67,    66,
      66,    66,   109,    67,    93,    67,    93,    93,   109,   112,
     116,   122,    65,    83,    65,    80,    27,    28,    67,    69,
      71,     8,    40,    41,    42,    43,    44,    45,    47,    48,
      49,    50,   108,    95,    15,    16,    17,    13,    14,    29,
      30,     6,     7,     9,    10,    11,    12,    19,    75,    18,
      31,    32,    76,    66,    72,    67,    69,   117,   123,   124,
      68,    72,    68,    72,    70,   125,   126,   109,   109,    84,
      66,   122,    68,   116,    67,   123,    68,    65,    68,    92,
     107,   109,    59,   107,    95,    95,    95,    96,    96,    97,
      97,    98,    98,    98,    98,    99,    99,   100,   101,   102,
     103,   104,   109,   107,    68,   118,   123,    70,   110,    67,
      69,   120,    59,    65,    72,    68,    68,    84,    68,    95,
      68,    72,    70,    77,    68,    68,    70,    68,   118,    70,
     110,    65,   125,    80,    80,    68,   109,   107,   106,    68,
      70,     5,    80,    68,    80,    80
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    78,    79,    79,    80,    80,    80,    80,    80,    81,
      81,    81,    81,    82,    82,    83,    83,    84,    84,    85,
      85,    86,    86,    86,    87,    87,    87,    87,    88,    88,
      88,    88,    89,    89,    90,    90,    90,    90,    90,    90,
      91,    91,    91,    91,    91,    91,    91,    92,    92,    93,
      93,    93,    93,    93,    93,    94,    94,    94,    94,    94,
      94,    95,    95,    96,    96,    96,    96,    97,    97,    97,
      98,    98,    98,    99,    99,    99,    99,    99,   100,   100,
     100,   101,   101,   102,   102,   103,   103,   104,   104,   105,
     105,   106,   106,   107,   107,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   109,   109,   110,   111,
     112,   112,   113,   113,   113,   113,   113,   113,   113,   113,
     114,   114,   115,   115,   116,   116,   117,   117,   117,   117,
     117,   117,   117,   118,   119,   119,   120,   120,   120,   121,
     121,   122,   122,   123,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   125,   125,   125,   126,   126
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     2,
       3,     3,     4,     1,     2,     1,     2,     1,     2,     5,
       7,     5,     6,     7,     2,     2,     2,     3,     4,     3,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     4,     3,     4,     3,     2,     2,     1,     3,     1,
       2,     2,     2,     2,     4,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     2,     1,     1,     3,     4,     3,
       4,     4,     3,     1,     1,     3,     2,     2,     1,     1,
       3,     1,     2,     1,     3,     2,     3,     3,     4,     2,
       3,     3,     4,     1,     3,     4,     1,     3
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
        case 35:
#line 113 "parser.y" /* yacc.c:1646  */
    {char a[100]; sprintf(a, "%f", (float)(yyvsp[0].val)); install_constant(a, "FP_CONST");}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 114 "parser.y" /* yacc.c:1646  */
    {char a[100]; sprintf(a, "%d", (int)(yyvsp[0].val)); install_constant(a, "INT_CONST");}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 115 "parser.y" /* yacc.c:1646  */
    {install_constant((yyvsp[0].lval), "CHAR_CONST");}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 116 "parser.y" /* yacc.c:1646  */
    {install_constant((yyvsp[0].lval), "STR_CONST");}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 254 "parser.y" /* yacc.c:1646  */
    { strcpy(temp, (yyvsp[-1].lval)); strcat(temp, " "); strcat(temp, type); strcpy(type, temp); }
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 255 "parser.y" /* yacc.c:1646  */
    { strcpy(type, (yyvsp[0].lval)); }
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 259 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), "void");}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 260 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), "char");}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 261 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), "short");}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 262 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), "int");}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 263 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), "long");}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 264 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), "float");}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 265 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), "signed");}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 266 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), "unsigned");}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 275 "parser.y" /* yacc.c:1646  */
    {}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 276 "parser.y" /* yacc.c:1646  */
    {}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 285 "parser.y" /* yacc.c:1646  */
    {strcpy(token, (yyvsp[0].lval)); install_symbol(token, type);}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1754 "y.tab.c" /* yacc.c:1646  */
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
#line 346 "parser.y" /* yacc.c:1906  */



int main()
{
	FILE *fp;
	fp = fopen("sample.c", "r");
	yyin = fp; 
	yyparse();
	print_symbol_table();
  	print_constant_table();
	return 0;
}

int yyerror(const char *s)
{
	printf("\nParsing Unsuccessful: %s", s);
	return 1;
}
