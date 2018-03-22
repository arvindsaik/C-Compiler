/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 21 "parser.y" /* yacc.c:1909  */

		char lval[100];
		double val;
		char val2[100];

#line 174 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
