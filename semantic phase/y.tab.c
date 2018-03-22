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
    RETURN = 258,
    BREAK = 259,
    UNSIGNED = 260,
    SIGNED = 261,
    DO = 262,
    WHILE = 263,
    FOR = 264,
    IF = 265,
    ELSE = 266,
    CASE = 267,
    DEFAULT = 268,
    L_BRACE = 269,
    R_BRACE = 270,
    L_SQ_BRACE = 271,
    R_SQ_BRACE = 272,
    L_PAREN = 273,
    R_PAREN = 274,
    DOT = 275,
    SEMICOLON = 276,
    COLON = 277,
    INCR = 278,
    DECR = 279,
    NOT = 280,
    BNOT = 281,
    MULTIPLY = 282,
    DIVIDE = 283,
    MOD = 284,
    PLUS = 285,
    MINUS = 286,
    GREAT = 287,
    LESS = 288,
    EGREAT = 289,
    ELESS = 290,
    EQUALITY = 291,
    NEQUAL = 292,
    BAND = 293,
    CARROT = 294,
    BOR = 295,
    AND = 296,
    OR = 297,
    EQUAL = 298,
    PEQUAL = 299,
    MEQUAL = 300,
    SEQUAL = 301,
    BEQUAL = 302,
    COMMA = 303,
    CHAR = 304,
    FLOAT = 305,
    VOID = 306,
    INT = 307,
    IDENTIFIER = 308,
    CONST_FLOAT = 309,
    CONST_INT = 310,
    CONST_CHAR = 311,
    CONST_STR = 312
  };
#endif
/* Tokens.  */
#define RETURN 258
#define BREAK 259
#define UNSIGNED 260
#define SIGNED 261
#define DO 262
#define WHILE 263
#define FOR 264
#define IF 265
#define ELSE 266
#define CASE 267
#define DEFAULT 268
#define L_BRACE 269
#define R_BRACE 270
#define L_SQ_BRACE 271
#define R_SQ_BRACE 272
#define L_PAREN 273
#define R_PAREN 274
#define DOT 275
#define SEMICOLON 276
#define COLON 277
#define INCR 278
#define DECR 279
#define NOT 280
#define BNOT 281
#define MULTIPLY 282
#define DIVIDE 283
#define MOD 284
#define PLUS 285
#define MINUS 286
#define GREAT 287
#define LESS 288
#define EGREAT 289
#define ELESS 290
#define EQUALITY 291
#define NEQUAL 292
#define BAND 293
#define CARROT 294
#define BOR 295
#define AND 296
#define OR 297
#define EQUAL 298
#define PEQUAL 299
#define MEQUAL 300
#define SEQUAL 301
#define BEQUAL 302
#define COMMA 303
#define CHAR 304
#define FLOAT 305
#define VOID 306
#define INT 307
#define IDENTIFIER 308
#define CONST_FLOAT 309
#define CONST_INT 310
#define CONST_CHAR 311
#define CONST_STR 312

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 21 "parser.y" /* yacc.c:355  */

		char lval[100];
		double val;
		char val2[100];

#line 227 "y.tab.c" /* yacc.c:355  */
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

	#include "lib.h"
	#include <stdlib.h>
	#define OUT stdout
	#define SIZE 100
	int line=1;
    int yylex(void);
    FILE *yyin;
	int yyerror(const char *s);
	int check_scope(char *msg);
	char *ret_type(char *a,char *b);
	int ret_num(char *a);
	int st[1000];
  	int brack_num = 0;
  	int top = -1;
	char id[100];
	int flag = 0;

	char return_type[20];
	struct func_param temp[20];
	struct func_param func_call[20];
	int func_call_param = -1;
	int num_params = -1;

