/*
Create a program that displays on the screen a square of n x n stars, with the integer n given as an input.

Examples

Input:
5
Output:
*****
*****
*****
*****
*****
 
Input:
3
Output:
***
***
***
*/


#include <stdio.h>

int main(void)
{
	int n, line, col;

	scanf("%d", &n);

	for (line = 0; line < n; line++)
	{
		for (col = 0; col < n; col++)
		{
			printf("%c", '*');
		}

		printf("\n");
	}

	return 0;
}