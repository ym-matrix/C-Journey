#include <stdio.h>

// Recursive function to calculate the factorial of a number.
long long int factorial(int n)
{
    // Base case: factorial of 0 and 1 is 1.
    if (n == 0 || n == 1)
        return 1;
    else
        // Recursive step: multiply the current number by factorial of n-1.
        return n * factorial(n - 1);
}

int main()
{
    int n;

    // Prompt the user to enter a number.
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Display the factorial of the entered number.
    printf("Factorial of %d is %lld\n", n, factorial(n));
    return 0;
}