#include <stdio.h>

// Recursive function to calculate base raised to the power of exponent.
long long calculate(int base, int exponent)
{
    long long result = 1;

    // Base case: any number raised to the power 0 is 1.
    if (exponent == 0)
    {
        return 1;
    }
    else
    {
        // Recursive step: multiply the base by the result of the smaller exponent.
        result = base * calculate(base, exponent - 1);
    }
    return result;
}

int main()
{
    int x, y;

    // Prompt the user to enter the base and exponent.
    printf("Enter a base number and an power number: ");
    scanf("%d %d", &x, &y);

    // Calculate and print the result.
    long long result = calculate(x, y);
    printf("%d to the power of %d is: %lld", x, y, result);
    return 0;
}