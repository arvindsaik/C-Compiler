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
    CARROT = 269,
    LEFT_FLOWER = 270,
    RIGHT_FLOWER = 271,
    LEFT_SQUARE_BRACKET = 272,
    RIGHT_SQUARE_BRACKET = 273,
    LEFT_PARENTHESIS = 274,
    RIGHT_PARENTHESIS = 275,
    DOT = 276,
    SEMICOLON = 277,
    COLON = 278,
    INCR = 279,
    DECR = 280,
    NOT = 281,
    BNOT = 282,
    MULTIPLY = 284,
    DIVIDE = 285,
    MOD = 286,
    PLUS = 287,
    MINUS = 288,
    GREAT = 289,
    LESS = 290,
    EGREAT = 291,
    ELESS = 292,
    EQUALITY = 293,
    NEQUAL = 294,
    BAND = 295,
    CARRAYOT = 296,
    BOR = 297,
    AND = 298,
    OR = 299,
    EQUAL = 300,
    PEQUAL = 301,
    MEQUAL = 302,
    SEQUAL = 303,
    BEQUAL = 304,
    COMMA = 305,
    CHAR = 306,
    FLOAT = 307,
    VOID = 308,
    INT = 309,
    IDENTIFIER = 310,
    CONST_FLOAT = 311,
    CONST_INT = 312,
    CONST_CHAR = 313,
    CONST_STR = 314
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
#define CARROT 269
#define LEFT_FLOWER 270
#define RIGHT_FLOWER 271
#define LEFT_SQUARE_BRACKET 272
#define RIGHT_SQUARE_BRACKET 273
#define LEFT_PARENTHESIS 274
#define RIGHT_PARENTHESIS 275
#define DOT 276
#define SEMICOLON 277
#define COLON 278
#define INCR 279
#define DECR 280
#define NOT 281
#define BNOT 282
#define MULTIPLY 284
#define DIVIDE 285
#define MOD 286
#define PLUS 287
#define MINUS 288
#define GREAT 289
#define LESS 290
#define EGREAT 291
#define ELESS 292
#define EQUALITY 293
#define NEQUAL 294
#define BAND 295
#define CARRAYOT 296
#define BOR 297
#define AND 298
#define OR 299
#define EQUAL 300
#define PEQUAL 301
#define MEQUAL 302
#define SEQUAL 303
#define BEQUAL 304
#define COMMA 305
#define CHAR 306
#define FLOAT 307
#define VOID 308
#define INT 309
#define IDENTIFIER 310
#define CONST_FLOAT 311
#define CONST_INT 312
#define CONST_CHAR 313
#define CONST_STR 314

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 22 "parser.y" /* yacc.c:355  */

		struct type_and_value{
			char dtype[20];
			char id_or_const[30];
		}pair;
		char lval[100];
		double val;
		char val2[100];

#line 233 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 38 "parser.y" /* yacc.c:358  */

	#include "lib.h"
	#include <stdlib.h>
	#define OUT stdout
	#define SIZE 100
	int line=1;
    int yylex(void);
    FILE *yyin;
	int yyerror(const char *s);
	int check_scope(char *msg);
	void codegen();
	char *ret_type(char *a,char *b);
	int ret_num(char *a);
	int st[1000];
  	int brack_num = 0;
  	int top = -1;
	char id[100];
	int flag = 0;
	int temp_num = 0;
	struct idr_item{
		char idr_name[30];
	}idr_stack[20];
	int idr_stack_top = -1;
	int numParams = 0;

	
	char return_type[20];
	struct func_param temp[20];
	struct func_param func_call[20];
	int func_call_param = -1;
	int num_params = -1;
	FILE *f;
	char basic_code[300][100];
	int basic_code_len = -1;
	int bpStack[20];
	int bptop = -1;
  char lpStack[20][10];
  int lptop = -1;

  char forLab1[10], forLab2[10];

  int linenum_stack[30];
  int labelCount = 0;
  void addToThreeCode(char *cd)
  {
	  ++basic_code_len;
	  strcpy(basic_code[basic_code_len], cd);
	}
	char * useLabel(){
		char *result = malloc(200*sizeof(char));
		sprintf(result,"Label_%d",labelCount);
		++labelCount;
		return result;
	}
	char * nextLabel(){
		char *result = malloc(200 * sizeof(char));
		sprintf(result, "Label_%d", labelCount);
		return result;
	}
	char *curLabel()
	{
		char *result = malloc(200 * sizeof(char));
		sprintf(result, "Label_%d", labelCount - 1);
		return result;
	}
	void addToStack(int line){
		bpStack[++bptop] = line; 
	}
	int popStack(){
		return bpStack[bptop--];
	}
  void addToLpStack(char *label){
  	lptop++;
		strcpy(lpStack[lptop], label);
	}
	char *popLpStack(){
		return lpStack[lptop--];
	}
	void backPatch(char label[], int cnt){
		if(cnt == 1){
			int temp = popStack();
			strcat(basic_code[temp],label);
			strcat(basic_code[temp],"\n");
		}
		else{
			int temp1 = popStack();
			int temp2 = popStack();
			addToStack(temp1);
			strcat(basic_code[temp2], label);
			strcat(basic_code[temp2], "\n");
		}
	}
	int writeCode(){
		int i;
		for(i=0;i<=basic_code_len;++i){
			fprintf(f, "%s",basic_code[i]);
		}
	}
	

