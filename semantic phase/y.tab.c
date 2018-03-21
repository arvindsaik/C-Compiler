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

#line 21 "parser.y"
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
#line 33 "parser.y"
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
#line 57 "y.tab.c"

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
   32,   33,   33,   33,   33,   33,   21,   21,   34,   34,
   34,   34,   34,   22,   22,   36,   35,   35,    2,    2,
    2,    2,   37,   37,    3,    3,    3,    3,    3,    3,
    4,    6,    6,    8,    8,    9,    9,    9,    9,    9,
    9,   10,   10,   11,   11,   12,   12,   13,   13,   14,
   14,   15,   15,   15,   16,   16,   16,   16,   16,   17,
   17,   17,   18,   18,   18,   19,   19,   19,   19,   19,
   19,   19,   20,   20,   20,   20,   20,   20,    5,    5,
    5,    7,    7,    7,    1,    1,    1,    1,    1,    1,
};
static const YYINT yylen[] = {                            2,
    3,    3,    2,    1,    0,    2,    1,    2,    2,    1,
    1,    1,    1,    3,    2,    3,    2,    1,    5,    7,
    5,    7,    9,    1,    0,    5,    5,    5,    4,    1,
    0,    4,    4,    2,    2,    2,    4,    3,    1,    1,
    3,    3,    3,    2,    2,    1,    3,    1,    3,    5,
    1,    1,    3,    1,    3,    3,    3,    3,    1,    1,
    4,    4,    4,    3,    1,    3,    3,    3,    3,    3,
    1,    3,    1,    3,    1,    3,    1,    3,    1,    3,
    1,    3,    3,    1,    3,    3,    3,    3,    1,    3,
    3,    1,    3,    3,    1,    2,    2,    2,    2,    2,
    1,    1,    3,    2,    2,    1,    1,    3,    1,    1,
    3,    1,    1,    1,    1,    1,    2,    2,    2,    2,
};
static const YYINT yydefred[] = {                         0,
    4,    0,    0,    0,    0,  116,    0,  115,    0,    0,
    0,    3,    0,  120,  119,  118,  117,    0,    0,    0,
   48,    0,    0,    1,    0,    2,    0,   54,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   18,    0,    0,    0,    0,
    0,   46,    0,  112,  113,  114,    0,    0,  110,  106,
    0,   65,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   95,  102,  101,    0,    0,    7,   10,   11,   12,
   13,    0,    0,    0,    0,    0,    0,    0,   30,    0,
    0,    0,   49,    0,    0,   47,    0,   17,    0,    0,
    0,    0,   15,    0,    0,    0,    0,    0,    0,   96,
   97,    0,   98,   99,  100,    0,    0,  104,  105,    0,
    0,    0,    0,    0,    8,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    9,   29,    6,   57,   56,   55,   58,   53,    0,
   34,    0,   26,   28,   61,   27,    0,   16,    0,    0,
    0,    0,    0,   14,  108,  111,  103,    0,    0,    0,
   38,    0,    0,    0,    0,   66,   67,   68,   69,   70,
   64,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   93,   94,    0,    0,   50,    0,
    0,    0,    0,   62,   63,    0,    0,    0,   37,   33,
   32,    0,   21,    0,    0,   42,   43,   41,    0,    0,
    0,   22,    0,   20,    0,   23,
};
static const YYINT yydgoto[] = {                          2,
   57,   21,   28,   22,   58,   59,   60,   61,   62,   63,
   64,   65,   66,   67,   68,   69,   70,   71,   72,   73,
   74,   75,   11,   12,   76,   77,   78,   79,   80,   81,
  162,   88,   89,  175,   23,   13,   30,
};
static const YYINT yysindex[] = {                      -268,
    0, -223, -120,  -93, -276,    0, -243,    0, -228, -190,
 -154,    0, -194,    0,    0,    0,    0, -150, -142, -256,
    0, -164, -117,    0,  167,    0, -245,    0,  -87, -108,
 -188, -188,  -95, -188,  171,  -45,  -77,  171,   -5,  167,
  -27,    6,    7,  -60, -250,    0, -267, -267, -261, -261,
 -267,    0,  -39,    0,    0,    0,  -77,   -6,    0,    0,
 -252,    0,  -15,  -11,   -9,   -7,   -4,  -84, -160, -103,
  -62,    0,    0,    0,   12,    5,    0,    0,    0,    0,
    0, -233,  -13, -194,   -8,    3,   17,   23,    0,   27,
   30,   29,    0,  171, -174,    0, -140,    0,   41,  171,
  171,  171,    0,   59,   52,  433, -249, -267,   56,    0,
    0,  -51,    0,    0,    0,  210, -153,    0,    0,  171,
  171,  171,  171,  171,    0,  171,  171,  171,  171,  171,
  171,  171,  171,  171,  171,  171,  171,  171,  171,  171,
  171,    0,    0,    0,    0,    0,    0,    0,    0,   28,
    0,   31,    0,    0,    0,    0, -257,    0,   57, -247,
   33,   63, -229,    0,    0,    0,    0,   66,   61, -263,
    0,   38,   39,   40,   72,    0,    0,    0,    0,    0,
    0,  -11,   -9,   -7,   -4,  -84, -160, -160, -103, -103,
 -103, -103,  -62,  -62,    0,    0, -188, -188,    0,  171,
  167,  171,  167,    0,    0,  -56,  -56,  -56,    0,    0,
    0, -161,    0,   71,   82,    0,    0,    0,   73,  171,
  167,    0,   76,    0,  167,    0,
};
static const YYINT yyrindex[] = {                         1,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -138,
    0, -133,   75,    0,    0,    0, -109,    0,  -97,   77,
   81,   81,    0,   81,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  252,    0,    0,    0,    0,  314,    0,    0,
    0,    0, -123,  189, -208, -135, -122,  618,  566,  426,
  342,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -138,    0,    0,    0,    0,    0,
   83,    0,    0,    0,    0,  696,    0,    0,  286,    0,
    0,  314,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   87,
    0,   88,    0,    0,    0,    0,    0,    0,    0,    0,
  -36,    0,    0,    0,    0,    0,    0,    0,  715,    0,
    0,  680,   91,  110,    0,    0,    0,    0,    0,    0,
    0,  230,  138,   84,  656,  646,  579,  607,  454,  482,
  510,  538,  370,  398,    0,    0,    0,    0,    0,    0,
    0,   83,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  113,    0,    0,    0,    0,  111,
    0,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
   -2,  319,  303,  -10,  -30,    0,    0,  -32,  -31,    0,
  262,  264,  265,  263,  268,  102,   55,  103,  116,  209,
    0,  393,    0,    0,  352,  -38,    0,    0,    0,    0,
 -169,  206,   78,  -63,    0,    0,    0,
};
#define YYTABLESIZE 1017
static const YYINT yytable[] = {                          9,
    5,   99,   29,   93,  108,   97,    1,  205,    3,    4,
   45,  199,  107,   33,  106,   34,  110,  111,  112,  112,
  115,   45,  125,  167,   33,  201,   47,   48,   87,   87,
   18,   87,  214,   49,   50,    3,    4,  144,  126,  109,
   35,   51,  105,  203,  126,  109,   54,   55,   56,  126,
  223,   82,  126,    6,  126,    8,   53,   54,   55,   56,
   75,  157,   75,   19,   75,  144,   75,  160,  161,  163,
    3,    4,  126,   29,  145,  146,  147,  168,   20,    5,
    6,    7,    8,  170,   24,  174,   75,   75,  176,  177,
  178,  179,  180,   75,  181,   33,  112,  112,  112,  112,
  112,  112,  112,  112,  112,  112,  112,  112,  112,  112,
  112,  219,   27,   25,   85,    6,   86,    8,   45,  171,
   26,   31,   35,   47,   48,  134,  135,  136,  137,   32,
   49,   50,   36,   77,  158,   77,   52,   77,   51,   77,
  126,   51,  216,  217,  218,   71,   79,   71,   79,   71,
   79,   71,   79,   53,   54,   55,  172,  173,   77,   77,
   77,  126,  213,   52,  215,   60,   77,  212,   51,  161,
   79,   79,   79,   79,  174,  174,  174,   59,   71,   79,
  138,  139,  224,   14,   37,   15,  226,  161,  189,  190,
  191,  192,   60,   84,   87,   87,   38,   39,    3,    4,
   40,   41,   42,   43,   59,  132,  133,   44,  103,   83,
   16,   45,   17,   91,   46,   45,   47,   48,  140,  141,
   47,   48,   94,   49,   50,  118,  119,   49,   50,   95,
  116,   51,  117,  187,  188,   51,   24,   90,   24,   92,
  193,  194,   52,    6,  100,    8,   53,   54,   55,   56,
   53,   54,   55,  172,  173,  195,  196,  113,  114,    5,
    5,   38,   39,    3,    4,   40,   41,   42,   43,   98,
  118,  119,   44,  143,  210,  211,   45,  101,  102,   46,
  127,   47,   48,  128,  129,  130,  142,  131,   49,   50,
  120,  121,  122,  123,  124,  153,   51,  148,  150,  154,
  155,  156,  159,    5,    5,    5,    5,   52,    6,  151,
    8,   53,   54,   55,   56,   38,   39,    3,    4,   40,
   41,   42,   43,  152,  165,  116,   44,  164,  200,  197,
   45,  204,  198,   46,  126,   47,   48,  202,  166,  206,
  207,  208,   49,   50,  209,  220,  221,  222,  225,   44,
   51,   45,   76,   31,   76,   96,   76,   25,   76,   36,
   35,   52,    6,   40,    8,   53,   54,   55,   56,   19,
   19,   19,   19,   19,   19,   19,   19,   76,   76,   76,
   19,   19,   39,   25,   19,   76,  149,   19,  182,   19,
   19,  183,  185,  184,   10,  104,   19,   19,  186,    0,
    0,    0,    0,    0,   19,    0,   74,    0,   74,    0,
   74,    0,   74,    0,    0,   19,   19,    0,   19,   19,
   19,   19,   19,   38,   39,    3,    4,   40,   41,   42,
   43,    0,   74,   74,   44,    0,    0,    0,   45,   74,
    0,   46,   45,   47,   48,    0,    0,   47,   48,    0,
   49,   50,    0,    0,   49,   50,    0,   73,   51,   73,
    0,   73,   51,   73,    0,    0,    0,    0,    0,   52,
    6,    0,    8,   53,   54,   55,   56,   53,   54,   55,
   56,   45,    0,    0,   73,    0,   47,   48,    0,    0,
   73,    0,    0,   49,   50,    0,    0,    0,   72,    0,
   72,   51,   72,    0,   72,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   53,   54,  169,   56,
  109,    0,  109,    0,  109,   72,  109,    0,  109,  109,
    0,   72,  109,  109,    0,  109,  109,  109,  109,  109,
  109,  109,  109,  109,  109,  109,  109,  109,  109,  109,
  109,  109,  109,  109,  109,    0,  109,    0,  109,    0,
  109,    0,  109,  109,    0,    0,  109,  109,    0,  109,
  109,  109,  109,  109,  109,  109,  109,  109,  109,  109,
  109,  109,  107,    0,  107,    0,  107,  109,  107,    0,
    0,    0,    0,    0,  107,  107,    0,  107,  107,  107,
  107,  107,  107,  107,  107,  107,  107,  107,  107,  107,
   92,    0,   92,    0,   92,  107,   92,    0,    0,    0,
    0,    0,    0,    0,    0,   92,   92,   92,   92,   92,
   92,   92,   92,   92,   92,   92,   92,   92,   90,    0,
   90,    0,   90,   92,   90,    0,    0,    0,    0,    0,
    0,    0,    0,   90,   90,   90,   90,   90,   90,   90,
   90,   90,   90,   90,   90,   90,   91,    0,   91,    0,
   91,   90,   91,    0,    0,    0,    0,    0,    0,    0,
    0,   91,   91,   91,   91,   91,   91,   91,   91,   91,
   91,   91,   91,   91,   89,    0,   89,    0,   89,   91,
   89,    0,    0,    0,    0,  166,    0,    0,    0,  118,
  119,   89,   89,   89,   89,   89,   89,   89,   89,   89,
   89,   89,   85,    0,   85,    0,   85,   89,   85,  120,
  121,  122,  123,  124,    0,    0,    0,    0,    0,   85,
   85,   85,   85,   85,   85,   85,   85,   85,   85,   85,
   86,    0,   86,    0,   86,   85,   86,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   86,   86,   86,
   86,   86,   86,   86,   86,   86,   86,   86,   87,    0,
   87,    0,   87,   86,   87,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   87,   87,   87,   87,   87,
   87,   87,   87,   87,   87,   87,   88,    0,   88,    0,
   88,   87,   88,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   88,   88,   88,   88,   88,   88,   88,
   88,   88,   88,   88,   84,    0,   84,    0,   84,   88,
   84,    0,    0,    0,    0,    0,    0,   82,    0,   82,
    0,   82,    0,   82,    0,   84,   84,   84,   84,   84,
   84,   84,    0,    0,    0,    0,    0,   84,   82,   82,
   82,   82,   82,   82,   82,   83,    0,   83,    0,   83,
   82,   83,    0,    0,    0,    0,   81,    0,   81,    0,
   81,    0,   81,    0,    0,    0,   83,   83,   83,   83,
   83,   83,   83,    0,    0,    0,    0,    0,   83,   81,
   81,   81,   81,   81,   80,    0,   80,    0,   80,   81,
   80,    0,    0,    0,   78,    0,   78,    0,   78,    0,
   78,    0,    0,    0,    0,    0,    0,   80,   80,   80,
   80,   80,    0,    0,    0,    0,    0,   80,   78,   78,
   78,   78,  114,    0,    0,    0,    0,   78,    0,    0,
  114,  114,    0,  114,  114,  114,  114,  114,  114,  114,
  114,  114,  114,  114,  114,  114,  107,  107,    0,  107,
  107,  107,  107,  107,  107,  107,  107,  107,  107,  107,
  107,  107,    0,    0,    0,  113,  113,  107,  113,  113,
  113,  113,  113,  113,  113,  113,  113,  113,  113,  113,
  113,    0,    0,    0,    0,    0,  113,
};
static const YYINT yycheck[] = {                          2,
    0,   40,   13,   35,  272,   38,  275,  271,  259,  260,
  272,  269,   45,  270,   45,  272,   47,   48,   49,   50,
   51,  272,  275,  273,  270,  273,  277,  278,   31,   32,
  307,   34,  202,  284,  285,  259,  260,   76,  302,  307,
  297,  292,   45,  273,  302,  307,  308,  309,  310,  302,
  220,  297,  302,  304,  302,  306,  307,  308,  309,  310,
  269,   94,  271,  307,  273,  104,  275,  100,  101,  102,
  259,  260,  302,   84,  308,  309,  310,  108,  307,  303,
  304,  305,  306,  116,  275,  117,  295,  296,  120,  121,
  122,  123,  124,  302,  126,  270,  127,  128,  129,  130,
  131,  132,  133,  134,  135,  136,  137,  138,  139,  140,
  141,  273,  307,  268,  303,  304,  305,  306,  272,  273,
  275,  272,  297,  277,  278,  286,  287,  288,  289,  272,
  284,  285,  297,  269,  275,  271,  275,  273,  292,  275,
  302,  275,  206,  207,  208,  269,  269,  271,  271,  273,
  273,  275,  275,  307,  308,  309,  310,  311,  294,  295,
  296,  302,  201,  302,  203,  275,  302,  200,  302,  202,
  293,  294,  295,  296,  206,  207,  208,  275,  302,  302,
  284,  285,  221,  304,  302,  306,  225,  220,  134,  135,
  136,  137,  302,  302,  197,  198,  257,  258,  259,  260,
  261,  262,  263,  264,  302,  290,  291,  268,  269,  297,
  304,  272,  306,  309,  275,  272,  277,  278,  281,  282,
  277,  278,  268,  284,  285,  277,  278,  284,  285,  307,
  270,  292,  272,  132,  133,  292,  273,   32,  275,   34,
  138,  139,  303,  304,  272,  306,  307,  308,  309,  310,
  307,  308,  309,  310,  311,  140,  141,   49,   50,  259,
  260,  257,  258,  259,  260,  261,  262,  263,  264,  275,
  277,  278,  268,  269,  197,  198,  272,  272,  272,  275,
  296,  277,  278,  295,  294,  293,  275,  292,  284,  285,
  297,  298,  299,  300,  301,  273,  292,  311,  307,  273,
  271,  273,  262,  303,  304,  305,  306,  303,  304,  307,
  306,  307,  308,  309,  310,  257,  258,  259,  260,  261,
  262,  263,  264,  307,  273,  270,  268,  269,  272,  302,
  272,  271,  302,  275,  302,  277,  278,  275,  273,  302,
  302,  302,  284,  285,  273,  275,  265,  275,  273,  275,
  292,  275,  269,  273,  271,   37,  273,  275,  275,  273,
  273,  303,  304,  273,  306,  307,  308,  309,  310,  257,
  258,  259,  260,  261,  262,  263,  264,  294,  295,  296,
  268,  269,  273,  273,  272,  302,   84,  275,  127,  277,
  278,  128,  130,  129,    2,   44,  284,  285,  131,   -1,
   -1,   -1,   -1,   -1,  292,   -1,  269,   -1,  271,   -1,
  273,   -1,  275,   -1,   -1,  303,  304,   -1,  306,  307,
  308,  309,  310,  257,  258,  259,  260,  261,  262,  263,
  264,   -1,  295,  296,  268,   -1,   -1,   -1,  272,  302,
   -1,  275,  272,  277,  278,   -1,   -1,  277,  278,   -1,
  284,  285,   -1,   -1,  284,  285,   -1,  269,  292,  271,
   -1,  273,  292,  275,   -1,   -1,   -1,   -1,   -1,  303,
  304,   -1,  306,  307,  308,  309,  310,  307,  308,  309,
  310,  272,   -1,   -1,  296,   -1,  277,  278,   -1,   -1,
  302,   -1,   -1,  284,  285,   -1,   -1,   -1,  269,   -1,
  271,  292,  273,   -1,  275,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  307,  308,  309,  310,
  269,   -1,  271,   -1,  273,  296,  275,   -1,  277,  278,
   -1,  302,  281,  282,   -1,  284,  285,  286,  287,  288,
  289,  290,  291,  292,  293,  294,  295,  296,  297,  298,
  299,  300,  301,  302,  269,   -1,  271,   -1,  273,   -1,
  275,   -1,  277,  278,   -1,   -1,  281,  282,   -1,  284,
  285,  286,  287,  288,  289,  290,  291,  292,  293,  294,
  295,  296,  269,   -1,  271,   -1,  273,  302,  275,   -1,
   -1,   -1,   -1,   -1,  281,  282,   -1,  284,  285,  286,
  287,  288,  289,  290,  291,  292,  293,  294,  295,  296,
  269,   -1,  271,   -1,  273,  302,  275,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  284,  285,  286,  287,  288,
  289,  290,  291,  292,  293,  294,  295,  296,  269,   -1,
  271,   -1,  273,  302,  275,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  284,  285,  286,  287,  288,  289,  290,
  291,  292,  293,  294,  295,  296,  269,   -1,  271,   -1,
  273,  302,  275,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  284,  285,  286,  287,  288,  289,  290,  291,  292,
  293,  294,  295,  296,  269,   -1,  271,   -1,  273,  302,
  275,   -1,   -1,   -1,   -1,  273,   -1,   -1,   -1,  277,
  278,  286,  287,  288,  289,  290,  291,  292,  293,  294,
  295,  296,  269,   -1,  271,   -1,  273,  302,  275,  297,
  298,  299,  300,  301,   -1,   -1,   -1,   -1,   -1,  286,
  287,  288,  289,  290,  291,  292,  293,  294,  295,  296,
  269,   -1,  271,   -1,  273,  302,  275,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  286,  287,  288,
  289,  290,  291,  292,  293,  294,  295,  296,  269,   -1,
  271,   -1,  273,  302,  275,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  286,  287,  288,  289,  290,
  291,  292,  293,  294,  295,  296,  269,   -1,  271,   -1,
  273,  302,  275,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  286,  287,  288,  289,  290,  291,  292,
  293,  294,  295,  296,  269,   -1,  271,   -1,  273,  302,
  275,   -1,   -1,   -1,   -1,   -1,   -1,  269,   -1,  271,
   -1,  273,   -1,  275,   -1,  290,  291,  292,  293,  294,
  295,  296,   -1,   -1,   -1,   -1,   -1,  302,  290,  291,
  292,  293,  294,  295,  296,  269,   -1,  271,   -1,  273,
  302,  275,   -1,   -1,   -1,   -1,  269,   -1,  271,   -1,
  273,   -1,  275,   -1,   -1,   -1,  290,  291,  292,  293,
  294,  295,  296,   -1,   -1,   -1,   -1,   -1,  302,  292,
  293,  294,  295,  296,  269,   -1,  271,   -1,  273,  302,
  275,   -1,   -1,   -1,  269,   -1,  271,   -1,  273,   -1,
  275,   -1,   -1,   -1,   -1,   -1,   -1,  292,  293,  294,
  295,  296,   -1,   -1,   -1,   -1,   -1,  302,  293,  294,
  295,  296,  273,   -1,   -1,   -1,   -1,  302,   -1,   -1,
  281,  282,   -1,  284,  285,  286,  287,  288,  289,  290,
  291,  292,  293,  294,  295,  296,  281,  282,   -1,  284,
  285,  286,  287,  288,  289,  290,  291,  292,  293,  294,
  295,  296,   -1,   -1,   -1,  281,  282,  302,  284,  285,
  286,  287,  288,  289,  290,  291,  292,  293,  294,  295,
  296,   -1,   -1,   -1,   -1,   -1,  302,
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
"FUNC_PARAMS1 : NUM_TYPE IDENTIFIER COMMA FUNC_PARAMS1",
"FUNC_PARAMS1 : CHAR IDENTIFIER COMMA FUNC_PARAMS1",
"FUNC_PARAMS1 : VOID IDENTIFIER",
"FUNC_PARAMS1 : NUM_TYPE IDENTIFIER",
"FUNC_PARAMS1 : CHAR IDENTIFIER",
"FUNC_CALL : IDENTIFIER L_PAREN FUNC_LIST R_PAREN",
"FUNC_CALL : IDENTIFIER L_PAREN R_PAREN",
"FUNC_LIST : EXPR1",
"FUNC_LIST : CONST_STR",
"FUNC_LIST : EXPR1 COMMA FUNC_LIST",
"FUNC_LIST : CONST_CHAR COMMA FUNC_LIST",
"FUNC_LIST : CONST_STR COMMA FUNC_LIST",
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
"DEC4 : IDENTIFIER EQUAL CONST_FLOAT",
"DEC4 : DEC_ARR EQUAL CONST_STR",
"DEC4 : DEC_ARR",
"DEC4 : IDENTIFIER",
"DEC_ARR : IDENTIFIER L_SQ_BRACE CONST_INT R_SQ_BRACE",
"ARR : IDENTIFIER L_SQ_BRACE CONST_INT R_SQ_BRACE",
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
"NUM : CONST_CHAR",
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
#line 378 "parser.y"
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
	print_symbol_table();
	printf("\nParsing Unsuccessful: %s, at line number:%d.\n", s, line);
	return 0;
}
#line 721 "y.tab.c"

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
case 19:
#line 87 "parser.y"
	{if(strcmp(yystack.l_mark[-2].lval,"int") != 0){printf("expresion in if not of type int in line %d\n",line-1);}}
