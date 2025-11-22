//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>

int main() {
    char str[200];
    char longest[200];
    int i = 0, len = 0, maxLen = 0, start = 0, maxStart = 0;

    // Input sentence
    gets(str);

    // Traverse string to find longest word
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            len++;
        } else {
            if (len > maxLen) {
                maxLen = len;
                maxStart = start;
            }
            len = 0;
            start = i + 1;
        }
        i++;
    }

    // Check last word
    if (len > maxLen) {
        maxLen = len;
        maxStart = start;
    }

    // Copy longest word
    for(i = 0; i < maxLen; i++) {
        longest[i] = str[maxStart + i];
    }
    longest[maxLen] = '\0';

    printf("%s", longest);

    return 0;
}
