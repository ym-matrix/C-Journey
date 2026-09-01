#include <stdio.h>
#include <string.h>

int main()
{
    const char username[] = "admin";
    int password = 1234;

    int input_pass;
    char input_user[20];

    printf("Enter your username and password: ");
    scanf("%19s %d", input_user, &input_pass);

    if (strcmp(input_user, username) == 0 && input_pass == password)
    {
        printf("Access granted");
    }
    else if (strcmp(input_user, username) != 0 || input_pass != password)
    {
        printf("Access denied, Username or password incorrect");
    }

    return 0;
}