break;
case 20:
#line 88 "parser.y"
	{if(strcmp(yystack.l_mark[-4].lval,"int") != 0){printf("expresion in if not of type int in line %d\n",line-1);}}
break;
case 21:
#line 93 "parser.y"
	{if(strcmp(yystack.l_mark[-2].lval,"int") != 0){printf("expresion in while not of type int in line %d\n",line);}}
break;
case 22:
#line 98 "parser.y"
	{if(strcmp(yystack.l_mark[-2].lval,"int") != 0){printf("expresion in do while not of type int in line %d\n",line);}}
break;
case 26:
#line 113 "parser.y"
	{strcpy(return_type, yystack.l_mark[-4].lval);
																								install_symbol(yystack.l_mark[-3].lval,id, st, top,-1, return_type, 	temp, num_params,1); num_params=-1;}
break;
case 27:
#line 115 "parser.y"
	{strcpy(return_type, yystack.l_mark[-4].lval);
																										install_symbol(yystack.l_mark[-3].lval,id, st, top,-1, return_type, 	temp, num_params, 1);	num_params=-1;}
break;
case 28:
#line 117 "parser.y"
	{strcpy(return_type, yystack.l_mark[-4].lval);
																								install_symbol(yystack.l_mark[-3].lval,id, st, top,-1, return_type, 	temp, num_params, 1);	num_params=-1;}
