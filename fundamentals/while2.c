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
            count++; // count the number of factors of the given number
        }
        i++;
    }
    if (count == 2) // condition to check whether the number is prime
    {
        printf("The given number %d is a prime number", n);
    }
    else
    {
        printf("The given number %d is not a prime number", n);
    }
    return 0;
}