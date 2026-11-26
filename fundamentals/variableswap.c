#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two number a and b:");
    scanf("%d %d", &a, &b);

    a = a * b;
    b = a / b; // Swapping the value of a and b
    a = a / b;
    printf("After wapping %d and %d", a, b);
    return 0;
}