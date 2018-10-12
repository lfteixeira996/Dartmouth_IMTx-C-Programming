/*
Your job is to find the length of the longest word in a text with no punctuation or special characters
of any kind - only contains words. To do so, please write a C-program that takes as a input first the
number of words in a text, followed by all of the words in the text. The output of your program should 
be the length of the longest word in the text.

To simplify your program, you can assume that the longest word will not exceed 100 characters.

 

Examples

Input:
14
This is a simple example text
we have to find the largest word length

Output:
7
*/

#include <stdio.h>

int main(void)
{
    int n_words;
    char longest[101];
    int i = 0;
    int max = 0;
    int count = 0;
    int t = 0;

    //read number of words
    scanf("%d", &n_words);

    //read words
    for(t=0; t<n_words; t++){

        scanf("%s", longest);

        i=0;
        while(longest[i] != '\0')
        {
            if(((longest[i] >= 'a') && (longest[i] <= 'z')) || ((longest[i] >= 'A') && (longest[i] <= 'Z'))){
                count++;
            }

            if(count > max)
                max = count;

            i++;
        }
        count = 0;
    }

    printf("%d\n", max);
    return 0;
}