#include <stdio.h>
int main()
{
    int rows, i, j;
    int num = 1;
    char ch = 'A';

    printf("Enter number of rows:");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 2 != 0) // odd row -> numbers
            {
                printf("%d", num);
                num++;
            }
            else // even row -> letters
            {
                printf("%c", ch);
                ch++;
            }
        }
        printf("\n");
    }
    return 0;
}