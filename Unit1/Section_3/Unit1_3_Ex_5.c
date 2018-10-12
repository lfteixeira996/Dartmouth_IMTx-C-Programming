/*
You have a number of loose matches that you would like to put back into boxes. Write a program that
 calculates and displays how many full boxes you will have and how many leftover matches you will 
 have after filling all the boxes you can. Your program should take as input the number of matches
  to be boxed up followed by the size of a each box. Next it should print out the number of full 
  boxes followed by the number of remaining matches.

Example
Input:
666
13
Output: 
51
3
*/

#include <stdio.h>


int main(void)
{
    int match, size;
    
    scanf("%d %d", &match, &size);
    
    printf("%d\n%d", match/size, match%size);
    
    
    return 0;
}