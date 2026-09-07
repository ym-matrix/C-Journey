#include <stdio.h>
int main()
{
    int i = 1, n, count = 0;
    printf("Enter a number:");
    scanf("%d", &n);

    while (i <= n)
    {
        if (n % i == 0)
        {
            count++;
        }
        i++;
    }
    if (count == 2)
    {
        printf("The given number %d is a prime number", n);
    }
    else
    {
        printf("The given number %d is not a prime number", n);
    }
    return 0;
}