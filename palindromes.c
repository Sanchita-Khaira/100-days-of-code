//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() 
{
    char str[1000];
    scanf("%s", str);

    int start = 0, end = 0;

    // Find length manually
    while (str[end] != '\0') 
    {
        end++;
    }
    end--; // point to last character

    // Check palindrome
    while (start < end) 
    {
        if (str[start] != str[end]) 
        {
            printf("Not palindrome");
            return 0;
        }
        start++;
        end--;
    }

    printf("Palindrome");
    return 0;
}
