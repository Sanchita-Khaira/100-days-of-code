//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>

int main() 
{
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[100][100];
    int rowSum[100];

    // Read matrix elements
    for (int i = 0; i < rows; i++) 
    {
        rowSum[i] = 0;   // initialize each row sum
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
        }
    }

    // Print row sums
    for (int i = 0; i < rows; i++) 
    {
        printf("%d ", rowSum[i]);
    }

    return 0;
}
