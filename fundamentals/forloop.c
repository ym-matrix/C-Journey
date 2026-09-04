#include <stdio.h>
int main()
{
    int i, a, b, result = 1;
    printf("Enter a base number:");
    scanf("%d", &a);
    printf("Enter non negative power:");
    scanf("%d", &b);

    if (b < 0)
    {
        printf("Enter valid positive power:");
    }
    else
    {
        for (i = 1; i <= b; i++)
        {
            result = result * a;
        }
    }
    printf("The result of %d raised to the power of %d is: %d", a, b, result);
    return 0;
}