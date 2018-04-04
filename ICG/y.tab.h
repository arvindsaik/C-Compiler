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
#line 22 "parser.y" /* yacc.c:1909  */

		struct type_and_value{
			char dtype[20];
			char id_or_const[30];
		}pair;
		char lval[100];
		double val;
		char val2[100];

#line 178 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
