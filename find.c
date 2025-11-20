//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

void main() 
{
    long long n;
    scanf("%lld", &n);

    int freq[10] = {0};  // to count digits 0-9

    // Count frequency of each digit
    while(n > 0) 
    {
        int digit = n % 10;
        freq[digit]++;
        n /= 10;
    }

    // Find digit with maximum frequency
    int maxDigit = 0;
    for(int i = 1; i < 10; i++) 
    {
        if(freq[i] > freq[maxDigit]) 
        {
            maxDigit = i;
        }
    }
     printf("%d", maxDigit);

}
