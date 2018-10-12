/*
You work for the IBP (International Bureau of Procrastination). You've been asked how much time 
is left until the official day of procrastination (March 25th).

Given that you've been asked on March 23rd, please write code which will produce the following output:

Dear Procrastinator,
You still have to wait for X days (Y minutes or Z seconds) before you can procrastinate!
Here, X is the remaining number of days (25-23), Y is the number of minutes (60 * 24 * X) 
and Z is the number of seconds (60 * Y). The sentence has to be exactly the one displayed above, 
replacing X Y and Z with the computed values. The format has to be followed precisely.
*/

#include <stdio.h>

int main(void)
{
    int X = 2;
    int Y = (60 * 24 * X);
    int Z = (60 * Y);
    
    printf("Dear Procrastinator,\nYou still have to wait for %d days (%d minutes or %d seconds) before you can procrastinate!", X, Y, Z);
    
    
    
    return 0;
}