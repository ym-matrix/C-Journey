#include <stdio.h>
int main()
{
    int i, j;

    // Select each multiplication table from 1 through 10.
    for (i = 1; i <= 10; i++)
    {
        printf("\nThe multiplication table of %d is", i);

                for (j = 1; j <= 10; j++)
        {
            // Print the products for the current table.
            printf("\n%dx%d=%d", i, j, i * j);
        }
    }
    return 0;
}