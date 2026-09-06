#include <stdio.h>
int main()
{
    int i, n, sum = 0, temp, digits, lastdigit;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("Enter the number of digits:");
    scanf("%d", &digits);
    temp = n; // storing value of n in temp varaiable

    for (i = 0; i <= digits; i++)
    {
        lastdigit = temp % 10; // to find out the last digit of the number
        temp = temp / 10;      // updating the new remaining digits number
        sum = sum + lastdigit;
    }
    printf("the sum of digits of %d is %d", n, sum);
    return 0;
}
