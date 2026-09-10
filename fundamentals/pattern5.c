#include <stdio.h>

// Program to print an increasing alphabet pattern
int main()
{
    int i, j, rows, col;

    // Get the number of rows and columns from the user
    printf("Enter number of rows:");
    scanf("%d", &rows);
    printf("Enter number of col:");
    scanf("%d", &col);

    for (i = 1; i <= rows; i++)
    {
        // Print letters from 'A' up to the current row length
        for (j = 0; j < i; j++)
        {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}