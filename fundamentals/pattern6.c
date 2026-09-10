#include <stdio.h>

// Program to print a right triangle star pattern
int main()
{
    int i, j, k, rows, col;

    // Read number of rows and columns
    printf("Enter number of rows:");
    scanf("%d", &rows);
    printf("Enter number of columns:");
    scanf("%d", &col);

    // Print one row at a time
    for (i = 1; i <= rows; i++)
    {
        // Print leading spaces to align the triangle
        for (j = 0; j < (rows - i); j++)
        {
            printf(" ");
        }

        // Print stars for the current row
        for (k = 0; k < i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}