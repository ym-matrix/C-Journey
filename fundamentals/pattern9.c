#include <stdio.h>
int main()
{
    int i, j, rows, col;
    printf("Enter number of rows:");
    scanf("%d", &rows);
    printf("Enter number of columns:");
    scanf("%d", &col);

    for (i = 0; i <= rows; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("$");
        }
        printf("\n");
    }
    return 0;
}