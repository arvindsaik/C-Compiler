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
#line 37 "parser.y" /* yacc.c:358  */

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

	char rnum[20] = "t0\0";
	struct idr_item{
		char idr_name[30];
	}idr_stack[20];
	int idr_stack_top = -1;


	
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

	int linenum_stack[30];
	int labelCount = 0;
	void addToThreeCode(char * cd){
		++basic_code_len;
		strcpy(basic_code[basic_code_len],cd);
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
	

#line 337 "y.tab.c" /* yacc.c:358  */

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
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  208

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
       0,   129,   129,   130,   131,   132,   133,   138,   139,   142,
     143,   144,   145,   146,   147,   148,   149,   160,   171,   172,
     176,   189,   176,   203,   209,   218,   228,   237,   248,   260,
     273,   276,   277,   280,   286,   293,   299,   307,   337,   355,
     358,   361,   364,   367,   374,   375,   378,   380,   381,   384,
     395,   396,   397,   412,   421,   439,   459,   462,   468,   483,
     498,   513,   528,   543,   550,   558,   564,   572,   579,   588,
     594,   602,   608,   615,   621,   629,   638,   644,   653,   663,
     673,   682,   688,   696,   704,   710,   718,   726,   732,   736,
     740,   744,   748,   752,   756,   762,   766,   770,   774,   778,
     782,   789,   808,   811,   817,   822,   827,   834,   838,   842,
     846,   850,   855
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
  "DO_WHILE", "FUNC_DEC", "FUNC_DEF", "FUNC_PARAMS", "FUNC_PARAMS1",
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

#define YYPACT_NINF -133

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-133)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -13,  -133,    18,  -133,   -31,   -18,   -24,  -133,   -16,  -133,
      13,  -133,     0,   -10,    19,  -133,  -133,  -133,  -133,    36,
      62,   304,  -133,  -133,    80,    -8,  -133,    33,   104,    -8,
      -1,    -1,   405,    98,   304,    92,    96,   139,   314,  -133,
     -11,   -11,    49,    49,   -11,  -133,    93,  -133,  -133,  -133,
     194,  -133,  -133,  -133,  -133,  -133,   100,  -133,    81,  -133,
     109,    83,   115,   110,    84,    94,    82,   107,   112,  -133,
    -133,   183,  -133,   -10,   113,     8,   -10,   163,    -1,   127,
     165,  -133,   133,   169,  -133,   170,  -133,   195,     8,     8,
    -133,   249,    -3,    89,   186,   -11,   197,  -133,  -133,  -133,
     142,  -133,  -133,   409,   354,  -133,  -133,  -133,  -133,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,  -133,  -133,     8,     8,     8,
       8,     8,   193,  -133,  -133,     8,   192,   167,  -133,   171,
    -133,  -133,   196,     6,    23,  -133,  -133,  -133,  -133,   200,
     204,     2,  -133,   173,   174,   205,   185,  -133,    83,   115,
     110,    84,    94,    82,    82,   107,   107,   107,   107,   112,
     112,  -133,  -133,  -133,  -133,  -133,  -133,  -133,  -133,   -12,
    -133,    -1,    -1,     8,   304,  -133,  -133,  -133,   364,   364,
    -133,   364,  -133,  -133,  -133,    29,  -133,   304,  -133,  -133,
    -133,   211,  -133,  -133,   224,   304,  -133,  -133
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     5,     0,     1,     0,     0,     0,   108,     0,   107,
       0,     4,     0,     0,     0,   112,   111,   110,   109,     0,
       0,     0,     3,     2,    52,    45,    48,    51,    52,    44,
      32,    32,     0,     0,     0,     0,     0,     0,     0,    19,
       0,     0,     0,     0,     0,    46,   101,   104,   105,   106,
       0,     8,    11,    12,    13,    93,     0,   102,     0,    57,
      63,    65,    67,    69,    71,    73,    76,    81,    84,    87,
      94,    99,    98,     0,     0,     0,     0,     0,    32,     0,
       0,    31,     0,     0,    17,     0,    18,     0,     0,     0,
      15,     0,     0,    99,     0,     0,   101,    88,    89,    90,
      99,    91,    92,     0,     0,    30,     7,    10,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    96,    97,     0,     0,     0,
       0,     0,     0,    49,    47,     0,     0,    36,    27,    35,
      29,    16,     0,     0,     0,    14,    95,   103,   100,     0,
     105,     0,    38,   106,    40,     0,    39,    56,    64,    66,
      68,    70,    72,    74,    75,    77,    78,    79,    80,    82,
      83,    85,    86,    58,    59,    60,    61,    62,    53,     0,
      28,     0,     0,     0,     0,    20,    54,    55,     0,     0,
      37,     0,    50,    34,    33,     0,    25,     0,    42,    43,
      41,     0,    21,    26,    24,     0,    22,    23
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -133,  -133,   199,   -33,  -133,  -133,  -133,  -133,  -133,  -133,
    -133,  -133,   -25,   -14,  -133,  -132,   235,  -133,   225,   164,
    -133,  -133,   -28,   -30,  -133,   129,   130,   131,   145,   128,
      58,     9,    54,    59,   143,   -29,  -133,    -2
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    50,    51,    52,   197,   204,   206,    53,    54,
      10,    11,    80,    81,    55,   155,    56,    13,    29,    26,
      27,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      14,    87,    85,   192,     4,     5,    83,    95,     1,    93,
      92,    97,    98,   100,   100,   102,   146,   106,     3,   187,
      15,    23,    16,     4,     5,   184,    38,    21,    82,    82,
      19,    40,    41,    17,    22,    18,    94,   109,    20,    42,
      43,    76,   185,    96,    24,   133,   109,    44,   201,    79,
       7,   109,     9,   136,    30,   109,   198,   199,   106,   200,
     143,   144,    46,    47,    48,    49,   149,    38,     6,     7,
       8,     9,   109,    28,   156,   151,    82,    77,   109,   157,
      31,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,    74,   173,   174,   175,
     176,   177,   108,    96,    47,    48,    49,   179,   147,   103,
      88,   104,   125,   126,    89,   117,   118,   119,   120,    86,
      74,   107,    78,   114,    75,   111,   165,   166,   167,   168,
     109,   115,   116,   127,   128,   129,   130,   131,   121,   122,
     123,   124,    32,    33,     4,     5,    34,    35,    75,    36,
     113,   196,   110,    37,    90,   195,   112,    38,   156,   156,
      39,   156,    40,    41,   202,   125,   126,   193,   194,   132,
      42,    43,   207,   163,   164,   169,   170,   135,    44,    82,
      82,   137,   171,   172,   138,    99,   101,   139,   140,    45,
       7,   141,     9,    46,    47,    48,    49,    32,    33,     4,
       5,    34,    35,   142,    36,   148,   125,   126,    37,   105,
     178,   180,    38,   103,   183,    39,   181,    40,    41,   147,
     182,   186,   188,   189,   190,    42,    43,   127,   128,   129,
     130,   131,   203,    44,   191,   205,    91,    12,    25,   158,
     134,   159,   162,   160,    45,     7,     0,     9,    46,    47,
      48,    49,    32,    33,     4,     5,    34,    35,   161,    36,
       0,     0,     0,    37,   145,     0,     0,    38,     0,     0,
      39,     0,    40,    41,     0,     0,     0,     0,     0,     0,
      42,    43,     0,     0,     0,     0,     0,     0,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    45,
       7,     0,     9,    46,    47,    48,    49,    32,    33,     4,
       5,    34,    35,     0,    36,     0,     0,     0,    37,     4,
       5,     0,    38,     0,     0,    39,     0,    40,    41,     0,
       0,     0,    38,     0,     0,    42,    43,    40,    41,     0,
       0,     0,     0,    44,     0,    42,    43,     0,     0,     0,
       0,     0,     0,    44,    45,     7,     0,     9,    46,    47,
      48,    49,     0,     0,     0,     7,     0,     9,    46,    47,
      48,    49,    38,   152,     0,     0,     0,    40,    41,     0,
       0,     0,    38,     0,     0,    42,    43,    40,    41,     0,
       0,     0,     0,    44,     0,    42,    43,     0,     0,     0,
       0,     0,     0,    44,     0,     0,     0,     0,    46,    47,
      48,   153,   154,     0,     0,     0,     0,     0,    46,    47,
      48,   153,   154,    38,     0,     0,    84,    38,    40,    41,
       0,     0,    40,    41,     0,     0,    42,    43,     0,     0,
      42,    43,     0,     0,    44,     0,     0,     0,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    46,
      47,    48,    49,    46,    47,   150,    49
};

