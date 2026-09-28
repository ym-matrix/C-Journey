#include <stdio.h>

// Function to increase the value of a variable by 1
// Note: this changes only the local copy of the variable
void increment(int n)
{
    n = n + 1;
    printf("Inside increment(): n = %d\n", n);
}

int main()
{
    int num; // variable to store user input

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Before function call: num = %d\n", num);
    increment(num); // call the function with num as an argument
    printf("After function call: num = %d\n", num);

    return 0; // end of program
}