#include <stdio.h>
int main()
{
    int i, count = 0;
    char s[20];
    char *s1;
    printf("Enter a string: ");
    fgets(s, 20, stdin);

    s1 = s;
    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] == '\n')
            break;
        count++;
    }

    printf("Length of string is %d", count);

    return 0;
}