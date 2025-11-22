//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>

int main() {
    char str[100];
    int i, j, k;

    // Input string
    gets(str);

    // Generate and print all substrings
    for(i = 0; str[i] != '\0'; i++) {
        for(j = i; str[j] != '\0'; j++) {

            // Print substring from i to j
            for(k = i; k <= j; k++) {
                printf("%c", str[k]);
            }

            // Print comma if not last substring
            if(str[j+1] != '\0' || str[i+1] != '\0')
                printf(",");
        }
    }

    return 0;
}
