/*
You are selling plants and are working on creating invoices for customer orders. 
You are testing a program that should receive, as arguments passed in from the command line, a number of plants to be purchased (an integer) and the price per plant (a decimal number).
Your job is to create an invoice for the customer (see examples) that prints out the total price of the order (which can be found by multiplying the price per plant by the number of plants purchased). 

If your program is called with an incorrect number of arguments the user should receive the message "Invalid input" (see Example 3).

Be sure to print prices with two decimal places, and to print the invoice exactly as presented in the examples below.

When testing your program in Weblinux, you need to provide the command line arguments in the same way you just learned in the video.
When you submit your program to taskgrader however, we will be supplying those arguments in order to test your program. 
In your submission you thus do not have to worry about providing command line arguments to your program.

Examples
Input from the command line (via argv): 
5 2.39
Output:
5 plants for 2.39 dollars each cost 11.95 dollars.
 

Input from the command line (via argv): 
2 48.99
Output:
2 plants for 48.99 dollars each cost 97.98 dollars.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float res, res2;
    int res1;
    
	if (argc<3)
	{
		printf("Invalid input\n");
		return 0;
	}

    res1 = atoi(argv[1]);
    res2 = atof(argv[2]);
    res  = res1*res2;
	printf("%d plants for %.2f dollars each cost %.2f dollars.\n", res1, res2, res);
	return 0;
}