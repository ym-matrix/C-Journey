#include <stdio.h>
int main()
{
    int year;
    printf("Please enter a year:");
    scanf("%d", &year);

    if (year % 4 == 0) // Condition to check if the year is divisible by 4
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }
    return 0;
}