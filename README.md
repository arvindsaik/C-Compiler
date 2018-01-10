# Lexical-Scanner

## OVERVIEW
The objective of this project is to build a simple lexical analyser for the C Language using the Lex programming language.

## SPECIFICATIONS
* The scanner will identify the tokens such as
* Keywords (eg: int, while),
* Identifiers (eg: sum, total),
* Constants (eg: 10, 20),
* Strings (eg: “total”, “hello”),
* Special symbols (eg: (), {}),
* Operators (eg: +, -),
* This scanner will support int and char data types and its corresponding sub-types like short , long , signed, unsigned.
* Symbol and Constant table will be maintained using hashing techniques.
* It will support finding the looping constructs while and nested while.
* It will support identification of user defined functions with one argument with return types int, char, void.
* Error detection for multiline comments.
* Error detection for strings that haven’t been terminated.

## OUTPUT
1. Nature of various tokens identified.
2. Error messages for errors handled.
3. Symbol table and constant table.
