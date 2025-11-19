/*Q49: Write a program to print the following pattern:
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
    {          // 5 lines
        int start = 6 - i;                  // starting number of each line
        
        for (int j = start; j <= 5; j++) 
        {  // print from start to 5
            printf("%d", j);
        }
        printf("\n");
    }
    
}