break;
case 29:
#line 121 "parser.y"
	{}
break;
case 32:
#line 128 "parser.y"
	{strcpy(temp[++num_params].datatype, yystack.l_mark[-3].lval);
																st[++top] = brack_num+1;install_symbol(yystack.l_mark[-2].lval, id, st, top,-1, return_type, temp, num_params, 0);	top--;}
break;
case 33:
#line 130 "parser.y"
	{strcpy(temp[++num_params].datatype, "void");
																st[++top] = brack_num+1;strcpy(id, yystack.l_mark[-3].lval);install_symbol(yystack.l_mark[-2].lval,id, st, top,-1, return_type, temp, num_params, 0);	top--;}
break;
case 34:
#line 132 "parser.y"
	{strcpy(temp[++num_params].datatype, "void");
										strcpy(id, yystack.l_mark[-1].lval); st[++top] = brack_num+1;install_symbol(yystack.l_mark[0].lval, id, st, top,-1, return_type, temp, num_params, 0);	top--;}
break;
case 35:
#line 134 "parser.y"
	{strcpy(temp[++num_params].datatype, yystack.l_mark[-1].lval);
												st[++top] = brack_num+1;install_symbol(yystack.l_mark[0].lval, id, st, top,-1, return_type, temp, num_params, 0);	top--;}
