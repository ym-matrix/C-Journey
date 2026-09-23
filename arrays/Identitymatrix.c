#include <stdio.h>
int main()
{
    int n, i, j, isIdentity = 1;

    printf("Enter size of square matrix (n x n):");
    scanf("%d", &n);

    int[n][n];

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
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