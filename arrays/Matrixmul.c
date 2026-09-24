#include <stdio.h>
int main()
{
    int i, j, n, scalar;
    printf("Enter size of matrix(NxN):");
    scanf("%d", &n);
    int arr[n][n], result[n][n];

    printf("Enter values inside array:");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter a scalar number:");
    scanf("%d", &scalar);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            result[i][j] = arr[i][j] * scalar;
        }
    }

    printf("New array:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}