#include <stdio.h>
int main()
{
    int num, max, min, count = 0, sum = 0;
    float avg = 0;

    // Keep reading numbers until the user enters -1.
    do
    {
        printf("Enter a number: ");
        scanf(" %d", &num);

        // -1 is the sentinel value and is not included in the results.
        if (num == -1)
        {
            break;
        }

        // Use the first number to initialize both range boundaries.
        if (count == 0)
        {
            max = num;
            min = num;
        }

        // Update the maximum and minimum values when needed.
        if (num > max)
        {
            max = num;
        }
        if (num < min)
        {
            min = num;
        }

        // Add the number to the total and count it for the average.
        sum = sum + num;
        count++;

    } while (1);

    // Calculate the average after input is complete.
    float avg = sum / count;

    // Avoid displaying statistics when no numbers were entered.
    if (count == 0)
    {
        printf("\nNo positive integers were entered");
    }
    else if (count > 0)
    {
        printf("\nMaximum value: %d\n", max);
        printf("\nMinimum value: %d\n", min);
        printf("\nAverage value: %.2f\n", avg);
        return 0;
    }
}