#line 350 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   471

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  124
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  227

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

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
      55,    56,    57,    58,    59
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   141,   141,   142,   143,   144,   145,   150,   151,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   173,   184,
     185,   189,   202,   189,   216,   222,   231,   238,   231,   268,
     275,   268,   291,   299,   315,   290,   336,   337,   342,   355,
     368,   382,   382,   393,   394,   397,   403,   410,   416,   424,
     461,   479,   486,   493,   500,   507,   518,   519,   522,   524,
     525,   528,   542,   543,   544,   559,   568,   594,   614,   617,
     623,   637,   651,   665,   679,   693,   699,   707,   713,   721,
     728,   737,   743,   751,   757,   764,   770,   778,   787,   793,
     802,   812,   822,   831,   837,   845,   853,   859,   867,   875,
     881,   888,   895,   899,   903,   907,   911,   917,   921,   928,
     935,   939,   943,   950,   969,   972,   978,   983,   988,   995,
     999,  1003,  1007,  1011,  1016
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "RETURN", "BREAK", "UNSIGNED", "SIGNED",
  "DO", "WHILE", "FOR", "IF", "ELSE", "CASE", "DEFAULT", "CARROT",
  "LEFT_FLOWER", "RIGHT_FLOWER", "LEFT_SQUARE_BRACKET",
  "RIGHT_SQUARE_BRACKET", "LEFT_PARENTHESIS", "RIGHT_PARENTHESIS", "DOT",
  "SEMICOLON", "COLON", "INCR", "DECR", "NOT", "BNOT", "\"then\"",
  "MULTIPLY", "DIVIDE", "MOD", "PLUS", "MINUS", "GREAT", "LESS", "EGREAT",
  "ELESS", "EQUALITY", "NEQUAL", "BAND", "CARRAYOT", "BOR", "AND", "OR",
  "EQUAL", "PEQUAL", "MEQUAL", "SEQUAL", "BEQUAL", "COMMA", "CHAR",
  "FLOAT", "VOID", "INT", "IDENTIFIER", "CONST_FLOAT", "CONST_INT",
  "CONST_CHAR", "CONST_STR", "$accept", "START", "STATEMENT_BLOCK",
  "STATEMENT", "IF_CONDITION", "$@1", "$@2", "ELSE_STATEMENT",
  "WHILE_LOOP", "$@3", "$@4", "DO_WHILE", "$@5", "$@6", "FOR_LOOP", "$@7",
  "$@8", "$@9", "FOR_PARAMETER", "FUNCTION_DECLARATION", "FUNC_DEF",
  "$@10", "FUNC_PARAMS", "FUNC_PARAMS1", "FUNCTION_CALL", "FUNCTION_LIST",
  "DECLARATION0", "CHR_TYPE", "DECLARATION1", "DECLARATION2", "DEC_ARRAY",
  "ARRAY", "EXPRESSION0", "EXPRESSION1", "EXPRESSION1G", "EXPRESSION1F",
  "EXPRESSION1E", "EXPRESSION1D", "EXPRESSION1C", "EXPRESSION1B",
  "EXPRESSION1A", "EXPRESSION2", "EXPRESSION3", "EXPRESSION3A",
  "EXPRESSION4", "LVALUE", "NUM", "NUMBER_TYPE", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314
};
# endif

#define YYPACT_NINF -193

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-193)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -7,  -193,     3,  -193,   -38,    89,   -27,  -193,    10,  -193,
       1,  -193,    47,    22,    29,  -193,  -193,  -193,  -193,    73,
      82,  -193,    83,  -193,   -10,    64,  -193,    80,     8,    64,
      16,    16,   310,    96,   402,    22,   121,    16,    85,   126,
    -193,   102,   145,   373,   154,  -193,  -193,   151,   190,   123,
      39,  -193,    -9,    -9,    18,    18,    -9,  -193,    43,  -193,
    -193,  -193,   198,  -193,  -193,  -193,  -193,  -193,  -193,   199,
    -193,   -16,  -193,   168,   181,   183,   185,   187,    42,    -4,
     118,   132,  -193,  -193,    75,  -193,    22,   210,  -193,  -193,
     402,   209,   182,  -193,   184,  -193,  -193,   211,  -193,   310,
     216,   402,   402,  -193,   254,    -3,    58,   217,    -9,   219,
    -193,  -193,  -193,   148,  -193,  -193,   413,   320,  -193,  -193,
    -193,  -193,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,  -193,  -193,
     402,   402,   402,   402,   402,  -193,   -11,  -193,    16,    16,
    -193,   231,   402,  -193,   191,    -1,  -193,  -193,  -193,  -193,
     220,   224,   -14,  -193,   193,   194,   225,   196,  -193,   181,
     183,   185,   187,    42,    -4,    -4,   118,   118,   118,   118,
     132,   132,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,
    -193,  -193,   228,     0,   226,  -193,  -193,  -193,   361,   361,
    -193,   361,   402,  -193,   402,   310,  -193,  -193,  -193,     9,
     310,  -193,  -193,  -193,  -193,   229,   255,   243,   402,   310,
    -193,  -193,  -193,  -193,   247,   310,  -193
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     5,     0,     1,     0,     0,     0,   120,     0,   119,
      41,     4,     0,     0,     0,   124,   123,   122,   121,     0,
       0,     3,     0,     2,    64,    57,    60,    63,    64,    56,
      44,    44,     0,     0,     0,     0,     0,    44,     0,     0,
      43,     0,     0,     0,     0,    29,    26,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,    58,   113,   116,
     117,   118,     0,     8,    11,    13,    14,    12,   105,     0,
     114,     0,    69,    75,    77,    79,    81,    83,    85,    88,
      93,    96,    99,   106,   111,   110,     0,     0,    61,    59,
       0,     0,    48,    38,    47,    40,    18,     0,    19,     0,
       0,    37,     0,    16,     0,     0,   111,     0,     0,   113,
     100,   101,   102,   111,   103,   104,     0,     0,    42,     7,
      10,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   108,   109,
       0,     0,     0,     0,     0,    65,     0,    39,     0,     0,
      17,     0,     0,    32,    36,     0,    15,   107,   115,   112,
       0,   117,     0,    50,   118,    52,     0,    51,    68,    76,
      78,    80,    82,    84,    86,    87,    89,    90,    91,    92,
      94,    95,    97,    98,    70,    71,    72,    73,    74,    62,
      46,    45,     0,     0,     0,    21,    66,    67,     0,     0,
      49,     0,     0,    27,    37,     0,    54,    55,    53,     0,
       0,    33,    22,    30,    28,     0,    25,     0,    37,     0,
      23,    31,    34,    24,     0,     0,    35
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -193,  -193,   222,   -61,  -193,  -193,  -193,  -193,  -193,  -193,
    -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -192,  -193,
    -193,  -193,   -13,    34,  -193,   -64,   266,  -193,   259,   239,
    -193,  -193,   -50,   -32,  -193,   152,   153,   155,   156,   157,
      56,   -44,    76,    79,   164,    63,  -193,    11
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    62,    63,    64,   205,   216,   220,    65,   100,
     210,    66,    99,   217,    67,   194,   215,   224,   153,    10,
      11,    22,    39,    40,    68,   166,    69,    13,    29,    26,
      27,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     105,   119,    88,     3,   197,   189,   121,    33,     4,     5,
     108,    97,   211,    14,    15,     1,    16,   157,    42,   195,
     203,     4,     5,    21,    91,    33,   222,    37,    19,   213,
     130,   131,   132,   133,   122,    34,   122,    50,   151,   122,
     146,    41,    41,   119,     4,     5,   109,   122,    41,   122,
     122,   154,   155,    34,     6,     7,     8,     9,    50,   122,
     116,   107,   117,    52,    53,    20,   162,    38,     7,    23,
       9,    54,    55,   109,    59,    60,    61,    24,   158,    56,
     128,   129,   138,   139,    28,   167,   176,   177,   178,   179,
     168,     7,    30,     9,    58,    59,    60,    61,    32,   138,
     139,    31,   193,   140,   141,   142,   143,   144,   184,   185,
     186,   187,   188,   106,    35,   110,   111,   113,   113,   115,
     140,   141,   142,   143,   144,    36,    43,    44,     4,     5,
      45,    46,    47,    48,   206,   207,    90,   208,    49,   103,
      92,    17,    50,    18,   212,    51,    93,    52,    53,   214,
     134,   135,   209,    87,   154,    54,    55,    94,   223,    41,
      41,   136,   137,    56,   226,    95,   167,   167,   154,   167,
     101,   160,   138,   139,    57,     7,    98,     9,    58,    59,
      60,    61,   190,   191,   174,   175,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,    43,    44,     4,     5,    45,    46,    47,    48,   102,
     180,   181,   123,    49,   118,   182,   183,    50,   112,   114,
      51,   120,    52,    53,   124,   125,   126,   127,   145,   147,
      54,    55,   148,   150,   149,   152,   116,   159,    56,   192,
     158,   122,   196,   198,   199,   200,   201,   202,   204,    57,
       7,   218,     9,    58,    59,    60,    61,    43,    44,     4,
       5,    45,    46,    47,    48,   221,   219,   225,    12,    49,
     156,   104,    25,    50,    89,   169,    51,   170,    52,    53,
     171,     0,   172,     0,   173,     0,    54,    55,     0,     0,
       0,     0,     0,     0,    56,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    57,     7,     0,     9,    58,
      59,    60,    61,    43,    44,     4,     5,    45,    46,    47,
      48,     0,     0,     0,     0,    49,     0,     0,     0,    50,
       0,     0,    51,     0,    52,    53,     0,     0,     0,    50,
     163,     0,    54,    55,    52,    53,     0,     0,     0,     0,
      56,     0,    54,    55,     0,     0,     0,     0,     0,     0,
      56,    57,     7,     0,     9,    58,    59,    60,    61,     0,
       0,     0,     0,     0,     0,    58,    59,    60,   164,   165,
      50,     0,     0,     0,     0,    52,    53,     0,     0,     0,
       0,     0,    50,    54,    55,    96,     0,    52,    53,     0,
       0,    56,     0,     0,     0,    54,    55,     0,     0,     0,
       0,     0,     0,    56,     0,     0,    58,    59,    60,   164,
     165,    50,     0,     0,     0,     0,    52,    53,    58,    59,
      60,    61,    50,     0,    54,    55,     0,    52,    53,     0,
       0,     0,    56,     0,     0,    54,    55,     0,     0,     0,
       0,     0,     0,    56,     0,     0,     0,    58,    59,    60,
      61,     0,     0,     0,     0,     0,     0,     0,    58,    59,
     161,    61
};

