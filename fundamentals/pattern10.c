#include <stdio.h>
int main()
{
    int rows, i, j, k;
    int c;

    printf("Enter number of rows:");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++)
    {
        // to print the leading spaces to make it centre aligned
        for (j = 0; j < rows - i - 1; j++)
        {
            printf(" ");
        }

        c = 1;
        // to print the values using the variable c
        for (j = 0; j <= i; j++)
        {
            printf("%d ", c);
            // update the value of c after printing
            c = c * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}