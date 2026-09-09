#include <stdio.h>
int main()
{
    int i, j, rows, col;
    printf("Enter number of rows:");
    scanf("%d", &rows);
    printf("Enter number of columns:");
    scanf("%d", &col);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= col; j++)
        {
            if (i == 1 || j == 1 || i == rows || j == col)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
