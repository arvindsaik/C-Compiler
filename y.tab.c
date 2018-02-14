/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     ELSE = 259,
     WHILE = 260,
     FOR = 261,
     CONTINUE = 262,
     BREAK = 263,
     RETURN = 264,
     SIZEOF = 265,
     INC_OP = 266,
     DEC_OP = 267,
     LEFT_OP = 268,
     RIGHT_OP = 269,
     LE_OP = 270,
     GE_OP = 271,
     EQ_OP = 272,
     NE_OP = 273,
     AND_OP = 274,
     OR_OP = 275,
     NOT_OP = 276,
     XOR_OP = 277,
     MUL_OP = 278,
     DIV_OP = 279,
     ADD_OP = 280,
     SUB_OP = 281,
     MOD_OP = 282,
     MUL_ASSIGN = 283,
     DIV_ASSIGN = 284,
     MOD_ASSIGN = 285,
     ADD_ASSIGN = 286,
     LEFT_ASSIGN = 287,
     RIGHT_ASSIGN = 288,
     DEF = 289,
     SUB_ASSIGN = 290,
     AND_ASSIGN = 291,
     XOR_ASSIGN = 292,
     OR_ASSIGN = 293,
     INT = 294,
     FLOAT = 295,
     CHAR = 296,
     STRUCT = 297,
     UNION = 298,
     UNSIGNED = 299,
     SIGNED = 300,
     VOID = 301,
     LONG = 302,
     SHORT = 303,
     IDENTIFIER = 304,
     CONST_INT = 305,
     CONST_FLOAT = 306,
     STRING_LITERAL = 307,
     CONST_CHAR = 308,
     UNARY = 309
   };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define WHILE 260
#define FOR 261
#define CONTINUE 262
#define BREAK 263
#define RETURN 264
#define SIZEOF 265
#define INC_OP 266
#define DEC_OP 267
#define LEFT_OP 268
#define RIGHT_OP 269
#define LE_OP 270
#define GE_OP 271
#define EQ_OP 272
#define NE_OP 273
#define AND_OP 274
#define OR_OP 275
#define NOT_OP 276
#define XOR_OP 277
#define MUL_OP 278
#define DIV_OP 279
#define ADD_OP 280
#define SUB_OP 281
#define MOD_OP 282
#define MUL_ASSIGN 283
#define DIV_ASSIGN 284
#define MOD_ASSIGN 285
#define ADD_ASSIGN 286
#define LEFT_ASSIGN 287
#define RIGHT_ASSIGN 288
#define DEF 289
#define SUB_ASSIGN 290
#define AND_ASSIGN 291
#define XOR_ASSIGN 292
#define OR_ASSIGN 293
#define INT 294
#define FLOAT 295
#define CHAR 296
#define STRUCT 297
#define UNION 298
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
#define UNARY 309




/* Copy the first part of user declarations.  */


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 1 "parser.y"
{
double val;
char lval[100];
}
/* Line 193 of yacc.c.  */
#line 210 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 32 "parser.y"

	#include<stdio.h>
	#include<string.h>
	#include "lib.h"  
	int yylex(void);
	int yyerror(const char *s);
	int success = 1;
	char type[20], temp[20];
	char token[100];
	FILE *yyin;


