//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i;

    // Input two strings
    gets(str1);
    gets(str2);

    // Count frequency for first string
    for(i = 0; str1[i] != '\0'; i++) {
        char ch = str1[i];
        if(ch >= 'a' && ch <= 'z')
            freq1[ch - 'a']++;
        else if(ch >= 'A' && ch <= 'Z')
            freq1[ch - 'A']++;
    }

    // Count frequency for second string
    for(i = 0; str2[i] != '\0'; i++) {
        char ch = str2[i];
        if(ch >= 'a' && ch <= 'z')
            freq2[ch - 'a']++;
        else if(ch >= 'A' && ch <= 'Z')
            freq2[ch - 'A']++;
    }

    // Compare frequency arrays
    for(i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i]) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}
