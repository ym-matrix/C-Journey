#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char s[100], dest[100];
    printf("Enter a string: ");

    fgets(s, sizeof(s), stdin); // reads the full line, including spaces
    s[strcspn(s, "\n")] = '\0';

    for (i = 0; s[i] != '\0'; i++)
    {
        dest[i] = s[i];
    }
    dest[i] = '\0';
    printf("Source string:%s\n", s);
    printf("Copied string:%s\n", dest);
    return 0;
}