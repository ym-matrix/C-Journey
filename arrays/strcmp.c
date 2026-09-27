#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Compare two strings without using strcmp()
int main()
{
    int i, j, isequal = 1;
    char a[100], b[100];

    // Read both strings and remove their trailing newline characters
    printf("Enter a string:");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';
    printf("Enter another string:");
    fgets(b, sizeof(b), stdin);
    b[strcspn(b, "\n")] = '\0';

    // Compare matching characters after converting them to lowercase
    for (i = 0; a[i] != '\0' && b[i] != '\0'; i++)
    {
        if (tolower(a[i]) != tolower(b[i]))
        {
            isequal = 0;
            break;
        }
    }
    // Check whether one string ended before the other
    if (tolower(a[i]) != tolower(b[i]))
    {
        isequal = 0;
    }

    // Display whether the strings match
    if (isequal)
    {
        printf("The strings are same: ");
    }
    else
    {
        printf("The strings are not same:");
    }
}
