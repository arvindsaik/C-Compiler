/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 20 "parser.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
		char lval[100];
		double val;
		char val2[100];
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 32 "parser.y"
	#include "lib.h"
	#include <stdlib.h>
	#define OUT stdout
	#define SIZE 100
	int line=1;
    int yylex(void);
    FILE *yyin;
	int yyerror(const char *s);
	int check_scope(char *msg);
	int st[1000];
  	int brack_num = 0;
  	int top = -1;
	char id[100];
	int flag = 0;

	char return_type[20];
	struct func_param temp[20];
	int num_params = -1;
#line 53 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define RETURN 257
#define BREAK 258
#define UNSIGNED 259
#define SIGNED 260
#define DO 261
#define WHILE 262
#define FOR 263
#define IF 264
#define ELSE 265
#define CASE 266
#define DEFAULT 267
#define L_BRACE 268
#define R_BRACE 269
#define L_SQ_BRACE 270
#define R_SQ_BRACE 271
#define L_PAREN 272
#define R_PAREN 273
#define DOT 274
#define SEMICOLON 275
#define COLON 276
#define INCR 277
#define DECR 278
#define NOT 279
#define BNOT 280
#define MULTIPLY 281
#define DIVIDE 282
#define MOD 283
#define PLUS 284
#define MINUS 285
#define GREAT 286
#define LESS 287
#define EGREAT 288
#define ELESS 289
#define EQUALITY 290
#define NEQUAL 291
#define BAND 292
#define CARROT 293
#define BOR 294
#define AND 295
#define OR 296
#define EQUAL 297
#define PEQUAL 298
#define MEQUAL 299
#define SEQUAL 300
#define BEQUAL 301
#define COMMA 302
#define CHAR 303
#define FLOAT 304
#define VOID 305
#define INT 306
#define IDENTIFIER 307
#define CONST_FLOAT 308
#define CONST_INT 309
#define CONST_CHAR 310
#define CONST_STR 311
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    0,    0,    0,   25,   25,   26,   26,   26,
   26,   26,   26,   26,   26,   26,   26,   26,   27,   27,
   29,   30,   28,   31,   31,   23,   23,   23,   24,   32,
   32,   33,   33,   33,   33,   33,   33,   21,   21,   34,
   34,   34,   34,   34,   34,   22,   22,   36,   35,   35,
    2,    2,    2,    2,   37,   37,    3,    3,    3,    3,
    3,    4,    6,    8,    8,    9,    9,    9,    9,    9,
    9,   10,   10,   11,   11,   12,   12,   13,   13,   14,
   14,   15,   15,   15,   16,   16,   16,   16,   16,   17,
   17,   17,   18,   18,   18,   19,   19,   19,   19,   19,
   19,   19,   20,   20,   20,   20,   20,   20,    5,    5,
    5,    7,    7,    1,    1,    1,    1,    1,    1,
};
static const YYINT yylen[] = {                            2,
    3,    3,    2,    1,    0,    2,    1,    2,    2,    1,
    1,    1,    1,    3,    2,    3,    2,    1,    5,    7,
    5,    7,    9,    1,    0,    5,    5,    5,    4,    1,
    0,    4,    4,    4,    2,    2,    2,    4,    3,    1,
    1,    1,    3,    3,    3,    2,    2,    1,    3,    1,
    3,    5,    1,    1,    3,    1,    3,    3,    3,    1,
    1,    4,    4,    3,    1,    3,    3,    3,    3,    3,
    1,    3,    1,    3,    1,    3,    1,    3,    1,    3,
    1,    3,    3,    1,    3,    3,    3,    3,    1,    3,
    3,    1,    3,    3,    1,    2,    2,    2,    2,    2,
    1,    1,    3,    2,    2,    1,    1,    3,    1,    1,
    3,    1,    1,    1,    1,    2,    2,    2,    2,
};
static const YYINT yydefred[] = {                         0,
    4,    0,    0,    0,    0,  115,    0,  114,    0,    0,
    0,    3,    0,  119,  118,  117,  116,    0,    0,    0,
   50,    0,    0,    1,    0,    2,    0,   56,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   18,    0,    0,    0,    0,
    0,   48,    0,  112,  113,    0,    0,  110,  106,    0,
   65,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   95,  102,  101,    0,    0,    7,   10,   11,   12,   13,
    0,    0,    0,    0,    0,    0,    0,   30,    0,    0,
    0,   51,    0,    0,   49,    0,   17,    0,    0,    0,
    0,   15,    0,    0,    0,    0,    0,    0,   96,   97,
    0,   98,   99,  100,    0,    0,  104,  105,    0,    0,
    0,    0,    0,    8,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    9,   29,    6,   58,   57,   59,   55,    0,    0,    0,
   26,   28,   62,   27,    0,   16,    0,    0,    0,    0,
    0,   14,  108,  111,  103,    0,    0,   39,   41,   42,
    0,    0,   66,   67,   68,   69,   70,   64,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   93,   94,    0,    0,    0,   52,    0,    0,    0,
    0,   63,   38,    0,   34,   32,   33,    0,   21,    0,
    0,   44,   45,   43,    0,    0,    0,   22,    0,   20,
    0,   23,
};
static const YYINT yydgoto[] = {                          2,
   56,   21,   28,   22,   57,   58,   59,   60,   61,   62,
   63,   64,   65,   66,   67,   68,   69,   70,   71,   72,
   73,   74,   11,   12,   75,   76,   77,   78,   79,   80,
  160,   87,   88,  172,   23,   13,   30,
};
static const YYINT yysindex[] = {                      -247,
    0, -255, -219, -172, -267,    0, -243,    0, -218, -216,
 -205,    0, -192,    0,    0,    0,    0, -149, -135, -132,
    0, -144, -161,    0,  104,    0, -245,    0, -108, -145,
 -224, -224, -101, -224,  162,  -65,  -93,  162,  -46,  104,
  -41,  -39,  -35, -133, -251,    0, -265, -265, -262, -262,
 -265,    0, -103,    0,    0,  -93,   40,    0,    0, -236,
    0,  -61,  -52,  -44,  -34,  -28, -271,  -68, -213, -134,
    0,    0,    0,   -5,  -62,    0,    0,    0,    0,    0,
  -82,  -31, -192,  -30,  -26,  -25,   10,    0,   11,   14,
   15,    0,  162, -106,    0, -120,    0,   25,  162,  162,
  162,    0,   -6,   16,  440, -242, -265,   20,    0,    0,
  -29,    0,    0,    0,  162,  113,    0,    0,  162,  162,
  162,  162,  162,    0,  162,  162,  162,  162,  162,  162,
  162,  162,  162,  162,  162,  162,  162,  162,  162,  162,
    0,    0,    0,    0,    0,    0,    0,   -9,   -8,   -7,
    0,    0,    0,    0, -258,    0,   19, -211,   -3,   17,
 -156,    0,    0,    0,    0,   23, -248,    0,    0,    0,
   -3, -152,    0,    0,    0,    0,    0,    0,  -52,  -44,
  -34,  -28, -271,  -68,  -68, -213, -213, -213, -213, -134,
 -134,    0,    0, -224, -224, -224,    0,  162,  104,  162,
  104,    0,    0,  153,    0,    0,    0, -140,    0,   41,
   56,    0,    0,    0,   47,  162,  104,    0,   52,    0,
  104,    0,
};
static const YYINT yyrindex[] = {                         1,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -98,
    0,  -97,   49,    0,    0,    0,  -90,    0,  -85,   55,
   54,   54,    0,   54,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  203,    0,    0,    0,  265,    0,    0,    0,
    0,  -37, -183, -115,   75,  607,  569,  517,  377,  293,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -98,    0,    0,    0,    0,    0,   57,
    0,    0,    0,    0,  631,    0,    0,  237,    0,    0,
  265,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   58,   60,   61,
    0,    0,    0,    0,    0,    0,    0,    0,  -87,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   69,    0,    0,    0,    0,    0,    0,    0, -153,   78,
  387,  612,  597,  530,  558,  405,  433,  461,  489,  321,
  349,    0,    0,    0,    0,    0,    0,    0,    0,   57,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   51,    0,    0,    0,    0,   72,    0,    0,    0,    0,
    0,    0,
};
static const YYINT yygindex[] = {                         0,
   -2,  315,  273,  -10,  -33,    0,    0,  -32,  -11,    0,
  249,  251,  255,  258,  254,  108,  -58,  130,  134,  226,
    0,  390,    0,    0,  350,  -38,    0,    0,    0,    0,
 -178,  177,   30,    0,    0,    0,    0,
};
#define YYTABLESIZE 933
static const YYINT yytable[] = {                          9,
    5,   98,   29,    3,    4,   96,  107,    3,    4,   45,
  197,  105,  106,  109,  110,  111,  111,  114,  131,  132,
   45,  210,  202,   92,   33,   47,   48,    1,   86,   86,
  165,   86,   49,   50,    3,    4,  143,  219,  124,   18,
   51,  108,  104,  125,  108,   54,   55,    5,    6,    7,
    8,   81,    6,  125,    8,   53,   54,   55,   24,  125,
  155,  199,   25,   19,  143,  125,  158,  159,  161,   26,
  137,  138,   29,  166,  186,  187,  188,  189,   84,    6,
   85,    8,  167,  171,   14,   73,   15,   73,   20,   73,
  125,   73,  111,  111,  111,  111,  111,  111,  111,  111,
  111,  111,  111,  111,  111,  111,  111,  173,  174,  175,
  176,  177,   73,  178,   27,   72,  201,   72,   73,   72,
  203,   72,   31,   38,   39,    3,    4,   40,   41,   42,
   43,   16,  215,   17,   44,  102,   32,   33,   45,   34,
   37,   46,   72,   47,   48,  125,  139,  140,   72,  204,
   49,   50,   36,   75,  156,   75,   83,   75,   51,   75,
  209,  125,  211,   33,   35,  208,  115,  159,  116,   52,
    6,  214,    8,   53,   54,   55,   54,   53,  220,   75,
   75,  125,  222,  159,   61,   24,   75,   24,   82,   60,
   35,   86,   86,   86,   38,   39,    3,    4,   40,   41,
   42,   43,   93,   54,   53,   44,  142,   90,   89,   45,
   91,   61,   46,   94,   47,   48,   60,  133,  134,  135,
  136,   49,   50,  205,  206,  207,  144,  145,   97,   51,
   99,   71,  100,   71,  126,   71,  101,   71,  184,  185,
   52,    6,  127,    8,   53,   54,   55,  117,  118,  128,
   38,   39,    3,    4,   40,   41,   42,   43,  129,    5,
    5,   44,  162,  130,   71,   45,  190,  191,   46,  141,
   47,   48,  192,  193,  112,  113,  148,   49,   50,  146,
  149,  150,  151,  152,  153,   51,  157,  154,  163,  115,
  198,  200,  194,  195,  196,  164,   52,    6,  125,    8,
   53,   54,   55,    5,    5,    5,    5,   19,   19,   19,
   19,   19,   19,   19,   19,  216,  117,  118,   19,   19,
  217,  218,   19,   46,  221,   19,   31,   19,   19,   47,
   37,   25,   35,   36,   19,   19,  119,  120,  121,  122,
  123,   40,   19,   77,   25,   77,   74,   77,   74,   77,
   74,   95,   74,   19,   19,  147,   19,   19,   19,   19,
   38,   39,    3,    4,   40,   41,   42,   43,   77,   77,
   77,   44,   74,   74,  179,   45,   77,  180,   46,   74,
   47,   48,  181,  183,   45,  168,  182,   49,   50,   47,
   48,   10,    0,  103,    0,   51,   49,   50,    0,    0,
    0,    0,    0,    0,   51,    0,   52,    6,    0,    8,
   53,   54,   55,    0,    0,    0,    0,    0,    0,   53,
   54,   55,  169,  170,   45,    0,    0,    0,    0,   47,
   48,    0,    0,   45,    0,    0,   49,   50,   47,   48,
    0,    0,    0,    0,   51,   49,   50,    0,    0,    0,
    0,    0,    0,   51,    0,    0,    0,    0,    0,   53,
   54,   55,  212,  213,    0,    0,    0,    0,   53,   54,
   55,  109,    0,  109,    0,  109,    0,  109,    0,  109,
  109,    0,    0,  109,  109,    0,  109,  109,  109,  109,
  109,  109,  109,  109,  109,  109,  109,  109,  109,  109,
  109,  109,  109,  109,  109,  109,    0,  109,    0,  109,
    0,  109,    0,  109,  109,    0,    0,  109,  109,    0,
  109,  109,  109,  109,  109,  109,  109,  109,  109,  109,
  109,  109,  109,  107,    0,  107,    0,  107,  109,  107,
    0,    0,    0,    0,    0,  107,  107,    0,  107,  107,
  107,  107,  107,  107,  107,  107,  107,  107,  107,  107,
  107,   92,    0,   92,    0,   92,  107,   92,    0,    0,
    0,    0,    0,    0,    0,    0,   92,   92,   92,   92,
   92,   92,   92,   92,   92,   92,   92,   92,   92,   90,
    0,   90,    0,   90,   92,   90,    0,    0,    0,    0,
    0,    0,    0,    0,   90,   90,   90,   90,   90,   90,
   90,   90,   90,   90,   90,   90,   90,   91,    0,   91,
    0,   91,   90,   91,    0,    0,    0,    0,    0,    0,
    0,    0,   91,   91,   91,   91,   91,   91,   91,   91,
   91,   91,   91,   91,   91,   89,    0,   89,    0,   89,
   91,   89,    0,    0,    0,   76,    0,   76,    0,   76,
    0,   76,   89,   89,   89,   89,   89,   89,   89,   89,
   89,   89,   89,   85,    0,   85,    0,   85,   89,   85,
   76,   76,   76,    0,    0,    0,    0,    0,   76,    0,
   85,   85,   85,   85,   85,   85,   85,   85,   85,   85,
   85,   86,    0,   86,    0,   86,   85,   86,    0,    0,
    0,    0,  164,    0,    0,    0,  117,  118,   86,   86,
   86,   86,   86,   86,   86,   86,   86,   86,   86,   87,
    0,   87,    0,   87,   86,   87,  119,  120,  121,  122,
  123,    0,    0,    0,    0,    0,   87,   87,   87,   87,
   87,   87,   87,   87,   87,   87,   87,   88,    0,   88,
    0,   88,   87,   88,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   88,   88,   88,   88,   88,   88,
   88,   88,   88,   88,   88,   84,    0,   84,    0,   84,
   88,   84,    0,    0,    0,    0,    0,    0,   82,    0,
   82,    0,   82,    0,   82,    0,   84,   84,   84,   84,
   84,   84,   84,    0,    0,    0,    0,    0,   84,   82,
   82,   82,   82,   82,   82,   82,   83,    0,   83,    0,
   83,   82,   83,    0,    0,    0,    0,   81,    0,   81,
    0,   81,    0,   81,    0,    0,    0,   83,   83,   83,
   83,   83,   83,   83,    0,    0,    0,    0,    0,   83,
   81,   81,   81,   81,   81,   80,    0,   80,    0,   80,
   81,   80,    0,    0,    0,   79,    0,   79,    0,   79,
   78,   79,   78,    0,   78,    0,   78,    0,   80,   80,
   80,   80,   80,    0,    0,    0,    0,    0,   80,   79,
   79,   79,   79,    0,   78,   78,   78,   78,   79,    0,
    0,  107,  107,   78,  107,  107,  107,  107,  107,  107,
  107,  107,  107,  107,  107,  107,  107,    0,    0,    0,
    0,    0,  107,
};
static const YYINT yycheck[] = {                          2,
    0,   40,   13,  259,  260,   38,  272,  259,  260,  272,
  269,   45,   45,   47,   48,   49,   50,   51,  290,  291,
  272,  200,  271,   35,  270,  277,  278,  275,   31,   32,
  273,   34,  284,  285,  259,  260,   75,  216,  275,  307,
  292,  307,   45,  302,  307,  308,  309,  303,  304,  305,
  306,  297,  304,  302,  306,  307,  308,  309,  275,  302,
   93,  273,  268,  307,  103,  302,   99,  100,  101,  275,
  284,  285,   83,  107,  133,  134,  135,  136,  303,  304,
  305,  306,  115,  116,  304,  269,  306,  271,  307,  273,
  302,  275,  126,  127,  128,  129,  130,  131,  132,  133,
  134,  135,  136,  137,  138,  139,  140,  119,  120,  121,
  122,  123,  296,  125,  307,  269,  273,  271,  302,  273,
  273,  275,  272,  257,  258,  259,  260,  261,  262,  263,
  264,  304,  273,  306,  268,  269,  272,  270,  272,  272,
  302,  275,  296,  277,  278,  302,  281,  282,  302,  302,
  284,  285,  297,  269,  275,  271,  302,  273,  292,  275,
  199,  302,  201,  270,  297,  198,  270,  200,  272,  303,
  304,  204,  306,  307,  308,  309,  275,  275,  217,  295,
  296,  302,  221,  216,  275,  273,  302,  275,  297,  275,
  297,  194,  195,  196,  257,  258,  259,  260,  261,  262,
  263,  264,  268,  302,  302,  268,  269,  309,   32,  272,
   34,  302,  275,  307,  277,  278,  302,  286,  287,  288,
  289,  284,  285,  194,  195,  196,  309,  310,  275,  292,
  272,  269,  272,  271,  296,  273,  272,  275,  131,  132,
  303,  304,  295,  306,  307,  308,  309,  277,  278,  294,
  257,  258,  259,  260,  261,  262,  263,  264,  293,  259,
  260,  268,  269,  292,  302,  272,  137,  138,  275,  275,
  277,  278,  139,  140,   49,   50,  307,  284,  285,  311,
  307,  307,  273,  273,  271,  292,  262,  273,  273,  270,
  272,  275,  302,  302,  302,  273,  303,  304,  302,  306,
  307,  308,  309,  303,  304,  305,  306,  257,  258,  259,
  260,  261,  262,  263,  264,  275,  277,  278,  268,  269,
  265,  275,  272,  275,  273,  275,  273,  277,  278,  275,
  273,  275,  273,  273,  284,  285,  297,  298,  299,  300,
  301,  273,  292,  269,  273,  271,  269,  273,  271,  275,
  273,   37,  275,  303,  304,   83,  306,  307,  308,  309,
  257,  258,  259,  260,  261,  262,  263,  264,  294,  295,
  296,  268,  295,  296,  126,  272,  302,  127,  275,  302,
  277,  278,  128,  130,  272,  273,  129,  284,  285,  277,
  278,    2,   -1,   44,   -1,  292,  284,  285,   -1,   -1,
   -1,   -1,   -1,   -1,  292,   -1,  303,  304,   -1,  306,
  307,  308,  309,   -1,   -1,   -1,   -1,   -1,   -1,  307,
  308,  309,  310,  311,  272,   -1,   -1,   -1,   -1,  277,
  278,   -1,   -1,  272,   -1,   -1,  284,  285,  277,  278,
   -1,   -1,   -1,   -1,  292,  284,  285,   -1,   -1,   -1,
   -1,   -1,   -1,  292,   -1,   -1,   -1,   -1,   -1,  307,
  308,  309,  310,  311,   -1,   -1,   -1,   -1,  307,  308,
  309,  269,   -1,  271,   -1,  273,   -1,  275,   -1,  277,
  278,   -1,   -1,  281,  282,   -1,  284,  285,  286,  287,
  288,  289,  290,  291,  292,  293,  294,  295,  296,  297,
  298,  299,  300,  301,  302,  269,   -1,  271,   -1,  273,
   -1,  275,   -1,  277,  278,   -1,   -1,  281,  282,   -1,
  284,  285,  286,  287,  288,  289,  290,  291,  292,  293,
  294,  295,  296,  269,   -1,  271,   -1,  273,  302,  275,
   -1,   -1,   -1,   -1,   -1,  281,  282,   -1,  284,  285,
  286,  287,  288,  289,  290,  291,  292,  293,  294,  295,
  296,  269,   -1,  271,   -1,  273,  302,  275,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  284,  285,  286,  287,
  288,  289,  290,  291,  292,  293,  294,  295,  296,  269,
   -1,  271,   -1,  273,  302,  275,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  284,  285,  286,  287,  288,  289,
  290,  291,  292,  293,  294,  295,  296,  269,   -1,  271,
   -1,  273,  302,  275,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  284,  285,  286,  287,  288,  289,  290,  291,
  292,  293,  294,  295,  296,  269,   -1,  271,   -1,  273,
  302,  275,   -1,   -1,   -1,  269,   -1,  271,   -1,  273,
   -1,  275,  286,  287,  288,  289,  290,  291,  292,  293,
  294,  295,  296,  269,   -1,  271,   -1,  273,  302,  275,
  294,  295,  296,   -1,   -1,   -1,   -1,   -1,  302,   -1,
  286,  287,  288,  289,  290,  291,  292,  293,  294,  295,
  296,  269,   -1,  271,   -1,  273,  302,  275,   -1,   -1,
   -1,   -1,  273,   -1,   -1,   -1,  277,  278,  286,  287,
  288,  289,  290,  291,  292,  293,  294,  295,  296,  269,
   -1,  271,   -1,  273,  302,  275,  297,  298,  299,  300,
  301,   -1,   -1,   -1,   -1,   -1,  286,  287,  288,  289,
  290,  291,  292,  293,  294,  295,  296,  269,   -1,  271,
   -1,  273,  302,  275,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  286,  287,  288,  289,  290,  291,
  292,  293,  294,  295,  296,  269,   -1,  271,   -1,  273,
  302,  275,   -1,   -1,   -1,   -1,   -1,   -1,  269,   -1,
  271,   -1,  273,   -1,  275,   -1,  290,  291,  292,  293,
  294,  295,  296,   -1,   -1,   -1,   -1,   -1,  302,  290,
  291,  292,  293,  294,  295,  296,  269,   -1,  271,   -1,
  273,  302,  275,   -1,   -1,   -1,   -1,  269,   -1,  271,
   -1,  273,   -1,  275,   -1,   -1,   -1,  290,  291,  292,
  293,  294,  295,  296,   -1,   -1,   -1,   -1,   -1,  302,
  292,  293,  294,  295,  296,  269,   -1,  271,   -1,  273,
  302,  275,   -1,   -1,   -1,  269,   -1,  271,   -1,  273,
  269,  275,  271,   -1,  273,   -1,  275,   -1,  292,  293,
  294,  295,  296,   -1,   -1,   -1,   -1,   -1,  302,  293,
  294,  295,  296,   -1,  293,  294,  295,  296,  302,   -1,
   -1,  281,  282,  302,  284,  285,  286,  287,  288,  289,
  290,  291,  292,  293,  294,  295,  296,   -1,   -1,   -1,
   -1,   -1,  302,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 311
#define YYUNDFTOKEN 351
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"RETURN","BREAK","UNSIGNED",
"SIGNED","DO","WHILE","FOR","IF","ELSE","CASE","DEFAULT","L_BRACE","R_BRACE",
"L_SQ_BRACE","R_SQ_BRACE","L_PAREN","R_PAREN","DOT","SEMICOLON","COLON","INCR",
"DECR","NOT","BNOT","MULTIPLY","DIVIDE","MOD","PLUS","MINUS","GREAT","LESS",
"EGREAT","ELESS","EQUALITY","NEQUAL","BAND","CARROT","BOR","AND","OR","EQUAL",
"PEQUAL","MEQUAL","SEQUAL","BEQUAL","COMMA","CHAR","FLOAT","VOID","INT",
"IDENTIFIER","CONST_FLOAT","CONST_INT","CONST_CHAR","CONST_STR",0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : START",
"START : START DEC0 SEMICOLON",
"START : START FUNC_DEC SEMICOLON",
"START : START FUNC_DEF",
"START : SEMICOLON",
"START :",
"STATEMENT_BLOCK : STATEMENT_BLOCK STATEMENT",
"STATEMENT_BLOCK : STATEMENT",
"STATEMENT : EXPR0 SEMICOLON",
"STATEMENT : DEC0 SEMICOLON",
"STATEMENT : IF_CONS",
"STATEMENT : FOR_LOOP",
"STATEMENT : WHILE_LOOP",
"STATEMENT : DO_WHILE",
"STATEMENT : L_BRACE STATEMENT_BLOCK R_BRACE",
"STATEMENT : L_BRACE R_BRACE",
"STATEMENT : RETURN EXPR0 SEMICOLON",
"STATEMENT : BREAK SEMICOLON",
"STATEMENT : SEMICOLON",
"IF_CONS : IF L_PAREN EXPR0 R_PAREN STATEMENT",
"IF_CONS : IF L_PAREN EXPR0 R_PAREN STATEMENT ELSE STATEMENT",
"WHILE_LOOP : WHILE L_PAREN EXPR0 R_PAREN STATEMENT",
"DO_WHILE : DO STATEMENT WHILE L_PAREN EXPR0 R_PAREN SEMICOLON",
"FOR_LOOP : FOR L_PAREN FOR_PAR SEMICOLON FOR_PAR SEMICOLON FOR_PAR R_PAREN STATEMENT",
"FOR_PAR : EXPR0",
"FOR_PAR :",
"FUNC_DEC : CHAR IDENTIFIER L_PAREN FUNC_PARAMS R_PAREN",
"FUNC_DEC : NUM_TYPE IDENTIFIER L_PAREN FUNC_PARAMS R_PAREN",
"FUNC_DEC : VOID IDENTIFIER L_PAREN FUNC_PARAMS R_PAREN",
"FUNC_DEF : FUNC_DEC L_BRACE STATEMENT_BLOCK R_BRACE",
"FUNC_PARAMS : FUNC_PARAMS1",
"FUNC_PARAMS :",
"FUNC_PARAMS1 : VOID IDENTIFIER COMMA FUNC_PARAMS1",
"FUNC_PARAMS1 : NUM_TYPE IDENTIFIER COMMA FUNC_PARAMS1",
"FUNC_PARAMS1 : CHAR IDENTIFIER COMMA FUNC_PARAMS1",
"FUNC_PARAMS1 : VOID IDENTIFIER",
"FUNC_PARAMS1 : NUM_TYPE IDENTIFIER",
"FUNC_PARAMS1 : CHAR IDENTIFIER",
"FUNC_CALL : IDENTIFIER L_PAREN FUNC_LIST R_PAREN",
"FUNC_CALL : IDENTIFIER L_PAREN R_PAREN",
"FUNC_LIST : EXPR0",
"FUNC_LIST : CONST_CHAR",
"FUNC_LIST : CONST_STR",
"FUNC_LIST : FUNC_LIST COMMA EXPR0",
"FUNC_LIST : FUNC_LIST COMMA CONST_CHAR",
"FUNC_LIST : FUNC_LIST COMMA CONST_STR",
"DEC0 : NUM_TYPE DEC1",
"DEC0 : CHR_TYPE DEC3",
"CHR_TYPE : CHAR",
"DEC1 : DEC1 COMMA DEC2",
"DEC1 : DEC2",
"DEC2 : IDENTIFIER EQUAL EXPR1",
"DEC2 : DEC_ARR EQUAL L_BRACE EXPR0 R_BRACE",
"DEC2 : DEC_ARR",
"DEC2 : IDENTIFIER",
"DEC3 : DEC3 COMMA DEC4",
"DEC3 : DEC4",
"DEC4 : IDENTIFIER EQUAL CONST_CHAR",
"DEC4 : IDENTIFIER EQUAL CONST_INT",
"DEC4 : DEC_ARR EQUAL CONST_STR",
"DEC4 : DEC_ARR",
"DEC4 : IDENTIFIER",
"DEC_ARR : IDENTIFIER L_SQ_BRACE CONST_INT R_SQ_BRACE",
"ARR : IDENTIFIER L_SQ_BRACE EXPR0 R_SQ_BRACE",
"EXPR0 : EXPR0 COMMA EXPR1",
"EXPR0 : EXPR1",
"EXPR1 : LVAL EQUAL EXPR1",
"EXPR1 : LVAL PEQUAL EXPR1",
"EXPR1 : LVAL MEQUAL EXPR1",
"EXPR1 : LVAL SEQUAL EXPR1",
"EXPR1 : LVAL BEQUAL EXPR1",
"EXPR1 : EXPR1G",
"EXPR1G : EXPR1G OR EXPR1F",
"EXPR1G : EXPR1F",
"EXPR1F : EXPR1F AND EXPR1E",
"EXPR1F : EXPR1E",
"EXPR1E : EXPR1E BOR EXPR1D",
"EXPR1E : EXPR1D",
"EXPR1D : EXPR1D CARROT EXPR1C",
"EXPR1D : EXPR1C",
"EXPR1C : EXPR1C BAND EXPR1B",
"EXPR1C : EXPR1B",
"EXPR1B : EXPR1B EQUALITY EXPR1A",
"EXPR1B : EXPR1B NEQUAL EXPR1A",
"EXPR1B : EXPR1A",
"EXPR1A : EXPR1A GREAT EXPR2",
"EXPR1A : EXPR1A LESS EXPR2",
"EXPR1A : EXPR1A EGREAT EXPR2",
"EXPR1A : EXPR1A ELESS EXPR2",
"EXPR1A : EXPR2",
"EXPR2 : EXPR2 PLUS EXPR3",
"EXPR2 : EXPR2 MINUS EXPR3",
"EXPR2 : EXPR3",
"EXPR3 : EXPR3 MULTIPLY EXPR3A",
"EXPR3 : EXPR3 DIVIDE EXPR3A",
"EXPR3 : EXPR3A",
"EXPR3A : INCR LVAL",
"EXPR3A : DECR LVAL",
"EXPR3A : PLUS EXPR4",
"EXPR3A : MINUS EXPR4",
"EXPR3A : BAND LVAL",
"EXPR3A : FUNC_CALL",
"EXPR3A : EXPR4",
"EXPR4 : L_PAREN EXPR0 R_PAREN",
"EXPR4 : LVAL INCR",
"EXPR4 : LVAL DECR",
"EXPR4 : NUM",
"EXPR4 : LVAL",
"EXPR4 : L_PAREN NUM_TYPE R_PAREN",
"LVAL : IDENTIFIER",
"LVAL : ARR",
"LVAL : L_PAREN LVAL R_PAREN",
"NUM : CONST_FLOAT",
"NUM : CONST_INT",
"NUM_TYPE : INT",
"NUM_TYPE : FLOAT",
"NUM_TYPE : SIGNED INT",
"NUM_TYPE : SIGNED FLOAT",
"NUM_TYPE : UNSIGNED INT",
"NUM_TYPE : UNSIGNED FLOAT",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 282 "parser.y"
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
    if(flg1 == 0){
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
	// print_symbol_table();
	printf("\nParsing Unsuccessful: %s, at line number:%d.\n", s, line);
	return 0;
}
#line 687 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 26:
#line 108 "parser.y"
	{strcpy(return_type, yystack.l_mark[-4].lval);
																								install_symbol(yystack.l_mark[-3].lval,id, st, top,-1, return_type, 	temp, num_params,1); num_params=-1;}
break;
case 27:
#line 110 "parser.y"
	{strcpy(return_type, yystack.l_mark[-4].lval);
																										install_symbol(yystack.l_mark[-3].lval,id, st, top,-1, return_type, 	temp, num_params, 1);	num_params=-1;}
break;
case 28:
#line 112 "parser.y"
	{strcpy(return_type, yystack.l_mark[-4].lval);
																								install_symbol(yystack.l_mark[-3].lval,id, st, top,-1, return_type, 	temp, num_params, 1);	num_params=-1;}
break;
case 29:
#line 116 "parser.y"
	{}
break;
case 32:
#line 123 "parser.y"
	{strcpy(temp[++num_params].datatype, "void");
																st[++top] = brack_num+1;install_symbol(yystack.l_mark[-2].lval, id, st, top,-1, return_type, temp, num_params, 0);	top--; }
break;
case 33:
#line 125 "parser.y"
	{strcpy(temp[++num_params].datatype, id);
																st[++top] = brack_num+1;install_symbol(yystack.l_mark[-2].lval, id, st, top,-1, return_type, temp, num_params, 0);	top--;}
break;
case 34:
#line 127 "parser.y"
	{strcpy(temp[++num_params].datatype, "void");
																st[++top] = brack_num+1;strcpy(id, yystack.l_mark[-3].lval);install_symbol(yystack.l_mark[-2].lval,id, st, top,-1, return_type, temp, num_params, 0);	top--;}
break;
case 35:
#line 129 "parser.y"
	{strcpy(temp[++num_params].datatype, "void");
										strcpy(id, yystack.l_mark[-1].lval); st[++top] = brack_num+1;install_symbol(yystack.l_mark[0].lval, id, st, top,-1, return_type, temp, num_params, 0);	top--;}
break;
case 36:
#line 131 "parser.y"
	{strcpy(temp[++num_params].datatype, id);
												st[++top] = brack_num+1;install_symbol(yystack.l_mark[0].lval, id, st, top,-1, return_type, temp, num_params, 0);	top--;}
break;
case 37:
#line 133 "parser.y"
	{strcpy(temp[++num_params].datatype, "char");
											strcpy(id, yystack.l_mark[-1].lval); st[++top] = brack_num+1;install_symbol(yystack.l_mark[0].lval, id, st, top,-1, return_type, temp, num_params, 0);	top--;}
break;
case 41:
#line 142 "parser.y"
	{}
break;
case 42:
#line 143 "parser.y"
	{}
break;
case 44:
#line 145 "parser.y"
	{}
break;
case 45:
#line 146 "parser.y"
	{}
break;
case 48:
#line 155 "parser.y"
	{strcpy(id, yystack.l_mark[0].lval);}
break;
case 51:
#line 161 "parser.y"
	{install_symbol(yystack.l_mark[-2].lval, id, st, top,-1, return_type, temp, num_params, 0);}
break;
case 52:
#line 162 "parser.y"
	{}
break;
case 53:
#line 163 "parser.y"
	{}
break;
case 54:
#line 164 "parser.y"
	{install_symbol(yystack.l_mark[0].lval, id, st, top,-1, return_type, temp, num_params, 0);}
break;
case 57:
#line 173 "parser.y"
	{install_symbol(yystack.l_mark[-2].lval, id, st, top,-1, return_type, temp, num_params, 0);}
break;
case 58:
#line 174 "parser.y"
	{install_symbol(yystack.l_mark[-2].lval, id, st, top,-1, return_type, temp, num_params, 0);}
break;
case 59:
#line 175 "parser.y"
	{}
break;
case 60:
#line 176 "parser.y"
	{}
break;
case 61:
#line 177 "parser.y"
	{install_symbol(yystack.l_mark[0].lval, id, st, top,-1, return_type, temp, num_params, 0);}
break;
case 62:
#line 182 "parser.y"
	{ strcat(id,"_array");install_symbol(yystack.l_mark[-3].lval, id, st, top,yystack.l_mark[-1].val, return_type, temp, num_params, 0);}
break;
case 63:
#line 185 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[-3].lval); }
break;
case 64:
#line 190 "parser.y"
	{if(strcmp(yystack.l_mark[0].lval,"invalid") == 0 || strcmp(yystack.l_mark[-2].lval,"invalid") == 0) strcpy(yyval.lval,"invalid"); else strcpy(yyval.lval,"int"); }
break;
case 65:
#line 191 "parser.y"
	{strcpy(yyval.lval,yystack.l_mark[0].lval);}
break;
case 66:
#line 194 "parser.y"
	{if(strcmp(yystack.l_mark[-2].lval,yystack.l_mark[0].lval) == 0) strcpy(yyval.lval,yystack.l_mark[-2].lval); else strcpy(yyval.lval,"invalid");}
break;
case 67:
#line 195 "parser.y"
	{if(strcmp(yystack.l_mark[-2].lval,yystack.l_mark[0].lval) == 0) strcpy(yyval.lval,yystack.l_mark[-2].lval); else strcpy(yyval.lval,"invalid");}
break;
case 68:
#line 196 "parser.y"
	{if(strcmp(yystack.l_mark[-2].lval,yystack.l_mark[0].lval) == 0) strcpy(yyval.lval,yystack.l_mark[-2].lval); else strcpy(yyval.lval,"invalid");}
break;
case 69:
#line 197 "parser.y"
	{if(strcmp(yystack.l_mark[-2].lval,yystack.l_mark[0].lval) == 0) strcpy(yyval.lval,yystack.l_mark[-2].lval); else strcpy(yyval.lval,"invalid");}
break;
case 70:
#line 198 "parser.y"
	{if(strcmp(yystack.l_mark[-2].lval,yystack.l_mark[0].lval) == 0) strcpy(yyval.lval,yystack.l_mark[-2].lval); else strcpy(yyval.lval,"invalid");}
break;
case 71:
#line 199 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 72:
#line 202 "parser.y"
	{if(strcmp(yystack.l_mark[-2].lval,"int")!=0 || strcmp(yystack.l_mark[0].lval,"int")!=0) strcpy(yyval.lval,"invalid"); else strcpy(yyval.lval,"int");}
break;
case 73:
#line 203 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 74:
#line 206 "parser.y"
	{if(strcmp(yystack.l_mark[-2].lval,"int")!=0 || strcmp(yystack.l_mark[0].lval,"int")!=0)  strcpy(yyval.lval,"invalid"); else strcpy(yyval.lval,"int");}
break;
case 75:
#line 207 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 76:
#line 210 "parser.y"
	{if(strcmp(yystack.l_mark[-2].lval,"int")!=0 || strcmp(yystack.l_mark[0].lval,"int")!=0)  strcpy(yyval.lval,"invalid"); else strcpy(yyval.lval,"int");}
break;
case 77:
#line 211 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 78:
#line 214 "parser.y"
	{if(strcmp(yystack.l_mark[-2].lval,"int")!=0 || strcmp(yystack.l_mark[0].lval,"int")!=0)  strcpy(yyval.lval,"invalid"); else strcpy(yyval.lval,"int");}
break;
case 79:
#line 215 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 80:
#line 218 "parser.y"
	{if(strcmp(yystack.l_mark[-2].lval,"int")!=0 || strcmp(yystack.l_mark[0].lval,"int")!=0)  strcpy(yyval.lval,"invalid"); else strcpy(yyval.lval,"int");}
break;
case 81:
#line 219 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 82:
#line 222 "parser.y"
	{if(strcmp(yystack.l_mark[-2].lval,yystack.l_mark[0].lval) == 0) strcpy(yyval.lval,yystack.l_mark[-2].lval); else strcpy(yyval.lval,"invalid");}
break;
case 83:
#line 223 "parser.y"
	{if(strcmp(yystack.l_mark[-2].lval,yystack.l_mark[0].lval) == 0) strcpy(yyval.lval,yystack.l_mark[-2].lval); else strcpy(yyval.lval,"invalid");}
break;
case 84:
#line 224 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 85:
#line 227 "parser.y"
	{if(strcmp(yystack.l_mark[-2].lval,yystack.l_mark[0].lval) == 0) strcpy(yyval.lval,yystack.l_mark[-2].lval); else strcpy(yyval.lval,"invalid");}
break;
case 86:
#line 228 "parser.y"
	{if(strcmp(yystack.l_mark[-2].lval,yystack.l_mark[0].lval) == 0) strcpy(yyval.lval,yystack.l_mark[-2].lval); else strcpy(yyval.lval,"invalid");}
break;
case 87:
#line 229 "parser.y"
	{if(strcmp(yystack.l_mark[-2].lval,yystack.l_mark[0].lval) == 0) strcpy(yyval.lval,yystack.l_mark[-2].lval); else strcpy(yyval.lval,"invalid");}
break;
case 88:
#line 230 "parser.y"
	{if(strcmp(yystack.l_mark[-2].lval,yystack.l_mark[0].lval) == 0) strcpy(yyval.lval,yystack.l_mark[-2].lval); else strcpy(yyval.lval,"invalid");}
break;
case 89:
#line 231 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 90:
#line 234 "parser.y"
	{if(strcmp(yystack.l_mark[-2].lval,yystack.l_mark[0].lval) == 0) strcpy(yyval.lval,yystack.l_mark[-2].lval); else strcpy(yyval.lval,"invalid");}
break;
case 91:
#line 235 "parser.y"
	{if(strcmp(yystack.l_mark[-2].lval,yystack.l_mark[0].lval) == 0) strcpy(yyval.lval,yystack.l_mark[-2].lval); else strcpy(yyval.lval,"invalid");}
break;
case 92:
#line 236 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 93:
#line 239 "parser.y"
	{if(strcmp(yystack.l_mark[-2].lval,yystack.l_mark[0].lval) == 0) strcpy(yyval.lval,yystack.l_mark[-2].lval); else strcpy(yyval.lval,"invalid");}
break;
case 94:
#line 240 "parser.y"
	{if(strcmp(yystack.l_mark[-2].lval,yystack.l_mark[0].lval) == 0) strcpy(yyval.lval,yystack.l_mark[-2].lval); else strcpy(yyval.lval,"invalid");}
break;
case 95:
#line 241 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 96:
#line 244 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 97:
#line 245 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 98:
#line 246 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 99:
#line 247 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 100:
#line 248 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 101:
#line 249 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 102:
#line 250 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 103:
#line 253 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[-1].lval);}
break;
case 104:
#line 254 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[-1].lval);}
break;
case 105:
#line 255 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[-1].lval);}
break;
case 106:
#line 256 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 107:
#line 257 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 108:
#line 258 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[-1].lval);}
break;
case 109:
#line 262 "parser.y"
	{printf("found %s : %s\n",get_datatype(yystack.l_mark[0].lval,st,top),yystack.l_mark[0].lval);strcpy(yyval.lval, yystack.l_mark[0].lval);if(strcmp("printf",yystack.l_mark[0].lval)!=0){char tempo[256]; strcpy(tempo,yystack.l_mark[0].lval);if(check_scope(tempo) == 0){printf("line %d : %s is out of scope\n",line,tempo);yyerror(" - ");}}}
break;
case 110:
#line 263 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 111:
#line 264 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[-1].lval);}
break;
case 112:
#line 268 "parser.y"
	{strcpy(yyval.lval, "float");}
break;
case 113:
#line 269 "parser.y"
	{strcpy(yyval.lval, "int");}
break;
case 114:
#line 272 "parser.y"
	{strcpy(id, yystack.l_mark[0].lval);}
break;
case 115:
#line 273 "parser.y"
	{strcpy(id, yystack.l_mark[0].lval);}
break;
case 116:
#line 274 "parser.y"
	{strcpy(id, yystack.l_mark[0].lval);}
break;
case 117:
#line 275 "parser.y"
	{strcpy(id, yystack.l_mark[0].lval);}
break;
case 118:
#line 276 "parser.y"
	{strcpy(id, yystack.l_mark[0].lval); strcat(id, "_u");}
break;
case 119:
#line 277 "parser.y"
	{strcpy(id, yystack.l_mark[0].lval); strcat(id, "_u");}
break;
#line 1226 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
