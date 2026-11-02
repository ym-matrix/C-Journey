#include <stdio.h>

struct bank
{
    char name[20];
    int account_number;
    float balance;
};

int main()
{
    struct bank customer[10];
    int i, n;
    printf("Enter the number of customers:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the name of customer:");
        scanf("19%s", customer[i].name);
        printf("Enter the account numbr:");
        scanf("%d", &customer[i].account_number);
        printf("Enter balance:");
        scanf("%f", &customer[i].balance);
    }

    for (i = 0; i < n; i++)
    {
        if (customer[i].balance < 5000)
        {
            printf("Name:%s\n", customer[i].name);
            printf("Account_number %d\n", customer[i].account_number);
            printf("Balance %.2f\n:", customer[i].balance);
        }
    }
    return 0;
}