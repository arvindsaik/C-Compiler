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
#line 22 "parser.y" /* yacc.c:1909  */

		struct type_and_value{
			char dtype[20];
			char id_or_const[30];
		}pair;
		char lval[100];
		double val;
		char val2[100];

#line 180 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