break;
case 36:
#line 136 "parser.y"
	{strcpy(temp[++num_params].datatype, "char");
											strcpy(id, yystack.l_mark[-1].lval); st[++top] = brack_num+1;install_symbol(yystack.l_mark[0].lval, id, st, top,-1, return_type, temp, num_params, 0);	top--;}
break;
case 37:
#line 140 "parser.y"
	{
																						struct table_entry *temp = (struct table_entry *)malloc(sizeof(struct table_entry));
																						temp = give_scope_struct(yystack.l_mark[-3].lval);
																						if(temp!=NULL && temp->is_func==1 && strcmp("printf", yystack.l_mark[-3].lval)!=0 && ((temp->num_params)==func_call_param))
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
																										printf("Invalid function call: %s.\n", yystack.l_mark[-3].lval);
																								}
																						}
																						else
																						{
																								printf("Invalid function call: %s.\n", yystack.l_mark[-3].lval);

																						}

																						func_call_param=-1;
																						if(temp!=NULL)
																							strcpy(yyval.lval, temp->return_type);

																					}
break;
case 38:
#line 170 "parser.y"
	{
															struct table_entry *temp = (struct table_entry *)malloc(sizeof(struct table_entry));
															temp = give_scope_struct(yystack.l_mark[-2].lval);
															if(temp!=NULL && temp->is_func==1 && strcmp("printf", yystack.l_mark[-2].lval)!=0 && ((temp->num_params)==func_call_param))
															{

															}
															else
															{
																	printf("Invalid function call: %s.\n", yystack.l_mark[-2].lval);

															}

															func_call_param=-1;
															if(temp!=NULL)
																strcpy(yyval.lval, temp->return_type);
	}
