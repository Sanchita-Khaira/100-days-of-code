/*Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345

/*
Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/

#include <stdio.h>

void main() 
{
    for (int i = 1; i <= 5; i++) 
    {

        // Print spaces
        for (int s = 1; s <= 5 - i; s++) 
        {
            printf(" ");
        }

        // Print numbers
        for (int num = 6 - i; num <= 5; num++) 
        {
            printf("%d", num);
        }

        printf("\n");
    }

}
