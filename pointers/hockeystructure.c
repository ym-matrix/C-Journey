#include <stdio.h>

// Structure to store the name, goals, and matches of a hockey player.
struct hockey
{
    char name[20];
    int goals, matches;
};

int main()
{
    // Array for storing up to 100 players.
    struct hockey player[100];
    int i, n, j;

    // Read the number of players and their details.
    printf("Enter number of players: ");
    scanf("%d", &n);
    printf("Enter details of the players:\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter Name of player%c: ", i + 1);
        scanf("%s", player[i].name);
        printf("Enter Goals of player%c: ", i + 1);
        scanf("%d", &player[i].goals);
        printf("Enter Matches of player%c: ", i + 1);
        scanf("%d", &player[i].matches);
    }

    // Sort the players in descending order based on goals.
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (player[i].goals < player[j].goals)
            {
                // Swap the two player structures.
                struct hockey temp = player[i];
                player[i] = player[j];
                player[j] = temp;
            }
        }
    }

    // Display the sorted player details.
    printf("Player details are:\n");
    for (i = 0; i < n; i++)
    {
        printf("Player %d: %s, Goals: %d, Matches: %d\n", i + 1, player[i].name, player[i].goals, player[i].matches);
    }
}