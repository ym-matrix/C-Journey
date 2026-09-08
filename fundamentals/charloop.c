#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    char choice, lower_ch;
    int vowels = 0, consonants = 0, invalid = 0;

    do
    {
        printf("Enter a character: ");
        scanf(" %c", &ch);

        if (isalpha(ch))
        {
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
            invalid++;
        }

        printf("Do you want to enter another character? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Vowels:%d\n", vowels);
    printf("Consonants:%d\n", consonants);
    printf("Invalid:%d\n", invalid);
    return 0;
}