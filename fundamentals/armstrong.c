#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, temp, lastdigit, sum = 0, digits;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("Enter number of digits:");
    scanf("%d", &digits);
    temp = n;

    for (i = 0; i <= digits; i++)
    {
        lastdigit = temp % 10;
        temp = temp / 10;
        sum = sum + (int)pow(lastdigit, digits);
    }

    if (sum == n)
    {
        printf("The given number is an armstrong number: ");
    }
    else
    {
        printf("The given numer is not an armstrong number:");
    }
    return 0;
}