#include <stdio.h>

int sumOfDigits(int n) // function definition
{
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10; // add the last digit
        n = n / 10;         // the remaining number
    }
    return sum;
}

int reverseNumber(int n) // function definition
{
    int rev = 0;
    while (n != 0)
    {
        rev = rev * 10 + n % 10; // append the last digit to rev
        n = n / 10;              // drop the last digit
    }
    return rev;
}

int main()
{
    int num, sum, rev;

    printf("Enter an integer: ");
    scanf("%d", &num);

    sum = sumOfDigits(num);   // call function 1: returned value stored in sum
    rev = reverseNumber(num); // call function 2: returned value stored in rev

    printf("Sum of digits = %d\n", sum);
    printf("Reverse = %d\n", rev);

    return 0;
}