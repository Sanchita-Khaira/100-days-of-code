/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *


/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>

void main() 
{
    int i, s, j;

    // Upper half
    for (i = 1; i <= 7; i += 2) 
    {
        int spaces = (7 - i) / 2;

        for (s = 1; s <= spaces; s++)
            printf(" ");

        for (j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    // Lower half
    for (i = 5; i >= 1; i -= 2) 
    {
        int spaces = (7 - i) / 2;

        for (s = 1; s <= spaces; s++)
            printf(" ");

        for (j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

}
