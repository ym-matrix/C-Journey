#include <stdio.h>
int main()
{
    int i = 1, n, sum = 0, term = 0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    while (i <= n)
    {
        term = term * 10 + 1;
        sum = sum + term;
        if (i < n)
        {
            printf("%d + ", term); // Print '+' for all terms except the last
        }
        else
        {
            printf("%d \n", term); // Print just the number for the last term
        }
        i++;
    }
    printf("The sum of the given series is %d", sum);
    return 0;
}