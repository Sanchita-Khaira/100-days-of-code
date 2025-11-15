//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    int binary[32];   // to store bits
    int index = 0;

    if (n == 0) 
    {
        printf("0");
        return 0;
    }

    while (n > 0) 
    {
        binary[index] = n % 2;  // store remainder
        n = n / 2;              // divide number by 2
        index++;
    }

    // print in reverse
    for (int i = index - 1; i >= 0; i--) 
    {
        printf("%d", binary[i]);
    }

    return 0;
}
