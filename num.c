//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*///
#include <stdio.h>

int main() 
{
    int a, b;

    // Input two numbers
    scanf("%d %d", &a, &b);

    // Calculations
    int sum = a + b;
    int diff = a - b;
    int prod = a * b;

    printf("Sum=%d, Diff=%d, Product=%d, ", sum, diff, prod);

    // Handle division by zero
    if (b == 0) 
    {
        printf("Quotient=undefined");
    } 
    else 
    {
        printf("Quotient=%d", a / b);
    }

    return 0;
}
