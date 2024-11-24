#include <stdio.h>
#include <string.h>

struct Player {
    char name[50];
    int age;
    char position[50];
};

struct Team {
    char name[50];
    char sport[50];
    struct Player players[5];
    int playerCount;
};

int main() {
    struct Team team;
    printf("Enter Team Name: ");
    scanf(" %[^\n]", team.name);
    printf("Enter Sport: ");
    scanf(" %[^\n]", team.sport);

    printf("Enter Number of Players: ");
    scanf("%d", &team.playerCount);

    for (int i = 0; i < team.playerCount; i++) {
        printf("Enter Details for Player %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", team.players[i].name);
        printf("Age: ");
        scanf("%d", &team.players[i].age);
        printf("Position: ");
        scanf(" %[^\n]", team.players[i].position);
    }

    printf("\nTeam Details:\nName: %s\nSport: %s\n", team.name, team.sport);
    for (int i = 0; i < team.playerCount; i++) {
        printf("Player %d - Name: %s, Age: %d, Position: %s\n", i + 1, team.players[i].name, team.players[i].age, team.players[i].position);
    }

    return 0;
}
