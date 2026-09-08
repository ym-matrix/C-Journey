#include <stdio.h>
int main()
{
    int i, pos = 0, neg = 0, zero = 0, n;
    char choice;
    do
    {
        printf("\nEnter a number");
        scanf("%d", &n);

        if (n > 0)
        {
            pos++;
        }
        else if (n < 0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
        printf("\nDo you want to enter another number? (y:n)");
        scanf(" %c", &choice);

        if (choice == 'n' || choice == 'N')
        {
            break;
        }
    } while (1);
    printf("\nNumber of positive numbers=%d", pos);
    printf("\nNumber of negative numbers=%d", neg);
    printf("\nNumber of zeroes=%d", zero);
    return 0;
}