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
extern YYSTYPE yylval;
