//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>

int main() {
    // Define enum for menu choices
    enum Menu {ADD = 1, SUBTRACT, MULTIPLY};

    int choice;
    int num1, num2;

    // Display menu
    printf("Menu:\n1. ADD\n2. SUBTRACT\n3. MULTIPLY\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 3) {
        printf("Invalid choice!\n");
        return 1;
    }

    // Take two numbers as input
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Perform operation based on choice
    switch (choice) {
        case ADD:
            printf("%d\n", num1 + num2);
            break;
        case SUBTRACT:
            printf("%d\n", num1 - num2);
            break;
        case MULTIPLY:
            printf("%d\n", num1 * num2);
            break;
    }

    return 0;
}
