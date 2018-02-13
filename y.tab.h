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
    IDENTIFIER = 258,
    CONSTANT = 259,
    STRING_LITERAL = 260,
    IF = 261,
    ELSE = 262,
    WHILE = 263,
    FOR = 264,
    CONTINUE = 265,
    BREAK = 266,
    RETURN = 267,
    VOID = 268,
    UNSIGNED = 269,
    SIZEOF = 270,
    SIGNED = 271,
    SHORT = 272,
    LONG = 273,
    INT = 274,
    FLOAT = 275,
    CHAR = 276,
    INC_OP = 277,
    DEC_OP = 278,
    LEFT_OP = 279,
    RIGHT_OP = 280,
    LE_OP = 281,
    GE_OP = 282,
    EQ_OP = 283,
    NE_OP = 284,
    AND_OP = 285,
    OR_OP = 286,
    NOT_OP = 287,
    XOR_OP = 288,
    MUL_OP = 289,
    DIV_OP = 290,
    ADD_OP = 291,
    SUB_OP = 292,
    MOD_OP = 293,
    MUL_ASSIGN = 294,
    DIV_ASSIGN = 295,
    MOD_ASSIGN = 296,
    ADD_ASSIGN = 297,
    LEFT_ASSIGN = 298,
    RIGHT_ASSIGN = 299,
    DEF = 300,
    SUB_ASSIGN = 301,
    AND_ASSIGN = 302,
    XOR_ASSIGN = 303,
    OR_ASSIGN = 304,
    UNARY = 305
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define IF 261
#define ELSE 262
#define WHILE 263
#define FOR 264
#define CONTINUE 265
#define BREAK 266
#define RETURN 267
#define VOID 268
#define UNSIGNED 269
#define SIZEOF 270
#define SIGNED 271
#define SHORT 272
#define LONG 273
#define INT 274
#define FLOAT 275
#define CHAR 276
#define INC_OP 277
#define DEC_OP 278
#define LEFT_OP 279
#define RIGHT_OP 280
#define LE_OP 281
#define GE_OP 282
#define EQ_OP 283
#define NE_OP 284
#define AND_OP 285
#define OR_OP 286
#define NOT_OP 287
#define XOR_OP 288
#define MUL_OP 289
#define DIV_OP 290
#define ADD_OP 291
#define SUB_OP 292
#define MOD_OP 293
#define MUL_ASSIGN 294
#define DIV_ASSIGN 295
#define MOD_ASSIGN 296
#define ADD_ASSIGN 297
#define LEFT_ASSIGN 298
#define RIGHT_ASSIGN 299
#define DEF 300
#define SUB_ASSIGN 301
#define AND_ASSIGN 302
#define XOR_ASSIGN 303
#define OR_ASSIGN 304
#define UNARY 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
