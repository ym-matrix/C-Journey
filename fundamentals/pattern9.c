#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter number of rows and columns");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        // loop to print leading spaces
        for (j = n; j >= i; j--)
        {
            printf(" ");
        }
        // to print ABCDE on new line after inner loop
        printf("ABCDE\n");
    }
    return 0;
}