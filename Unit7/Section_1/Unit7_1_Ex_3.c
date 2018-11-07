/*
You are still teaching that unit on libraries to your students! 
This time you want to demonstrate how to invoke the JPEG library (libjpeg.so), which can be used to read and write image files in JPEG format 
(feel free to play around here - this is pretty neat!). 

You ask your students to write a program with source code stored in vizplus.c and which uses the JPEG library. 
In order to help your students you decide to print out the compilation command for them that creates an executable file called vizplus from vizplus.c
along with linking the JPEG library during the translation process. 

Please write a program that prints the necessary compilation command with a simple printf(). 
Again, your students' source code is provided in vizplus.c. You only need to link the JPEG library and produce an executable file called vizplus.
*/


#include <stdio.h>


int main(void)
{

	printf("gcc -std=c11 -Wall -fmax-errors=10 -Wextra /usr/lib/libjpeg.so vizplus.c -o vizplus");

	return 0;
}