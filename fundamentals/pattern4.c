#include <stdio.h>
int main()
{
    int i, j, rows, col;
    printf("Enter number of rows:"); // input the number of rows
    scanf("%d", &rows);
    printf("Enter number of columns:"); // input the number of columns
    scanf("%d", &col);

    for (i = 1; i <= rows; i++) // outer loop for executing the number of rows
    {
        for (j = 1; j <= col; j++) // inner loop for executing the number of columns
        {
            if (i == 1 || j == 1 || i == rows || j == col) // condition to print 1
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
