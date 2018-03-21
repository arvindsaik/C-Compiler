#define UNARY 257
#define NO_ELSE 258
#define ELSE 259
#define GE_OP 260
#define LE_OP 261
#define EQ_OP 262
#define NE_OP 263
#define IF 264
#define WHILE 265
#define FOR 266
#define CONTINUE 267
#define BREAK 268
#define RETURN 269
#define SIZEOF 270
#define INC_OP 271
#define DEC_OP 272
#define LEFT_OP 273
#define RIGHT_OP 274
#define AND_OP 275
#define OR_OP 276
#define NOT_OP 277
#define XOR_OP 278
#define MUL_OP 279
#define DIV_OP 280
#define ADD_OP 281
#define SUB_OP 282
#define MOD_OP 283
#define MUL_ASSIGN 284
#define DIV_ASSIGN 285
#define MOD_ASSIGN 286
#define ADD_ASSIGN 287
#define LEFT_ASSIGN 288
#define RIGHT_ASSIGN 289
#define DEF 290
#define SUB_ASSIGN 291
#define AND_ASSIGN 292
#define XOR_ASSIGN 293
#define OR_ASSIGN 294
#define INT 295
#define FLOAT 296
#define CHAR 297
#define UNSIGNED 298
#define SIGNED 299
#define VOID 300
#define LONG 301
#define SHORT 302
#define IDENTIFIER 303
#define CONST_INT 304
#define CONST_FLOAT 305
#define STRING_LITERAL 306
#define CONST_CHAR 307
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{
double val;
char lval[100];
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
