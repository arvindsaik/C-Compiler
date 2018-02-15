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
     UNARY = 258,
     NO_ELSE = 259,
     ELSE = 260,
     NE_OP = 261,
     EQ_OP = 262,
     LE_OP = 263,
     GE_OP = 264,
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
#define NE_OP 261
#define EQ_OP 262
#define LE_OP 263
#define GE_OP 264
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
#line 208 "y.tab.c"
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
	int flag=0;
	int line_num=1;
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
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   892

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  78
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  157
/* YYNRULES -- Number of states.  */
#define YYNSTATES  256

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    16,    18,
      21,    25,    29,    34,    36,    39,    41,    44,    46,    49,
      55,    63,    69,    76,    84,    87,    90,    93,    97,   102,
     106,   110,   113,   115,   117,   119,   121,   123,   125,   127,
     131,   133,   138,   142,   147,   151,   154,   157,   159,   163,
     165,   168,   171,   174,   177,   182,   184,   186,   188,   190,
     192,   194,   196,   201,   203,   207,   211,   215,   217,   221,
     225,   227,   231,   235,   237,   241,   245,   249,   253,   255,
     259,   263,   265,   269,   271,   275,   277,   281,   283,   287,
     289,   293,   295,   301,   303,   307,   309,   311,   313,   315,
     317,   319,   321,   323,   325,   327,   329,   331,   335,   337,
     341,   344,   346,   348,   350,   352,   354,   356,   358,   360,
     362,   364,   368,   370,   374,   377,   379,   381,   385,   390,
     394,   399,   404,   408,   410,   412,   416,   419,   422,   424,
     426,   430,   432,   435,   437,   441,   444,   448,   452,   457,
     460,   464,   468,   473,   475,   479,   484,   486
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      79,     0,    -1,    89,    -1,    79,    89,    -1,    81,    -1,
      84,    -1,    86,    -1,    87,    -1,    85,    -1,    64,    65,
      -1,    64,    83,    65,    -1,    64,    82,    65,    -1,    64,
      82,    83,    65,    -1,   111,    -1,    82,   111,    -1,    80,
      -1,    83,    80,    -1,    66,    -1,   109,    66,    -1,    20,
      67,   109,    68,    80,    -1,    20,    67,   109,    68,    80,
       5,    80,    -1,    21,    67,   109,    68,    80,    -1,    22,
      67,    84,    84,    68,    80,    -1,    22,    67,    84,    84,
     109,    68,    80,    -1,    23,    66,    -1,    24,    66,    -1,
      25,    66,    -1,    25,   109,    66,    -1,   112,   117,    82,
      81,    -1,   112,   117,    81,    -1,   117,    82,    81,    -1,
     117,    81,    -1,    88,    -1,   111,    -1,    59,    -1,    61,
      -1,    60,    -1,    63,    -1,    62,    -1,    67,   109,    68,
      -1,    90,    -1,    91,    69,   109,    70,    -1,    91,    67,
      68,    -1,    91,    67,    92,    68,    -1,    91,    71,    59,
      -1,    91,    27,    -1,    91,    28,    -1,   107,    -1,    92,
      72,   107,    -1,    91,    -1,    27,    93,    -1,    28,    93,
      -1,    94,    95,    -1,    26,    93,    -1,    26,    67,   122,
      68,    -1,    19,    -1,    15,    -1,    13,    -1,    14,    -1,
      73,    -1,    74,    -1,    93,    -1,    67,   122,    68,    95,
      -1,    95,    -1,    96,    15,    95,    -1,    96,    16,    95,
      -1,    96,    17,    95,    -1,    96,    -1,    97,    13,    96,
      -1,    97,    14,    96,    -1,    97,    -1,    98,    29,    97,
      -1,    98,    30,    97,    -1,    98,    -1,    99,     6,    98,
      -1,    99,     7,    98,    -1,    99,    11,    98,    -1,    99,
      12,    98,    -1,    99,    -1,   100,    10,    99,    -1,   100,
       9,    99,    -1,   100,    -1,   101,    19,   100,    -1,   101,
      -1,   102,    75,   101,    -1,   102,    -1,   103,    18,   102,
      -1,   103,    -1,   104,    31,   103,    -1,   104,    -1,   105,
      32,   104,    -1,   105,    -1,   105,    76,   109,    77,   106,
      -1,   106,    -1,    93,   108,   107,    -1,     8,    -1,    40,
      -1,    41,    -1,    42,    -1,    43,    -1,    47,    -1,    44,
      -1,    45,    -1,    48,    -1,    49,    -1,    50,    -1,   107,
      -1,   109,    72,   107,    -1,   106,    -1,   112,   114,    66,
      -1,   113,   112,    -1,   113,    -1,    56,    -1,    53,    -1,
      58,    -1,    51,    -1,    57,    -1,    52,    -1,    55,    -1,
      54,    -1,   115,    -1,   114,    72,   115,    -1,   117,    -1,
     117,     8,   125,    -1,   112,   116,    -1,   112,    -1,    59,
      -1,    67,   117,    68,    -1,   117,    69,   110,    70,    -1,
     117,    69,    70,    -1,   117,    67,   118,    68,    -1,   117,
      67,   121,    68,    -1,   117,    67,    68,    -1,   119,    -1,
     120,    -1,   119,    72,   120,    -1,   112,   117,    -1,   112,
     123,    -1,   112,    -1,    59,    -1,   121,    72,    59,    -1,
     116,    -1,   116,   123,    -1,   124,    -1,    67,   123,    68,
      -1,    69,    70,    -1,    69,   110,    70,    -1,   124,    69,
      70,    -1,   124,    69,   110,    70,    -1,    67,    68,    -1,
      67,   118,    68,    -1,   124,    67,    68,    -1,   124,    67,
     118,    68,    -1,   107,    -1,    64,   126,    65,    -1,    64,
     126,    72,    65,    -1,   125,    -1,   126,    72,   125,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    49,    49,    50,    54,    54,    54,    55,    55,    59,
      60,    61,    62,    66,    67,    71,    72,    76,    77,    81,
      82,    86,    87,    88,    92,    92,    92,    92,    96,    97,
      98,    99,   103,   104,   108,   109,   110,   111,   112,   113,
     117,   118,   119,   120,   121,   122,   123,   127,   128,   132,
     133,   134,   135,   136,   137,   141,   141,   141,   141,   141,
     141,   145,   146,   150,   151,   152,   153,   157,   158,   159,
     163,   164,   165,   169,   170,   171,   172,   173,   177,   178,
     179,   183,   184,   188,   189,   193,   194,   198,   199,   203,
     204,   208,   209,   213,   214,   218,   218,   218,   218,   218,
     218,   219,   219,   219,   219,   219,   223,   224,   228,   232,
     236,   237,   241,   242,   243,   244,   245,   246,   247,   248,
     252,   253,   257,   258,   262,   263,   267,   268,   269,   270,
     271,   272,   273,   277,   281,   282,   286,   287,   288,   292,
     293,   297,   298,   302,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   318,   319,   320,   324,   325
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "UNARY", "NO_ELSE", "ELSE", "'<'", "'>'",
  "'='", "NE_OP", "EQ_OP", "LE_OP", "GE_OP", "'+'", "'-'", "'*'", "'/'",
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
  "direct_abstract_declarator", "initializer", "initializer_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
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

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
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

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
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
      72,    74,    75,    76,    77,    80,    79,    82,    84,    86,
      88,    90,     0,   107,   149,     0,     0,   145,     0,     0,
       0,   135,   140,   154,     0,     0,     0,     0,    54,    62,
      43,     0,    41,     0,   150,   144,   146,   151,     0,   147,
       0,   155,   157,    19,    21,     0,     0,    48,    92,   152,
     148,     0,    22,     0,    20,    23
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

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -152
static const yytype_int16 yypact[] =
{
     572,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
     -32,    41,  -152,  -152,  -152,   -32,   834,   307,   101,  -152,
    -152,   -19,  -152,   179,  -152,   201,   122,   481,  -152,   820,
    -152,   -32,  -152,  -152,   -32,   497,  -152,   820,  -152,  -152,
    -152,  -152,   -46,   -18,    -2,    45,    51,   519,   731,   747,
     747,  -152,  -152,  -152,  -152,  -152,  -152,  -152,   353,  -152,
    -152,  -152,  -152,   257,   273,  -152,  -152,  -152,  -152,  -152,
      15,   107,   769,  -152,   182,    26,    58,    98,    61,    64,
      47,   127,   131,   -22,  -152,  -152,   -16,  -152,  -152,   -35,
      85,   100,  -152,    -9,  -152,  -152,  -152,   112,  -152,  -152,
      -3,  -152,   497,  -152,  -152,  -152,   769,   769,   575,  -152,
    -152,  -152,   -15,   353,  -152,   769,  -152,  -152,     5,   834,
      -7,   124,  -152,   329,  -152,  -152,  -152,  -152,   591,   769,
     142,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,  -152,   769,  -152,   769,   769,   769,   769,   769,   769,
     769,   769,   769,   769,   769,   769,   769,   769,   769,   769,
     769,   769,   769,  -152,   769,   793,   642,   126,  -152,   135,
    -152,   834,  -152,   146,  -152,  -152,   -17,    17,    34,   575,
    -152,   139,  -152,  -152,   812,  -152,   769,  -152,  -152,    44,
    -152,    31,  -152,  -152,  -152,  -152,  -152,   182,   182,    26,
      26,    58,    58,    58,    58,    98,    98,    61,    64,    47,
     127,   131,   -54,  -152,  -152,   149,   150,  -152,   170,   406,
     658,  -152,  -152,  -152,   425,   409,   409,   680,  -152,  -152,
    -152,   769,  -152,   769,  -152,  -152,  -152,  -152,   173,  -152,
     172,  -152,  -152,   239,  -152,   409,    46,  -152,  -152,  -152,
    -152,   409,  -152,   409,  -152,  -152
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -152,  -152,   -62,     8,   183,   184,  -104,  -152,  -152,  -152,
    -152,   234,  -152,  -152,  -152,   -20,  -152,   -66,    38,    62,
       7,    83,    92,    93,    91,   109,   128,  -152,   -24,   -21,
    -152,   -39,  -151,     9,     0,  -152,  -152,   256,   154,     2,
     -25,  -152,   120,  -152,   189,   -76,  -152,   -80,  -152
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      15,    90,   125,    96,   179,    35,   143,    95,   112,    14,
     161,    15,    18,   168,   103,   218,    24,    23,   164,   118,
      14,   106,   175,   233,     9,    28,    89,     9,   114,   116,
     117,    36,   165,   100,   166,    10,   100,    98,    99,   147,
     148,    19,   126,   127,   185,   105,    99,    33,   223,   107,
     163,   180,    95,    34,   162,   224,   164,   164,   119,   172,
     184,   125,   166,   173,    26,   108,    27,   177,   178,   240,
     155,   156,    99,   182,   118,   227,   118,   164,   194,   195,
     196,   103,   128,   157,   129,   225,   130,   149,   150,   164,
     191,   167,     1,     2,     3,     4,     5,     6,     7,     8,
       9,   232,   226,   164,   151,   152,   164,   190,    10,   153,
     154,   109,   230,   119,   253,   131,   231,   110,   164,   119,
     229,   193,   158,   212,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    96,   213,   242,   159,    95,   132,   133,   134,
     135,   136,   137,   170,   138,   139,   140,   141,   201,   202,
     203,   204,   160,   243,   244,    89,    95,    18,    26,    32,
      27,    89,   171,     1,     2,     3,     4,     5,     6,     7,
       8,    87,   174,   252,    89,   197,   198,    35,   246,   254,
      88,   255,   186,    26,   238,    27,    96,   144,   145,   146,
      95,   192,   219,   103,   220,   222,    37,   228,    63,   248,
     247,   199,   200,    95,    38,    39,    40,   234,   235,    89,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
       1,     2,     3,     4,     5,     6,     7,     8,   205,   206,
     236,   249,   250,    25,   251,    20,    26,   123,    27,   207,
     209,   208,     1,     2,     3,     4,     5,     6,     7,     8,
      51,    52,    53,    54,    55,    25,    56,    57,    58,   210,
      38,    39,    40,   183,    59,    60,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    38,    39,    40,   211,
     101,   221,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,   181,     0,     0,     0,     0,     0,     1,     2,
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
      66,    66,    72,    72,    76,    72,    72,    72,    58,    68,
      67,   123,    69,    72,    67,    67,    69,   106,   107,   220,
       9,    10,    63,    68,   113,   179,   115,    72,   144,   145,
     146,   102,    67,    19,    69,    68,    71,    29,    30,    72,
     129,    89,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    70,    68,    72,     6,     7,    72,   128,    67,    11,
      12,    66,    68,   113,    68,     8,    72,    66,    72,   119,
     186,   142,    75,   162,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   166,   164,   224,    18,   166,    40,    41,    42,
      43,    44,    45,    68,    47,    48,    49,    50,   151,   152,
     153,   154,    31,   225,   226,   165,   186,   165,    67,    68,
      69,   171,    72,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    70,   245,   184,   147,   148,     8,   227,   251,
      68,   253,    68,    67,   219,    69,   220,    15,    16,    17,
     220,    59,    67,   224,    69,    59,    23,    68,    25,   233,
     231,   149,   150,   233,    13,    14,    15,    68,    68,   219,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      51,    52,    53,    54,    55,    56,    57,    58,   155,   156,
      70,    68,    70,    64,     5,    11,    67,    63,    69,   157,
     159,   158,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,   160,
      13,    14,    15,   119,    73,    74,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    13,    14,    15,   161,
      34,   171,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,   113,    -1,    -1,    -1,    -1,    -1,    51,    52,
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
      30,     6,     7,    11,    12,     9,    10,    19,    75,    18,
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
#line 109 "parser.y"
    {char a[100]; sprintf(a, "%f", (float)(yyvsp[(1) - (1)].val)); install_constant(a, "FP_CONST");}
    break;

  case 36:
#line 110 "parser.y"
    {char a[100]; sprintf(a, "%d", (int)(yyvsp[(1) - (1)].val)); install_constant(a, "INT_CONST");}
    break;

  case 37:
#line 111 "parser.y"
    {install_constant((yyvsp[(1) - (1)].lval), "CHAR_CONST");}
    break;

  case 38:
#line 112 "parser.y"
    {install_constant((yyvsp[(1) - (1)].lval), "STR_CONST");}
    break;

  case 110:
#line 236 "parser.y"
    { strcpy(temp, (yyvsp[(1) - (2)].lval)); strcat(temp, " "); strcat(temp, type); strcpy(type, temp); }
    break;

  case 111:
#line 237 "parser.y"
    { strcpy(type, (yyvsp[(1) - (1)].lval)); }
    break;

  case 112:
#line 241 "parser.y"
    {strcpy((yyval.lval), "void");}
    break;

  case 113:
#line 242 "parser.y"
    {strcpy((yyval.lval), "char");}
    break;

  case 114:
#line 243 "parser.y"
    {strcpy((yyval.lval), "short");}
    break;

  case 115:
#line 244 "parser.y"
    {strcpy((yyval.lval), "int");}
    break;

  case 116:
#line 245 "parser.y"
    {strcpy((yyval.lval), "long");}
    break;

  case 117:
#line 246 "parser.y"
    {strcpy((yyval.lval), "float");}
    break;

  case 118:
#line 247 "parser.y"
    {strcpy((yyval.lval), "signed");}
    break;

  case 119:
#line 248 "parser.y"
    {strcpy((yyval.lval), "unsigned");}
    break;

  case 122:
#line 257 "parser.y"
    {}
    break;

  case 123:
#line 258 "parser.y"
    {}
    break;

  case 126:
#line 267 "parser.y"
    {strcpy(token, (yyvsp[(1) - (1)].lval)); install_symbol(token, type);}
    break;


/* Line 1267 of yacc.c.  */
#line 1904 "y.tab.c"
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


#line 328 "parser.y"



int main()
{
	FILE *fp;
	fp = fopen("sample.c", "r");
	yyin = fp; 
	yyparse();
	if(flag!=1)
	{
	print_symbol_table();
  	print_constant_table();
	printf("\nParsing Successful\n");
	}
	return 0;
}

int yyerror(const char *s)
{
	flag=1;
	printf("\nParsing Unsuccessful: %s, at line number:%d.\n", s, line_num);
	return 1;
}

