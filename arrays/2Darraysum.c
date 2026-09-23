#include <stdio.h>

// Program to calculate the sum of each row and column in a 2D array
int main()
{
    int rows, cols, i, j;

    // Read matrix dimensions
    printf("Enter number of rows:");
    scanf("%d", &rows);
    printf("Enter number of columns:");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int rowSum[rows], colSum[cols];

    // Read matrix values
    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Initialize row and column sum arrays
    for (i = 0; i < rows; i++)
    {
        rowSum[i] = 0;
    }
    for (j = 0; j < cols; j++)
    {
        colSum[j] = 0;
    }

    // Calculate sums for each row and column
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }

    // Display row sums
    printf("\nRow sums:\n");
    for (i = 0; i < rows; i++)
    {
        printf("Row %d sum = %d\n", i + 1, rowSum[i]);
    }

    // Display column sums
    printf("\nColumn sums:\n");
    for (j = 0; j < cols; j++)
    {
        printf("Column %d sum = %d\n", j + 1, colSum[j]);
    }

    return 0;
}