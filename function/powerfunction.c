#include <stdio.h>

int power(int base, int exp)
{
    int result = 1, i;
    for (i = 0; i < exp; i++)
    {
        result = result * base;
    }
    return result;
}

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
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    int result = power(base, exp);
    printf("%d ^ %d = %d\n", base, exp, result);

    if (isEven(result))
        printf("The result is even\n");
    else
        printf("The result is odd\n");

    return 0;
}
