//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

int main() 
{
    int n, m;
    scanf("%d %d", &n, &m);

    int matrix[100][100];
    
    // Read matrix
    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < m; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // A symmetric matrix must be square
    if (n != m) 
    {
        printf("False");
        return 0;
    }

    // Check symmetry
    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < n; j++) 
        {
            if (matrix[i][j] != matrix[j][i]) 
            {
                printf("False");
                return 0;
            }
        }
    }

    printf("True");
    return 0;
}
