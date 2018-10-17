/*
You are programming a toaster! The toaster does not have a lot of memory, so you need to be careful about the data types
you use (remember that different data types use different amounts of memory). 
To make this easier, you'd like an easy way to track how much memory your variables are going to use.

Your job is to write a program that shows, in human-readable form (see below for specifics), 
how much memory a set of variables of a certain type will use. Your program should read a character that identifies
the data type ('i' for int, 's' for short, 'c' for char, 'd' for double). 
Next it should read an integer that indicates how many variables of the given type you wish to store.

Your program should then calculate the amount of memory required to store the given variables. 
Your program needs to be written in such a way that it would also perform correctly on other computers. 
In other words, rather than hard-coding specific sizes for the different variable types, your program
needs to use the "sizeof()" function to determine how much memory an individual variable of a given type needs.

Finally, you need to output the amount of space required by your variables to the screen. 
You need to make sure you provide this output in a form that is easy to read for humans. 
The following examples illustrate what this means:

Examples
If the user input were:

i 36794
then the amount of space needed (if we assume that an integer uses 4 bytes in memory) 
would be 4*36794 = 147176 bytes. This corresponds to 147 kilobytes and 176 bytes, so the output should be:

147 KB and 176 B
 

Input:
d 654250

Output:
5 MB and 234 KB and 0 B
*/


#include <stdio.h>


int main(void)
{
	char unit[] = {' ', 'K', 'M','G'};
	double bytes = 0;
	int val;
	char type;
	int i = 3;
	double res = 1000000000;
	double aux;

	scanf("%c %d", &type, &val);

	switch(type)
	{
		case 'i':
		{
			bytes = val*sizeof(int);
			break;
		}

		case 's':
		{
			bytes = val*sizeof(short);
			break;
		}

		case 'c':
		{
			bytes = val*sizeof(char);
			break;
		}

		case 'd':
		{
			bytes = val*sizeof(double);
			break;
		}
	}
	

	do
	{
		aux = bytes / res;

		if(aux > 0.99)
		{
		    if(i != 0)
			    printf("%d %cB and ",  (int)aux, unit[i] );
			    
			else
			   printf("%d B",  (int)aux); 
			
			bytes -= (int)aux*res;
		}
		
		i--;
		res /=1000;
        
	}while(i >= 0);


	return 0;
}