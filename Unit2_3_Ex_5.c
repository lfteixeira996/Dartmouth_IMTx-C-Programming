/*
You are conducting a linguistic study and are interested in finding words that contain 
the letter 't' or 'T' in the first half of the word (including the middle letter if there is one).

Specifically, if the first half of the word does contain a 't' or a 'T', your program should output
a 1. 
If the first half does not contain the letter 't' or 'T', but the second half does, then your 
program should output a 2. Otherwise, if there is no 't' or 'T' in the word at all, your program's 
output should be -1. You may assume that the word entered does not have more than 50 letters.

Examples

Input:
apple

Output:
-1

*/

#include <stdio.h>

int main(void)
{
    int found_idx = -1;
    char word[50];
    int i = 0;

    //read string
    scanf("%s", word);

    while(word[i] != '\0')
    {
        if(word[i] == 't' || word[i] == 'T')
            found_idx = i;

        i++;
    }


    if (found_idx == -1)
    {
        printf("%d", found_idx);
        return 0;
    }

    else if (found_idx <= i/2)
    {
        printf("%d", 1);
        return 0;
    }

    else
    {
        printf("%d", 2);
    }


    
    return 0;
}