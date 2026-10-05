#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int x, y, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    result = gcd(x, y);
    printf("GCD of %d and %d = %d\n", x, y, result);

    return 0;
}