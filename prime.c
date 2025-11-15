//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>

int main()
{
    int num, c=0;
    printf("Enter a number:");
    scanf("%d",&num);
    
        for(int j=1;j<=num;j++)
        {
           if(num%j==0)
           c++;
        }
    if(c>2)
    printf("Not Prime");
    else
    printf("Prime");
}