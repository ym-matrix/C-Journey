#include <stdio.h>
int main()
{
    float principal, rate, time, simple_interest, amount;
    printf("Please enter principal amount:");
    scanf("%f", &principal);
    printf("Please enter rate of interest:");
    scanf("%f", &rate);
    printf("Please enter time (in years):");
    scanf("%f", &time);
    simple_interest = (principal * rate * time) / 100; // Calculating simple interest
    amount = principal + simple_interest;              // calculates total amount on adding simple interest
    printf("Simple Interest = %.2f", simple_interest);
    printf("Total Amount = %.2f", amount);
    return 0;
}
