#include <stdio.h>

int main()
{
    int choice;
    double balance = 10000.00;
    double withdrawal, deposit;
    printf("Welcome to ATM simulator\n");

    while (1)
    {
        printf("1.CHECK BALANCE\n");
        printf("2.DEPOSIT AMOUNT\n");
        printf("3.WITHRAW AMOUNT\n");
        printf("4.EXIT\n");
        printf("Enter your choice:");
        scanf("%d", &choice);

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input. Please enter a valid choice.\n");
            continue;
        }
        switch (choice)
        {
        case 1:
            printf("Your current balance is:%.2lf\n", balance);
            break;

        case 2:
            printf("Enter the deposit amount\n:");
            scanf("%lf", &deposit);
            if (deposit <= 0)
            {
                printf("Enter a valid amount to deposit.\n");
            }
            else
            {
                balance += deposit;
                printf("Amount deposited successfully.\n");
                printf("Your current balance is: %.2lf\n", balance);
            }
            break;

        case 3:
            printf("Enter the amount to withdraw\n: ");
            scanf("%lf", &withdrawal);
            if (withdrawal <= 0)
            {
                printf("Enter valid withdrawal amount.\n");
            }
            else if (withdrawal > balance)
            {
                printf("Insufficient balance.\n");
            }
            else
            {
                balance = balance - withdrawal;
                printf("Amount withdrawn successfully.\n");
                printf("Your current balance is: %.2lf\n", balance);
            }
            break;
        case 4:
            printf("Thank you for using the ATM simulator.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}