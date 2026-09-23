#include <stdio.h>
int main()
{
    int n, i, j, isSymmetric = 1;

    printf("Enter size of square matrix (n x n):");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check symmetric condition: matrix[i][j] must equal matrix[j][i]
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                isSymmetric = 0;
            }
        }
    }

    if (isSymmetric)
    {
        printf("The given matrix is Symmetric.\n");
    }
    else
    {
        printf("The given matrix is NOT Symmetric.\n");
    }

    return 0;
}