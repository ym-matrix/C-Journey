#include <stdio.h>
int main()
{
    int num, max, min, count = 0, sum = 0;
    float avg = 0;
    do
    {
        printf("Enter a number: ");
        scanf(" %d", &num);

        if (num == -1)
        {
            break;
        }
        if (count == 0)
        {
            max = num;
            min = num;
        }
        if (num > max)
        {
            max = num;
        }
        if (num < min)
        {
            min = num;
        }
        sum = sum + num;
        count++;

    } while (1);
    float avg = sum / count;
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
