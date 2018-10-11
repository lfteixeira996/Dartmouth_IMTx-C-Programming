/*
The hostel in which you plan to spend the night tonight offers very interesting rates,
as long as you do not arrive too late. Indeed, the earlier the guests arrive, the less
they have to pay. You are trying to build a C program that calculates your price to pay
based on your arrival time.

 

Your program will read an integer indicating the hour at which you arrive, which will 
be between 0 and 12 (noon and midnight) inclusive. The base price is 10 dollars and 
5 dollars are added for every hour after noon. The total cannot exceed 53 dollars. 
Your program should print an integer price corresponding to the input arrival time.

Example 1

Input
7

Output
45
*/


#include <stdio.h>

int main(void)
{
    int arrive;
    int price = 10;
    
    scanf("%d", &arrive);
    
    price += 5*arrive;
    
    if(price >= 53)
    {
        printf("%d", 53);
        return 0;
    }
    
    printf("%d", price);
    
    return 0;
}