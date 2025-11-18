//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>

int main() {
    int num, temp, first, last, divisor = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    last = temp % 10;          // extract last digit

    // find divisor to extract first digit
    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }

    first = temp;              // extract first digit

    // If the number has only one digit
    if (divisor == 1) 
    {
        printf("%d\n", num);
        return 0;
    }

    // Remove first and last digit, then insert swapped digits
    int middle = (num % divisor) / 10;
    int result = last * divisor + middle * 10 + first;

    printf("%d\n", result);

    return 0;
}
