#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter a number for rows and columns:"); // input number of rows and columns
    scanf("%d", &n);

    for (i = 1; i <= n; i++) // outer loop tp execute the number of rows
    {
        for (j = 0; j < i; j++) // inner loop to execute the number of columns
        {
            if ((i + j) % 2 != 0) // if sum of i and j is divisible by 2 then print 1
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