#include <stdio.h>

static inline int difference(int a, int b)
{
    int result = a - b;
    return result;
}

int main()
{
    int x, y, result = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    result = difference(x, y);
    printf("The difference between two numbers is: %d\n", result);
    return 0;
}