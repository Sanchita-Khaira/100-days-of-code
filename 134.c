//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>

int main() {
    // Define enum for operation status
    enum Status {SUCCESS, FAILURE, TIMEOUT};

    enum Status s;
    int input;

    // User input as integer: 0=SUCCESS, 1=FAILURE, 2=TIMEOUT
    printf("Enter status (0=SUCCESS, 1=FAILURE, 2=TIMEOUT): ");
    scanf("%d", &input);

    if (input < 0 || input > 2) {
        printf("Invalid status!\n");
        return 1;
    }

    s = (enum Status)input;

    // Print message based on status
    switch(s) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
    }

    return 0;
}
