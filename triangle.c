//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include <stdio.h>

void main() 
{
    float a, b, c;

    printf("Enter three sides of the triangle:");
    scanf("%f %f %f", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) 
    {
        printf("\nThe triangle is VALID.\n");

        if (a == b && b == c) {
            printf("It is an EQUILATERAL triangle.\n");
        }
        else if (a == b || b == c || a == c) {
            printf("It is an ISOSCELES triangle.\n");
        }
        else {
            printf("It is a SCALENE triangle.\n");
        }

        
        float largest, side1, side2;

        if (a > b && a > c) 
        {
            largest = a;
            side1 = b;
            side2 = c;
        } 
        else if (b > a && b > c) 
        {
            largest = b;
            side1 = a;
            side2 = c;
        } 
        else 
        {
            largest = c;
            side1 = a;
            side2 = b;
        }

        if (largest * largest == side1 * side1 + side2 * side2) 
        {
            printf("It is also a RIGHT-ANGLED triangle.\n");
        }
    }
    else 
    {
        printf("\nThe triangle is NOT VALID.\n");
    }

}
