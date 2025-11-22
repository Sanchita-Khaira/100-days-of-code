//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    int i;

    // Input string
    gets(str);

    // Check each character
    for(i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Consider only lowercase alphabets
        if(ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;

            // If frequency becomes 2, it's repeating
            if(freq[ch - 'a'] == 2) {
                printf("%c", ch);
                return 0;
            }
        }
    }

    // If no repeating character found
    printf("No repeating character");

    return 0;
}
