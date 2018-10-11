/*
University chemists have developed a new process for the manufacture of a drug that heals wounds extremely quickly.
The manufacturing process is very long and requires monitoring the chemicals at all time, sometimes for hours.
Entrusting this task to a student is not possible; they always fall asleep or do not pay attention.
You need to program an automatic device to monitor the chemicals of the drug.
The device monitors the temperature every 15 seconds and gives the measurement to your program. 

Your program should read two integers representing the minimum and maximum safe temperatures.
The next line will contain integers representing different temperatures recorded over time.
We use a value of -999 to represent the end of temperature reading. 
If the temperatures recorded remain in the correct range (they can also be equal to the min or max values),
your program should display the text "Nothing to report", but as soon as the temperature reaches an unsafe
level it must display the text "Alert!" and stop reading temperatures.

Examples

Input:
10 20
15 10 20 0 15 -999

Output:
Nothing to report
Nothing to report
Nothing to report
Alert!

*/


#include <stdio.h>

int main(void)
{
	int minSafeT, maxSafeT;
	int read;

	//read the number that the child will have to find
	scanf("%d %d", &minSafeT, &maxSafeT);
	scanf("%d", &read);

	while(read != -999)
	{
		if(read >= minSafeT && read <= maxSafeT)
		{
			printf("Nothing to report\n");
		}

		else
		{
			printf("Alert!\n");
			return 0;
		}

		scanf("%d", &read);
	}

	return 0;
}