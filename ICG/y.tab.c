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
    MULTIPLY = 283,
    DIVIDE = 284,
    MOD = 285,
    PLUS = 286,
    MINUS = 287,
    GREAT = 288,
    LESS = 289,
    EGREAT = 290,
    ELESS = 291,
    EQUALITY = 292,
    NEQUAL = 293,
    BAND = 294,
    CARROT = 295,
    BOR = 296,
    AND = 297,
    OR = 298,
    EQUAL = 299,
    PEQUAL = 300,
    MEQUAL = 301,
    SEQUAL = 302,
    BEQUAL = 303,
    COMMA = 304,
    CHAR = 305,
    FLOAT = 306,
    VOID = 307,
    INT = 308,
    IDENTIFIER = 309,
    CONST_FLOAT = 310,
    CONST_INT = 311,
    CONST_CHAR = 312,
    CONST_STR = 313
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
#define MULTIPLY 283
#define DIVIDE 284
#define MOD 285
#define PLUS 286
#define MINUS 287
#define GREAT 288
#define LESS 289
#define EGREAT 290
#define ELESS 291
#define EQUALITY 292
#define NEQUAL 293
#define BAND 294
#define CARROT 295
#define BOR 296
#define AND 297
#define OR 298
#define EQUAL 299
#define PEQUAL 300
#define MEQUAL 301
#define SEQUAL 302
#define BEQUAL 303
#define COMMA 304
#define CHAR 305
#define FLOAT 306
#define VOID 307
#define INT 308
#define IDENTIFIER 309
#define CONST_FLOAT 310
#define CONST_INT 311
#define CONST_CHAR 312
#define CONST_STR 313

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

#line 231 "y.tab.c" /* yacc.c:355  */
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
	

#line 348 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   455

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  124
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  227

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

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
      55,    56,    57,    58
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
     525,   528,   539,   540,   541,   556,   565,   591,   611,   614,
     620,   634,   648,   662,   676,   690,   696,   704,   710,   718,
     725,   734,   740,   748,   754,   761,   767,   775,   784,   790,
     799,   809,   819,   828,   834,   842,   850,   856,   864,   872,
     878,   885,   892,   896,   900,   904,   908,   914,   918,   925,
     932,   936,   940,   947,   966,   969,   975,   980,   985,   992,
     996,  1000,  1004,  1008,  1013
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
  "SEMICOLON", "COLON", "INCR", "DECR", "NOT", "BNOT", "\"then\"",
  "MULTIPLY", "DIVIDE", "MOD", "PLUS", "MINUS", "GREAT", "LESS", "EGREAT",
  "ELESS", "EQUALITY", "NEQUAL", "BAND", "CARROT", "BOR", "AND", "OR",
  "EQUAL", "PEQUAL", "MEQUAL", "SEQUAL", "BEQUAL", "COMMA", "CHAR",
  "FLOAT", "VOID", "INT", "IDENTIFIER", "CONST_FLOAT", "CONST_INT",
  "CONST_CHAR", "CONST_STR", "$accept", "START", "STATEMENT_BLOCK",
  "STATEMENT", "IF_CONS", "$@1", "$@2", "ELSE_STATEMENT", "WHILE_LOOP",
  "$@3", "$@4", "DO_WHILE", "$@5", "$@6", "FOR_LOOP", "$@7", "$@8", "$@9",
  "FOR_PAR", "FUNC_DEC", "FUNC_DEF", "$@10", "FUNC_PARAMS", "FUNC_PARAMS1",
  "FUNC_CALL", "FUNC_LIST", "DEC0", "CHR_TYPE", "DEC1", "DEC2", "DEC_ARR",
  "ARR", "EXPR0", "EXPR1", "EXPR1G", "EXPR1F", "EXPR1E", "EXPR1D",
  "EXPR1C", "EXPR1B", "EXPR1A", "EXPR2", "EXPR3", "EXPR3A", "EXPR4",
  "LVAL", "NUM", "NUM_TYPE", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313
};
# endif

