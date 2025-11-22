//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>

int main() 
{
    char str[1000];
    scanf("%s", str);

    int length = 0;

    // Find length manually
    while (str[length] != '\0') 
    {
        length++;
    }

    // Reverse printing
    for (int i = length - 1; i >= 0; i--) 
    {
        printf("%c", str[i]);
    }

    return 0;
}
