/*
You are teaching a class on C-programming! You would like to find out whether your teaching has been effective, and so you need to compute the average grade your students
have received on the most recent assignment. These grades (integers) are stored in the file studentGrades.txt.

The first entry in the file (an integer) is the number of student grades that are stored in the file. For example, if the file was as follows:

9
56 3 8 11 0 45 55 2 78
this would mean that there are 9 grades stored in the file (starting with 56 and ending with 78).

Your job is to calculate and print out the average of the grades stored in the file. 
Please print the average grade with two decimal places.

Things to consider:
To test your program you need to create your own file "studentGrades.txt" with grades stored as described. 
In weblinux you can do so by first typing "touch studentGrades.txt" at the command prompt and then opening, editing and saving the file studentGrades.txt in the file editor. 
When you submit your program to taskgrader we will provide an input file for testing purposes. It is thus crucially important that the file from which you are reading in 
your program is indeed named "studentGrades.txt".  


Examples
Input file "studentGrades.txt": 
4
100 99 90 98
Output: 
96.75
*/


#include <stdio.h>


int main(int argc, char const *argv[])
{
	int val, i, x;
	double ave = 0;
	FILE * pFile;
   
   	//open file
   	pFile = fopen ("studentGrades.txt" , "r");

   	//read the first value
   	fscanf (pFile, "%d", &x);

   	//read the remaining values and sum the values
   	for (i = 0; i < x; i++)
   	{
		fscanf (pFile, "%d", &val);   		
   		ave += val; 
   	}

   	//print the average
   	printf("%.2f\n", ave/x);

   	//closes the file
   	fclose(pFile);

	return 0;
}