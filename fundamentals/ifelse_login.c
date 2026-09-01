#include <stdio.h>
#include <string.h>

int main()
{
    const char username[] = "admin"; // Hardocing the username and password for reference
    int password = 1234;

    int input_pass;
    char input_user[20]; // assigning the size of the array to 20

    printf("Enter your username and password: ");
    scanf("%19s %d", input_user, &input_pass);

    if (strcmp(input_user, username) == 0 && input_pass == password) // Checking if the input username and password matches the hardcoded values
    {
        printf("Access granted");
    }
    else if (strcmp(input_user, username) != 0 || input_pass != password)
    {
        printf("Access denied, Username or password incorrect");
    }

    return 0;
}