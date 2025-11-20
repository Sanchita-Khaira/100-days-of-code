//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>

void main() 
{
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    k = k % n;

    int result[n];

    for(int i = 0; i < n; i++) 
    {
        result[(i + k) % n] = arr[i];
    }

    
    for(int i = 0; i < n; i++) 
    {
        printf("%d ", result[i]);
    }

}