static const yytype_int16 yycheck[] =
{
      50,    62,    34,     0,    18,    16,    22,    17,     5,     6,
      19,    43,   204,     2,    52,    22,    54,    20,    31,    20,
      20,     5,     6,    22,    37,    17,   218,    19,    55,    20,
      34,    35,    36,    37,    50,    45,    50,    19,    99,    50,
      90,    30,    31,   104,     5,     6,    55,    50,    37,    50,
      50,   101,   102,    45,    51,    52,    53,    54,    19,    50,
      17,    50,    19,    24,    25,    55,   116,    51,    52,    22,
      54,    32,    33,    55,    56,    57,    58,    55,    20,    40,
      38,    39,    24,    25,    55,   117,   130,   131,   132,   133,
     122,    52,    19,    54,    55,    56,    57,    58,    15,    24,
      25,    19,   152,    45,    46,    47,    48,    49,   140,   141,
     142,   143,   144,    50,    50,    52,    53,    54,    55,    56,
      45,    46,    47,    48,    49,    45,     3,     4,     5,     6,
       7,     8,     9,    10,   198,   199,    15,   201,    15,    16,
      55,    52,    19,    54,   205,    22,    20,    24,    25,   210,
      32,    33,   202,    57,   204,    32,    33,    55,   219,   148,
     149,    29,    30,    40,   225,    20,   198,   199,   218,   201,
      19,   108,    24,    25,    51,    52,    22,    54,    55,    56,
      57,    58,   148,   149,   128,   129,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,     3,     4,     5,     6,     7,     8,     9,    10,    19,
     134,   135,    44,    15,    16,   136,   137,    19,    54,    55,
      22,    22,    24,    25,    43,    42,    41,    40,    18,    20,
      32,    33,    50,    22,    50,    19,    17,    20,    40,     8,
      20,    50,    18,    50,    50,    20,    50,    19,    22,    51,
      52,    22,    54,    55,    56,    57,    58,     3,     4,     5,
       6,     7,     8,     9,    10,    22,    11,    20,     2,    15,
      16,    49,    13,    19,    35,   123,    22,   124,    24,    25,
     125,    -1,   126,    -1,   127,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    54,    55,
      56,    57,    58,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    19,
      -1,    -1,    22,    -1,    24,    25,    -1,    -1,    -1,    19,
      20,    -1,    32,    33,    24,    25,    -1,    -1,    -1,    -1,
      40,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    51,    52,    -1,    54,    55,    56,    57,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,
      19,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,
      -1,    -1,    19,    32,    33,    22,    -1,    24,    25,    -1,
      -1,    40,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    55,    56,    57,    58,
      59,    19,    -1,    -1,    -1,    -1,    24,    25,    55,    56,
      57,    58,    19,    -1,    32,    33,    -1,    24,    25,    -1,
      -1,    -1,    40,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    55,    56,    57,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    22,    61,     0,     5,     6,    51,    52,    53,    54,
      79,    80,    86,    87,   107,    52,    54,    52,    54,    55,
      55,    22,    81,    22,    55,    88,    89,    90,    55,    88,
      19,    19,    15,    17,    45,    50,    45,    19,    51,    82,
      83,   107,    82,     3,     4,     7,     8,     9,    10,    15,
      19,    22,    24,    25,    32,    33,    40,    51,    55,    56,
      57,    58,    62,    63,    64,    68,    71,    74,    84,    86,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,    57,    93,    89,
      15,    82,    55,    20,    55,    20,    22,    93,    22,    72,
      69,    19,    19,    16,    62,    92,   105,   107,    19,    55,
     105,   105,   104,   105,   104,   105,    17,    19,    16,    63,
      22,    22,    50,    44,    43,    42,    41,    40,    38,    39,
      34,    35,    36,    37,    32,    33,    29,    30,    24,    25,
      45,    46,    47,    48,    49,    18,    92,    20,    50,    50,
      22,    63,    19,    78,    92,    92,    16,    20,    20,    20,
     105,    57,    92,    20,    58,    59,    85,    93,    93,    95,
      96,    97,    98,    99,   100,   100,   101,   101,   101,   101,
     102,   102,   103,   103,    93,    93,    93,    93,    93,    16,
      83,    83,     8,    92,    75,    20,    18,    18,    50,    50,
      20,    50,    19,    20,    22,    65,    85,    85,    85,    92,
      70,    78,    63,    20,    63,    76,    66,    73,    22,    11,
      67,    22,    78,    63,    77,    20,    63
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    61,    61,    61,    61,    62,    62,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    65,    66,    64,    67,    67,    69,    70,    68,    72,
      73,    71,    75,    76,    77,    74,    78,    78,    79,    79,
      79,    81,    80,    82,    82,    83,    83,    83,    83,    84,
      84,    85,    85,    85,    85,    85,    86,    86,    87,    88,
      88,    89,    89,    89,    89,    90,    91,    91,    92,    92,
      93,    93,    93,    93,    93,    93,    94,    94,    95,    95,
      96,    96,    97,    97,    98,    98,    99,    99,    99,   100,
     100,   100,   100,   100,   101,   101,   101,   102,   102,   102,
     103,   103,   103,   103,   103,   103,   103,   104,   104,   104,
     104,   104,   104,   105,   105,   105,   106,   106,   106,   107,
     107,   107,   107,   107,   107
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     2,     1,     0,     2,     1,     2,
       2,     1,     1,     1,     1,     3,     2,     3,     2,     2,
       1,     0,     0,     8,     2,     0,     0,     0,     7,     0,
       0,     9,     0,     0,     0,    12,     1,     0,     5,     5,
       5,     0,     5,     1,     0,     4,     4,     2,     2,     4,
       3,     1,     1,     3,     3,     3,     2,     2,     1,     3,
       1,     3,     5,     1,     1,     4,     4,     4,     3,     1,
       3,     3,     3,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       2,     2,     2,     2,     2,     1,     1,     3,     2,     2,
       1,     1,     3,     1,     1,     3,     1,     1,     1,     1,
       1,     2,     2,     2,     2
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
        case 7:
#line 150 "parser.y" /* yacc.c:1646  */
    {}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 154 "parser.y" /* yacc.c:1646  */
    {}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 162 "parser.y" /* yacc.c:1646  */
    { 
		if(strcmp(return_type, (yyvsp[-1].pair).dtype)!=0){
			printf("Return type is not correct at line: %d.\n", line);
		}
		else
		{
			char *tempCode = malloc(200*sizeof(char));
			sprintf(tempCode, "return %s ;\n", (yyvsp[-1].pair).id_or_const);
			addToThreeCode(tempCode);
		}
	}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 173 "parser.y" /* yacc.c:1646  */
    {
		if(strcmp(return_type, "void")!=0){
			printf("Return type is not correct at line: %d.\n", line);
		}
		else
		{
			char tempCode[200];
			sprintf(tempCode, "return ;\n");
			addToThreeCode(tempCode);
		}
	}
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 184 "parser.y" /* yacc.c:1646  */
    {}
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 185 "parser.y" /* yacc.c:1646  */
    {}
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 189 "parser.y" /* yacc.c:1646  */
    {
		char tempCode[200];
		if (strcmp((yyvsp[-1].pair).dtype, "int") != 0)
		{
			printf("expresion in if not of type int in line %d\n", line - 1);
		}
		sprintf(tempCode, "if %s == 1 goto %s\ngoto ", (yyvsp[-1].pair).id_or_const, nextLabel());
		addToThreeCode(tempCode);
		addToStack(basic_code_len);
		sprintf(tempCode, "%s : \n", useLabel());
		addToThreeCode(tempCode);
	}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 202 "parser.y" /* yacc.c:1646  */
    {
		char *tempCode = malloc(sizeof(char)*200);
		sprintf(tempCode, "goto ");
		addToThreeCode(tempCode);
		addToStack(basic_code_len);
		sprintf(tempCode,"%s : \n",useLabel());
		addToThreeCode(tempCode);
		backPatch(curLabel(),2);
	}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 211 "parser.y" /* yacc.c:1646  */
    {
		
	}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 216 "parser.y" /* yacc.c:1646  */
    {
		char *tempCode = malloc(sizeof(char)*200);
		sprintf(tempCode, "%s : \n", useLabel());
		addToThreeCode(tempCode);
		backPatch(curLabel(),1);
	}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 222 "parser.y" /* yacc.c:1646  */
    {
		char *tempCode = malloc(sizeof(char) * 200);
		sprintf(tempCode, "%s : \n", useLabel());
		addToThreeCode(tempCode);
		backPatch(curLabel(), 1);
	}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 231 "parser.y" /* yacc.c:1646  */
    {
    	char *tempCode = malloc(sizeof(char)*200);
		sprintf(tempCode,"%s : \n",useLabel());
		addToThreeCode(tempCode);
    	addToLpStack(curLabel());
    }
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 238 "parser.y" /* yacc.c:1646  */
    {
		char *tempCode = malloc(sizeof(char) * 200);
		sprintf(tempCode, "if %s == 1 goto %s\ngoto ", (yyvsp[-1].pair).id_or_const, nextLabel());
		addToThreeCode(tempCode);
   	 	addToStack(basic_code_len);
		sprintf(tempCode, "%s : \n", useLabel());
		addToThreeCode(tempCode);
    }
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 248 "parser.y" /* yacc.c:1646  */
    {
		if(strcmp((yyvsp[-3].pair).dtype,"int") != 0){
			printf("expresion in while not of type int in line %d\n",line);
		}
    else
    {
      char *t = (char *)malloc(sizeof(char)*10);
      t = popLpStack();
      char tempCode[200];
      sprintf(tempCode, "goto %s\n", t);
	  addToThreeCode(tempCode);
      sprintf(tempCode, "%s : \n", useLabel());
	  addToThreeCode(tempCode);
      backPatch(curLabel(), 1);
    }
	}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 268 "parser.y" /* yacc.c:1646  */
    {
  	char *tempCode = malloc(sizeof(char)*200);
	sprintf(tempCode,"%s : \n",useLabel());
	addToThreeCode(tempCode);
    addToLpStack(curLabel());
  }
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 275 "parser.y" /* yacc.c:1646  */
    {
  	char *tempCode = malloc(sizeof(char)*200);
  	sprintf(tempCode, "if %s == 1 goto %s\n", (yyvsp[-1].pair).id_or_const, popLpStack());
	addToThreeCode(tempCode);
  }
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 281 "parser.y" /* yacc.c:1646  */
    {
		if(strcmp((yyvsp[-3].pair).dtype,"int") != 0){
			printf("expresion in do while not of type int in line %d\n",line);
		}
	}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 291 "parser.y" /* yacc.c:1646  */
    {
		char tempCode[200];
		sprintf(tempCode, "%s : \n", useLabel());
		addToThreeCode(tempCode);
		strcpy(forLab1, curLabel());
	}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 299 "parser.y" /* yacc.c:1646  */
    {
		char tempCode[200];
		sprintf(tempCode, "if %s == 1 goto ", (yyvsp[0].pair).id_or_const);
		

		addToThreeCode(tempCode);
		addToStack(basic_code_len);
		sprintf(tempCode, "goto ");
		addToThreeCode(tempCode);
		addToStack(basic_code_len);
		sprintf(tempCode, "%s : \n", useLabel());
		addToThreeCode(tempCode);
		addToLpStack(curLabel());
	}
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 315 "parser.y" /* yacc.c:1646  */
    {
		char tempCode[200];
		sprintf(tempCode, "goto %s\n", forLab1);
		addToThreeCode(tempCode);
		sprintf(tempCode, "%s : \n", useLabel());
		addToThreeCode(tempCode);
		backPatch(curLabel(), 2);
	}
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 325 "parser.y" /* yacc.c:1646  */
    {
		char *t = (char *)malloc(sizeof(char) * 10);
		t = popLpStack();
		char tempCode[200];
		sprintf(tempCode, "goto %s\n", t);
		addToThreeCode(tempCode);
		sprintf(tempCode, "%s : \n", useLabel());
		addToThreeCode(tempCode);
		backPatch(curLabel(), 1);
	}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 336 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.pair).id_or_const, (yyvsp[0].pair).id_or_const);}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 337 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.pair).id_or_const, "1");}
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 343 "parser.y" /* yacc.c:1646  */
    {
		strcpy(return_type, (yyvsp[-4].lval));
		struct table_entry *t = (struct table_entry *)malloc(sizeof(struct table_entry));
		t = give_scope_struct((yyvsp[-3].lval));
		if(t==NULL){
			install_symbol((yyvsp[-3].lval),id, st, top,-1, return_type, 	temp, num_params,1);
		}
		else
			printf("Invalid function name %s: at line number %d.\n", (yyvsp[-3].lval), line);
		num_params=-1;
		strcpy((yyval.lval),(yyvsp[-3].lval));
	}
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 355 "parser.y" /* yacc.c:1646  */
    {
		strcpy(return_type, (yyvsp[-4].pair).dtype);
		struct table_entry *t = (struct table_entry *)malloc(sizeof(struct table_entry));
		t = give_scope_struct((yyvsp[-3].lval));
		if(t==NULL)
		{
			install_symbol((yyvsp[-3].lval), (yyvsp[-4].pair).dtype, st, top, -1, return_type, temp, num_params, 1);
		}
		else
			printf("Invalid function name %s: at line number %d.\n", (yyvsp[-3].lval), line);
		num_params=-1;
		strcpy((yyval.lval),(yyvsp[-3].lval));
	}
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 368 "parser.y" /* yacc.c:1646  */
    {
		strcpy(return_type, (yyvsp[-4].lval));
		struct table_entry *t = (struct table_entry *)malloc(sizeof(struct table_entry));
		t = give_scope_struct((yyvsp[-3].lval));
		if(t==NULL){
			install_symbol((yyvsp[-3].lval),id, st, top,-1, return_type, 	temp, num_params,1);
		}
		else
			printf("Invalid function name %s: at line number %d.\n", (yyvsp[-3].lval), line);
		num_params=-1;
		strcpy((yyval.lval),(yyvsp[-3].lval));
	}
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 382 "parser.y" /* yacc.c:1646  */
    {
		char *tempCode = malloc(sizeof(char) * 200);
		sprintf(tempCode,"func begin %s\n",(yyvsp[0].lval));
		addToThreeCode(tempCode);
	}
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 386 "parser.y" /* yacc.c:1646  */
    {
		char *tempCode = malloc(sizeof(char) * 200);
		sprintf(tempCode, "func end\n");
		addToThreeCode(tempCode);
	}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 397 "parser.y" /* yacc.c:1646  */
    {
		strcpy(temp[++num_params].datatype, (yyvsp[-3].pair).dtype);
		st[++top] = brack_num+1;
		install_symbol((yyvsp[-2].lval), (yyvsp[-3].pair).dtype, st, top,-1, return_type, temp, num_params, 0);	
		top--;
	}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 403 "parser.y" /* yacc.c:1646  */
    {
		strcpy(temp[++num_params].datatype, "void");
		st[++top] = brack_num+1;strcpy(id, (yyvsp[-3].lval));
		install_symbol((yyvsp[-2].lval),(yyvsp[-3].lval), st, top,-1, return_type, temp, num_params, 0);	
		top--;
	}
