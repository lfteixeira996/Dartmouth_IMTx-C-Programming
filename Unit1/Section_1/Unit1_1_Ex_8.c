/*
You work in the C-programming censorship office and your job is to ensure that programs written by developers
comply with certain rules. The two censorship rules are as follows:

Programs cannot use for-loops with more than 10 repetitions.
Programs are not allowed to say 'goodbye!'.
In order to allow the developers to correct their code, you should not delete any of it. 
Instead, de-activate the offensive code by commenting it out. If the illegal block of
code consists of more than 3 lines, you need to de-activate it using a multi-line comment. 
Otherwise, use single line commenting. If you find an illegal for-loop, you should remove the entire loop, 
including the body of the loop.

Here is the code of one of the developers. Please censor it:


#include <stdio.h>

int main(void) {
    int i;

    printf ("Welcome, humans!\n");
    printf ("I am Buttons, your robot instructor! \n");
    printf ("Today we are going to learn how to love robots :) \n");
    printf ("Repeat after me: \n");

    for (i = 0; i < 3; i ++)
        printf ("I love Buttons!\n");

    printf ("Still not convinced? \n");
    printf ("In that case, let me explain some more ... \n");

    for (int i = 0; i < 200; i++) {
        printf ("We come in peace and kindness! \n");
        printf ("A robot cannot hurt a human being or ");
        printf ("allow a human being to be hurt. ");
    }

    printf ("This is the end of today's lesson! ");
    printf ("Thank you for your cooperation, and");
    printf ("goodbye!");    

    return(0);
}
*/

#include <stdio.h>

int main(void) {
    int i;

    printf ("Welcome, humans!\n");
    printf ("I am Buttons, your robot instructor! \n");
    printf ("Today we are going to learn how to love robots :) \n");
    printf ("Repeat after me: \n");

    for (i = 0; i < 3; i ++)
        printf ("I love Buttons!\n");

    printf ("Still not convinced? \n");
    printf ("In that case, let me explain some more ... \n");

    /*for (int i = 0; i < 200; i++) {
        printf ("We come in peace and kindness! \n");
        printf ("A robot cannot hurt a human being or ");
        printf ("allow a human being to be hurt. ");
    }*/

    printf ("This is the end of today's lesson! ");
    printf ("Thank you for your cooperation, and");
    //printf ("goodbye!");    

    return(0);
}

