/*
In this problem you will continue developing the data feature which you started implementing in the previous problem.
You will implement a "tomorrow" feature in the C programming language via a function called "advanceDay()". 
The function advanceDay() should take as input a date (stored in a struct date) and return the date of the following day.
You do not have to take into account leap years (although you may if you wish to).
That is, it is okay for your function to always return March 1 as the day following February 28, no matter the year.

You are provided with a familiar date structure definition, a main function as well as the function prototypes for the
readDate(), printDate(), and advanceDate() functions. Do not modify any of the given code. 
Simply add your function definitions underneath the main() function. 
For the readDate() and printDate() functions you may simply copy and paste the code you developed in the previous task.

Examples
Input:
2018 10 2
Output:
10/02/2018                                                                      

10/03/2018
 

Input:
2018 10 31
Output:
10/31/2018                                                                      

11/01/2018
*/

#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

struct date advanceDay(struct date curr_day)
{
	int d = curr_day.day;
	int m = curr_day.month;

	if (d == 31 && (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12))
	{
		if(m == 12)
		{
			curr_day.day = 1;
			curr_day.month = 1;
			curr_day.year++;
		}

		else
		{
			curr_day.day = 1;
			curr_day.month++;
		}
	}

	else if (d == 28 && m == 2 )
	{
		curr_day.day = 1;
		curr_day.month++;
	}

	else if (d == 30 && (m == 4 || m == 6 || m == 9 || m == 11))
	{
		curr_day.day = 1;
		curr_day.month++;
	}

	else
	{
		curr_day.day++;
	}


	return curr_day;
}

void readDate(struct date *ptr)
{
	scanf("%d", &(ptr->year));
	scanf("%d", &(ptr->month));
	scanf("%d", &(ptr->day));	
}

void printDate(struct date today)
{
	printf("%02d/%02d/%4d\n", today.month, today.day, today.year);
}