static const yytype_int16 yycheck[] =
{
       2,    34,    32,    15,     5,     6,    31,    18,    21,    38,
      38,    40,    41,    42,    43,    44,    19,    50,     0,    17,
      51,    21,    53,     5,     6,    19,    18,    14,    30,    31,
      54,    23,    24,    51,    21,    53,    38,    49,    54,    31,
      32,    49,    19,    54,    54,    75,    49,    39,    19,    50,
      51,    49,    53,    78,    18,    49,   188,   189,    91,   191,
      88,    89,    54,    55,    56,    57,    95,    18,    50,    51,
      52,    53,    49,    54,   104,   103,    78,    44,    49,   109,
      18,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,    16,   127,   128,   129,
     130,   131,    21,    54,    55,    56,    57,   135,    19,    16,
      18,    18,    23,    24,    18,    33,    34,    35,    36,    21,
      16,    21,    18,    39,    44,    42,   117,   118,   119,   120,
      49,    37,    38,    44,    45,    46,    47,    48,    31,    32,
      28,    29,     3,     4,     5,     6,     7,     8,    44,    10,
      40,   184,    43,    14,    15,   183,    41,    18,   188,   189,
      21,   191,    23,    24,   197,    23,    24,   181,   182,    56,
      31,    32,   205,   115,   116,   121,   122,    14,    39,   181,
     182,    54,   123,   124,    19,    42,    43,    54,    19,    50,
      51,    21,    53,    54,    55,    56,    57,     3,     4,     5,
       6,     7,     8,     8,    10,    19,    23,    24,    14,    15,
      17,    19,    18,    16,    18,    21,    49,    23,    24,    19,
      49,    17,    49,    49,    19,    31,    32,    44,    45,    46,
      47,    48,    21,    39,    49,    11,    37,     2,    13,   110,
      76,   111,   114,   112,    50,    51,    -1,    53,    54,    55,
      56,    57,     3,     4,     5,     6,     7,     8,   113,    10,
      -1,    -1,    -1,    14,    15,    -1,    -1,    18,    -1,    -1,
      21,    -1,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    -1,    53,    54,    55,    56,    57,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    -1,    -1,    14,     5,
       6,    -1,    18,    -1,    -1,    21,    -1,    23,    24,    -1,
      -1,    -1,    18,    -1,    -1,    31,    32,    23,    24,    -1,
      -1,    -1,    -1,    39,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    50,    51,    -1,    53,    54,    55,
      56,    57,    -1,    -1,    -1,    51,    -1,    53,    54,    55,
      56,    57,    18,    19,    -1,    -1,    -1,    23,    24,    -1,
      -1,    -1,    18,    -1,    -1,    31,    32,    23,    24,    -1,
      -1,    -1,    -1,    39,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    54,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    -1,    54,    55,
      56,    57,    58,    18,    -1,    -1,    21,    18,    23,    24,
      -1,    -1,    23,    24,    -1,    -1,    31,    32,    -1,    -1,
      31,    32,    -1,    -1,    39,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      55,    56,    57,    54,    55,    56,    57
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,    60,     0,     5,     6,    50,    51,    52,    53,
      69,    70,    75,    76,    96,    51,    53,    51,    53,    54,
      54,    14,    21,    21,    54,    77,    78,    79,    54,    77,
      18,    18,     3,     4,     7,     8,    10,    14,    18,    21,
      23,    24,    31,    32,    39,    50,    54,    55,    56,    57,
      61,    62,    63,    67,    68,    73,    75,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    16,    44,    49,    44,    18,    50,
      71,    72,    96,    71,    21,    82,    21,    62,    18,    18,
      15,    61,    81,    94,    96,    18,    54,    94,    94,    93,
      94,    93,    94,    16,    18,    15,    62,    21,    21,    49,
      43,    42,    41,    40,    39,    37,    38,    33,    34,    35,
      36,    31,    32,    28,    29,    23,    24,    44,    45,    46,
      47,    48,    56,    82,    78,    14,    71,    54,    19,    54,
      19,    21,     8,    81,    81,    15,    19,    19,    19,    94,
      56,    81,    19,    57,    58,    74,    82,    82,    84,    85,
      86,    87,    88,    89,    89,    90,    90,    90,    90,    91,
      91,    92,    92,    82,    82,    82,    82,    82,    17,    81,
      19,    49,    49,    18,    19,    19,    17,    17,    49,    49,
      19,    49,    15,    72,    72,    81,    62,    64,    74,    74,
      74,    19,    62,    21,    65,    11,    66,    62
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    60,    60,    60,    60,    61,    61,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      64,    65,    63,    66,    66,    67,    68,    69,    69,    69,
      70,    71,    71,    72,    72,    72,    72,    73,    73,    74,
      74,    74,    74,    74,    75,    75,    76,    77,    77,    78,
      78,    78,    78,    79,    80,    80,    81,    81,    82,    82,
      82,    82,    82,    82,    83,    83,    84,    84,    85,    85,
      86,    86,    87,    87,    88,    88,    88,    89,    89,    89,
      89,    89,    90,    90,    90,    91,    91,    91,    92,    92,
      92,    92,    92,    92,    92,    93,    93,    93,    93,    93,
      93,    94,    94,    94,    95,    95,    95,    96,    96,    96,
      96,    96,    96
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     2,     1,     0,     2,     1,     2,
       2,     1,     1,     1,     3,     2,     3,     2,     2,     1,
       0,     0,     8,     2,     0,     5,     7,     5,     5,     5,
       4,     1,     0,     4,     4,     2,     2,     4,     3,     1,
       1,     3,     3,     3,     2,     2,     1,     3,     1,     3,
       5,     1,     1,     4,     4,     4,     3,     1,     3,     3,
       3,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     2,     2,
       2,     2,     2,     1,     1,     3,     2,     2,     1,     1,
       3,     1,     1,     3,     1,     1,     1,     1,     1,     2,
       2,     2,     2
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
#line 138 "parser.y" /* yacc.c:1646  */
    {}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 142 "parser.y" /* yacc.c:1646  */
    {}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 149 "parser.y" /* yacc.c:1646  */
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
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 160 "parser.y" /* yacc.c:1646  */
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
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 171 "parser.y" /* yacc.c:1646  */
    {}
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 172 "parser.y" /* yacc.c:1646  */
    {}
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 176 "parser.y" /* yacc.c:1646  */
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
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 189 "parser.y" /* yacc.c:1646  */
    {
		char *tempCode = malloc(sizeof(char)*200);
		sprintf(tempCode, "goto ");
		addToThreeCode(tempCode);
		addToStack(basic_code_len);
		sprintf(tempCode,"%s : \n",useLabel());
		addToThreeCode(tempCode);
		backPatch(curLabel(),2);
	}
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 198 "parser.y" /* yacc.c:1646  */
    {
		
	}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 203 "parser.y" /* yacc.c:1646  */
    {
		char *tempCode = malloc(sizeof(char)*200);
		sprintf(tempCode, "%s : \n", useLabel());
		addToThreeCode(tempCode);
		backPatch(curLabel(),1);
	}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 209 "parser.y" /* yacc.c:1646  */
    {
		char *tempCode = malloc(sizeof(char) * 200);
		sprintf(tempCode, "%s : \n", useLabel());
		addToThreeCode(tempCode);
		backPatch(curLabel(), 1);
	}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 219 "parser.y" /* yacc.c:1646  */
    {
		if(strcmp((yyvsp[-2].pair).dtype,"int") != 0){
			printf("expresion in while not of type int in line %d\n",line);
		}
	}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 228 "parser.y" /* yacc.c:1646  */
    {
		if(strcmp((yyvsp[-2].pair).dtype,"int") != 0){
			printf("expresion in do while not of type int in line %d\n",line);
		}
	}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 237 "parser.y" /* yacc.c:1646  */
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
	}
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 248 "parser.y" /* yacc.c:1646  */
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
	}
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 260 "parser.y" /* yacc.c:1646  */
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
	}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 273 "parser.y" /* yacc.c:1646  */
    {}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 280 "parser.y" /* yacc.c:1646  */
    {
		strcpy(temp[++num_params].datatype, (yyvsp[-3].pair).dtype);
		st[++top] = brack_num+1;
		install_symbol((yyvsp[-2].lval), (yyvsp[-3].pair).dtype, st, top,-1, return_type, temp, num_params, 0);	
		top--;
	}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 286 "parser.y" /* yacc.c:1646  */
    {
		strcpy(temp[++num_params].datatype, "void");
		st[++top] = brack_num+1;strcpy(id, (yyvsp[-3].lval));
		install_symbol((yyvsp[-2].lval),(yyvsp[-3].lval), st, top,-1, return_type, temp, num_params, 0);	
		top--;
	}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 293 "parser.y" /* yacc.c:1646  */
    {
		strcpy(temp[++num_params].datatype, (yyvsp[-1].pair).dtype);
		st[++top] = brack_num+1;
		install_symbol((yyvsp[0].lval), (yyvsp[-1].pair).dtype, st, top,-1, return_type, temp, num_params, 0);	
		top--;
	}
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 299 "parser.y" /* yacc.c:1646  */
    {
		strcpy(temp[++num_params].datatype, "char");
		strcpy(id, (yyvsp[-1].lval)); st[++top] = brack_num+1;
		install_symbol((yyvsp[0].lval), (yyvsp[-1].lval), st, top,-1, return_type, temp, num_params, 0);	
		top--;
	}
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 307 "parser.y" /* yacc.c:1646  */
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

	}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 337 "parser.y" /* yacc.c:1646  */
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
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 355 "parser.y" /* yacc.c:1646  */
    {
		strcpy(func_call[++func_call_param].datatype, (yyvsp[0].pair).dtype);
	}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 358 "parser.y" /* yacc.c:1646  */
    {
		strcpy(func_call[++func_call_param].datatype, "char*");
	}
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 361 "parser.y" /* yacc.c:1646  */
    {
		strcpy(func_call[++func_call_param].datatype, (yyvsp[-2].pair).dtype);
	}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 364 "parser.y" /* yacc.c:1646  */
    {
		strcpy(func_call[++func_call_param].datatype, "char");
	}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 367 "parser.y" /* yacc.c:1646  */
    {
		strcpy(func_call[++func_call_param].datatype, "char*");
	}
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 378 "parser.y" /* yacc.c:1646  */
    {strcpy(id, (yyvsp[0].lval));}