#line 268 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   466

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  216

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      55,    56,    57
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    59,    59,    60,    61,    62,    63,    68,    69,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    88,    89,    94,    99,   104,   107,   108,   114,   124,
     134,   146,   149,   150,   153,   155,   158,   160,   164,   194,
     213,   214,   215,   216,   217,   222,   223,   226,   228,   229,
     232,   243,   244,   245,   260,   264,   282,   302,   303,   306,
     307,   308,   309,   310,   311,   314,   315,   318,   319,   322,
     323,   326,   327,   330,   331,   334,   335,   336,   339,   340,
     341,   342,   343,   346,   347,   348,   351,   352,   353,   356,
     357,   358,   359,   360,   361,   362,   365,   366,   367,   368,
     369,   370,   374,   390,   391,   395,   396,   397,   400,   401,
     402,   403,   404,   405
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "RETURN", "BREAK", "UNSIGNED", "SIGNED",
  "DO", "WHILE", "FOR", "IF", "ELSE", "CASE", "DEFAULT", "L_BRACE",
  "R_BRACE", "L_SQ_BRACE", "R_SQ_BRACE", "L_PAREN", "R_PAREN", "DOT",
  "SEMICOLON", "COLON", "INCR", "DECR", "NOT", "BNOT", "MULTIPLY",
  "DIVIDE", "MOD", "PLUS", "MINUS", "GREAT", "LESS", "EGREAT", "ELESS",
  "EQUALITY", "NEQUAL", "BAND", "CARROT", "BOR", "AND", "OR", "EQUAL",
  "PEQUAL", "MEQUAL", "SEQUAL", "BEQUAL", "COMMA", "CHAR", "FLOAT", "VOID",
  "INT", "IDENTIFIER", "CONST_FLOAT", "CONST_INT", "CONST_CHAR",
  "CONST_STR", "$accept", "START", "STATEMENT_BLOCK", "STATEMENT",
  "IF_CONS", "WHILE_LOOP", "DO_WHILE", "FOR_LOOP", "FOR_PAR", "FUNC_DEC",
  "FUNC_DEF", "FUNC_PARAMS", "FUNC_PARAMS1", "FUNC_CALL", "FUNC_LIST",
  "DEC0", "CHR_TYPE", "DEC1", "DEC2", "DEC_ARR", "ARR", "EXPR0", "EXPR1",
  "EXPR1G", "EXPR1F", "EXPR1E", "EXPR1D", "EXPR1C", "EXPR1B", "EXPR1A",
  "EXPR2", "EXPR3", "EXPR3A", "EXPR4", "LVAL", "NUM", "NUM_TYPE", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

