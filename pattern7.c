/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

void main() 
{
    int blocks[] = {1, 2, 3, 5, 3, 1};
    int n = 6;

    for (int i = 0; i < n; i++) 
    {

        // Print stars for this block
        for (int j = 0; j < blocks[i]; j++) 
        {
            printf("*\n");
        }

        // Print a blank line between blocks (except after last block)
        if (i != n - 1)
            printf("\n");
    }
    
}