#define YYPACT_NINF -196

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-196)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       3,  -196,    25,  -196,   -37,    35,    29,  -196,    33,  -196,
      72,  -196,    93,    71,    83,  -196,  -196,  -196,  -196,    -1,
     125,  -196,   132,  -196,     6,   104,  -196,   113,   -10,   104,
      41,    41,   253,   109,   358,    71,   156,    41,   122,   163,
    -196,   129,   165,   354,   164,  -196,  -196,   191,   196,    50,
     263,  -196,   -15,   -15,    66,    66,   -15,  -196,   108,  -196,
    -196,  -196,   124,  -196,  -196,  -196,  -196,  -196,  -196,   194,
    -196,    46,  -196,   174,   176,   179,   183,   185,   -17,    -7,
       1,    34,  -196,  -196,   187,  -196,    71,   208,  -196,  -196,
     358,   207,   178,  -196,   189,  -196,  -196,   215,  -196,   253,
     210,   358,   358,  -196,   198,   -14,   379,   220,   -15,   224,
    -196,  -196,  -196,    56,  -196,  -196,   398,   303,  -196,  -196,
    -196,  -196,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,  -196,  -196,
     358,   358,   358,   358,   358,  -196,    -5,  -196,    41,    41,
    -196,   233,   358,  -196,   193,   -12,  -196,  -196,  -196,  -196,
     225,   226,   -13,  -196,   197,   201,   228,   216,  -196,   176,
     179,   183,   185,   -17,    -7,    -7,     1,     1,     1,     1,
      34,    34,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,
    -196,  -196,   227,    -4,   243,  -196,  -196,  -196,   313,   313,
    -196,   313,   358,  -196,   358,   253,  -196,  -196,  -196,     0,
     253,  -196,  -196,  -196,  -196,   245,   259,   251,   358,   253,
    -196,  -196,  -196,  -196,   254,   253,  -196
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
    -196,  -196,   229,   -61,  -196,  -196,  -196,  -196,  -196,  -196,
    -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -195,  -196,
    -196,  -196,   -19,    -8,  -196,  -129,   273,  -196,   266,   247,
    -196,  -196,   -50,   -32,  -196,   157,   159,   166,   162,   169,
       7,   -34,    16,    36,   107,    63,  -196,    11
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
     105,   119,    88,   108,   197,   157,    33,   195,    37,   211,
     189,    97,    42,    14,    15,   203,    16,    30,    91,   213,
     128,   129,    33,   222,     1,     3,   130,   131,   132,   133,
       4,     5,   134,   135,    34,   122,   122,   122,   151,   109,
     146,    41,    41,   119,   122,   122,     4,     5,    41,   122,
      34,   154,   155,    43,    44,     4,     5,    45,    46,    47,
      48,   107,   136,   137,    49,   103,   162,   121,    50,   206,
     207,    51,   208,    52,    53,     6,     7,     8,     9,   138,
     139,    54,    55,    19,    50,   167,    17,    20,    18,    56,
     168,    38,     7,    21,     9,   122,   176,   177,   178,   179,
      57,     7,   193,     9,    58,    59,    60,    61,   184,   185,
     186,   187,   188,   106,    23,   110,   111,   113,   113,   115,
     109,    59,    60,    61,   116,    24,   117,    43,    44,     4,
       5,    45,    46,    47,    48,   174,   175,    28,    49,   118,
     190,   191,    50,    31,   212,    51,    32,    52,    53,   214,
     180,   181,   209,    35,   154,    54,    55,    36,   223,    41,
      41,   112,   114,    56,   226,    87,   167,   167,   154,   167,
      90,   160,   182,   183,    57,     7,    92,     9,    58,    59,
      60,    61,    93,    94,    95,    98,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,    43,    44,     4,     5,    45,    46,    47,    48,   101,
     138,   139,    49,   156,   102,   120,    50,   123,   124,    51,
     125,    52,    53,   126,   127,   145,   147,   148,   152,    54,
      55,   140,   141,   142,   143,   144,   150,    56,   149,   159,
     116,   192,   122,   196,   158,   202,   198,   200,    57,     7,
     199,     9,    58,    59,    60,    61,    43,    44,     4,     5,
      45,    46,    47,    48,   204,   201,   218,    49,     4,     5,
     219,    50,   221,   225,    51,    12,    52,    53,   104,    25,
     169,    50,    89,   170,    54,    55,    52,    53,   172,     0,
       0,   171,    56,     0,    54,    55,   173,     0,     0,     0,
       0,     0,    56,    57,     7,     0,     9,    58,    59,    60,
      61,     0,     0,     0,     7,     0,     9,    58,    59,    60,
      61,    50,   163,     0,     0,     0,    52,    53,     0,     0,
       0,    50,     0,     0,    54,    55,    52,    53,     0,     0,
       0,     0,    56,     0,    54,    55,     0,     0,     0,     0,
       0,     0,    56,     0,     0,     0,     0,    58,    59,    60,
     164,   165,     0,     0,     0,     0,     0,    58,    59,    60,
     164,   165,    50,     0,     0,    96,    50,    52,    53,     0,
       0,    52,    53,     0,     0,    54,    55,     0,     0,    54,
      55,     0,     0,    56,     0,     0,     0,    56,   158,     0,
       0,     0,   138,   139,     0,     0,     0,     0,    58,    59,
      60,    61,    58,    59,    60,    61,    50,     0,     0,     0,
       0,    52,    53,   140,   141,   142,   143,   144,     0,    54,
      55,     0,     0,     0,     0,     0,     0,    56,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    58,    59,   161,    61
};

