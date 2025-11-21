//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main() 
{
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[100][100];

    // Read matrix
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Only square matrices have a main diagonal
    if (rows != cols) 
    {
        printf("False");
        return 0;
    }

    // Check distinct diagonal elements
    for (int i = 0; i < rows; i++) 
    {
        for (int j = i + 1; j < rows; j++) 
        {
            if (matrix[i][i] == matrix[j][j]) 
            {
                printf("False");
                return 0;
            }
        }
    }

    printf("True");
    return 0;
}
