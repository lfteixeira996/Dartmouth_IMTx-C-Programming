/*
You are still conducting linguistic research! 
This time, you'd like to write a program to find out how many letters occur multiple times in a given word.
Your program should read a word from the input and then sort the letters of the word alphabetically
(by their ASCII codes). Next, your program should iterate through the letters of the word and compare each
letter with the one following it. If these equal each other, you increase a counter by 1, making sure to 
then skip ahead far enough so that letters that occur more than twice are not counted again. 
You may assume that the word you read from the input has no more than 50 letters.

Examples

Input:
apple

Output:
1
*/

#include <stdio.h>

int main(void)
{
   
    char word[50];
    char aux;
    int i,j = 0;
    int count = 0;

    //read word
    scanf("%s", word);
   
    //count the number of characters of the string
    while(word[count] != '\0')
    {
        count++;
    }   
   

    //sort the letters of the word alphabetically 
    for (j=0; j<count-1; j++) {
        for (i=0; i<count-1; i++)
        {
            if (word[i] > word[i+1])
            {
                aux = word[i];
                word[i] = word[i+1];
                word[i+1] = aux;
            }
        }
    }
    

    //
    i = 0;
    for (j=0; j<count-1; j++) {

        if(word[j] == word[j+1])
        {
            i++;
        }

    } 

    
    printf("%d", i);
    return 0;
}