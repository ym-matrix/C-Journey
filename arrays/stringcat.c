#include <stdio.h>
#include <string.h>
int main()
{
    int i, j;
    char a[100], b[100];
    printf("Enter a string:");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';

    printf("Enter another string:");
    fgets(b, sizeof(b), stdin);
    b[strcspn(b, "\n")] = '\0';

    for (i = 0; a[i] != '\0'; i++)
    {
    }
    for (j = 0; b[j] != '\0'; j++)
    {
        a[i] = b[j];
        i++;
    }
    a[i] = '\0';
    printf("Concatenated string:%s", a);
    return 0;
}