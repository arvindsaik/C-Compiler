# Lexical Scanner

## Team Members : Arvind Sai K (15CO207) and Derik Clive (15CO213)

### Pipeline for execution of a program

The following image shows the typical flow for an execution of a program starting from the raw source code stage.

![](https://www.tutorialspoint.com/compiler_design/images/language_processing_system.jpg)

### What is a compiler?

A compiler is computer software that transforms computer code written in one programming language (the source language) into another programming language (the target language). Compilers are a type of translator that support digital devices, primarily computers. The name compiler is primarily used for programs that translate source code from a high-level programming language to a lower level language (e.g., assembly language, object code, or machine code) to create an executable program.

### Introduction to compilers

Up to this point we have treated a compiler as a single box that maps a source program into a semantically equivalent target program. If we open up this box a little, we see that there are two parts to this mapping: analysis and synthesis.

The analysis part breaks up the source program into constituent pieces and
imposes a grammatical structure on them. It then uses this structure to cre-
ate an intermediate representation of the source program. If the analysis part
detects that the source program is either syntactically ill formed or semanti-
cally unsound, then it must provide informative messages, so the user can take
corrective action. The analysis part also collects information about the source
program and stores it in a data structure called a symbol table, which is passed
along with the intermediate representation to the synthesis part.

The synthesis part constructs the desired target program from the interme-
diate representation and the information in the symbol table. The analysis part
is often called the front end of the compiler; the synthesis part is the back end.

If we examine the compilation process in more detail, we see that it operates
as a sequence of phases, each of which transforms one representation of the
source program to another. A typical decomposition of a compiler into phases
is shown in figure below. In practice, several phases may be grouped together,
and the intermediate representations between the grouped phases need not be
constructed explicitly. The symbol table, which stores information about the
entire source program, is used by all phases of the compiler.

Some compilers have a machine-independent optimization phase between
the front end and the back end. The purpose of this optimization phase is to
perform transformations on the intermediate representation, so that the back
end can produce a better target program than it would have otherwise pro-
duced from an unoptimized intermediate representation. Since optimization is
optional, one or the other of the two optimization phases shown in figure below may
be missing.

![](https://image.slidesharecdn.com/phasescompiler-141221115333-conversion-gate01/95/phases-of-a-compiler-3-638.jpg?cb=1419162903)


### Analysis phase in compilers

#### Lexical Analysis
The first phase of scanner works as a text scanner. This phase scans the source code as a stream of characters and converts it into meaningful lexemes. Lexical analyzer represents these lexemes in the form of tokens as below.

``` <token-name, attribute-value> ```
#### Syntax Analysis
The next phase is called the syntax analysis or parsing. It takes the token produced by lexical analysis as input and generates a parse tree (or syntax tree). In this phase, token arrangements are checked against the source code grammar, i.e. the parser checks if the expression made by the tokens is syntactically correct.

#### Semantic Analysis
Semantic analysis checks whether the parse tree constructed follows the rules of language. For example, assignment of values is between compatible data types, and adding string to an integer. Also, the semantic analyzer keeps track of identifiers, their types and expressions; whether identifiers are declared before use or not etc. The semantic analyzer produces an annotated syntax tree as an output.

#### Intermediate Code Generation
After semantic analysis the compiler generates an intermediate code of the source code for the target machine. It represents a program for some abstract machine. It is in between the high-level language and the machine language. This intermediate code should be generated in such a way that it makes it easier to be translated into the target machine code.

### Synthesis phase in compilers

#### Code Optimization
The next phase does code optimization of the intermediate code. Optimization can be assumed as something that removes unnecessary code lines, and arranges the sequence of statements in order to speed up the program execution without wasting resources (CPU, memory).

#### Code Generation
In this phase, the code generator takes the optimized representation of the intermediate code and maps it to the target machine language. The code generator translates the intermediate code into a sequence of (generally) re-locatable machine code. Sequence of instructions of machine code performs the task as the intermediate code would do.

### Symbol Table (Common to all the above phases)
It is a data-structure maintained throughout all the phases of a compiler. All the identifier's names along with their types are stored here. The symbol table makes it easier for the compiler to quickly search the identifier record and retrieve it. The symbol table is also used for scope management.

### Details of the lexical analysis phase

``` TO BE FILLED ```


