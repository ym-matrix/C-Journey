#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter a number for rows and columns:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if ((i + j) % 2 != 0)
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