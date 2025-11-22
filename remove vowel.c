//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>

int main() 
{
    char str[100], result[100];
    int i, j = 0;

    // Input string
    gets(str);

    // Remove vowels
    for(i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' &&
           ch!='A' && ch!='E' && ch!='I' && ch!='O' && ch!='U') {

            result[j] = ch;
            j++;
        }
    }

    result[j] = '\0';

    // Output result
    printf("%s", result);

    return 0;
}
