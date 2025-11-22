//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Input full name
    gets(str);

    // Print first initial if first character is a letter
    if(str[0] != ' ') {
        printf("%c.", str[0]);
    }

    // Scan for spaces, print next character after each space
    while(str[i] != '\0') {
        if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') {
            printf("%c.", str[i+1]);
        }
        i++;
    }

    return 0;
}
