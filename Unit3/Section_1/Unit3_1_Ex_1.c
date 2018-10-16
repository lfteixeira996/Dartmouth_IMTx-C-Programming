/*
Write a C-program that converts metric measurements to imperial system values. 
Measurements are provided to your program in meters, grams or degrees Celsius and must be converted to feet,
pounds and degrees Fahrenheit, respectively.

Here are the conversion rules to use:

1 foot = 0.3048 meters;

1 gram = 0.002205 pounds;

temperature in degrees Fahrenheit = 32 + 1.8 × temperature in degrees Celsius.


On the first input line you are given the number of conversions to be made. 
The following lines contain the value to be converted as well as and its unit: m, g or c (for meters, grams or degrees Celsius). 
There will be a space between the number and the unit. 
You should print your output value for each input line immediately after calculating it 
(ie, you do not have to wait until you have read all inputs).

Display converted values with 6 decimal places, followed by a space and their 
unit: ft, lbs or f (for feet, pounds or degrees Fahrenheit).

 

You may use functions to complete this exercise, but that is not required. 
However, you will need to use a comparison operation with characters, for example:

char letter = 'a';

if(letter == 'a') {...}
 

Example
The following entry indicates that there are four values to be converted. 
The first is 12.3 meters, which, when converted, gives approximately 40.354331 feet. 
The second is 1245.243 grams, or about 2.745761 pounds, the third is 37.2 degrees Celsius, 
or 98.96 degrees Farenheit, and the fourth is 23 grams, or 0.050715 pounds.

Input
4
12.3 m
1245.243 g
37.2 c
23 g
 

Output
40.354331 ft
2.745761 lbs
98.960000 f
0.050715 lbs
*/

#include <stdio.h>

void meters(double);
void grams(double);
void degrees(double);

int main(void)
{
	int number_of_convertions, i;
	double values[101];
	char unit[101];

	//read the number of convertions to be done
	scanf("%d", &number_of_convertions);

	//read the values and unit
	for (i = 0; i < number_of_convertions; i++)
	{
		scanf("%lf %c", &values[i], &unit[i]);
	}

	values[i] = '\0';
	unit[i] = '\0';

	for (i = 0; i < number_of_convertions; i++)
	{
		switch(unit[i])
		{
			case 'm': 
			{
				meters(values[i]);
				break;
			}

			case 'g': 
			{
				grams(values[i]);
				break;
			}

			case 'c': 
			{
				degrees(values[i]);
				break;
			}
		}
	}

	return 0;
}



/*1 foot = 0.3048 meters;*/
void meters(double in)
{
	double foot = in/0.3048;
	printf("%.6f ft\n", foot);

	return;
}


/*1 gram = 0.002205 pounds;*/
void grams(double in)
{
	float pounds = in*0.002205;
	printf("%.6f lbs\n", pounds);

	return;
}


/*Fahrenheit = 32 + 1.8 × Celsius*/
void degrees(double in)
{
    double fahr = 32 + 1.8 * in;
	printf("%.6f f\n", fahr);

	return;
}