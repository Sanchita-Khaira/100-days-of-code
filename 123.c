//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;  // flag to track if we are inside a word

    fp = fopen("info.txt", "r");  // open file in read mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;  // count every character including spaces and newlines

        if (ch == '\n') {
            lines++;    // count newlines
        }

        // Word count logic
        if (isspace(ch)) {
            inWord = 0;  // word ended
        } else if (inWord == 0) {
            inWord = 1;  // new word started
            words++;
        }
    }

    // If file is not empty but doesn't end with newline
    if (characters > 0 && ch != '\n') {
        lines++;  // count last line if not counted
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
