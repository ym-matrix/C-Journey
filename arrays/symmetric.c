#include <stdio.h>

// Program to check whether a square matrix is symmetric
int main()
{
    int i, j, n, isSymmetric = 1;

    // Read the size of the matrix
    printf("Enter size of matrix:");
    scanf("%d", &n);
    int arr[n][n];

    // Read the matrix values
    printf("Enter values inside array:");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Compare each element with its mirrored position across the diagonal
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                isSymmetric = 0;
            }
        }
    }

    // Display the final result
    if (isSymmetric)
    {
        printf("It is a symmetric matrix");
    }
    else
    {
        printf("Not a symmetric matrix");
    }
    return 0;
}