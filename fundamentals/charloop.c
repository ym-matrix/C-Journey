#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    char choice, lower_ch;
    int vowels = 0, consonants = 0, invalid = 0;

    // Process at least one character and repeat when the user chooses 'y'.
    do
    {
        printf("Enter a character: ");
        scanf(" %c", &ch);

        // Only alphabetic characters can be vowels or consonants.
        if (isalpha(ch))
        {
            // Convert the character so uppercase and lowercase letters match.
            lower_ch = tolower(ch);

            if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' ||
                lower_ch == 'o' || lower_ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        else
        {
            // Count digits, symbols, and other nonalphabetic input as invalid.
            invalid++;
        }

        // Ask whether another character should be processed.
        printf("Do you want to enter another character? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Vowels:%d\n", vowels);
    printf("Consonants:%d\n", consonants);
    printf("Invalid:%d\n", invalid);
    return 0;
}