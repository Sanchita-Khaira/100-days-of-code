//Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>

int main() {
    // Define enum for months
    enum Months {JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

    enum Months month;
    int input;

    // Display mapping for user
    printf("Enter month number (0=JAN, 1=FEB, ..., 11=DEC): ");
    scanf("%d", &input);

    if (input < 0 || input > 11) {
        printf("Invalid month!\n");
        return 1;
    }

    month = (enum Months)input;

    // Print days based on month
    switch(month) {
        case JAN: case MAR: case MAY: case JUL: case AUG: case OCT: case DEC:
            printf("31 days\n");
            break;
        case APR: case JUN: case SEP: case NOV:
            printf("30 days\n");
            break;
        case FEB:
            printf("28 or 29 days\n");
            break;
    }

    return 0;
}