#line 1949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 384 "parser.y" /* yacc.c:1646  */
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
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 395 "parser.y" /* yacc.c:1646  */
    {}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 396 "parser.y" /* yacc.c:1646  */
    {}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 397 "parser.y" /* yacc.c:1646  */
    {
		struct table_entry *t = (struct table_entry *)malloc(sizeof(struct table_entry));
		t = give_scope_struct((yyvsp[0].lval));
		if(t==NULL || (t!=NULL && t->is_func!=1))
			install_symbol((yyvsp[0].lval), id, st, top,-1, return_type, temp, num_params, 0);
		else
			printf("There exists a function with same name at line : %d.\n", line);
	}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 412 "parser.y" /* yacc.c:1646  */
    {
		install_symbol((yyvsp[-3].lval), id, st, top,(yyvsp[-1].val), return_type, temp, num_params, 0);
		if((yyvsp[-1].val)<=0){
			printf("Illegal size of array.\n"); 
			yyerror(" ");
		}
	}
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 421 "parser.y" /* yacc.c:1646  */
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
	}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 439 "parser.y" /* yacc.c:1646  */
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
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 459 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
	}
#line 2054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 462 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,(yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 468 "parser.y" /* yacc.c:1646  */
    {
		if(strcmp((yyvsp[-2].pair).dtype,(yyvsp[0].pair).dtype) == 0 || strcmp(ret_type((yyvsp[-2].pair).dtype, (yyvsp[0].pair).dtype), (yyvsp[-2].pair).dtype)==0) {
			strcpy((yyval.pair).dtype,(yyvsp[-2].pair).dtype); 
			strcpy((yyval.pair).id_or_const,rnum);		
			char tempCode[200];
			sprintf(tempCode, "%s = %s;\n", (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
			addToThreeCode(tempCode);
			rnum[1]++; 
			rnum[1] = '0';
		} 
		else {
			printf("Type mismatch at line %d\n",line);
			strcpy((yyval.pair).dtype,(yyvsp[-2].pair).dtype);
		} 
	}
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 483 "parser.y" /* yacc.c:1646  */
    {
		if(strcmp((yyvsp[-2].pair).dtype,(yyvsp[0].pair).dtype) == 0 || strcmp(ret_type((yyvsp[-2].pair).dtype, (yyvsp[0].pair).dtype), (yyvsp[-2].pair).dtype)==0) {
			strcpy((yyval.pair).dtype,(yyvsp[-2].pair).dtype); 
			strcpy((yyval.pair).id_or_const,rnum);
			char tempCode[200];
			sprintf(tempCode, "%s = %s;\n", (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
			addToThreeCode(tempCode);
			rnum[1]++;
			rnum[1] = '0';
		} 
		else {
			printf("Type mismatch at line %d\n",line);
			strcpy((yyval.pair).dtype,(yyvsp[-2].pair).dtype);
		}
	}
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 498 "parser.y" /* yacc.c:1646  */
    {
		if(strcmp((yyvsp[-2].pair).dtype,(yyvsp[0].pair).dtype) == 0 || strcmp(ret_type((yyvsp[-2].pair).dtype, (yyvsp[0].pair).dtype), (yyvsp[-2].pair).dtype)==0) {
			strcpy((yyval.pair).dtype,(yyvsp[-2].pair).dtype); 
			strcpy((yyval.pair).id_or_const,rnum);
			char tempCode[200];
			sprintf(tempCode, "%s = %s;\n", (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
			addToThreeCode(tempCode);
			rnum[1]++; 
			rnum[1] = '0';
		} 
		else {
			printf("Type mismatch at line %d\n",line);
			strcpy((yyval.pair).dtype,(yyvsp[-2].pair).dtype);
		}
	}
#line 2123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 513 "parser.y" /* yacc.c:1646  */
    {
		if(strcmp((yyvsp[-2].pair).dtype,(yyvsp[0].pair).dtype) == 0 || strcmp(ret_type((yyvsp[-2].pair).dtype, (yyvsp[0].pair).dtype), (yyvsp[-2].pair).dtype)==0) {
			strcpy((yyval.pair).dtype,(yyvsp[-2].pair).dtype); 
			strcpy((yyval.pair).id_or_const,rnum);
			char tempCode[200];
			sprintf(tempCode, "%s = %s;\n", (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
			addToThreeCode(tempCode);
			rnum[1]++; 
			rnum[1] = '0';
		} 
		else {
			printf("Type mismatch at line %d\n",line);
			strcpy((yyval.pair).dtype,(yyvsp[-2].pair).dtype);
		}
	}
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 528 "parser.y" /* yacc.c:1646  */
    {
		if(strcmp((yyvsp[-2].pair).dtype,(yyvsp[0].pair).dtype) == 0 || strcmp(ret_type((yyvsp[-2].pair).dtype, (yyvsp[0].pair).dtype), (yyvsp[-2].pair).dtype)==0) {
			strcpy((yyval.pair).dtype,(yyvsp[-2].pair).dtype); 
			strcpy((yyval.pair).id_or_const,rnum);
			char tempCode[200];
			sprintf(tempCode, "%s = %s;\n", (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
			addToThreeCode(tempCode);
			rnum[1]++; 
			rnum[1] = '0';
		} 
		else {
			printf("Type mismatch at line %d\n",line);
			strcpy((yyval.pair).dtype,(yyvsp[-2].pair).dtype);
		}
	}
#line 2163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 543 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
		rnum[1] = '0';
	}
#line 2173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 550 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
		strcpy((yyval.pair).id_or_const,rnum);
		char tempCode[200];
		sprintf(tempCode, "%s = %s || %s;\n", rnum, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		rnum[1]++;
	}
#line 2186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 558 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 564 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
		strcpy((yyval.pair).id_or_const,rnum);
		char tempCode[200];
		sprintf(tempCode, "%s = %s && %s;\n", rnum, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		rnum[1]++;
	}
#line 2208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 572 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	
	}
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 579 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
		strcpy((yyval.pair).id_or_const,rnum);
		
		char tempCode[200];
		sprintf(tempCode, "%s = %s | %s;\n", rnum, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		rnum[1]++;
	}
#line 2232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 588 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 594 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
		strcpy((yyval.pair).id_or_const,rnum);
		
		char tempCode[200];
		sprintf(tempCode, "%s = %s ^ %s;\n", rnum, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		rnum[1]++;
	}
#line 2254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 602 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 608 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
		strcpy((yyval.pair).id_or_const,rnum);
		char tempCode[200];
		sprintf(tempCode, "%s = %s & %s;\n", rnum, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		rnum[1]++;
	}
#line 2275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 615 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 621 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
		strcpy((yyval.pair).id_or_const,rnum);
		char tempCode[200];
		sprintf(tempCode, "%s = %s == %s;\n", rnum, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		rnum[1]++;
	}
#line 2297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 629 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
		strcpy((yyval.pair).id_or_const,rnum);
		
		char tempCode[200];
		sprintf(tempCode, "%s = %s != %s;\n", rnum, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		rnum[1]++;
	}
#line 2311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 638 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2320 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 644 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
		strcpy((yyval.pair).id_or_const,rnum);
		
		char tempCode[200];
		sprintf(tempCode, "%s = %s > %s;\n", rnum, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		rnum[1]++;
	}
#line 2334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 653 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
		strcpy((yyval.pair).id_or_const,rnum);
		
		char tempCode[200];
		sprintf(tempCode, "%s = %s < %s;\n", rnum, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		rnum[1]++;
	}
#line 2348 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 663 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");
		strcpy((yyval.pair).id_or_const,rnum);
		
		char tempCode[200];
		sprintf(tempCode,"%s = %s >= %s;\n", rnum, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		rnum[1]++;
	}
#line 2362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 673 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,"int");strcpy((yyval.pair).id_or_const,rnum);
		
		char tempCode[200];
		sprintf(tempCode, "%s = %s <= %s;\n", rnum, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		rnum[1]++;
	}
#line 2375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 682 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 688 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,ret_type((yyvsp[-2].pair).dtype,(yyvsp[0].pair).dtype));
		strcpy((yyval.pair).id_or_const,rnum);
		char tempCode[200];
		sprintf(tempCode, "%s = %s + %s;\n", rnum, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		rnum[1]++;
	}
#line 2397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 696 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,ret_type((yyvsp[-2].pair).dtype,(yyvsp[0].pair).dtype));
		strcpy((yyval.pair).id_or_const,rnum);
		char tempCode[200];
		sprintf(tempCode, "%s = %s - %s;\n", rnum, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		rnum[1]++;
	}
#line 2410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 704 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 710 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,ret_type((yyvsp[-2].pair).dtype,(yyvsp[0].pair).dtype));
		strcpy((yyval.pair).id_or_const,rnum);
		char tempCode[200];
		sprintf(tempCode, "%s = %s * %s;\n",rnum,(yyvsp[-2].pair).id_or_const,(yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		rnum[1]++;
	}
#line 2432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 718 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype,ret_type((yyvsp[-2].pair).dtype,(yyvsp[0].pair).dtype));
		strcpy((yyval.pair).id_or_const,rnum);
		char tempCode[200];
		sprintf(tempCode, "%s = %s / %s;\n", rnum, (yyvsp[-2].pair).id_or_const, (yyvsp[0].pair).id_or_const);
		addToThreeCode(tempCode);
		rnum[1]++;
	}
#line 2445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 726 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 732 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 736 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 740 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 744 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 748 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 752 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 756 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 762 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[-1].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[-1].pair).id_or_const);
	}
#line 2526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 766 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[-1].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[-1].pair).id_or_const);
	}
#line 2535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 770 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[-1].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[-1].pair).id_or_const);
	}
#line 2544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 774 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 778 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[0].pair).id_or_const);
	}
#line 2562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 782 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[-1].pair).dtype);
		strcpy((yyval.pair).id_or_const,(yyvsp[-1].pair).id_or_const);
	}
#line 2571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 789 "parser.y" /* yacc.c:1646  */
    {
		sprintf((yyval.pair).dtype,"%s",get_datatype((yyvsp[0].lval),st,top));
		//printf("%s : %d here \n",$1,get_arr_dim($1,st,top));
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
#line 2595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 808 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[0].pair).dtype);
	}
#line 2603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 811 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, (yyvsp[-1].pair).dtype);
	}
#line 2611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 817 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, "float"); 
		sprintf((yyval.pair).id_or_const,"%f",(yyvsp[0].val)) ;
		char temp[20]; 
	}
#line 2621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 822 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, "int"); 
		sprintf((yyval.pair).id_or_const,"%.0f",(yyvsp[0].val)) ;
		char temp[20]; 
	}
