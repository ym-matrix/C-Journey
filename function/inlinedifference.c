#include <stdio.h>

// This inline function computes the difference between two integers.
static inline int difference(int a, int b)
{
    int result = a - b;
    return result;
}

int main()
{
    int x, y, result = 0;

    // Read two numbers from the user.
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // Call the inline function and print the difference.
    result = difference(x, y);
    printf("The difference between two numbers is: %d\n", result);
    return 0;
}