static const yytype_int16 yycheck[] =
{
      50,    62,    34,    18,    17,    19,    16,    19,    18,   204,
      15,    43,    31,     2,    51,    19,    53,    18,    37,    19,
      37,    38,    16,   218,    21,     0,    33,    34,    35,    36,
       5,     6,    31,    32,    44,    49,    49,    49,    99,    54,
      90,    30,    31,   104,    49,    49,     5,     6,    37,    49,
      44,   101,   102,     3,     4,     5,     6,     7,     8,     9,
      10,    50,    28,    29,    14,    15,   116,    21,    18,   198,
     199,    21,   201,    23,    24,    50,    51,    52,    53,    23,
      24,    31,    32,    54,    18,   117,    51,    54,    53,    39,
     122,    50,    51,    21,    53,    49,   130,   131,   132,   133,
      50,    51,   152,    53,    54,    55,    56,    57,   140,   141,
     142,   143,   144,    50,    21,    52,    53,    54,    55,    56,
      54,    55,    56,    57,    16,    54,    18,     3,     4,     5,
       6,     7,     8,     9,    10,   128,   129,    54,    14,    15,
     148,   149,    18,    18,   205,    21,    14,    23,    24,   210,
     134,   135,   202,    49,   204,    31,    32,    44,   219,   148,
     149,    54,    55,    39,   225,    56,   198,   199,   218,   201,
      14,   108,   136,   137,    50,    51,    54,    53,    54,    55,
      56,    57,    19,    54,    19,    21,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,     3,     4,     5,     6,     7,     8,     9,    10,    18,
      23,    24,    14,    15,    18,    21,    18,    43,    42,    21,
      41,    23,    24,    40,    39,    17,    19,    49,    18,    31,
      32,    44,    45,    46,    47,    48,    21,    39,    49,    19,
      16,     8,    49,    17,    19,    18,    49,    19,    50,    51,
      49,    53,    54,    55,    56,    57,     3,     4,     5,     6,
       7,     8,     9,    10,    21,    49,    21,    14,     5,     6,
      11,    18,    21,    19,    21,     2,    23,    24,    49,    13,
     123,    18,    35,   124,    31,    32,    23,    24,   126,    -1,
      -1,   125,    39,    -1,    31,    32,   127,    -1,    -1,    -1,
      -1,    -1,    39,    50,    51,    -1,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    51,    -1,    53,    54,    55,    56,
      57,    18,    19,    -1,    -1,    -1,    23,    24,    -1,    -1,
      -1,    18,    -1,    -1,    31,    32,    23,    24,    -1,    -1,
      -1,    -1,    39,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    54,    55,    56,
      57,    58,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,
      57,    58,    18,    -1,    -1,    21,    18,    23,    24,    -1,
      -1,    23,    24,    -1,    -1,    31,    32,    -1,    -1,    31,
      32,    -1,    -1,    39,    -1,    -1,    -1,    39,    19,    -1,
      -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    54,    55,
      56,    57,    54,    55,    56,    57,    18,    -1,    -1,    -1,
      -1,    23,    24,    44,    45,    46,    47,    48,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    55,    56,    57
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,    60,     0,     5,     6,    50,    51,    52,    53,
      78,    79,    85,    86,   106,    51,    53,    51,    53,    54,
      54,    21,    80,    21,    54,    87,    88,    89,    54,    87,
      18,    18,    14,    16,    44,    49,    44,    18,    50,    81,
      82,   106,    81,     3,     4,     7,     8,     9,    10,    14,
      18,    21,    23,    24,    31,    32,    39,    50,    54,    55,
      56,    57,    61,    62,    63,    67,    70,    73,    83,    85,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,    56,    92,    88,
      14,    81,    54,    19,    54,    19,    21,    92,    21,    71,
      68,    18,    18,    15,    61,    91,   104,   106,    18,    54,
     104,   104,   103,   104,   103,   104,    16,    18,    15,    62,
      21,    21,    49,    43,    42,    41,    40,    39,    37,    38,
      33,    34,    35,    36,    31,    32,    28,    29,    23,    24,
      44,    45,    46,    47,    48,    17,    91,    19,    49,    49,
      21,    62,    18,    77,    91,    91,    15,    19,    19,    19,
     104,    56,    91,    19,    57,    58,    84,    92,    92,    94,
      95,    96,    97,    98,    99,    99,   100,   100,   100,   100,
     101,   101,   102,   102,    92,    92,    92,    92,    92,    15,
      82,    82,     8,    91,    74,    19,    17,    17,    49,    49,
      19,    49,    18,    19,    21,    64,    84,    84,    84,    91,
      69,    77,    62,    19,    62,    75,    65,    72,    21,    11,
      66,    21,    77,    62,    76,    19,    62
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    60,    60,    60,    60,    61,    61,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    64,    65,    63,    66,    66,    68,    69,    67,    71,
      72,    70,    74,    75,    76,    73,    77,    77,    78,    78,
      78,    80,    79,    81,    81,    82,    82,    82,    82,    83,
      83,    84,    84,    84,    84,    84,    85,    85,    86,    87,
      87,    88,    88,    88,    88,    89,    90,    90,    91,    91,
      92,    92,    92,    92,    92,    92,    93,    93,    94,    94,
      95,    95,    96,    96,    97,    97,    98,    98,    98,    99,
      99,    99,    99,    99,   100,   100,   100,   101,   101,   101,
     102,   102,   102,   102,   102,   102,   102,   103,   103,   103,
     103,   103,   103,   104,   104,   104,   105,   105,   105,   106,
     106,   106,   106,   106,   106
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
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 154 "parser.y" /* yacc.c:1646  */
    {}
#line 1644 "y.tab.c" /* yacc.c:1646  */
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
#line 1660 "y.tab.c" /* yacc.c:1646  */
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
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 184 "parser.y" /* yacc.c:1646  */
    {}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 185 "parser.y" /* yacc.c:1646  */
    {}
#line 1688 "y.tab.c" /* yacc.c:1646  */
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
#line 1705 "y.tab.c" /* yacc.c:1646  */
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
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 211 "parser.y" /* yacc.c:1646  */
    {
		
	}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 216 "parser.y" /* yacc.c:1646  */
    {
		char *tempCode = malloc(sizeof(char)*200);
		sprintf(tempCode, "%s : \n", useLabel());
		addToThreeCode(tempCode);
		backPatch(curLabel(),1);
	}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 222 "parser.y" /* yacc.c:1646  */
    {
		char *tempCode = malloc(sizeof(char) * 200);
		sprintf(tempCode, "%s : \n", useLabel());
		addToThreeCode(tempCode);
		backPatch(curLabel(), 1);
	}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 231 "parser.y" /* yacc.c:1646  */
    {
    	char *tempCode = malloc(sizeof(char)*200);
		sprintf(tempCode,"%s : \n",useLabel());
		addToThreeCode(tempCode);
    	addToLpStack(curLabel());
    }
#line 1760 "y.tab.c" /* yacc.c:1646  */
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
#line 1773 "y.tab.c" /* yacc.c:1646  */
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
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 268 "parser.y" /* yacc.c:1646  */
    {
  	char *tempCode = malloc(sizeof(char)*200);
	sprintf(tempCode,"%s : \n",useLabel());
	addToThreeCode(tempCode);
    addToLpStack(curLabel());
  }
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 275 "parser.y" /* yacc.c:1646  */
    {
  	char *tempCode = malloc(sizeof(char)*200);
  	sprintf(tempCode, "if %s == 1 goto %s\n", (yyvsp[-1].pair).id_or_const, popLpStack());
	addToThreeCode(tempCode);
  }
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 281 "parser.y" /* yacc.c:1646  */
    {
		if(strcmp((yyvsp[-3].pair).dtype,"int") != 0){
			printf("expresion in do while not of type int in line %d\n",line);
		}
	}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 291 "parser.y" /* yacc.c:1646  */
    {
		char tempCode[200];
		sprintf(tempCode, "%s : \n", useLabel());
		addToThreeCode(tempCode);
		strcpy(forLab1, curLabel());
	}
#line 1836 "y.tab.c" /* yacc.c:1646  */
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
#line 1855 "y.tab.c" /* yacc.c:1646  */
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
#line 1868 "y.tab.c" /* yacc.c:1646  */
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
#line 1883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 336 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.pair).id_or_const, (yyvsp[0].pair).id_or_const);}
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 337 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.pair).id_or_const, "1");}
#line 1895 "y.tab.c" /* yacc.c:1646  */
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
#line 1912 "y.tab.c" /* yacc.c:1646  */
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
#line 1930 "y.tab.c" /* yacc.c:1646  */
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
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 382 "parser.y" /* yacc.c:1646  */
    {
		char *tempCode = malloc(sizeof(char) * 200);
		sprintf(tempCode,"func begin %s\n",(yyvsp[0].lval));
		addToThreeCode(tempCode);
	}
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 386 "parser.y" /* yacc.c:1646  */
    {
		char *tempCode = malloc(sizeof(char) * 200);
		sprintf(tempCode, "func end\n");
		addToThreeCode(tempCode);
	}
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 397 "parser.y" /* yacc.c:1646  */
    {
		strcpy(temp[++num_params].datatype, (yyvsp[-3].pair).dtype);
		st[++top] = brack_num+1;
		install_symbol((yyvsp[-2].lval), (yyvsp[-3].pair).dtype, st, top,-1, return_type, temp, num_params, 0);	
		top--;
	}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 403 "parser.y" /* yacc.c:1646  */
    {
		strcpy(temp[++num_params].datatype, "void");
		st[++top] = brack_num+1;strcpy(id, (yyvsp[-3].lval));
		install_symbol((yyvsp[-2].lval),(yyvsp[-3].lval), st, top,-1, return_type, temp, num_params, 0);	
		top--;
	}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 410 "parser.y" /* yacc.c:1646  */
    {
		strcpy(temp[++num_params].datatype, (yyvsp[-1].pair).dtype);
		st[++top] = brack_num+1;
		install_symbol((yyvsp[0].lval), (yyvsp[-1].pair).dtype, st, top,-1, return_type, temp, num_params, 0);	
		top--;
	}
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 416 "parser.y" /* yacc.c:1646  */
    {
		strcpy(temp[++num_params].datatype, "char");
		strcpy(id, (yyvsp[-1].lval)); st[++top] = brack_num+1;
		install_symbol((yyvsp[0].lval), (yyvsp[-1].lval), st, top,-1, return_type, temp, num_params, 0);	
		top--;
	}
