/*
For your superimage project, you have the following files in one folder:

libimage.c to create a library libimage.so
libimage.h to include the declarations of the library functions
superimage.c with the main program containing a main function that uses libimage. This file is used to create the final executable binary superimage.
Now you would like to create a Makefile to compile and link your program. Please submit a makefile which contains the following:

A line containing the superimage target and its dependencies
A line containing how to produce the superimage target (correctly indented by 4 spaces)
A line containing the target libimage.so and its dependencies 
A line containing how to produce the target libimage.so (correctly indented by 4 spaces)
*/

superimage: superimage.c libimage.so
	gcc -std=c11 -Wextra -Wall -fmax-errors=10 -Westra superimage.c libimage.so -o superimage

libimage.so: libimage.c libimage.h
	gcc -std=c11 -Wextra -Wall -fmax-errors=10 -Westra -c libimage.c -o libimage.so


	