/* Line 216 of yacc.c.  */
#line 234 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   863

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  159
/* YYNRULES -- Number of states.  */
#define YYNSTATES  258

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    70,     2,     2,     2,    71,    68,     2,
      62,    63,    56,    54,    67,    55,    66,    57,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    77,    61,
      72,    78,    73,    76,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    64,     2,    65,    74,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    59,    75,    60,    69,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    58
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    16,    20,
      24,    29,    31,    34,    36,    39,    41,    44,    50,    58,
      64,    71,    79,    82,    85,    88,    92,    97,   101,   105,
     108,   110,   113,   115,   117,   119,   121,   123,   125,   127,
     131,   133,   138,   142,   147,   151,   154,   157,   159,   163,
     165,   168,   171,   174,   177,   182,   184,   186,   188,   190,
     192,   194,   196,   201,   203,   207,   211,   215,   217,   221,
     225,   227,   231,   235,   237,   241,   245,   249,   253,   255,
     259,   263,   265,   269,   271,   275,   277,   281,   283,   287,
     289,   293,   295,   301,   303,   307,   309,   311,   313,   315,
     317,   319,   321,   323,   325,   327,   329,   331,   335,   337,
     341,   343,   346,   348,   350,   352,   354,   356,   358,   360,
     362,   364,   366,   368,   372,   374,   378,   381,   383,   385,
     389,   394,   398,   403,   408,   412,   414,   416,   420,   423,
     426,   428,   430,   434,   436,   439,   441,   445,   448,   452,
     456,   461,   464,   468,   472,   477,   479,   483,   488,   490
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      89,     0,    -1,    81,    -1,    84,    -1,    86,    -1,    87,
      -1,    85,    -1,    59,    60,    -1,    59,    83,    60,    -1,
      59,    82,    60,    -1,    59,    82,    83,    60,    -1,   112,
      -1,    82,   112,    -1,    80,    -1,    83,    80,    -1,    61,
      -1,   110,    61,    -1,     3,    62,   110,    63,    80,    -1,
       3,    62,   110,    63,    80,     4,    80,    -1,     5,    62,
     110,    63,    80,    -1,     6,    62,    84,    84,    63,    80,
      -1,     6,    62,    84,    84,   110,    63,    80,    -1,     7,
      61,    -1,     8,    61,    -1,     9,    61,    -1,     9,   110,
      61,    -1,   113,   118,    82,    81,    -1,   113,   118,    81,
      -1,   118,    82,    81,    -1,   118,    81,    -1,    90,    -1,
      89,    90,    -1,    88,    -1,   112,    -1,    49,    -1,    51,
      -1,    50,    -1,    53,    -1,    52,    -1,    62,   110,    63,
      -1,    91,    -1,    92,    64,   110,    65,    -1,    92,    62,
      63,    -1,    92,    62,    93,    63,    -1,    92,    66,    49,
      -1,    92,    11,    -1,    92,    12,    -1,   108,    -1,    93,
      67,   108,    -1,    92,    -1,    11,    94,    -1,    12,    94,
      -1,    95,    96,    -1,    10,    94,    -1,    10,    62,   123,
      63,    -1,    68,    -1,    56,    -1,    54,    -1,    55,    -1,
      69,    -1,    70,    -1,    94,    -1,    62,   123,    63,    96,
      -1,    96,    -1,    97,    56,    96,    -1,    97,    57,    96,
      -1,    97,    71,    96,    -1,    97,    -1,    98,    54,    97,
      -1,    98,    55,    97,    -1,    98,    -1,    99,    13,    98,
      -1,    99,    14,    98,    -1,    99,    -1,   100,    72,    99,
      -1,   100,    73,    99,    -1,   100,    15,    99,    -1,   100,
      16,    99,    -1,   100,    -1,   101,    17,   100,    -1,   101,
      18,   100,    -1,   101,    -1,   102,    68,   101,    -1,   102,
      -1,   103,    74,   102,    -1,   103,    -1,   104,    75,   103,
      -1,   104,    -1,   105,    19,   104,    -1,   105,    -1,   106,
      20,   105,    -1,   106,    -1,   106,    76,   110,    77,   107,
      -1,   107,    -1,    94,   109,   108,    -1,    78,    -1,    28,
      -1,    29,    -1,    30,    -1,    31,    -1,    35,    -1,    32,
      -1,    33,    -1,    36,    -1,    37,    -1,    38,    -1,   108,
      -1,   110,    67,   108,    -1,   107,    -1,   113,   115,    61,
      -1,   114,    -1,   114,   113,    -1,    46,    -1,    41,    -1,
      48,    -1,    39,    -1,    47,    -1,    40,    -1,    45,    -1,
      44,    -1,    42,    -1,    43,    -1,   116,    -1,   115,    67,
     116,    -1,   118,    -1,   118,    78,   126,    -1,   113,   117,
      -1,   113,    -1,    49,    -1,    62,   118,    63,    -1,   118,
      64,   111,    65,    -1,   118,    64,    65,    -1,   118,    62,
     119,    63,    -1,   118,    62,   122,    63,    -1,   118,    62,
      63,    -1,   120,    -1,   121,    -1,   120,    67,   121,    -1,
     113,   118,    -1,   113,   124,    -1,   113,    -1,    49,    -1,
     122,    67,    49,    -1,   117,    -1,   117,   124,    -1,   125,
      -1,    62,   124,    63,    -1,    64,    65,    -1,    64,   111,
      65,    -1,   125,    64,    65,    -1,   125,    64,   111,    65,
      -1,    62,    63,    -1,    62,   119,    63,    -1,   125,    62,
      63,    -1,   125,    62,   119,    63,    -1,   108,    -1,    59,
     127,    60,    -1,    59,   127,    67,    60,    -1,   126,    -1,
     127,    67,   126,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    48,    48,    49,    50,    51,    52,    56,    57,    58,
      59,    63,    64,    68,    69,    73,    74,    78,    79,    83,
      84,    85,    89,    90,    91,    92,    96,    97,    98,    99,
     103,   104,   108,   109,   113,   114,   115,   116,   117,   118,
     122,   123,   124,   125,   126,   127,   128,   132,   133,   137,
     138,   139,   140,   141,   142,   146,   147,   148,   149,   150,
     151,   155,   156,   160,   161,   162,   163,   167,   168,   169,
     173,   174,   175,   179,   180,   181,   182,   183,   187,   188,
     189,   193,   194,   198,   199,   203,   204,   208,   209,   213,
     214,   218,   219,   223,   224,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   242,   243,   247,   252,
     256,   257,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   274,   275,   279,   280,   284,   285,   289,   290,
     291,   292,   293,   294,   295,   299,   303,   304,   308,   309,
     310,   314,   315,   319,   320,   324,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   340,   341,   342,   346,   347
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "WHILE", "FOR", "CONTINUE",
  "BREAK", "RETURN", "SIZEOF", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP",
  "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "NOT_OP",
  "XOR_OP", "MUL_OP", "DIV_OP", "ADD_OP", "SUB_OP", "MOD_OP", "MUL_ASSIGN",
  "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "DEF", "SUB_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "INT",
  "FLOAT", "CHAR", "STRUCT", "UNION", "UNSIGNED", "SIGNED", "VOID", "LONG",
  "SHORT", "IDENTIFIER", "CONST_INT", "CONST_FLOAT", "STRING_LITERAL",
  "CONST_CHAR", "'+'", "'-'", "'*'", "'/'", "UNARY", "'{'", "'}'", "';'",
  "'('", "')'", "'['", "']'", "'.'", "','", "'&'", "'~'", "'!'", "'%'",
  "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='", "$accept", "statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "function_definition", "start_state",
  "global_declaration", "primary_expression", "postfix_expression",
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
  "identifier_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,    43,    45,    42,    47,   309,   123,
     125,    59,    40,    41,    91,    93,    46,    44,    38,   126,
      33,    37,    60,    62,    94,   124,    63,    58,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    79,    80,    80,    80,    80,    80,    81,    81,    81,
      81,    82,    82,    83,    83,    84,    84,    85,    85,    86,
      86,    86,    87,    87,    87,    87,    88,    88,    88,    88,
      89,    89,    90,    90,    91,    91,    91,    91,    91,    91,
      92,    92,    92,    92,    92,    92,    92,    93,    93,    94,
      94,    94,    94,    94,    94,    95,    95,    95,    95,    95,
      95,    96,    96,    97,    97,    97,    97,    98,    98,    98,
      99,    99,    99,   100,   100,   100,   100,   100,   101,   101,
     101,   102,   102,   103,   103,   104,   104,   105,   105,   106,
     106,   107,   107,   108,   108,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   110,   110,   111,   112,
     113,   113,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   115,   115,   116,   116,   117,   117,   118,   118,
     118,   118,   118,   118,   118,   119,   120,   120,   121,   121,
     121,   122,   122,   123,   123,   124,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   126,   126,   126,   127,   127
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     2,     3,     3,
       4,     1,     2,     1,     2,     1,     2,     5,     7,     5,
       6,     7,     2,     2,     2,     3,     4,     3,     3,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     4,     3,     4,     3,     2,     2,     1,     3,     1,
       2,     2,     2,     2,     4,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     2,     1,     1,     3,
       4,     3,     4,     4,     3,     1,     1,     3,     2,     2,
       1,     1,     3,     1,     2,     1,     3,     2,     3,     3,
       4,     2,     3,     3,     4,     1,     3,     4,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   115,   117,   113,   120,   121,   119,   118,   112,   116,
     114,   128,     0,    32,     0,    30,    33,     0,   110,     0,
       0,     1,    31,     0,   122,   124,   111,     0,     0,     0,
      29,     0,    11,     0,   129,   109,     0,     0,    27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    34,
      36,    35,    38,    37,    57,    58,    56,     7,    15,     0,
      55,    59,    60,    13,     2,     0,     0,     3,     6,     4,
       5,    40,    49,    61,     0,    63,    67,    70,    73,    78,
      81,    83,    85,    87,    89,    91,    93,   106,     0,   141,
     134,   140,     0,   135,   136,     0,   131,    61,   108,     0,
      28,    12,   124,   123,     0,   155,   125,    26,     0,     0,
       0,    22,    23,    24,     0,     0,    53,     0,    50,    51,
       0,   127,   143,     0,     9,     0,     8,    14,    45,    46,
       0,     0,     0,    96,    97,    98,    99,   101,   102,   100,
     103,   104,   105,    95,     0,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    16,     0,     0,     0,   138,
     139,   145,   132,     0,   133,     0,   130,   158,     0,     0,
       0,     0,    25,     0,    39,   126,     0,   144,     0,    10,
      42,     0,    47,     0,    44,    94,    64,    65,    66,    68,
      69,    71,    72,    76,    77,    74,    75,    79,    80,    82,
      84,    86,    88,    90,     0,   107,   151,     0,     0,   147,
       0,     0,     0,   137,   142,   156,     0,     0,     0,     0,
      54,    62,    43,     0,    41,     0,   152,   146,   148,   153,
       0,   149,     0,   157,   159,    17,    19,     0,     0,    48,
      92,   154,   150,     0,    20,     0,    18,    21
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    63,    64,    31,    66,    67,    68,    69,    70,    13,
      14,    15,    71,    72,   191,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
     144,    88,    99,    32,    33,    18,    23,    24,   122,    19,
     217,    93,    94,    95,   123,   218,   171,   106,   178
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -161
static const yytype_int16 yypact[] =
{
     793,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,
    -161,  -161,    -5,  -161,    25,  -161,  -161,    -5,   202,   351,
     125,  -161,  -161,    -9,  -161,   112,  -161,   217,   757,   476,
    -161,   804,  -161,    -5,  -161,  -161,    -5,   504,  -161,   804,
     -49,   -41,   -15,    33,    57,   537,   678,   700,   700,  -161,
    -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,   429,
    -161,  -161,  -161,  -161,  -161,   285,   307,  -161,  -161,  -161,
    -161,  -161,    31,    71,   725,  -161,   -40,   -17,   156,    19,
     195,    18,    76,   -14,   144,    12,  -161,  -161,    49,  -161,
    -161,   -13,   117,   108,  -161,    -7,  -161,  -161,  -161,   119,
    -161,  -161,    84,  -161,   504,  -161,  -161,  -161,   725,   725,
     559,  -161,  -161,  -161,    53,   429,  -161,   725,  -161,  -161,
      80,   202,   135,   129,  -161,   375,  -161,  -161,  -161,  -161,
     584,   725,   147,  -161,  -161,  -161,  -161,  -161,  -161,  -161,
    -161,  -161,  -161,  -161,   725,  -161,   725,   725,   725,   725,
     725,   725,   725,   725,   725,   725,   725,   725,   725,   725,
     725,   725,   725,   725,   725,  -161,   725,   191,   606,   138,
    -161,   141,  -161,   202,  -161,   160,  -161,  -161,   -12,   105,
     114,   559,  -161,   153,  -161,  -161,   259,  -161,   725,  -161,
    -161,   115,  -161,    46,  -161,  -161,  -161,  -161,  -161,   -40,
     -40,   -17,   -17,   156,   156,   156,   156,    19,    19,   195,
      18,    76,   -14,   144,   -58,  -161,  -161,   211,   212,  -161,
     154,   768,   631,  -161,  -161,  -161,   451,   397,   397,   653,
    -161,  -161,  -161,   725,  -161,   725,  -161,  -161,  -161,  -161,
     218,  -161,   215,  -161,  -161,   278,  -161,   397,   116,  -161,
    -161,  -161,  -161,   397,  -161,   397,  -161,  -161
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -161,   -62,    14,   179,   219,  -103,  -161,  -161,  -161,  -161,
    -161,   269,  -161,  -161,  -161,   -24,  -161,   -71,    65,    66,
     -72,    94,   130,   148,   150,   158,   146,  -161,   -28,   -25,
    -161,   -19,  -160,    15,     0,  -161,  -161,   306,   222,    -6,
     -26,  -161,   175,  -161,   234,   -81,  -161,   -84,  -161
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      17,    98,    92,   145,   127,    97,    20,   181,   220,   166,
     170,    25,   105,   108,    17,    16,   146,   147,    26,   235,
     177,   109,   116,   118,   119,    21,   114,   102,    91,    16,
     102,   148,   163,    30,   153,   154,    11,   149,   150,    38,
     120,   187,   128,   129,    11,   100,   101,   110,   225,   167,
      97,   168,    35,   107,   101,   226,   174,    12,    36,   121,
     175,   161,   242,   127,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,   196,   197,   198,   229,   105,
     101,   203,   204,   205,   206,   169,   159,    12,   164,   179,
     180,   155,   156,   130,   111,   131,   120,   132,   120,   133,
     134,   135,   136,   137,   138,   192,   139,   140,   141,   142,
     165,   234,   193,   166,   182,   121,   166,   231,   112,   195,
     166,   121,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      98,   215,   244,   184,    97,   214,    28,   166,    29,   143,
     160,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    20,    37,   162,    97,   245,   246,    91,   227,   151,
     152,    27,   166,    91,    28,   173,    29,   228,   232,   255,
     172,   166,   233,   166,   176,   254,    91,    28,    34,    29,
      37,   256,   188,   257,    98,   240,   194,   186,    97,   168,
      28,   105,    29,   221,    39,   222,    65,   250,   249,   224,
     248,    97,   157,   158,   199,   200,   230,   201,   202,   238,
      40,    91,    41,    42,    43,    44,    45,    46,    47,    48,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,   207,   208,   167,   216,   168,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    49,    50,    51,    52,
      53,    54,    55,    56,   236,   237,    27,    57,    58,    59,
     252,   251,   253,    22,   125,    60,    61,    62,    40,   209,
      41,    42,    43,    44,    45,    46,    47,    48,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,   210,   213,
      40,   211,    41,    42,    43,    44,    45,    46,    47,    48,
     212,   186,   216,   168,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    49,    50,    51,    52,    53,    54,
      55,    56,   103,   185,    27,   124,    58,    59,   223,   183,
       0,     0,     0,    60,    61,    62,    49,    50,    51,    52,
      53,    54,    55,    56,     0,     0,    27,   126,    58,    59,
       0,     0,     0,     0,     0,    60,    61,    62,    40,     0,
      41,    42,    43,    44,    45,    46,    47,    48,     0,     0,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      40,     0,    41,    42,    43,    44,    45,    46,    47,    48,
      27,     0,     0,    28,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     0,    49,    50,    51,    52,    53,    54,
      55,    56,     0,     0,    27,   189,    58,    59,     0,    46,
      47,    48,     0,    60,    61,    62,    49,    50,    51,    52,
      53,    54,    55,    56,     0,     0,    27,     0,    58,    59,
       0,    46,    47,    48,     0,    60,    61,    62,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    49,    50,
      51,    52,    53,    54,    55,    56,    46,    47,    48,     0,
       0,    59,     0,     0,     0,     0,     0,    60,    61,    62,
      49,    50,    51,    52,    53,    54,    55,    56,     0,     0,
     104,   243,     0,    59,    46,    47,    48,     0,     0,    60,
      61,    62,     0,     0,     0,    49,    50,    51,    52,    53,
      54,    55,    56,     0,     0,     0,     0,     0,    59,     0,
       0,    96,     0,     0,    60,    61,    62,    46,    47,    48,
       0,     0,     0,    49,    50,    51,    52,    53,    54,    55,
      56,     0,     0,   104,     0,     0,    59,     0,     0,    46,
      47,    48,    60,    61,    62,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,    50,    51,    52,
      53,    54,    55,    56,    46,    47,    48,     0,   113,    59,
       0,     0,     0,     0,     0,    60,    61,    62,    49,    50,
      51,    52,    53,    54,    55,    56,    46,    47,    48,     0,
      58,    59,     0,     0,     0,     0,     0,    60,    61,    62,
       0,     0,     0,    49,    50,    51,    52,    53,    54,    55,
      56,    46,    47,    48,     0,     0,    59,   190,     0,     0,
       0,     0,    60,    61,    62,    49,    50,    51,    52,    53,
      54,    55,    56,    46,    47,    48,     0,     0,    59,     0,
       0,   219,     0,     0,    60,    61,    62,     0,     0,     0,
      49,    50,    51,    52,    53,    54,    55,    56,    46,    47,
      48,     0,     0,    59,     0,     0,   241,     0,     0,    60,
      61,    62,    49,    50,    51,    52,    53,    54,    55,    56,
      46,    47,    48,     0,     0,    59,   247,     0,     0,     0,
       0,    60,    61,    62,     0,     0,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    46,    47,    48,     0,     0,
     115,     0,     0,     0,     0,     0,    60,    61,    62,    49,
      50,    51,    52,    53,    54,    55,    56,     0,     0,     0,
       0,     0,   117,     0,     0,     0,     0,     0,    60,    61,
      62,     0,     0,     0,    49,    50,    51,    52,    53,    54,
      55,    56,     0,     0,     0,     0,     0,    59,     0,     0,
       0,     0,     0,    60,    61,    62,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    89,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,     0,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   239,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,     0,     0,    12,     0,     0,     0,     0,
       0,     0,     0,    27
};

