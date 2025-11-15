//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h>

int main() 
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    float D = b*b - 4*a*c;   // Discriminant

    if (D > 0) 
    {
        float r1 = (-b + sqrt(D)) / (2 * a);
        float r2 = (-b - sqrt(D)) / (2 * a);
        printf("Roots are real and different: %.0f, %.0f", r1, r2);
    }
    else if (D == 0) {
        float r = -b / (2 * a);
        printf("Roots are real and same: %.0f", r);
    }
    else {
        printf("Roots are complex");
    }

    return 0;
}
