/*
You are still teaching a class on C-programming! You would like to find out whether the students in your class did better on the most recent assignment than the students in your colleagues' classes. 
The average grades of all these classes are stored in a file called "gradeComparison.txt". The first number stored in the file represents the average grade of the students in your class.
All of the subsequent numbers represent the average grades of students from other sections. For example, if the file contained the following:

95.23 94.80 91.56
this would mean that the students in your class received an average grade of 95.23 on the last assignment, which is higher than the average grades received by students in the other sections.

If, on the other hand, the file was

95.23 94.80 91.56 96.40 93.25
then this would mean that the students in the fourth class received a slightly higher grade than the students in your class.  

Your job is to find out whether the students in your class did better than the students in the other classes and if so, print out the word "Yes".
If on the other hand students in another class did better than your students then you should print out "No", followed by one space, followed by the number of the first class in the file that had a better grade average.


Things to consider: 
(1) Unlike in the previous task, this time the file contains only average grades (and does not start with the number of average grades stored in the file).

(2) To test your program you will need to create your own file "gradeComparison.txt" with average grades stored as described. 
In weblinux you can do so by first typing "touch gradeComparison.txt" at the command prompt and then opening, editing, and saving the file "gradeComparison.txt" in the file editor.
When you submit your program to taskgrader we will provide an input file for testing purposes. 
It is thus crucially important that the file from which you are reading in your program is indeed named "gradeComparison.txt".  

 
Examples
Input file "gradeComparison.txt": 
95.23 94.80 91.56
Output: 
Yes


*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	FILE * pFile;
	float class = 0;
	float average = 0;
	int i = 1;
   
   	//open file
   	pFile = fopen ("gradeComparison.txt" , "r");

   	//My class average
   	fscanf (pFile, "%f", &class);

   	while(fscanf (pFile, "%f", &average) != EOF)
   	{
   		i++;
   		if(average > class)
   		{
   			printf("No %d\n", i);
   			return 0;
   		}
   	}

	printf("Yes\n");

   	//closes the file
   	fclose(pFile);

	return 0;
}