#line 2011 "y.tab.c" /* yacc.c:1646  */
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
#line 2053 "y.tab.c" /* yacc.c:1646  */
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
#line 2074 "y.tab.c" /* yacc.c:1646  */
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
#line 2086 "y.tab.c" /* yacc.c:1646  */
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
#line 2098 "y.tab.c" /* yacc.c:1646  */
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
#line 2110 "y.tab.c" /* yacc.c:1646  */
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
#line 2122 "y.tab.c" /* yacc.c:1646  */
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
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 522 "parser.y" /* yacc.c:1646  */
    {strcpy(id, (yyvsp[0].lval));}
#line 2140 "y.tab.c" /* yacc.c:1646  */
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
	}
#line 2156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 539 "parser.y" /* yacc.c:1646  */
    {}
#line 2162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 540 "parser.y" /* yacc.c:1646  */
    {}
#line 2168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 541 "parser.y" /* yacc.c:1646  */
    {
		struct table_entry *t = (struct table_entry *)malloc(sizeof(struct table_entry));
		t = give_scope_struct((yyvsp[0].lval));
		if(t==NULL || (t!=NULL && t->is_func!=1))
			install_symbol((yyvsp[0].lval), id, st, top,-1, return_type, temp, num_params, 0);
		else
			printf("There exists a function with same name at line : %d.\n", line);
	}
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 556 "parser.y" /* yacc.c:1646  */
    {
		install_symbol((yyvsp[-3].lval), id, st, top,(yyvsp[-1].val), return_type, temp, num_params, 0);
		if((yyvsp[-1].val)<=0){
			printf("Illegal size of array.\n"); 
			yyerror(" ");
		}
	}
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 565 "parser.y" /* yacc.c:1646  */
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
#line 2224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 591 "parser.y" /* yacc.c:1646  */
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
#line 2245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 611 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
	}
