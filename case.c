//Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include <stdio.h>

int main() 
{
    char str[1000];
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) 
    {
        // If character is lowercase a–z
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] = str[i] - 32; // convert to uppercase
        }
    }

    printf("%s", str);

    return 0;
}
