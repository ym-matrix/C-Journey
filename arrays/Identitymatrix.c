#include <stdio.h>

// Program to check whether a square matrix is an identity matrix
int main()
{
    int n, i, j, isIdentity = 1;

    // Read the size of the square matrix
    printf("Enter size of square matrix (n x n):");
    scanf("%d", &n);

    int matrix[n][n];

    // Read matrix elements
    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check every element: diagonal must be 1 and non-diagonal must be 0
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (matrix[i][j] != 1)
                {
                    isIdentity = 0;
                }
            }
            else
            {
                if (matrix[i][j] != 0)
                {
                    isIdentity = 0;
                }
            }
        }
    }

    // Print the final result
    if (isIdentity)
    {
        printf("The given matrix is an Identity Matrix.\n");
    }
    else
    {
        printf("The given matrix is NOT an Identity Matrix.\n");
    }

    return 0;
}