#line 2253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 614 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,(yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 620 "parser.y" /* yacc.c:1646  */
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
#line 2281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 634 "parser.y" /* yacc.c:1646  */
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
#line 2300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 648 "parser.y" /* yacc.c:1646  */
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
#line 2319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 662 "parser.y" /* yacc.c:1646  */
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
#line 2338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 676 "parser.y" /* yacc.c:1646  */
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
#line 2357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 690 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 696 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
		sprintf((yyval.pair).id_or_const, "t%d", temp_num);
		char tempCode[200];
		sprintf(tempCode, "%s = %s || %s;\n", (yyval.pair).id_or_const, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		temp_num++;
	}
#line 2379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 704 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 710 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
		sprintf((yyval.pair).id_or_const, "t%d", temp_num);
		char tempCode[200];
		sprintf(tempCode, "%s = %s && %s;\n", (yyval.pair).id_or_const, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		temp_num++;
	}
#line 2401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 718 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	
	}
#line 2411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 725 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
		sprintf((yyval.pair).id_or_const, "t%d", temp_num);
		
		char tempCode[200];
		sprintf(tempCode, "%s = %s | %s;\n", (yyval.pair).id_or_const, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		temp_num++;
	}
#line 2425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 734 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 740 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
		sprintf((yyval.pair).id_or_const, "t%d", temp_num);
		
		char tempCode[200];
		sprintf(tempCode, "%s = %s ^ %s;\n", (yyval.pair).id_or_const, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		temp_num++;
	}
