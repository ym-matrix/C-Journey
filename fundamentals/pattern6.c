#include <stdio.h>
int main()
{
    int i, j, k, rows, col;
    printf("Enter number of rows:");
    scanf("%d", &rows);
    printf("Enter number of columns:");
    scanf("%d", &col);

    for (i = 1; i <= rows; i++)
    {
        for (j = 0; j < (rows - i); j++)
        {
            printf(" ");
        }
        for (k = 0; k < i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}