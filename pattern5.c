/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include <stdio.h>

void main() 
{
    for (int i = 1; i <= 5; i++) 
    {
        
        // Print spaces
        for (int k = 1; k < i; k++) 
        {
            printf(" ");
        }
        
        // Print stars
        for (int j = 5; j >= i; j--) 
        {
            printf("*");
        }
        
        printf("\n");
    }

}
