//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int lastIndex[256];        // to store last index of characters
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;     // initialize as not seen

    int maxLen = 0, start = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        // if character seen and index is within current window
        if (lastIndex[s[i]] >= start) {
            start = lastIndex[s[i]] + 1;
        }

        lastIndex[s[i]] = i;   // update last seen index

        int windowLen = i - start + 1;
        if (windowLen > maxLen)
            maxLen = windowLen;
    }

    printf("%d", maxLen);

    return 0;
}