#line 2447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 748 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 754 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
		sprintf((yyval.pair).id_or_const, "t%d", temp_num);
		char tempCode[200];
		sprintf(tempCode, "%s = %s & %s;\n", (yyval.pair).id_or_const, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		temp_num++;
	}
#line 2468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 761 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 767 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
		sprintf((yyval.pair).id_or_const, "t%d", temp_num);
		char tempCode[200];
		sprintf(tempCode, "%s = %s == %s;\n", (yyval.pair).id_or_const, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		temp_num++;
	}
#line 2490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 775 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
		sprintf((yyval.pair).id_or_const, "t%d", temp_num);
		
		char tempCode[200];
		sprintf(tempCode, "%s = %s != %s;\n", (yyval.pair).id_or_const, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		temp_num++;
	}
#line 2504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 784 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 790 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
		sprintf((yyval.pair).id_or_const, "t%d", temp_num);
		
		char tempCode[200];
		sprintf(tempCode, "%s = %s > %s;\n", (yyval.pair).id_or_const, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		temp_num++;
	}
#line 2527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 799 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
		sprintf((yyval.pair).id_or_const, "t%d", temp_num);
		
		char tempCode[200];
		sprintf(tempCode, "%s = %s < %s;\n", (yyval.pair).id_or_const, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		temp_num++;
	}
#line 2541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 809 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
		sprintf((yyval.pair).id_or_const, "t%d", temp_num);
		
		char tempCode[200];
		sprintf(tempCode,"%s = %s >= %s;\n", (yyval.pair).id_or_const, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		temp_num++;
	}
#line 2555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 819 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");sprintf((yyval.pair).id_or_const, "t%d", temp_num);
		
		char tempCode[200];
		sprintf(tempCode, "%s = %s <= %s;\n", (yyval.pair).id_or_const, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		temp_num++;
	}
#line 2568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 828 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 834 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,ret_type((yyvsp[-2].pair).dtype,(yyvsp[0].pair).dtype));
		sprintf((yyval.pair).id_or_const, "t%d", temp_num);
		char tempCode[200];
		sprintf(tempCode, "%s = %s + %s;\n", (yyval.pair).id_or_const, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		temp_num++;
	}
