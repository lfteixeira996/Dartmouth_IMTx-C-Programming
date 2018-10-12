/*
You just started learning a new language and decide to buy a few books to practice. 
Thankfully you quickly find a book seller who offers every book for the same low fixed price.
You have a certain amount of money and you would like to know how many books of the same price you can purchase.

Please write a C-program that starts by reading the amount of money you have (to two decimals), 
then reads the price per book (again to two decimals). The program should then display an integer, 
namely the largest number of books that you can purchase with the given amount of money.

Examples
Input
48.0
3.50
Output
13
*/

#include <stdio.h>

int main()
{
    float money;
    float price;
   
    scanf("%f", &money);
    scanf("%f", &price);
   
    money /= price;

    
    printf("%d",(int) money );
   
    return 0;
}