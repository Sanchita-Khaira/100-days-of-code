//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() 
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[100][100];

    // Read matrix
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Traverse diagonally
    for (int s = 0; s <= n + m - 2; s++) 
    {
        int temp[100], t = 0;

        // Collect elements of diagonal where i + j = s
        for (int i = 0; i < n; i++) 
        {
            int j = s - i;
            if (j >= 0 && j < m) 
            {
                temp[t++] = a[i][j];
            }
        }

        
        if (s % 2 == 0) 
        {
            for (int i = t - 1; i >= 0; i--) 
            {
                printf("%d ", temp[i]);
            }
        }
       
        else {
            for (int i = 0; i < t; i++) 
            {
                printf("%d ", temp[i]);
            }
        }
    }

    return 0;
}
