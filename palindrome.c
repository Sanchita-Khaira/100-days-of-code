//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() 
{
    int n, original, rev = 0;
    scanf("%d", &n);

    original = n;   // store original number

    while (n > 0) 
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    if (rev == original)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
