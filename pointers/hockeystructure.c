#include <stdio.h>
struct hockey
{
    char name[20];
    int goals, matches;
};

int main()
{
    struct hockey player[100];
    int i, n, j;
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
    for (i = 0; i < n; i++)
    {
    }
}