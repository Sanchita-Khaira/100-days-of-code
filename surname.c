//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i = 0, lastStart = 0, len;

    // Input full name
    gets(str);

    len = strlen(str);

    // Find start index of surname (last word)
    for(i = len - 1; i >= 0; i--) {
        if(str[i] == ' ') {
            lastStart = i + 1;
            break;
        }
    }

    // Print initials for all words except surname
    if(str[0] != ' ') {
        printf("%c.", str[0]);
    }

    for(i = 0; i < lastStart - 1; i++) {
        if(str[i] == ' ' && str[i+1] != ' ') {
            printf("%c.", str[i+1]);
        }
    }

    // Print space and surname in full
    printf(" %s", &str[lastStart]);

    return 0;
}

