#!/bin/bash

#lex scanner.l
yacc -d parser.y
lex scanner.l
gcc y.tab.c lex.yy.c -ll
./a.out