#define YYPACT_NINF -166

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-166)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -12,  -166,     7,  -166,   -26,    82,   -22,  -166,    30,  -166,
       0,  -166,     6,    97,    99,  -166,  -166,  -166,  -166,   137,
     141,   345,  -166,  -166,   -11,   120,  -166,   122,   111,   120,
      14,    14,    44,   154,   345,   158,   160,   161,   183,   355,
    -166,   -10,   -10,    17,    17,   -10,  -166,   117,  -166,  -166,
    -166,   237,  -166,  -166,  -166,  -166,  -166,  -166,   159,  -166,
     -15,  -166,   140,   142,   162,   155,   165,    40,    53,    78,
     112,  -166,  -166,   172,  -166,    97,   144,    -8,    97,   186,
      14,   152,   189,  -166,   156,   191,  -166,   190,  -166,   204,
      -8,    -8,    -8,  -166,   291,    32,   419,   201,   -10,   206,
    -166,  -166,  -166,   118,  -166,  -166,   403,   107,  -166,  -166,
    -166,  -166,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,
      -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,  -166,  -166,
      -8,    -8,    -8,    -8,    -8,   207,  -166,  -166,    -8,   208,
     175,  -166,   177,  -166,  -166,   210,    33,   205,   181,    88,
    -166,  -166,  -166,  -166,   211,   214,   -14,  -166,   200,   202,
     215,   209,  -166,   142,   162,   155,   165,    40,    53,    53,
      78,    78,    78,    78,   112,   112,  -166,  -166,  -166,  -166,
    -166,  -166,  -166,  -166,     2,  -166,    14,    14,    -8,   345,
      -8,   345,  -166,  -166,   394,   394,  -166,   394,  -166,  -166,
    -166,   109,  -166,   228,   242,  -166,  -166,  -166,   233,    -8,
     345,  -166,   240,  -166,   345,  -166
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     5,     0,     1,     0,     0,     0,   109,     0,   108,
       0,     4,     0,     0,     0,   113,   112,   111,   110,     0,
       0,     0,     3,     2,    53,    46,    49,    52,    53,    45,
      33,    33,     0,     0,     0,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     0,    47,   102,   105,   106,
     107,     0,     8,    11,    13,    14,    12,    94,     0,   103,
       0,    58,    64,    66,    68,    70,    72,    74,    77,    82,
      85,    88,    95,   100,    99,     0,     0,     0,     0,     0,
      33,     0,     0,    32,     0,     0,    18,     0,    19,     0,
       0,    27,     0,    16,     0,     0,   100,     0,     0,   102,
      89,    90,    91,   100,    92,    93,     0,     0,    31,     7,
      10,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    97,    98,
       0,     0,     0,     0,     0,     0,    50,    48,     0,     0,
      37,    28,    36,    30,    17,     0,     0,     0,    26,     0,
      15,    96,   104,   101,     0,   106,     0,    39,   107,    41,
       0,    40,    57,    65,    67,    69,    71,    73,    75,    76,
      78,    79,    80,    81,    83,    84,    86,    87,    59,    60,
      61,    62,    63,    54,     0,    29,     0,     0,     0,     0,
      27,     0,    55,    56,     0,     0,    38,     0,    51,    35,
      34,     0,    23,     0,    21,    43,    44,    42,     0,    27,
       0,    24,     0,    22,     0,    25
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -166,  -166,   218,   -33,  -166,  -166,  -166,  -166,  -165,  -166,
    -166,   -20,   -43,  -166,  -101,   260,  -166,   250,   187,  -166,
    -166,   -37,   -28,  -166,   151,   157,   163,   150,   153,    28,
     -31,    24,    47,   127,    -3,  -166,    -2
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    51,    52,    53,    54,    55,    56,   147,    10,
      11,    82,    83,    57,   160,    58,    13,    29,    26,    27,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      14,    89,    95,   193,    87,    76,   111,     3,    98,     1,
      39,    85,     4,     5,    21,    41,    42,   198,   109,     4,
       5,    22,    43,    44,    15,   203,    16,    23,    84,    84,
      45,    19,    77,   112,   112,    39,    96,    97,   100,   101,
     103,   103,   105,    99,   212,    47,    48,    49,    50,   136,
     112,   151,   189,   146,   148,   149,     6,     7,     8,     9,
     139,   109,    39,    81,     7,    86,     9,    41,    42,   156,
      99,    48,    49,    50,    43,    44,   118,   119,    84,   161,
     112,   112,    45,    20,   162,   120,   121,   122,   123,   170,
     171,   172,   173,   205,   206,   154,   207,    47,    48,    49,
      50,   184,   178,   179,   180,   181,   182,   191,   124,   125,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,    39,   157,    76,   208,    80,
      41,    42,    17,   106,    18,   107,   112,    43,    44,   126,
     127,   128,   129,   199,   200,    45,   168,   169,   174,   175,
      24,   201,    28,   148,    77,    30,   202,   112,   204,    31,
      47,    48,    49,   158,   159,    79,   161,   161,    78,   161,
     102,   104,   148,   176,   177,    88,    90,   213,    91,    92,
     110,   215,   113,   114,    84,    84,    32,    33,     4,     5,
      34,    35,    36,    37,   116,   128,   129,    38,    93,   135,
     138,    39,   115,   117,    40,   140,    41,    42,   141,   142,
     143,   144,   145,    43,    44,   130,   131,   132,   133,   134,
     153,    45,   106,   186,   183,   187,   190,   185,   188,   112,
     152,   192,    46,     7,   196,     9,    47,    48,    49,    50,
      32,    33,     4,     5,    34,    35,    36,    37,   194,   209,
     195,    38,   108,   210,   211,    39,    94,   197,    40,   214,
      41,    42,    12,    25,   163,   137,   166,    43,    44,     0,
     167,   164,     0,     0,     0,    45,     0,     0,   165,     0,
       0,     0,     0,     0,     0,     0,    46,     7,     0,     9,
      47,    48,    49,    50,    32,    33,     4,     5,    34,    35,
      36,    37,     0,     0,     0,    38,   150,     0,     0,    39,
       0,     0,    40,     0,    41,    42,     0,     0,     0,     0,
       0,    43,    44,     0,     0,     0,     0,     0,     0,    45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      46,     7,     0,     9,    47,    48,    49,    50,    32,    33,
       4,     5,    34,    35,    36,    37,     0,     0,     0,    38,
       4,     5,     0,    39,     0,     0,    40,     0,    41,    42,
       0,     0,     0,    39,     0,    43,    44,     0,    41,    42,
       0,     0,     0,    45,     0,    43,    44,     0,     0,     0,
       0,     0,     0,    45,    46,     7,     0,     9,    47,    48,
      49,    50,     0,     0,     0,     7,     0,     9,    47,    48,
      49,    50,    39,     0,     0,     0,     0,    41,    42,     0,
       0,    39,     0,     0,    43,    44,    41,    42,     0,     0,
       0,     0,    45,    43,    44,     0,     0,     0,   152,     0,
       0,    45,   128,   129,     0,     0,     0,    47,    48,    49,
     158,   159,     0,     0,     0,     0,    47,    48,   155,    50,
       0,     0,   130,   131,   132,   133,   134
};

