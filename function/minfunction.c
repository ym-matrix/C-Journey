#include <stdio.h>

// Return the smaller of two integers
int min(int a, int b) // function definition
{
    if (a > b)
        return b;
    else
        return a;
}

// Read two numbers and display their minimum
int main()
{
    int num1, num2, minnum;

    // Get two numbers from the user
    printf("Enter the first number:");
    scanf("%d", &num1);
    printf("Enter the second number:");
    scanf("%d", &num2);

    minnum = min(num1, num2); // function call statement

    // Display the smaller number
    printf("The minimun number is %d", minnum);
    return 0;
}
