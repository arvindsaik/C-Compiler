#!/bin/bash

lex scanner.l
yacc -d parser.y
gcc y.tab.c lex.yy.c -ll
./a.out