static const yytype_int16 yycheck[] =
{
       2,    34,    39,    17,    32,    16,    21,     0,    18,    21,
      18,    31,     5,     6,    14,    23,    24,    15,    51,     5,
       6,    21,    30,    31,    50,   190,    52,    21,    30,    31,
      38,    53,    43,    48,    48,    18,    39,    39,    41,    42,
      43,    44,    45,    53,   209,    53,    54,    55,    56,    77,
      48,    19,    19,    90,    91,    92,    49,    50,    51,    52,
      80,    94,    18,    49,    50,    21,    52,    23,    24,   106,
      53,    54,    55,    56,    30,    31,    36,    37,    80,   107,
      48,    48,    38,    53,   112,    32,    33,    34,    35,   120,
     121,   122,   123,   194,   195,    98,   197,    53,    54,    55,
      56,   138,   130,   131,   132,   133,   134,    19,    30,    31,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,    18,    19,    16,    19,    18,
      23,    24,    50,    16,    52,    18,    48,    30,    31,    27,
      28,    23,    24,   186,   187,    38,   118,   119,   124,   125,
      53,   188,    53,   190,    43,    18,   189,    48,   191,    18,
      53,    54,    55,    56,    57,    43,   194,   195,    48,   197,
      43,    44,   209,   126,   127,    21,    18,   210,    18,    18,
      21,   214,    42,    41,   186,   187,     3,     4,     5,     6,
       7,     8,     9,    10,    39,    23,    24,    14,    15,    55,
      14,    18,    40,    38,    21,    53,    23,    24,    19,    53,
      19,    21,     8,    30,    31,    43,    44,    45,    46,    47,
      19,    38,    16,    48,    17,    48,    21,    19,    18,    48,
      19,    17,    49,    50,    19,    52,    53,    54,    55,    56,
       3,     4,     5,     6,     7,     8,     9,    10,    48,    21,
      48,    14,    15,    11,    21,    18,    38,    48,    21,    19,
      23,    24,     2,    13,   113,    78,   116,    30,    31,    -1,
     117,   114,    -1,    -1,    -1,    38,    -1,    -1,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    52,
      53,    54,    55,    56,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    -1,    -1,    18,
      -1,    -1,    21,    -1,    23,    24,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    -1,    52,    53,    54,    55,    56,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
       5,     6,    -1,    18,    -1,    -1,    21,    -1,    23,    24,
      -1,    -1,    -1,    18,    -1,    30,    31,    -1,    23,    24,
      -1,    -1,    -1,    38,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    49,    50,    -1,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    50,    -1,    52,    53,    54,
      55,    56,    18,    -1,    -1,    -1,    -1,    23,    24,    -1,
      -1,    18,    -1,    -1,    30,    31,    23,    24,    -1,    -1,
      -1,    -1,    38,    30,    31,    -1,    -1,    -1,    19,    -1,
      -1,    38,    23,    24,    -1,    -1,    -1,    53,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    53,    54,    55,    56,
      -1,    -1,    43,    44,    45,    46,    47
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,    59,     0,     5,     6,    49,    50,    51,    52,
      67,    68,    73,    74,    94,    50,    52,    50,    52,    53,
      53,    14,    21,    21,    53,    75,    76,    77,    53,    75,
      18,    18,     3,     4,     7,     8,     9,    10,    14,    18,
      21,    23,    24,    30,    31,    38,    49,    53,    54,    55,
      56,    60,    61,    62,    63,    64,    65,    71,    73,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    16,    43,    48,    43,
      18,    49,    69,    70,    94,    69,    21,    80,    21,    61,
      18,    18,    18,    15,    60,    79,    92,    94,    18,    53,
      92,    92,    91,    92,    91,    92,    16,    18,    15,    61,
      21,    21,    48,    42,    41,    40,    39,    38,    36,    37,
      32,    33,    34,    35,    30,    31,    27,    28,    23,    24,
      43,    44,    45,    46,    47,    55,    80,    76,    14,    69,
      53,    19,    53,    19,    21,     8,    79,    66,    79,    79,
      15,    19,    19,    19,    92,    55,    79,    19,    56,    57,
      72,    80,    80,    82,    83,    84,    85,    86,    87,    87,
      88,    88,    88,    88,    89,    89,    90,    90,    80,    80,
      80,    80,    80,    17,    79,    19,    48,    48,    18,    19,
      21,    19,    17,    17,    48,    48,    19,    48,    15,    70,
      70,    79,    61,    66,    61,    72,    72,    72,    19,    21,
      11,    21,    66,    61,    19,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    59,    59,    59,    59,    60,    60,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    62,    62,    63,    64,    65,    66,    66,    67,    67,
      67,    68,    69,    69,    70,    70,    70,    70,    71,    71,
      72,    72,    72,    72,    72,    73,    73,    74,    75,    75,
      76,    76,    76,    76,    77,    78,    78,    79,    79,    80,
      80,    80,    80,    80,    80,    81,    81,    82,    82,    83,
      83,    84,    84,    85,    85,    86,    86,    86,    87,    87,
      87,    87,    87,    88,    88,    88,    89,    89,    89,    90,
      90,    90,    90,    90,    90,    90,    91,    91,    91,    91,
      91,    91,    92,    92,    92,    93,    93,    93,    94,    94,
      94,    94,    94,    94
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     2,     1,     0,     2,     1,     2,
       2,     1,     1,     1,     1,     3,     2,     3,     2,     2,
       1,     5,     7,     5,     7,     9,     1,     0,     5,     5,
       5,     4,     1,     0,     4,     4,     2,     2,     4,     3,
       1,     1,     3,     3,     3,     2,     2,     1,     3,     1,
       3,     5,     1,     1,     4,     4,     4,     3,     1,     3,
       3,     3,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     2,
       2,     2,     2,     2,     1,     1,     3,     2,     2,     1,
       1,     3,     1,     1,     3,     1,     1,     1,     1,     1,
       2,     2,     2,     2
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
        case 17:
#line 80 "parser.y" /* yacc.c:1646  */
    { if(strcmp(return_type, (yyvsp[-1].lval))!=0) printf("Return type is not correct at line: %d.\n", line);}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 81 "parser.y" /* yacc.c:1646  */
    {if(strcmp(return_type, "void")!=0) printf("Return type is not correct at line: %d.\n", line);}
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 88 "parser.y" /* yacc.c:1646  */
    {if(strcmp((yyvsp[-2].lval),"int") != 0){printf("expresion in if not of type int in line %d\n",line-1);}}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 89 "parser.y" /* yacc.c:1646  */
    {if(strcmp((yyvsp[-4].lval),"int") != 0){printf("expresion in if not of type int in line %d\n",line-1);}}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 94 "parser.y" /* yacc.c:1646  */
    {if(strcmp((yyvsp[-2].lval),"int") != 0){printf("expresion in while not of type int in line %d\n",line);}}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 99 "parser.y" /* yacc.c:1646  */
    {if(strcmp((yyvsp[-2].lval),"int") != 0){printf("expresion in do while not of type int in line %d\n",line);}}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 114 "parser.y" /* yacc.c:1646  */
    {strcpy(return_type, (yyvsp[-4].lval));
													struct table_entry *t = (struct table_entry *)malloc(sizeof(struct table_entry));
													t = give_scope_struct((yyvsp[-3].lval));
													if(t==NULL)
													{
													install_symbol((yyvsp[-3].lval),id, st, top,-1, return_type, 	temp, num_params,1); 
													}
													else
														printf("Invalid function name %s: at line number %d.\n", (yyvsp[-3].lval), line);
													num_params=-1;}
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 124 "parser.y" /* yacc.c:1646  */
    {strcpy(return_type, (yyvsp[-4].lval));
													struct table_entry *t = (struct table_entry *)malloc(sizeof(struct table_entry));
													t = give_scope_struct((yyvsp[-3].lval));
													if(t==NULL)
													{
													install_symbol((yyvsp[-3].lval),(yyvsp[-4].lval), st, top,-1, return_type, 	temp, num_params,1); 
													}
													else
														printf("Invalid function name %s: at line number %d.\n", (yyvsp[-3].lval), line);
													num_params=-1;}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 134 "parser.y" /* yacc.c:1646  */
    {strcpy(return_type, (yyvsp[-4].lval));
													struct table_entry *t = (struct table_entry *)malloc(sizeof(struct table_entry));
													t = give_scope_struct((yyvsp[-3].lval));
													if(t==NULL)
													{
													install_symbol((yyvsp[-3].lval),id, st, top,-1, return_type, 	temp, num_params,1); 
													}
													else
														printf("Invalid function name %s: at line number %d.\n", (yyvsp[-3].lval), line);
													num_params=-1;}
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 146 "parser.y" /* yacc.c:1646  */
    {}
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 153 "parser.y" /* yacc.c:1646  */
    {strcpy(temp[++num_params].datatype, (yyvsp[-3].lval));
																st[++top] = brack_num+1;install_symbol((yyvsp[-2].lval), (yyvsp[-3].lval), st, top,-1, return_type, temp, num_params, 0);	top--;}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 155 "parser.y" /* yacc.c:1646  */
    {strcpy(temp[++num_params].datatype, "void");
																st[++top] = brack_num+1;strcpy(id, (yyvsp[-3].lval));install_symbol((yyvsp[-2].lval),(yyvsp[-3].lval), st, top,-1, return_type, temp, num_params, 0);	top--;}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 158 "parser.y" /* yacc.c:1646  */
    {strcpy(temp[++num_params].datatype, (yyvsp[-1].lval));
												st[++top] = brack_num+1;install_symbol((yyvsp[0].lval), (yyvsp[-1].lval), st, top,-1, return_type, temp, num_params, 0);	top--;}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 160 "parser.y" /* yacc.c:1646  */
    {strcpy(temp[++num_params].datatype, "char");
											strcpy(id, (yyvsp[-1].lval)); st[++top] = brack_num+1;install_symbol((yyvsp[0].lval), (yyvsp[-1].lval), st, top,-1, return_type, temp, num_params, 0);	top--;}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 164 "parser.y" /* yacc.c:1646  */
    {
																struct table_entry *temp = (struct table_entry *)malloc(sizeof(struct table_entry));
																temp = give_scope_struct((yyvsp[-3].lval));
																if(temp!=NULL && temp->is_func==1 && strcmp("printf", (yyvsp[-3].lval))!=0 && ((temp->num_params)==func_call_param))
																{
																		int flag=0;
																		for(int i=0;i<=func_call_param;i++)
																		{
																			if(strcmp(temp->params[i].datatype, ret_type(func_call[temp->num_params-i].datatype, temp->params[i].datatype))!=0)
																			{
																				flag = 1;
																				break;
																			}
																		}
																		if(flag)
																		{
																				printf("Invalid function call: %s.\n", (yyvsp[-3].lval));
																		}
																}
																else
																{
																		printf("Invalid function call: %s.\n", (yyvsp[-3].lval));

																}

																func_call_param=-1;
																if(temp!=NULL)
																	strcpy((yyval.lval), temp->return_type);

																					}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 194 "parser.y" /* yacc.c:1646  */
    {
															struct table_entry *temp = (struct table_entry *)malloc(sizeof(struct table_entry));
															temp = give_scope_struct((yyvsp[-2].lval));
															if(temp!=NULL && temp->is_func==1 && strcmp("printf", (yyvsp[-2].lval))!=0 && ((temp->num_params)==func_call_param))
															{

															}
															else
															{
																	printf("Invalid function call: %s.\n", (yyvsp[-2].lval));

															}

															func_call_param=-1;
															if(temp!=NULL)
																strcpy((yyval.lval), temp->return_type);
	}
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 213 "parser.y" /* yacc.c:1646  */
    {strcpy(func_call[++func_call_param].datatype, (yyvsp[0].lval));}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 214 "parser.y" /* yacc.c:1646  */
    {strcpy(func_call[++func_call_param].datatype, "char*");}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 215 "parser.y" /* yacc.c:1646  */
    {strcpy(func_call[++func_call_param].datatype, (yyvsp[-2].lval));}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 216 "parser.y" /* yacc.c:1646  */
    {strcpy(func_call[++func_call_param].datatype, "char");}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 217 "parser.y" /* yacc.c:1646  */
    {strcpy(func_call[++func_call_param].datatype, "char*");}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 226 "parser.y" /* yacc.c:1646  */
    {strcpy(id, (yyvsp[0].lval));}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 232 "parser.y" /* yacc.c:1646  */
    {
								struct table_entry *t = (struct table_entry *)malloc(sizeof(struct table_entry));
								t = give_scope_struct((yyvsp[-2].lval));
								if(t==NULL || (t!=NULL && t->is_func!=1) )
								{	install_symbol((yyvsp[-2].lval), id, st, top,-1, return_type, temp, num_params, 0); if(strcmp(id,ret_type(id,(yyvsp[0].lval))) != 0){printf("Type Mismatch in assignment at line: %d\n", line);}
								}
								else if(t!=NULL)
								{
									printf("There exists a function with same name at line : %d.\n", line);
								}
							}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 243 "parser.y" /* yacc.c:1646  */
    {}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 244 "parser.y" /* yacc.c:1646  */
    {}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 245 "parser.y" /* yacc.c:1646  */
    {
					struct table_entry *t = (struct table_entry *)malloc(sizeof(struct table_entry));
					t = give_scope_struct((yyvsp[0].lval));
					if(t==NULL || (t!=NULL && t->is_func!=1))
						install_symbol((yyvsp[0].lval), id, st, top,-1, return_type, temp, num_params, 0);
					else
						printf("There exists a function with same name at line : %d.\n", line);		
				}
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 260 "parser.y" /* yacc.c:1646  */
    {install_symbol((yyvsp[-3].lval), id, st, top,(yyvsp[-1].val), return_type, temp, num_params, 0);
																								if((yyvsp[-1].val)<=0)	{printf("Illegal size of array.\n"); yyerror(" ");}}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 264 "parser.y" /* yacc.c:1646  */
    {
	 char tempo[256];
	 strcpy(tempo,(yyvsp[-3].lval));
	 if(check_scope(tempo) == 0){
	 	printf("line %d : %s is out of scope\n",line,tempo);
	 }
	 else{
	 	if(get_arr_dim((yyvsp[-3].lval),st,top) > 0) {
			strcpy((yyval.lval), get_datatype((yyvsp[-3].lval), st, top));
			if((yyvsp[-1].val) < 0 || (yyvsp[-1].val)>=get_arr_dim((yyvsp[-3].lval), st, top)){
				printf("Index out of bounds at line %d\n",line);
			}
		}
		else{
			printf("Not an array at line %d\n",line);
		}
	 }
	}
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 282 "parser.y" /* yacc.c:1646  */
    {
			char tempo[256];
			strcpy(tempo,(yyvsp[-3].lval));
			
			if(check_scope(tempo) == 0){
				printf("line %d : %s is out of scope\n",line,tempo);
			}
			else{
				if(get_arr_dim((yyvsp[-3].lval),st,top) > 0) {
					strcpy((yyval.lval), get_datatype((yyvsp[-3].lval), st, top));
				}
				else{
				printf("Not an array at line %d\n",line);
				}
			}
		}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 302 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval),"int");}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 303 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval),(yyvsp[0].lval));}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 306 "parser.y" /* yacc.c:1646  */
    {printf("%s : %s\n",(yyvsp[-2].lval),(yyvsp[0].lval));if(strcmp((yyvsp[-2].lval),(yyvsp[0].lval)) == 0 || strcmp(ret_type((yyvsp[-2].lval), (yyvsp[0].lval)), (yyvsp[-2].lval))==0) strcpy((yyval.lval),(yyvsp[-2].lval)); else {printf("Type mismatch at line %d\n",line);strcpy((yyval.lval),(yyvsp[-2].lval));} }
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 307 "parser.y" /* yacc.c:1646  */
    {printf("%s : %s\n",(yyvsp[-2].lval),(yyvsp[0].lval));if(strcmp((yyvsp[-2].lval),(yyvsp[0].lval)) == 0 || strcmp(ret_type((yyvsp[-2].lval), (yyvsp[0].lval)), (yyvsp[-2].lval))==0) strcpy((yyval.lval),(yyvsp[-2].lval)); else {printf("Type mismatch at line %d\n",line);strcpy((yyval.lval),(yyvsp[-2].lval));}}
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 308 "parser.y" /* yacc.c:1646  */
    {printf("%s : %s\n",(yyvsp[-2].lval),(yyvsp[0].lval));if(strcmp((yyvsp[-2].lval),(yyvsp[0].lval)) == 0 || strcmp(ret_type((yyvsp[-2].lval), (yyvsp[0].lval)), (yyvsp[-2].lval))==0) strcpy((yyval.lval),(yyvsp[-2].lval)); else {printf("Type mismatch at line %d\n",line);strcpy((yyval.lval),(yyvsp[-2].lval));}}
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 309 "parser.y" /* yacc.c:1646  */
    {printf("%s : %s\n",(yyvsp[-2].lval),(yyvsp[0].lval));if(strcmp((yyvsp[-2].lval),(yyvsp[0].lval)) == 0 || strcmp(ret_type((yyvsp[-2].lval), (yyvsp[0].lval)), (yyvsp[-2].lval))==0) strcpy((yyval.lval),(yyvsp[-2].lval)); else {printf("Type mismatch at line %d\n",line);strcpy((yyval.lval),(yyvsp[-2].lval));}}
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 310 "parser.y" /* yacc.c:1646  */
    {printf("%s : %s\n",(yyvsp[-2].lval),(yyvsp[0].lval));if(strcmp((yyvsp[-2].lval),(yyvsp[0].lval)) == 0 || strcmp(ret_type((yyvsp[-2].lval), (yyvsp[0].lval)), (yyvsp[-2].lval))==0) strcpy((yyval.lval),(yyvsp[-2].lval)); else {printf("Type mismatch at line %d\n",line);strcpy((yyval.lval),(yyvsp[-2].lval));}}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 311 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), (yyvsp[0].lval));}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 314 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval),"int");}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 315 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), (yyvsp[0].lval));}
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 318 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval),"int");}
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 319 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), (yyvsp[0].lval));}
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 322 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval),"int");}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 323 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), (yyvsp[0].lval));}
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 326 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval),"int");}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 327 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), (yyvsp[0].lval));}
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 330 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval),"int");}
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 331 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), (yyvsp[0].lval));}
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 334 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval),"int");}
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 335 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval),"int");}
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 336 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), (yyvsp[0].lval));}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 339 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval),"int");}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 340 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval),"int");}
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 341 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval),"int");}
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 342 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval),"int");}
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 343 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), (yyvsp[0].lval));}
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 346 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval),ret_type((yyvsp[-2].lval),(yyvsp[0].lval)));}
#line 2006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 347 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval),ret_type((yyvsp[-2].lval),(yyvsp[0].lval)));}
#line 2012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 348 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), (yyvsp[0].lval));}
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 351 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval),ret_type((yyvsp[-2].lval),(yyvsp[0].lval)));}
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 352 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval),ret_type((yyvsp[-2].lval),(yyvsp[0].lval)));}
#line 2030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 353 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), (yyvsp[0].lval));}
#line 2036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 356 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), (yyvsp[0].lval));}
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 357 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), (yyvsp[0].lval));}
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 358 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), (yyvsp[0].lval));}
#line 2054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 359 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), (yyvsp[0].lval));}
#line 2060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 360 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), (yyvsp[0].lval));}
#line 2066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 361 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), (yyvsp[0].lval));}
#line 2072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 362 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), (yyvsp[0].lval));}
#line 2078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 365 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), (yyvsp[-1].lval));}
#line 2084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 366 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), (yyvsp[-1].lval));}
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 367 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), (yyvsp[-1].lval));}
#line 2096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 368 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), (yyvsp[0].lval));}
#line 2102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 369 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), (yyvsp[0].lval));}
#line 2108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 370 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), (yyvsp[-1].lval));}
#line 2114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 374 "parser.y" /* yacc.c:1646  */
    {
		sprintf((yyval.lval),"%s",get_datatype((yyvsp[0].lval),st,top));
		if(get_arr_dim((yyvsp[0].lval),st,top) == -1){
			if(strcmp("printf",(yyvsp[0].lval))!=0){
				char tempo[256];
				strcpy(tempo,(yyvsp[0].lval));
				//printf(" uhfriouwerhgiuwe %s\n",tempo);
				if(check_scope(tempo) == 0){
					printf("line %d : %s is out of scope\n",line,tempo);
				}
			}
		}
		else{
			printf("Array identifier cannot be used without subscript at line %d\n",line);
		}
	}
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 390 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), (yyvsp[0].lval));}
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 391 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), (yyvsp[-1].lval));}
#line 2147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 395 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), "float");}
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 396 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), "int");}
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 397 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.lval), "char");}
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 400 "parser.y" /* yacc.c:1646  */
    {strcpy(id, (yyvsp[0].lval)); strcpy((yyval.lval), (yyvsp[0].lval));}
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 401 "parser.y" /* yacc.c:1646  */
    {strcpy(id, (yyvsp[0].lval)); strcpy((yyval.lval), (yyvsp[0].lval));}
