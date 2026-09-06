#include <stdio.h>
int main()
{
    int i, n, sum = 0, temp;
    printf("Enter a number:");
    scanf("%d", &n);
    temp = n;

    if (n < 0)
    {
        temp = -n; // converting negative values to positive
    }

    for (i = 1; i < temp; i++)
    {
        if (temp % i == 0) // condition for divisor
        {
            sum = sum + i;
        }
    }
    if (sum == temp)
    {
        printf("The given number %d is a perfect number:", n);
    }
    else
    {
        printf("The given number %d is not a perfect number:", n);
    }
    return 0;
}