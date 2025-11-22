//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>

int main() {
    char str[200];
    int i = 0, start = 0, end = 0;

    // Input sentence
    gets(str);

    while (str[i] != '\0') {

        // When space or end of string is reached, reverse the word
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;

            // Reverse characters from start to end
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }

            start = i + 1; // move to beginning of next word
        }

        i++;
    }

    // Handle last word reverse (if string doesn't end with space)
    end = i - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    // Output result
    printf("%s", str);

    return 0;
}
