//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int main() 
{
    int n, m;
    scanf("%d %d", &n, &m);

    int matrix[100][100];
    int sum = 0;

    // Read matrix
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Only square matrices have a valid main diagonal
    if (n != m) 
    {
        printf("Invalid");
        return 0;
    }

    // Sum diagonal elements
    for (int i = 0; i < n; i++) 
    {
        sum += matrix[i][i];
    }

    printf("%d", sum);

    return 0;
}
