/*
Write a C-program that reads an input character (using scanf) and displays the following
pyramid pattern using the character read: 

Examples
Input
#
Output
++++#++++
+++###+++
++#####++
+#######+
#########
*/

#include <stdio.h>

int main(void) {
   
    int i,z;
    char ch;
    int x = 4;
    int y = 0;
   
    scanf("%c", &ch);
    
    for ( i=0; i<5; i++) {
        
        for(z=0; z<x;z++)
        {
            printf("%c", '+');
        }
        
        for(z=0; z<y+1;z++)
        {
            printf("%c", ch);
        }
        
        for(z=0; z<x;z++)
        {
            printf("%c", '+');
        }
        
        printf("\n");
        x--;
        y += 2;
        
    }
   

    return(0);
}

