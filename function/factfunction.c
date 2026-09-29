#include <stdio.h>

// Calculate n! by multiplying the integers from 1 through n.
int factorial(int n)
{
    int i, fact = 1;

    // Accumulate the product in fact.
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n, result;

    // Read a number, calculate its factorial, and display the result.
    printf("Enter a number: ");
    scanf("%d", &n);
    result = factorial(n);
    printf("The factorial of %d is %d", n, result);

    return 0;
}