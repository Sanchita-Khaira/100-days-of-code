//Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
#include <stdio.h>

void main() 
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int num = 2; num <= n; num++) 
    {
        int isPrime = 1;

        // Check if num is prime
        for (int i = 2; i * i <= num; i++) 
        {
            if (num % i == 0) 
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d ", num);
    }

}
