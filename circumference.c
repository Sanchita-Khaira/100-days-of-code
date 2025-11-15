//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include <stdio.h>
void main()
{
    float a, c, r;
    printf("Enter the radius:");
    scanf("%f", &r);
    a=3.14*r*r;
    c=2*3.14*r;
    printf("area=%.2f, circumference=%.2f", a,c);
}