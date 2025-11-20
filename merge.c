//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

void main() 
{
    int n1, n2;

    // Read size of first array
    scanf("%d", &n1);
    int arr1[n1];
    for(int i = 0; i < n1; i++) 
    {
        scanf("%d", &arr1[i]);
    }

    // Read size of second array
    scanf("%d", &n2);
    int arr2[n2];
    for(int i = 0; i < n2; i++) 
    {
        scanf("%d", &arr2[i]);
    }

    // Merged array of size n1 + n2
    int merged[n1 + n2];

    // Copy arr1
    for(int i = 0; i < n1; i++) 
    {
        merged[i] = arr1[i];
    }

    // Copy arr2
    for(int i = 0; i < n2; i++) 
    {
        merged[n1 + i] = arr2[i];
    }

    // Print the merged array
    for(int i = 0; i < n1 + n2; i++) 
    {
        printf("%d ", merged[i]);
    }
}