#line 2631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 827 "parser.y" /* yacc.c:1646  */
    {
		strcpy((yyval.pair).dtype, "char"); 
		sprintf((yyval.pair).id_or_const,"%s",(yyvsp[0].val2)) ;
		char temp[20]; 
	}
#line 2641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 834 "parser.y" /* yacc.c:1646  */
    {
		strcpy(id, (yyvsp[0].lval)); 
		strcpy((yyval.pair).dtype, (yyvsp[0].lval));
	}
#line 2650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 838 "parser.y" /* yacc.c:1646  */
    {
		strcpy(id, (yyvsp[0].lval)); 
		strcpy((yyval.pair).dtype, (yyvsp[0].lval));
	}
#line 2659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 842 "parser.y" /* yacc.c:1646  */
    {
		strcpy(id, (yyvsp[0].lval)); 
		strcpy((yyval.pair).dtype, id);
	}
#line 2668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 846 "parser.y" /* yacc.c:1646  */
    {
		strcpy(id, (yyvsp[0].lval)); 
		strcpy((yyval.pair).dtype, id);
	}
#line 2677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 850 "parser.y" /* yacc.c:1646  */
    {
		strcpy(id, (yyvsp[0].lval)); 
		strcat(id, "_u");
		strcpy((yyval.pair).dtype, id);
	}
#line 2687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 855 "parser.y" /* yacc.c:1646  */
    {
		strcpy(id, (yyvsp[0].lval)); 
		strcat(id, "_u");
		strcpy((yyval.pair).dtype, id);
	}
#line 2697 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2701 "y.tab.c" /* yacc.c:1646  */
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
#line 863 "parser.y" /* yacc.c:1906  */


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
