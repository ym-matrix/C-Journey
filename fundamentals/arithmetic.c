#include <stdio.h>
int main()
{
    int a, b, sum = 0, sub, mul;
    float div;
    printf("Please enter two numbers:"); // Asks user to input two numbers
    scanf("%d %d", &a, &b);

    sum = a + b; // stores the value of sum of a and b in sum variable
    sub = a - b; // stores the value of difference of a and b in sub variable
    mul = a * b; // stores the value of product of a and b in mul variable
    div = a / b; // stores the value of quotient of a and b in div variable

    printf("Sum of numbers= %d\n", sum);
    printf("Difference of numbers= %d\n", sub);
    printf("Product of numbers= %d\n", mul);
    printf("Quotient of numbers= %.2f\n", div);
    return 0;
}