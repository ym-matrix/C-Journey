#include <stdio.h>

int main()
{
    // Hardcoded account data for simulation
    int accountActive = 1; // 1 = Active, 0 = Blocked/Frozen
    double accountBalance = 5500.50, dailyLimitRemaining = 2000.00;
    double withdrawalAmount;

    printf("Welcome to the ATM\n");
    printf("Enter amount to withdraw: ");
    scanf("%lf", &withdrawalAmount);

    if (accountActive != 1)
    {
        printf("Transaction Denied: Your account is frozen. Please contact customer support.\n"); // Is the account active?
    }
    else if (withdrawalAmount <= 0)
    {
        printf("Transaction Denied: Invalid amount entered.\n"); // Did they enter a valid positive number?
    }
    else if ((int)withdrawalAmount % 10 != 0)
    {
        printf("Transaction Denied: This ATM can only dispense $10, $20, $50, or $100 bills.\n"); // ATM machines only hold $10, $20, $50, or $100 bills
    }
    else if (withdrawalAmount > dailyLimitRemaining)
    {
        printf("Transaction Denied: This exceeds your remaining daily limit of $%.2f.\n", dailyLimitRemaining); // Are they trying to withdraw more than their daily limit?
    }
    else if (withdrawalAmount > accountBalance)
    {
        printf("Transaction Denied: Insufficient funds. Your balance is $%.2f.\n", accountBalance); // Are they trying to withdraw more than their account balance?
    }
    else
    {
        accountBalance = accountBalance - withdrawalAmount;
        printf("Transaction Successful! Please collect your cash.\n");
        printf("Remaining Balance: $%.2f\n", accountBalance);
    }

    return 0;
}
