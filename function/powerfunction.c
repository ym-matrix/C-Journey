#include <stdio.h>

// Function to calculate base raised to the power of exp.
int power(int base, int exp)
{
    int result = 1, i;

    // Multiply the base by itself 'exp' times.
    for (i = 0; i < exp; i++)
    {
        result = result * base;
    }
    return result;
}

// Function to check whether a number is even.
int isEven(int n)
{
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int base, exp;

    // Read the base and exponent from the user.
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    // Compute the power and store it in result.
    int result = power(base, exp);
    printf("%d ^ %d = %d\n", base, exp, result);

    // Check whether the computed result is even or odd.
    if (isEven(result))
        printf("The result is even\n");
    else
        printf("The result is odd\n");

    return 0;
}
