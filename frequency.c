//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    char ch;
    int count = 0;

    // Input string
    gets(str);

    // Input character to search
    scanf("%c", &ch);

    // Count occurrences
    for(int i = 0; str[i] != '\0'; i++) 
    {
        if(str[i] == ch) 
        {
            count++;
        }
    }

    // Output result
    printf("%d", count);

    return 0;
}