break;
case 39:
#line 189 "parser.y"
	{strcpy(func_call[++func_call_param].datatype, yystack.l_mark[0].lval);}
break;
case 40:
#line 190 "parser.y"
	{strcpy(func_call[++func_call_param].datatype, "char*");}
break;
case 41:
#line 191 "parser.y"
	{strcpy(func_call[++func_call_param].datatype, yystack.l_mark[-2].lval);}
break;
case 42:
#line 192 "parser.y"
	{strcpy(func_call[++func_call_param].datatype, "char");}
break;
case 43:
#line 193 "parser.y"
	{strcpy(func_call[++func_call_param].datatype, "char*");}
break;
case 46:
#line 202 "parser.y"
	{strcpy(id, yystack.l_mark[0].lval);}
break;
case 49:
#line 208 "parser.y"
	{install_symbol(yystack.l_mark[-2].lval, id, st, top,-1, return_type, temp, num_params, 0);}
break;
case 50:
#line 209 "parser.y"
	{}
break;
case 51:
#line 210 "parser.y"
	{}
break;
case 52:
#line 211 "parser.y"
	{install_symbol(yystack.l_mark[0].lval, id, st, top,-1, return_type, temp, num_params, 0);}
break;
case 55:
#line 220 "parser.y"
	{install_symbol(yystack.l_mark[-2].lval, id, st, top,-1, return_type, temp, num_params, 0);}
