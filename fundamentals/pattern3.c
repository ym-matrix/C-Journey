#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter a positive number:"); // input number of rows and columns
    scanf(" %d", &n);

    for (i = 1; i <= n; i++) // outer loop for number of rows
    {
        for (j = 0; j < i; j++) // inner loop for number of columns
        {
            printf("%d", n - j); // printing value of n-j
        }
        printf("\n");
    }
    return 0;
}