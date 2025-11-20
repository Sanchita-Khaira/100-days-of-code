//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

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

    int pos, value;
    scanf("%d %d", &pos, &value); 
    
    
    for(int i = n; i > pos; i--) 
    {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos] = value;

    // Print new array
    for(int i = 0; i <= n; i++) 
    {
        printf("%d ", arr[i]);
    }

}
