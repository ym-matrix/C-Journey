#include <stdio.h>
long long calculate(int base, int exponent)
{
    long long result = 1;
    if (exponent == 0)
    {
        return 1;
    }
    else
    {
        result = base * calculate(base, exponent - 1);
    }
    return result;
}
int main()
{
    int x, y;
    printf("Enter a base number and an power number: ");
    scanf("%d %d", &x, &y);
    long long result = calculate(x, y);
    printf("%d to the power of %d is: %lld", x, y, result);
    return 0;
}