break;
case 56:
#line 221 "parser.y"
	{install_symbol(yystack.l_mark[-2].lval, id, st, top,-1, return_type, temp, num_params, 0);}
break;
case 57:
#line 222 "parser.y"
	{install_symbol(yystack.l_mark[-2].lval, id, st, top,-1, return_type, temp, num_params, 0);}
break;
case 58:
#line 223 "parser.y"
	{}
break;
case 59:
#line 224 "parser.y"
	{}
break;
case 60:
#line 225 "parser.y"
	{install_symbol(yystack.l_mark[0].lval, id, st, top,-1, return_type, temp, num_params, 0);}
break;
case 61:
#line 230 "parser.y"
	{install_symbol(yystack.l_mark[-3].lval, id, st, top,yystack.l_mark[-1].val, return_type, temp, num_params, 0);
																								if(yystack.l_mark[-1].val<=0)	{printf("Illegal size of array.\n"); yyerror(" ");}}
break;
case 62:
#line 234 "parser.y"
	{
	 char tempo[256];
	 strcpy(tempo,yystack.l_mark[-3].lval);
	 if(check_scope(tempo) == 0){
	 	printf("line %d : %s is out of scope\n",line,tempo);
	 }
	 else{
	 	if(get_arr_dim(yystack.l_mark[-3].lval,st,top) > 0) {
			strcpy(yyval.lval, get_datatype(yystack.l_mark[-3].lval, st, top));
			if(yystack.l_mark[-1].val < 0 || yystack.l_mark[-1].val>=get_arr_dim(yystack.l_mark[-3].lval, st, top)){
				printf("Index out of bounds at line %d\n",line);
			}
		}
		else{
			printf("Not an array at line %d\n",line);
		}
	 }
	}
