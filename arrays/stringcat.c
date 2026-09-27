#include <stdio.h>
#include <string.h>

// Join two strings without using strcat
int main()
{
    int i, j;
    char a[100], b[100];

    // Read both strings and remove their trailing newline characters
    printf("Enter a string:");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';

    printf("Enter another string:");
    fgets(b, sizeof(b), stdin);
    b[strcspn(b, "\n")] = '\0';

    // Find the position immediately after the first string
    for (i = 0; a[i] != '\0'; i++)
    {
    }
    // Copy the second string onto the end of the first
    for (j = 0; b[j] != '\0'; j++)
    {
        a[i] = b[j];
        i++;
    }
    a[i] = '\0'; // terminate the concatenated string
    printf("Concatenated string:%s", a);
    return 0;
}