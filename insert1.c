//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

void main() 
{
    int n;
    scanf("%d", &n);

    int arr[n + 1];  
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int value;
    scanf("%d", &value);

    int i = n - 1;

    
    while(i >= 0 && arr[i] > value) 
    {
        arr[i + 1] = arr[i];
        i--;
    }

    // Insert at correct position
    arr[i + 1] = value;

    // Print updated sorted array
    for(int j = 0; j <= n; j++) 
    {
        printf("%d ", arr[j]);
    }

}