break;
case 63:
#line 252 "parser.y"
	{
			char tempo[256];
			strcpy(tempo,yystack.l_mark[-3].lval);
			if(check_scope(tempo) == 0){
				printf("line %d : %s is out of scope\n",line,tempo);
			}
			else{
				if(get_arr_dim(yystack.l_mark[-3].lval,st,top) > 0) {
					strcpy(yyval.lval, get_datatype(yystack.l_mark[-3].lval, st, top));
				}
				else{
				printf("Not an array at line %d\n",line);
				}
			}
		}
break;
case 64:
#line 271 "parser.y"
	{strcpy(yyval.lval,"int");}
break;
case 65:
#line 272 "parser.y"
	{strcpy(yyval.lval,yystack.l_mark[0].lval);}
break;
case 66:
#line 275 "parser.y"
	{if(strcmp(yystack.l_mark[-2].lval,yystack.l_mark[0].lval) == 0 || strcmp(ret_type(yystack.l_mark[-2].lval, yystack.l_mark[0].lval), yystack.l_mark[-2].lval)==0) strcpy(yyval.lval,yystack.l_mark[-2].lval); else {printf("Type mismatch\n");yyerror(" ");strcpy(yyval.lval,"char");}  strcpy(yyval.lval, yystack.l_mark[-2].lval);}
break;
case 67:
#line 276 "parser.y"
	{if(strcmp(yystack.l_mark[-2].lval,yystack.l_mark[0].lval) == 0 || strcmp(ret_type(yystack.l_mark[-2].lval, yystack.l_mark[0].lval), yystack.l_mark[-2].lval)==0) strcpy(yyval.lval,yystack.l_mark[-2].lval); else {printf("Type mismatch\n");yyerror(" ");strcpy(yyval.lval,"char");} strcpy(yyval.lval, yystack.l_mark[-2].lval);}
break;
case 68:
#line 277 "parser.y"
	{if(strcmp(yystack.l_mark[-2].lval,yystack.l_mark[0].lval) == 0 || strcmp(ret_type(yystack.l_mark[-2].lval, yystack.l_mark[0].lval), yystack.l_mark[-2].lval)==0) strcpy(yyval.lval,yystack.l_mark[-2].lval); else {printf("Type mismatch\n");yyerror(" ");strcpy(yyval.lval,"char");} strcpy(yyval.lval, yystack.l_mark[-2].lval);}
break;
case 69:
#line 278 "parser.y"
	{if(strcmp(yystack.l_mark[-2].lval,yystack.l_mark[0].lval) == 0 || strcmp(ret_type(yystack.l_mark[-2].lval, yystack.l_mark[0].lval), yystack.l_mark[-2].lval)==0) strcpy(yyval.lval,yystack.l_mark[-2].lval); else {printf("Type mismatch\n");yyerror(" ");strcpy(yyval.lval,"char");} strcpy(yyval.lval, yystack.l_mark[-2].lval);}
