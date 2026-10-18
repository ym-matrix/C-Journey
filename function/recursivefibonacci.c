#include <stdio.h>

// Recursive function to generate the Fibonacci number for a given index.
int fibonacci(int n)
{
    // Base case: Fibonacci of 0 is 0.
    if (n == 0)
        return 0;

    // Base case: Fibonacci of 1 is 1.
    if (n == 1)
        return 1;

    // Recursive step: sum of previous two Fibonacci numbers.
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n, i;

    // Read the number of Fibonacci terms to print.
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Print the Fibonacci series up to the given number of terms.
    printf("Fibonacci series: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}