#line 1998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 410 "parser.y" /* yacc.c:1646  */
    {
		strcpy(temp[++num_params].datatype, (yyvsp[-1].pair).dtype);
		st[++top] = brack_num+1;
		install_symbol((yyvsp[0].lval), (yyvsp[-1].pair).dtype, st, top,-1, return_type, temp, num_params, 0);	
		top--;
	}
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 416 "parser.y" /* yacc.c:1646  */
    {
		strcpy(temp[++num_params].datatype, "char");
		strcpy(id, (yyvsp[-1].lval)); st[++top] = brack_num+1;
		install_symbol((yyvsp[0].lval), (yyvsp[-1].lval), st, top,-1, return_type, temp, num_params, 0);	
		top--;
	}
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 424 "parser.y" /* yacc.c:1646  */
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
			strcpy((yyval.pair).dtype, temp->return_type);

		char *tempCode = malloc(sizeof(char) * 200);
		sprintf(tempCode, "refparam result\n");
		addToThreeCode(tempCode);
		strcpy((yyval.pair).id_or_const, "result");
		sprintf(tempCode, "call %s, %d\n", (yyvsp[-3].lval), numParams);
		addToThreeCode(tempCode);
		numParams = 0;
	}
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 461 "parser.y" /* yacc.c:1646  */
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
			strcpy((yyval.pair).dtype, temp->return_type);
	}
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 479 "parser.y" /* yacc.c:1646  */
    {
		strcpy(func_call[++func_call_param].datatype, (yyvsp[0].pair).dtype);
		char *tempCode = malloc(sizeof(char) * 200);
		sprintf(tempCode,"refparam %s\n",(yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		++numParams;
	}
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 486 "parser.y" /* yacc.c:1646  */
    {
		strcpy(func_call[++func_call_param].datatype, "char*");
		char *tempCode = malloc(sizeof(char) * 200);
		sprintf(tempCode, "refparam %s\n", (yyvsp[0].val2));
		addToThreeCode(tempCode);
		++numParams;
	}
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 493 "parser.y" /* yacc.c:1646  */
    {
		strcpy(func_call[++func_call_param].datatype, (yyvsp[-2].pair).dtype);
		char *tempCode = malloc(sizeof(char) * 200);
		sprintf(tempCode, "refparam %s\n", (yyvsp[-2].pair).id_or_const);
		addToThreeCode(tempCode);
		++numParams;
	}
#line 2119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 500 "parser.y" /* yacc.c:1646  */
    {
		strcpy(func_call[++func_call_param].datatype, "char");
		char *tempCode = malloc(sizeof(char) * 200);
		sprintf(tempCode, "refparam %s\n", (yyvsp[-2].val2));
		addToThreeCode(tempCode);
		++numParams;
	}
#line 2131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 507 "parser.y" /* yacc.c:1646  */
    {
		strcpy(func_call[++func_call_param].datatype, "char*");
		char *tempCode = malloc(sizeof(char) * 200);
		sprintf(tempCode, "refparam %s\n", (yyvsp[-2].val2));
		addToThreeCode(tempCode);
		++numParams;
	}
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 522 "parser.y" /* yacc.c:1646  */
    {strcpy(id, (yyvsp[0].lval));}
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 528 "parser.y" /* yacc.c:1646  */
    {
		struct table_entry *t = (struct table_entry *)malloc(sizeof(struct table_entry));
		t = give_scope_struct((yyvsp[-2].lval));
		if(t==NULL || (t!=NULL && t->is_func!=1) )
		{	install_symbol((yyvsp[-2].lval), id, st, top,-1, return_type, temp, num_params, 0); if(strcmp(id,ret_type(id,(yyvsp[0].pair).dtype)) != 0){printf("Type Mismatch in assignment at line: %d\n", line);}
		}
		else if(t!=NULL)
		{
			printf("There exists a function with same name at line : %d.\n", line);
		}
		char *tempCode = malloc(sizeof(char)*200);
		sprintf(tempCode,"%s = %s;\n",(yyvsp[-2].lval),(yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
	}
#line 2168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 542 "parser.y" /* yacc.c:1646  */
    {}
#line 2174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 543 "parser.y" /* yacc.c:1646  */
    {}
#line 2180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 544 "parser.y" /* yacc.c:1646  */
    {
		struct table_entry *t = (struct table_entry *)malloc(sizeof(struct table_entry));
		t = give_scope_struct((yyvsp[0].lval));
		if(t==NULL || (t!=NULL && t->is_func!=1))
			install_symbol((yyvsp[0].lval), id, st, top,-1, return_type, temp, num_params, 0);
		else
			printf("There exists a function with same name at line : %d.\n", line);
	}
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 559 "parser.y" /* yacc.c:1646  */
    {
		install_symbol((yyvsp[-3].lval), id, st, top,(yyvsp[-1].val), return_type, temp, num_params, 0);
		if((yyvsp[-1].val)<=0){
			printf("Illegal size of array.\n"); 
			yyerror(" ");
		}
	}
#line 2205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 568 "parser.y" /* yacc.c:1646  */
    {
	 char tempo[256];
	 strcpy(tempo,(yyvsp[-3].lval));
	 if(check_scope(tempo) == 0){
	 	printf("line %d : %s is out of scope\n",line,tempo);
	 }
	 else{
	 	if(get_arr_dim((yyvsp[-3].lval),st,top) > 0) {
			strcpy((yyval.pair).dtype, get_datatype((yyvsp[-3].lval), st, top));
			if((yyvsp[-1].val) < 0 || (yyvsp[-1].val)>=get_arr_dim((yyvsp[-3].lval), st, top)){
				printf("Index out of bounds at line %d\n",line);
			}
		}
		else{
			printf("Not an array at line %d\n",line);
		}
	 }
	 char *tempCode = malloc(sizeof(char) * 200);
	 sprintf(tempCode, "t%d = addr(%s);\n",temp_num++,(yyvsp[-3].lval));
	 addToThreeCode(tempCode);
	 sprintf(tempCode, "t%d = 4 * %.0f;\n", temp_num++,(yyvsp[-1].val));
	 addToThreeCode(tempCode);
	 sprintf(tempCode, "t%d = t%d[t%d];\n", temp_num++, temp_num-2,temp_num-1);
	 addToThreeCode(tempCode);
	 sprintf((yyval.pair).id_or_const, "t%d",(temp_num-1));
	}
#line 2236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 594 "parser.y" /* yacc.c:1646  */
    {
			char tempo[256];
			strcpy(tempo,(yyvsp[-3].lval));

			if(check_scope(tempo) == 0){
				printf("line %d : %s is out of scope\n",line,tempo);
			}
			else{
				if(get_arr_dim((yyvsp[-3].lval),st,top) > 0) {
					strcpy((yyval.pair).dtype, get_datatype((yyvsp[-3].lval), st, top));
				}
				else{
				printf("Not an array at line %d\n",line);
				}
			}
		}
#line 2257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 614 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
	}
#line 2265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 617 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,(yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 623 "parser.y" /* yacc.c:1646  */
    {
		if(strcmp((yyvsp[-2].pair).dtype,(yyvsp[0].pair).dtype) == 0 || strcmp(ret_type((yyvsp[-2].pair).dtype, (yyvsp[0].pair).dtype), (yyvsp[-2].pair).dtype)==0) {
			strcpy((yyval.pair).dtype,(yyvsp[-2].pair).dtype); 
			sprintf((yyval.pair).id_or_const,"t%d",temp_num);		
			char tempCode[200];
			sprintf(tempCode, "%s = %s;\n", (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
			addToThreeCode(tempCode);
			temp_num++;
		} 
		else {
			printf("Type mismatch at line %d\n",line);
			strcpy((yyval.pair).dtype,(yyvsp[-2].pair).dtype);
		} 
	}
#line 2293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 637 "parser.y" /* yacc.c:1646  */
    {
		if(strcmp((yyvsp[-2].pair).dtype,(yyvsp[0].pair).dtype) == 0 || strcmp(ret_type((yyvsp[-2].pair).dtype, (yyvsp[0].pair).dtype), (yyvsp[-2].pair).dtype)==0) {
			strcpy((yyval.pair).dtype,(yyvsp[-2].pair).dtype);
			sprintf((yyval.pair).id_or_const, "t%d", temp_num);
			char tempCode[200];
			sprintf(tempCode, "%s = %s;\n", (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
			addToThreeCode(tempCode);
			temp_num++;
		} 
		else {
			printf("Type mismatch at line %d\n",line);
			strcpy((yyval.pair).dtype,(yyvsp[-2].pair).dtype);
		}
	}
#line 2312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 651 "parser.y" /* yacc.c:1646  */
    {
		if(strcmp((yyvsp[-2].pair).dtype,(yyvsp[0].pair).dtype) == 0 || strcmp(ret_type((yyvsp[-2].pair).dtype, (yyvsp[0].pair).dtype), (yyvsp[-2].pair).dtype)==0) {
			strcpy((yyval.pair).dtype,(yyvsp[-2].pair).dtype);
			sprintf((yyval.pair).id_or_const, "t%d", temp_num);
			char tempCode[200];
			sprintf(tempCode, "%s = %s;\n", (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
			addToThreeCode(tempCode);
			temp_num++;
		} 
		else {
			printf("Type mismatch at line %d\n",line);
			strcpy((yyval.pair).dtype,(yyvsp[-2].pair).dtype);
		}
	}
#line 2331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 665 "parser.y" /* yacc.c:1646  */
    {
		if(strcmp((yyvsp[-2].pair).dtype,(yyvsp[0].pair).dtype) == 0 || strcmp(ret_type((yyvsp[-2].pair).dtype, (yyvsp[0].pair).dtype), (yyvsp[-2].pair).dtype)==0) {
			strcpy((yyval.pair).dtype,(yyvsp[-2].pair).dtype);
			sprintf((yyval.pair).id_or_const, "t%d", temp_num);
			char tempCode[200];
			sprintf(tempCode, "%s = %s;\n", (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
			addToThreeCode(tempCode);
			temp_num++;
		} 
		else {
			printf("Type mismatch at line %d\n",line);
			strcpy((yyval.pair).dtype,(yyvsp[-2].pair).dtype);
		}
	}
#line 2350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 679 "parser.y" /* yacc.c:1646  */
    {
		if(strcmp((yyvsp[-2].pair).dtype,(yyvsp[0].pair).dtype) == 0 || strcmp(ret_type((yyvsp[-2].pair).dtype, (yyvsp[0].pair).dtype), (yyvsp[-2].pair).dtype)==0) {
			strcpy((yyval.pair).dtype,(yyvsp[-2].pair).dtype);
			sprintf((yyval.pair).id_or_const, "t%d", temp_num);
			char tempCode[200];
			sprintf(tempCode, "%s = %s;\n", (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
			addToThreeCode(tempCode);
			temp_num++;
		} 
		else {
			printf("Type mismatch at line %d\n",line);
			strcpy((yyval.pair).dtype,(yyvsp[-2].pair).dtype);
		}
	}
#line 2369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 693 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2378 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 699 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
		sprintf((yyval.pair).id_or_const, "t%d", temp_num);
		char tempCode[200];
		sprintf(tempCode, "%s = %s || %s;\n", (yyval.pair).id_or_const, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		temp_num++;
	}
#line 2391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 707 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 713 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
		sprintf((yyval.pair).id_or_const, "t%d", temp_num);
		char tempCode[200];
		sprintf(tempCode, "%s = %s && %s;\n", (yyval.pair).id_or_const, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		temp_num++;
	}
#line 2413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 721 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	
	}
#line 2423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 728 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
		sprintf((yyval.pair).id_or_const, "t%d", temp_num);
		
		char tempCode[200];
		sprintf(tempCode, "%s = %s | %s;\n", (yyval.pair).id_or_const, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		temp_num++;
	}
#line 2437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 737 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 743 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
		sprintf((yyval.pair).id_or_const, "t%d", temp_num);
		
		char tempCode[200];
		sprintf(tempCode, "%s = %s ^ %s;\n", (yyval.pair).id_or_const, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		temp_num++;
	}
#line 2459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 751 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 757 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
		sprintf((yyval.pair).id_or_const, "t%d", temp_num);
		char tempCode[200];
		sprintf(tempCode, "%s = %s & %s;\n", (yyval.pair).id_or_const, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		temp_num++;
	}
#line 2480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 764 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 770 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
		sprintf((yyval.pair).id_or_const, "t%d", temp_num);
		char tempCode[200];
		sprintf(tempCode, "%s = %s == %s;\n", (yyval.pair).id_or_const, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		temp_num++;
	}
#line 2502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 778 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
		sprintf((yyval.pair).id_or_const, "t%d", temp_num);
		
		char tempCode[200];
		sprintf(tempCode, "%s = %s != %s;\n", (yyval.pair).id_or_const, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		temp_num++;
	}
#line 2516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 787 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 793 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
		sprintf((yyval.pair).id_or_const, "t%d", temp_num);
		
		char tempCode[200];
		sprintf(tempCode, "%s = %s > %s;\n", (yyval.pair).id_or_const, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		temp_num++;
	}
#line 2539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 802 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
		sprintf((yyval.pair).id_or_const, "t%d", temp_num);
		
		char tempCode[200];
		sprintf(tempCode, "%s = %s < %s;\n", (yyval.pair).id_or_const, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		temp_num++;
	}
#line 2553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 812 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
		sprintf((yyval.pair).id_or_const, "t%d", temp_num);
		
		char tempCode[200];
		sprintf(tempCode,"%s = %s >= %s;\n", (yyval.pair).id_or_const, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		temp_num++;
	}
#line 2567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 822 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");sprintf((yyval.pair).id_or_const, "t%d", temp_num);
		
		char tempCode[200];
		sprintf(tempCode, "%s = %s <= %s;\n", (yyval.pair).id_or_const, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		temp_num++;
	}
#line 2580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 831 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 837 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,ret_type((yyvsp[-2].pair).dtype,(yyvsp[0].pair).dtype));
		sprintf((yyval.pair).id_or_const, "t%d", temp_num);
		char tempCode[200];
		sprintf(tempCode, "%s = %s + %s;\n", (yyval.pair).id_or_const, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		temp_num++;
	}
#line 2602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 845 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,ret_type((yyvsp[-2].pair).dtype,(yyvsp[0].pair).dtype));
		sprintf((yyval.pair).id_or_const, "t%d", temp_num);
		char tempCode[200];
		sprintf(tempCode, "%s = %s - %s;\n", (yyval.pair).id_or_const, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		temp_num++;
	}
#line 2615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 853 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 859 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,ret_type((yyvsp[-2].pair).dtype,(yyvsp[0].pair).dtype));
		sprintf((yyval.pair).id_or_const, "t%d", temp_num);
		char tempCode[200];
		sprintf(tempCode, "%s = %s * %s;\n",(yyval.pair).id_or_const,(yyvsp[-2].pair).id_or_const,(yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		temp_num++;
	}
#line 2637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 867 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,ret_type((yyvsp[-2].pair).dtype,(yyvsp[0].pair).dtype));
		sprintf((yyval.pair).id_or_const, "t%d", temp_num);
		char tempCode[200];
		sprintf(tempCode, "%s = %s / %s;\n", (yyval.pair).id_or_const, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		temp_num++;
	}
#line 2650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 875 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 881 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
		char *tempCode = malloc(200 * sizeof(char));
		sprintf(tempCode, "%s = %s + 1; \n", (yyvsp[0].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
	}
#line 2671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 888 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
		char *tempCode = malloc(200 * sizeof(char));
		sprintf(tempCode, "%s = %s - 1; \n", (yyvsp[0].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
	}
#line 2683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 895 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 899 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 903 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 907 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 911 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 917 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[-1].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[-1].pair).id_or_const);
	}
#line 2737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 921 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[-1].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[-1].pair).id_or_const);
		char * tempCode = malloc(200*sizeof(char));
		sprintf(tempCode, "%s = %s + 1; \n", (yyvsp[-1].pair).id_or_const, (yyvsp[-1].pair).id_or_const);
		addToThreeCode(tempCode);
	}
#line 2749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 928 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[-1].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[-1].pair).id_or_const);
		char *tempCode = malloc(200 * sizeof(char));
		sprintf(tempCode, "%s = %s - 1; \n", (yyvsp[-1].pair).id_or_const, (yyvsp[-1].pair).id_or_const);
		addToThreeCode(tempCode);
	}
#line 2761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 935 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 939 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 943 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[-1].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[-1].pair).id_or_const);
	}
#line 2788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 950 "parser.y" /* yacc.c:1646  */
    {
		sprintf((yyval.pair).dtype,"%s",get_datatype((yyvsp[0].lval),st,top));
		// printf("%s : %d here \n",$1,get_arr_dim($1,st,top));
		if(get_arr_dim((yyvsp[0].lval),st,top) == -1){
			if(strcmp("printf",(yyvsp[0].lval))!=0){
				char tempo[256];
				strcpy(tempo,(yyvsp[0].lval));
				if(check_scope(tempo) == 0){
					printf("line %d : %s is out of scope\n",line,tempo);
				}
			}
			char temp[20];
			sprintf(temp, "%s", (yyvsp[0].lval));
			sprintf((yyval.pair).id_or_const, "%s", (yyvsp[0].lval));
		}
		else{
			printf("Array identifier cannot be used without subscript at line %d\n",line);
		}
	}
#line 2812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 969 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
	}
#line 2820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 972 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[-1].pair).dtype);
	}
#line 2828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 978 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, "float"); 
		sprintf((yyval.pair).id_or_const,"%f",(yyvsp[0].val)) ;
		char temp[20]; 
	}
#line 2838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 983 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, "int"); 
		sprintf((yyval.pair).id_or_const,"%.0f",(yyvsp[0].val)) ;
		char temp[20]; 
	}
#line 2848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 988 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, "char"); 
		sprintf((yyval.pair).id_or_const,"%s",(yyvsp[0].val2)) ;
		char temp[20]; 
	}
#line 2858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 995 "parser.y" /* yacc.c:1646  */
    {
		strcpy(id, (yyvsp[0].lval)); 
		strcpy((yyval.pair).dtype, (yyvsp[0].lval));
	}
#line 2867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 999 "parser.y" /* yacc.c:1646  */
    {
		strcpy(id, (yyvsp[0].lval)); 
		strcpy((yyval.pair).dtype, (yyvsp[0].lval));
	}
#line 2876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1003 "parser.y" /* yacc.c:1646  */
    {
		strcpy(id, (yyvsp[0].lval)); 
		strcpy((yyval.pair).dtype, id);
	}
#line 2885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1007 "parser.y" /* yacc.c:1646  */
    {
		strcpy(id, (yyvsp[0].lval)); 
		strcpy((yyval.pair).dtype, id);
	}
#line 2894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1011 "parser.y" /* yacc.c:1646  */
    {
		strcpy(id, (yyvsp[0].lval)); 
		strcat(id, "_u");
		strcpy((yyval.pair).dtype, id);
	}
#line 2904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1016 "parser.y" /* yacc.c:1646  */
    {
		strcpy(id, (yyvsp[0].lval)); 
		strcat(id, "_u");
		strcpy((yyval.pair).dtype, id);
	}
#line 2914 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2918 "y.tab.c" /* yacc.c:1646  */
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
#line 1024 "parser.y" /* yacc.c:1906  */


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
// void add_idr_stack(char name[]){
// 	strcpy(idr_stack[++idr_stack_top].name,name);
// }
int main()
{

	FILE *fp;
	fp = fopen("sample.c", "r");
	f = fopen("ICG.txt", "w");
	yyin = fp;
	
	yyparse();
	if(flag!=1)
	{
		print_symbol_table();
		printf("\nParsing Successful\n");
	}
	int i;
	writeCode();
	return 0;
}

int yyerror(const char *s)
{
	flag=1;
	print_symbol_table();
	printf("\nParsing Unsuccessful: %s, at line number:%d.\n", s, line);
	return 0;
}
