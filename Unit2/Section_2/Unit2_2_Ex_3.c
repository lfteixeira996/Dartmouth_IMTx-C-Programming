/*
You plan to make a delicious meal and want to take the money you need to buy the ingredients. 
Fortunately you know in advance the price per pound of each ingredient as well as the exact amount you need. 
The program should read in the number of ingredients (up to a maximum of 10 integers), then for each 
ingredient the price per pound. Finally your program should read the weight necessary for 
the recipe (for each ingredient in the same order). Your program should calculate the total 
cost of these purchases, then display it with 6 decimal places.

 

Example
There are 4 ingredients and they all have a different price per pound: 9.90, 5.50, 12.0, and 15.0.
You must take 0.25 lbs of the first, 1.5 lbs of the second, 0.3 lbs of the third and 1 lb of the fourth.
It will cost exactly $29.325000.

Input:
4
9.90 5.50 12.0 15.0
0.250 1.5 0.300 1.0
Output:
29.325000
*/

#include <stdio.h>

int main(void)
{
	double ing_g[10];
	double ing_p[10];
	double price = 0;
	int n_ing, i;

	//read the number of ingredients (max = 10)
	scanf("%d", &n_ing);

	//read the weight (pounds)
	for(i=0; i<n_ing; i++)
	{
		scanf("%lf", &ing_g[i]);
	}

	//read the price per pounds
	for(i=0; i<n_ing; i++)
	{
		scanf("%lf", &ing_p[i]);
	}


	//calculate the total price
	for(i=0; i<n_ing; i++)
	{
		price += ing_p[i]*ing_g[i]; 
	}


	printf("%.6lf\n", price);


	return 0;
}