#include <stdio.h>
int main()
{
    int n, revnum, temp, lastdigit;
    printf("Enter a number:");
    scanf("%d", &n);
    temp = n;
    revnum = 0;
    while (temp != 0)
    {
        lastdigit = temp % 10;
        revnum = revnum * 10 + lastdigit;
        temp = temp / 10;
    }
    if (revnum == n)
    {
        printf("The number %d is a palindrome %d,", n, revnum);
    }
    else
    {
        printf("The number %d is not a palindrome %d", n, revnum);
    }
    return 0;
}