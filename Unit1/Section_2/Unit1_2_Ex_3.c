/*
In this activity, you want to improve your existing multiplication program (that prints the 8 times table). 
Your program should read an integer from the user (not you) and print the multiplication table for the 
number that they enter.

Examples
Input:
8
Output:
0x8 = 0
1x8 = 8
...
10x8 = 80
*/

#include <stdio.h>

int main(void)
{
    int i;
    int base;
    
    
    scanf("%d", &base);

    
    for(i=0; i<11; i++)
    {
        printf("%dx%d = %d\n", i, base, i*base);
    }
    
    
    return 0;
}