#include <stdio.h>
#include <math.h>

int main()
{
    int num, firstDigit, lastDigit, digitsCount, middlePart, newNum;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    // Handle single-digit numbers and negative signs
    int temp = (num < 0) ? -num : num;

    if (temp < 10)
    {
        printf("Modified number: %d\n", num);
        return 0;
    }

    // Find the last digit
    lastDigit = temp % 10;

    // Find the first digit and total digits count
    digitsCount = (int)log10(temp); // e.g., log10(1234) = 3
    firstDigit = temp / (int)pow(10, digitsCount);

    // Extracting the middle part
    int powerOfTen = (int)pow(10, digitsCount);
    middlePart = (temp % powerOfTen) / 10;

    // Reconstruct the modified number
    newNum = lastDigit * powerOfTen + middlePart * 10 + firstDigit;

    // Restore negative sign if original number was negative
    if (num < 0)
    {
        newNum = -newNum;
    }

    printf("Original number: %d\n", num);
    printf("Modified number: %d\n", newNum);

    return 0;
}