#include <stdio.h>

int main()
{
    // Variables for iteration and storing the string length.
    int i, count = 0;
    char s[20];
    char *s1;

    // Read a string with a maximum of 19 characters.
    printf("Enter a string: ");
    fgets(s, 20, stdin);

    // Point s1 to the start of the input string.
    s1 = s;

    // Traverse the string until the null character is reached.
    for (i = 0; s1[i] != '\0'; i++)
    {
        // fgets includes a newline when Enter is pressed, so stop at it.
        if (s1[i] == '\n')
            break;
        count++;
    }

    // Display the number of characters in the string.
    printf("Length of string is %d", count);

    return 0;
}