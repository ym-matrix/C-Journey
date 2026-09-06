#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, temp, lastdigit, sum = 0, digits;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("Enter number of digits:");
    scanf("%d", &digits);
    temp = n; // storing value of n in temp variable

    for (i = 0; i <= digits; i++)
    {
        lastdigit = temp % 10;                   // finding last digit of the number
        temp = temp / 10;                        // updating the number
        sum = sum + (int)pow(lastdigit, digits); // using math function to exponent
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