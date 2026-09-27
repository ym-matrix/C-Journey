#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    int i, j, isequal = 1;
    char a[100], b[100];
    printf("Enter a string:");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';
    printf("Enter another string:");
    fgets(b, sizeof(b), stdin);
    b[strcspn(b, "\n")] = '\0';

    for (i = 0; a[i] != '\0' && b[i] != '\0'; i++)
    {
        if (tolower(a[i]) != tolower(b[i]))
        {
            isequal = 0;
            break;
        }
    }
    if (tolower(a[i]) != tolower(b[i])) // one is '\0' but the other isn't -> different lengths
    {
        isequal = 0;
    }

    if (isequal)
    {
        printf("The strings are same: ");
    }
    else
    {
        printf("The strings are not same:");
    }
}
