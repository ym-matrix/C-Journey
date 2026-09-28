#include <stdio.h>

void increment(int n)
{
    n = n + 1;
    printf("Inside increment(): n = %d\n", n);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Before function call: num = %d\n", num);
    increment(num); // call statement goes here, in main
    printf("After function call: num = %d\n", num);

    return 0;
}