#line 2590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 842 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,ret_type((yyvsp[-2].pair).dtype,(yyvsp[0].pair).dtype));
		sprintf((yyval.pair).id_or_const, "t%d", temp_num);
		char tempCode[200];
		sprintf(tempCode, "%s = %s - %s;\n", (yyval.pair).id_or_const, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		temp_num++;
	}
#line 2603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 850 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 856 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,ret_type((yyvsp[-2].pair).dtype,(yyvsp[0].pair).dtype));
		sprintf((yyval.pair).id_or_const, "t%d", temp_num);
		char tempCode[200];
		sprintf(tempCode, "%s = %s * %s;\n",(yyval.pair).id_or_const,(yyvsp[-2].pair).id_or_const,(yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		temp_num++;
	}
#line 2625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 864 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,ret_type((yyvsp[-2].pair).dtype,(yyvsp[0].pair).dtype));
		sprintf((yyval.pair).id_or_const, "t%d", temp_num);
		char tempCode[200];
		sprintf(tempCode, "%s = %s / %s;\n", (yyval.pair).id_or_const, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		temp_num++;
	}
#line 2638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 872 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 878 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
		char *tempCode = malloc(200 * sizeof(char));
		sprintf(tempCode, "%s = %s + 1; \n", (yyvsp[0].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
	}
#line 2659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 885 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
		char *tempCode = malloc(200 * sizeof(char));
		sprintf(tempCode, "%s = %s - 1; \n", (yyvsp[0].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
	}
#line 2671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 892 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 896 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 900 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 904 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 908 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 914 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[-1].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[-1].pair).id_or_const);
	}
#line 2725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 918 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[-1].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[-1].pair).id_or_const);
		char * tempCode = malloc(200*sizeof(char));
		sprintf(tempCode, "%s = %s + 1; \n", (yyvsp[-1].pair).id_or_const, (yyvsp[-1].pair).id_or_const);
		addToThreeCode(tempCode);
	}
#line 2737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 925 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[-1].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[-1].pair).id_or_const);
		char *tempCode = malloc(200 * sizeof(char));
		sprintf(tempCode, "%s = %s - 1; \n", (yyvsp[-1].pair).id_or_const, (yyvsp[-1].pair).id_or_const);
		addToThreeCode(tempCode);
	}
#line 2749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 932 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 936 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 940 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[-1].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[-1].pair).id_or_const);
	}
#line 2776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 947 "parser.y" /* yacc.c:1646  */
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
#line 2800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 966 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
	}
#line 2808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 969 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[-1].pair).dtype);
	}
#line 2816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 975 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, "float"); 
		sprintf((yyval.pair).id_or_const,"%f",(yyvsp[0].val)) ;
		char temp[20]; 
	}
#line 2826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 980 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, "int"); 
		sprintf((yyval.pair).id_or_const,"%.0f",(yyvsp[0].val)) ;
		char temp[20]; 
	}
#line 2836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 985 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, "char"); 
		sprintf((yyval.pair).id_or_const,"%s",(yyvsp[0].val2)) ;
		char temp[20]; 
	}
#line 2846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 992 "parser.y" /* yacc.c:1646  */
    {
		strcpy(id, (yyvsp[0].lval)); 
		strcpy((yyval.pair).dtype, (yyvsp[0].lval));
	}
#line 2855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 996 "parser.y" /* yacc.c:1646  */
    {
		strcpy(id, (yyvsp[0].lval)); 
		strcpy((yyval.pair).dtype, (yyvsp[0].lval));
	}
#line 2864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1000 "parser.y" /* yacc.c:1646  */
    {
		strcpy(id, (yyvsp[0].lval)); 
		strcpy((yyval.pair).dtype, id);
	}
#line 2873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1004 "parser.y" /* yacc.c:1646  */
    {
		strcpy(id, (yyvsp[0].lval)); 
		strcpy((yyval.pair).dtype, id);
	}
#line 2882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1008 "parser.y" /* yacc.c:1646  */
    {
		strcpy(id, (yyvsp[0].lval)); 
		strcat(id, "_u");
		strcpy((yyval.pair).dtype, id);
	}
#line 2892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1013 "parser.y" /* yacc.c:1646  */
    {
		strcpy(id, (yyvsp[0].lval)); 
		strcat(id, "_u");
		strcpy((yyval.pair).dtype, id);
	}
#line 2902 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2906 "y.tab.c" /* yacc.c:1646  */
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
#line 1021 "parser.y" /* yacc.c:1906  */


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
