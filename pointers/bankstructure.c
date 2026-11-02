#include <stdio.h>

// Structure to store the details of a bank customer.
struct bank
{
    char name[20];
    int account_number;
    float balance;
};

int main()
{
    // Array to store details of up to 10 customers.
    struct bank customer[10];
    int i, n;

    // Read the number of customers.
    printf("Enter the number of customers:");
    scanf("%d", &n);

    // Read each customer's name, account number, and balance.
    for (i = 0; i < n; i++)
    {
        printf("Enter the name of customer:");
        scanf("19%s", customer[i].name);
        printf("Enter the account numbr:");
        scanf("%d", &customer[i].account_number);
        printf("Enter balance:");
        scanf("%f", &customer[i].balance);
    }

    // Display customers whose balance is below 5000.
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