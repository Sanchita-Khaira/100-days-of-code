//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>

int main() {
    // Define enum for user roles
    enum Role {ADMIN, USER, GUEST};

    enum Role role;
    int input;

    // Display mapping for user input
    printf("Select role (0=ADMIN, 1=USER, 2=GUEST): ");
    scanf("%d", &input);

    if (input < 0 || input > 2) {
        printf("Invalid role!\n");
        return 1;
    }

    role = (enum Role)input;

    // Display message based on role
    switch (role) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
    }

    return 0;
}