static const yytype_int16 yycheck[] =
{
       0,    29,    28,    74,    66,    29,    12,   110,   168,    67,
      91,    17,    37,    62,    14,     0,    56,    57,    18,    77,
     104,    62,    46,    47,    48,     0,    45,    33,    28,    14,
      36,    71,    20,    19,    15,    16,    49,    54,    55,    25,
      59,   122,    11,    12,    49,    31,    31,    62,    60,    62,
      74,    64,    61,    39,    39,    67,    63,    62,    67,    59,
      67,    75,   222,   125,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,   146,   147,   148,   181,   104,
      65,   153,   154,   155,   156,    91,    68,    62,    76,   108,
     109,    72,    73,    62,    61,    64,   115,    66,   117,    28,
      29,    30,    31,    32,    33,   130,    35,    36,    37,    38,
      61,    65,   131,    67,    61,   115,    67,   188,    61,   144,
      67,   121,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     168,   166,   226,    63,   168,   164,    62,    67,    64,    78,
      74,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,   167,    78,    19,   188,   227,   228,   167,    63,    13,
      14,    59,    67,   173,    62,    67,    64,    63,    63,    63,
      63,    67,    67,    67,    65,   247,   186,    62,    63,    64,
      78,   253,    63,   255,   222,   221,    49,    62,   222,    64,
      62,   226,    64,    62,    25,    64,    27,   235,   233,    49,
     229,   235,    17,    18,   149,   150,    63,   151,   152,    65,
       3,   221,     5,     6,     7,     8,     9,    10,    11,    12,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,   157,   158,    62,    63,    64,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    63,    63,    59,    60,    61,    62,
      65,    63,     4,    14,    65,    68,    69,    70,     3,   159,
       5,     6,     7,     8,     9,    10,    11,    12,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,   160,   163,
       3,   161,     5,     6,     7,     8,     9,    10,    11,    12,
     162,    62,    63,    64,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    36,   121,    59,    60,    61,    62,   173,   115,
      -1,    -1,    -1,    68,    69,    70,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    59,    60,    61,    62,
      -1,    -1,    -1,    -1,    -1,    68,    69,    70,     3,    -1,
       5,     6,     7,     8,     9,    10,    11,    12,    -1,    -1,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
       3,    -1,     5,     6,     7,     8,     9,    10,    11,    12,
      59,    -1,    -1,    62,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    59,    60,    61,    62,    -1,    10,
      11,    12,    -1,    68,    69,    70,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    59,    -1,    61,    62,
      -1,    10,    11,    12,    -1,    68,    69,    70,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    10,    11,    12,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      59,    60,    -1,    62,    10,    11,    12,    -1,    -1,    68,
      69,    70,    -1,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    65,    -1,    -1,    68,    69,    70,    10,    11,    12,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    59,    -1,    -1,    62,    -1,    -1,    10,
      11,    12,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    10,    11,    12,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    68,    69,    70,    49,    50,
      51,    52,    53,    54,    55,    56,    10,    11,    12,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    10,    11,    12,    -1,    -1,    62,    63,    -1,    -1,
      -1,    -1,    68,    69,    70,    49,    50,    51,    52,    53,
      54,    55,    56,    10,    11,    12,    -1,    -1,    62,    -1,
      -1,    65,    -1,    -1,    68,    69,    70,    -1,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    10,    11,
      12,    -1,    -1,    62,    -1,    -1,    65,    -1,    -1,    68,
      69,    70,    49,    50,    51,    52,    53,    54,    55,    56,
      10,    11,    12,    -1,    -1,    62,    63,    -1,    -1,    -1,
      -1,    68,    69,    70,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    10,    11,    12,    -1,    -1,
      62,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    68,    69,
      70,    -1,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    62,    88,    89,    90,   112,   113,   114,   118,
     118,     0,    90,   115,   116,   118,   113,    59,    62,    64,
      81,    82,   112,   113,    63,    61,    67,    78,    81,    82,
       3,     5,     6,     7,     8,     9,    10,    11,    12,    49,
      50,    51,    52,    53,    54,    55,    56,    60,    61,    62,
      68,    69,    70,    80,    81,    82,    83,    84,    85,    86,
      87,    91,    92,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   110,    49,
      63,   113,   119,   120,   121,   122,    65,    94,   107,   111,
      81,   112,   118,   116,    59,   108,   126,    81,    62,    62,
      62,    61,    61,    61,   110,    62,    94,    62,    94,    94,
     110,   113,   117,   123,    60,    83,    60,    80,    11,    12,
      62,    64,    66,    28,    29,    30,    31,    32,    33,    35,
      36,    37,    38,    78,   109,    96,    56,    57,    71,    54,
      55,    13,    14,    15,    16,    72,    73,    17,    18,    68,
      74,    75,    19,    20,    76,    61,    67,    62,    64,   118,
     124,   125,    63,    67,    63,    67,    65,   126,   127,   110,
     110,    84,    61,   123,    63,   117,    62,   124,    63,    60,
      63,    93,   108,   110,    49,   108,    96,    96,    96,    97,
      97,    98,    98,    99,    99,    99,    99,   100,   100,   101,
     102,   103,   104,   105,   110,   108,    63,   119,   124,    65,
     111,    62,    64,   121,    49,    60,    67,    63,    63,    84,
      63,    96,    63,    67,    65,    77,    63,    63,    65,    63,
     119,    65,   111,    60,   126,    80,    80,    63,   110,   108,
     107,    63,    65,     4,    80,    63,    80,    80
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

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
#line 114 "parser.y"
    {char a[100]; sprintf(a, "%f", (float)(yyvsp[(1) - (1)].val)); install_constant(a, "FP_CONST");}
    break;

  case 36:
#line 115 "parser.y"
    {char a[100]; sprintf(a, "%d", (int)(yyvsp[(1) - (1)].val)); install_constant(a, "INT_CONST");}
    break;

  case 37:
#line 116 "parser.y"
    {install_constant((yyvsp[(1) - (1)].lval), "CHAR_CONST");}
    break;

  case 38:
#line 117 "parser.y"
    {install_constant((yyvsp[(1) - (1)].lval), "STR_CONST");}
    break;

  case 110:
#line 256 "parser.y"
    {strcpy(type, (yyvsp[(1) - (1)].lval));}
    break;

  case 111:
#line 257 "parser.y"
    {strcpy(temp, (yyvsp[(1) - (2)].lval)); strcat(temp, " "); strcat(temp, type); strcpy(type, temp);}
    break;

  case 112:
#line 261 "parser.y"
    {strcpy((yyval.lval), "void");}
    break;

  case 113:
#line 262 "parser.y"
    {strcpy((yyval.lval), "char");}
    break;

  case 114:
#line 263 "parser.y"
    {strcpy((yyval.lval), "short");}
    break;

  case 115:
#line 264 "parser.y"
    {strcpy((yyval.lval), "int");}
    break;

  case 116:
#line 265 "parser.y"
    {strcpy((yyval.lval), "long");}
    break;

  case 117:
#line 266 "parser.y"
    {strcpy((yyval.lval), "float");}
    break;

  case 118:
#line 267 "parser.y"
    {strcpy((yyval.lval), "signed");}
    break;

  case 119:
#line 268 "parser.y"
    {strcpy((yyval.lval), "unsigned");}
    break;

  case 120:
#line 269 "parser.y"
    {strcpy((yyval.lval), "struct");}
    break;

  case 121:
#line 270 "parser.y"
    {strcpy((yyval.lval), "union");}
    break;

  case 124:
#line 279 "parser.y"
    {}
    break;

  case 125:
#line 280 "parser.y"
    {}
    break;

  case 128:
#line 289 "parser.y"
    {strcpy(token, (yyvsp[(1) - (1)].lval)); install_symbol(token, type);}
    break;


/* Line 1267 of yacc.c.  */
#line 1909 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 350 "parser.y"



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