#line 2177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 402 "parser.y" /* yacc.c:1646  */
    {strcpy(id, (yyvsp[0].lval)); strcpy((yyval.lval), id);}
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 403 "parser.y" /* yacc.c:1646  */
    {strcpy(id, (yyvsp[0].lval)); strcpy((yyval.lval), id);}
#line 2189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 404 "parser.y" /* yacc.c:1646  */
    {strcpy(id, (yyvsp[0].lval)); strcat(id, "_u");strcpy((yyval.lval), id);}
#line 2195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 405 "parser.y" /* yacc.c:1646  */
    {strcpy(id, (yyvsp[0].lval)); strcat(id, "_u");strcpy((yyval.lval), id);}
#line 2201 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2205 "y.tab.c" /* yacc.c:1646  */
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
#line 409 "parser.y" /* yacc.c:1906  */

int ret_num(char *a){
	int ans;
	if(strcmp(a,"char") == 0) return 1;
	if(strcmp(a,"int") == 0) return 2;
	if(strcmp(a,"int_u") == 0) return 3;
	if(strcmp(a,"float") == 0) return 4;
	if(strcmp(a,"float_u") == 0) return 5;
}
char *ret_type(char *a,char *b){
    int a1 = ret_num(a);
    int a2 = ret_num(b);
    if(a1 > a2) return a;
    else return b;
}
int check_scope(char * msg){

	struct table_entry *temp = (struct table_entry *)malloc(sizeof(struct table_entry));
	temp = give_scope_struct(msg);

	if(temp == NULL){
		return 0;
	}
	int flag = 1;
	int iter = 0;

  int i,j;
  int flg1 = 0,flg2 = 0;

  for(i=0;i<=temp->num_of_scopes;++i){
    flg1 = 0;
    for(j=0;j<=temp->tp[i];++j){
      if(temp->st_state[i][j] != st[j]){
        flg1 = 1;
        break;
      }
    }
    if(flg1 == 0 && temp->tp[i] <= top){
      flg2 = 1;
      break;
    }
  }
  return flg2;
}
int main()
{

	FILE *fp;
	fp = fopen("sample.c", "r");
	yyin = fp;
	yyparse();
	if(flag!=1)
	{
		print_symbol_table();
		printf("\nParsing Successful\n");
	}
	return 0;
}

int yyerror(const char *s)
{
	flag=1;
	print_symbol_table();
	printf("\nParsing Unsuccessful: %s, at line number:%d.\n", s, line);
	return 0;
}