break;
case 70:
#line 279 "parser.y"
	{if(strcmp(yystack.l_mark[-2].lval,yystack.l_mark[0].lval) == 0 || strcmp(ret_type(yystack.l_mark[-2].lval, yystack.l_mark[0].lval), yystack.l_mark[-2].lval)==0) strcpy(yyval.lval,yystack.l_mark[-2].lval); else {printf("Type mismatch\n");yyerror(" ");strcpy(yyval.lval,"char");} strcpy(yyval.lval, yystack.l_mark[-2].lval);}
break;
case 71:
#line 280 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 72:
#line 283 "parser.y"
	{strcpy(yyval.lval,"int");}
break;
case 73:
#line 284 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 74:
#line 287 "parser.y"
	{strcpy(yyval.lval,"int");}
break;
case 75:
#line 288 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 76:
#line 291 "parser.y"
	{strcpy(yyval.lval,"int");}
break;
case 77:
#line 292 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 78:
#line 295 "parser.y"
	{strcpy(yyval.lval,"int");}
break;
case 79:
#line 296 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 80:
#line 299 "parser.y"
	{strcpy(yyval.lval,"int");}
break;
case 81:
#line 300 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 82:
#line 303 "parser.y"
	{strcpy(yyval.lval,"int");}
break;
case 83:
#line 304 "parser.y"
	{strcpy(yyval.lval,"int");}
break;
case 84:
#line 305 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 85:
#line 308 "parser.y"
	{strcpy(yyval.lval,"int");}
break;
case 86:
#line 309 "parser.y"
	{strcpy(yyval.lval,"int");}
break;
case 87:
#line 310 "parser.y"
	{strcpy(yyval.lval,"int");}
break;
case 88:
#line 311 "parser.y"
	{strcpy(yyval.lval,"int");}
break;
case 89:
#line 312 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 90:
#line 315 "parser.y"
	{strcpy(yyval.lval,ret_type(yystack.l_mark[-2].lval,yystack.l_mark[0].lval));}
break;
case 91:
#line 316 "parser.y"
	{strcpy(yyval.lval,ret_type(yystack.l_mark[-2].lval,yystack.l_mark[0].lval));}
break;
case 92:
#line 317 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 93:
#line 320 "parser.y"
	{strcpy(yyval.lval,ret_type(yystack.l_mark[-2].lval,yystack.l_mark[0].lval));}
break;
case 94:
#line 321 "parser.y"
	{strcpy(yyval.lval,ret_type(yystack.l_mark[-2].lval,yystack.l_mark[0].lval));}
break;
case 95:
#line 322 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 96:
#line 325 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 97:
#line 326 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 98:
#line 327 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 99:
#line 328 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 100:
#line 329 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 101:
#line 330 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 102:
#line 331 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 103:
#line 334 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[-1].lval);}
break;
case 104:
#line 335 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[-1].lval);}
break;
case 105:
#line 336 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[-1].lval);}
break;
case 106:
#line 337 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 107:
#line 338 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 108:
#line 339 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[-1].lval);}
break;
case 109:
#line 343 "parser.y"
	{
		sprintf(yyval.lval,"%s",get_datatype(yystack.l_mark[0].lval,st,top));
		if(get_arr_dim(yystack.l_mark[0].lval,st,top) == -1){
			if(strcmp("printf",yystack.l_mark[0].lval)!=0){
				char tempo[256];
				strcpy(tempo,yystack.l_mark[0].lval);
				if(check_scope(tempo) == 0){
					printf("line %d : %s is out of scope\n",line,tempo);
				}
			}
		}
		else{
			printf("Array identifier cannot be used without subscript at line %d\n",line);
		}
	}
break;
case 110:
#line 358 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 111:
#line 359 "parser.y"
	{strcpy(yyval.lval, yystack.l_mark[-1].lval);}
break;
case 112:
#line 363 "parser.y"
	{strcpy(yyval.lval, "float");}
break;
case 113:
#line 364 "parser.y"
	{strcpy(yyval.lval, "int");}
break;
case 114:
#line 365 "parser.y"
	{strcpy(yyval.lval, "char");}
break;
case 115:
#line 368 "parser.y"
	{strcpy(id, yystack.l_mark[0].lval); strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 116:
#line 369 "parser.y"
	{strcpy(id, yystack.l_mark[0].lval); strcpy(yyval.lval, yystack.l_mark[0].lval);}
break;
case 117:
#line 370 "parser.y"
	{strcpy(id, yystack.l_mark[0].lval); strcpy(yyval.lval, id);}
break;
case 118:
#line 371 "parser.y"
	{strcpy(id, yystack.l_mark[0].lval); strcpy(yyval.lval, id);}
break;
case 119:
#line 372 "parser.y"
	{strcpy(id, yystack.l_mark[0].lval); strcat(id, "_u");strcpy(yyval.lval, id);}
break;
case 120:
#line 373 "parser.y"
	{strcpy(id, yystack.l_mark[0].lval); strcat(id, "_u");strcpy(yyval.lval, id);}
break;
#line 1386 "y.tab.c"
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
