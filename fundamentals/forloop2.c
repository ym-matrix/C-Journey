#include <stdio.h>
int main()
{
    int i, n, f = 1;
    printf("Enter a non negative number:");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) // loop iterates for each number from n down to 1
    {
        f = f * i; // multiplying f by i in each iteration
    }
    printf("The factorial of %d is %d", n, f);
    return 0;
}