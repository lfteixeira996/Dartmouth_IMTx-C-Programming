/*
The goal of this problem is to find the smallest integer in a list of numbers.

To help you with this task, please write a function called min() that finds the smallest amongst two integers.
The function thus takes two integers as input and returns the smallest of the two. 
This function will use an if statement with a condition that contains either "less than" or "greater than".

Next, please use min() in your main function to work your way through an entire list of numbers in order to
find its minimum. The first number you read gives the number of elements in the list of integers under consideration.
You will then read the integer values, using min() to keep only the smallest integer read at each step. 
In the end, please print out the smallest integer in the list.

Example
Input
10
4 3 6 2 6 8 9 8 5 4

Output
2
*/


#include <stdio.h>

int min(int, int);

int main(void)
{
	int idx, i, min_val=0;
	int  second;

	//number of elements
	scanf("%d", &idx);

	//first element is considered the minimum
	scanf("%d", &min_val);
	
	for (i = 1; i < idx; i++)
	{
		scanf("%d", &second);
		min_val = min(min_val, second);
	}
	
	printf("%d", min_val);

	return 0;
}

int min(int x, int y)
{
	int ret;

	if (x<y)
		ret = x;
	
	else
		ret = y;
	
	return ret;
}