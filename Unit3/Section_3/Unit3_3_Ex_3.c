/*
Within this program, we will pass an array with 6 integers to a function, have the function swap the first
and last integer, the second and the second to last integer, the third and the third to last integer.

The function is called reverseArray and doesn't return anything (void). 
It should take one parameter, representing the array of integers. 

The main function first reads 6 integers from the input, and assigns them to the array. 
The main function then calls reverseArray, passing the array as an argument.

The main function then prints the reversed array.

Examples

Input:
1 2 3 4 5 6

Output:
6 5 4 3 2 1
*/

#include <stdio.h>

void reverseArray(int *, int);

int main(void)
{
	int n = 6;
	int array[n];
	int i;
	int *ptr = array;

	//read the array values
	for (i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}

	reverseArray(ptr, n);

	//print the array values
	for (i = 0; i < n; i++)
	{
		printf("%d ", *ptr);
		ptr++;
	}

	return 0;
}

void reverseArray(int *pointer, int n)
{
	int *s_pointer = pointer+5;
	int swap;
	int i;

    for (i = 0; i < n/2; i++)
    {
    	swap = *pointer;
		*pointer = *s_pointer;
		*s_pointer = swap;

		pointer++;
		s_pointer--;
    }
}