Welcome to Static Libraries !!!


This is a step by step breakdown of how to make a static library when given a couple of "c" files.

.1. we  need to convert all .c files to .o files by typing "gcc -c *.c" on the command line.

.2. Choose a library name and then archive all .o files into it by typing "ar -rc libmy.a *.o".in this case, my desired library name is libmy.a. (Note that all library names should end with .a).also, starting a library name with lib is good practice.

.3. Next we use "ar -t libmy.a" on the command line to see or list the object files in the created library called libmy.a

.4. this step is not necessary , but if you wish to see the symbol and binary number of all object files in alphabetical order, you simply type "nm libmy.a" on the command line. 

.5. Next will be to index the library. By typing "ranlib libmy.a". this will make the new index name of the library to become "lmy".

.6. Any file to be linked (e.g the main.c file) will be linked using "lmy" and not "libmy.a". The index name of the library is used for the final linking.



Thank you !!!
