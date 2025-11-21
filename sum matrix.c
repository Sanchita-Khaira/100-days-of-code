//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>

int main() 
{
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[100][100];
    int sum = 0;

    // Read matrix
    for(int i = 0; i < rows; i++) 
    {
        for(int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // Add while reading
        }
    }

    printf("%d", sum);

    return 0;
}
