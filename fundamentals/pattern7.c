#include <stdio.h>

// Program to print an inverted triangle pattern of stars
int main(void)
{
    int i, j, k, rows;

    // Read the number of rows
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Print rows from the largest to the smallest
    for (i = rows; i >= 1; i--)
    {
        // Print leading spaces to align the triangle
        for (j = 0; j < rows - i; j++)
        {
            printf(" ");
        }

        // Print stars in the current row
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}