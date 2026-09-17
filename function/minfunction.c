#include <stdio.h>
int min(int a, int b)
{
    if (a > b)
        return b;
    else
        return a;
}
int main()
{
    int num1, num2, minnum;
    printf("Enter the first number:");
    scanf("%d", &num1);
    printf("Enter the second number:");
    scanf("%d", &num2);

    minnum = min(num1, num2);

    printf("The minimun number is %d", minnum);
    return 0;
}
