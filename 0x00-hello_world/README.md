0-preprocessor---
Here, we basically standardized the "main.c" by passing it into CFILE (constant variable).
The goal is to use the gcc on "CFILE" instead of "main.c".
Next, we created an executable file (script) called "0-preprocessor", added a compiler statement.
in a nutshell , the 0-preprocessor file was used to compile the main.c file(already embedded into CFILE)


1-compiler
Renaming the output file to be same as the compiled file. but with an "o" extension.

2-assembler~
Here, the gcc -S is used to only compile but does not assemble. The outputed file always has a .s extension by default.
