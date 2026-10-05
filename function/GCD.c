#include <stdio.h>

// Function to compute the greatest common divisor using the Euclidean algorithm.
int gcd(int a, int b)
{
    while (b != 0)
    {
        // Swap values: store b, then replace a with the remainder of a / b.
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int x, y, result;

    // Read two integers from the user.
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // Calculate the GCD and print it.
    result = gcd(x, y);
    printf("GCD of %d and %d = %d\n", x, y, result);

    return 0;
}