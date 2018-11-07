/*
Petra lives in the United States, where temperature is measured in Fahrenheit, whereas Rémi lives in France, where one measures in Celsius. 
During their weekly meetings to discuss the preparation of this course, they often wonder who currently has the nicer weather.

To help with this important discussion, complete the below C program that converts temperature from Fahrenheit to Celsius or from Celsius to Fahrenheit,
depending on the user's input. The user should enter an integer, followed by a space, followed by the letter 'F' (for Fahrenheit) or the letter 'C' (for Celsius) 
and the program then converts this temperature to the other unit and prints it out with one decimal place (see examples below).

Your job is to complete the given program by filling in the function prototypes, the function calls, and the printf() statements at the indicated locations
(lines that start with //).

Examples
Input:
45 F
Output:
7.2 C
*/

#include <stdio.h>

// insert prototype for function ftoc() here
double ftoc(int);

// insert prototype for function ctof() here
double ctof(int);


int main(void) {

    int usertemp;
    char unit;
    double convertedtemp;

    scanf("%d %c", &usertemp, &unit);
    if (unit=='C'){
        // insert function call here to convert usertemp 
        /* from Celsius to Fahrenheit and store the result in convertedtemp */
    	convertedtemp =  ctof(usertemp);
        
        // complete this line to print out the conversion result
    	printf("%.1f F", convertedtemp);

    } else if (unit=='F'){
        // insert function call here to convert usertemp 
        /* from Fahrenheit to Celsius and store the result in convertedtemp */
        convertedtemp =  ftoc(usertemp);
 
        // complete this line to print out the conversion result
        printf("%.1f C", convertedtemp);
    }

    return 0;
}

/* Function definitions below are provided for you*/

/* Conversion from Celsius to Fahrenheit: */
double ctof(int x){
    return((9.0/5)*x+32);
}

/* Conversion from Fahrenheit to Celsius: */
double ftoc(int x){
    return(5.0/9*(x-32));
}