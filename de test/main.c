#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_PLAYERS 11
#define MAX_NAME_LENGTH 50

struct Player {
    char fullName[MAX_NAME_LENGTH];
    int runsScored;
};

struct TeamResult {
    struct Player players[MAX_PLAYERS];
    int totalRuns;
    int totalWickets;
};

struct CricketMatch {
    char location[MAX_NAME_LENGTH];
    char team1Name[MAX_NAME_LENGTH];
    char team2Name[MAX_NAME_LENGTH];
    char refereeTeam1[MAX_NAME_LENGTH]; // Referee for team 1
    char refereeTeam2[MAX_NAME_LENGTH]; // Referee for team 2
    struct TeamResult team1;
    struct TeamResult team2;
    char result[100];
};

int calculateTotalRuns(struct Player players[], int numPlayers) {
    int totalRuns = 0;
    for (int i = 0; i < numPlayers; ++i) {
        totalRuns += players[i].runsScored;
    }
    return totalRuns;
}

int isValidName(const char *name) {
    for (int i = 0; name[i] != '\0'; ++i) {
        if (!isalpha(name[i]) && name[i] != ' ') {
            return 0;
        }
    }
    return 1;
}

void inputPlayers(struct Player players[], int numPlayers) {
    char buffer[100];
    for (int i = 0; i < numPlayers;) {
        printf("Enter player %d full name: ", i + 1);
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = '\0'; // Removing newline from fgets input

        if (isValidName(buffer)) {
            strcpy(players[i].fullName, buffer);
            printf("Enter runs scored by %s: ", players[i].fullName);
            if (scanf("%d", &players[i].runsScored) == 1) {
                getchar(); // Consume newline left in the buffer
                ++i;
            } else {
                printf("Invalid input! Please enter a number.\n");
                getchar(); // Consume the newline
            }
        } else {
            printf("Invalid input! Please enter a valid name.\n");
        }
    }
}

int main() {
    struct CricketMatch match;

    printf("Enter location of the match: ");
    fgets(match.location, MAX_NAME_LENGTH, stdin);
    match.location[strcspn(match.location, "\n")] = '\0';

    printf("Enter name of Team 1: ");
    fgets(match.team1Name, MAX_NAME_LENGTH, stdin);
    match.team1Name[strcspn(match.team1Name, "\n")] = '\0';

    printf("Enter name of Team 2: ");
    fgets(match.team2Name, MAX_NAME_LENGTH, stdin);
    match.team2Name[strcspn(match.team2Name, "\n")] = '\0';

    printf("Enter referee for %s: ", match.team1Name);
    fgets(match.refereeTeam1, MAX_NAME_LENGTH, stdin);
    match.refereeTeam1[strcspn(match.refereeTeam1, "\n")] = '\0';

    printf("Enter referee for %s: ", match.team2Name);
    fgets(match.refereeTeam2, MAX_NAME_LENGTH, stdin);
    match.refereeTeam2[strcspn(match.refereeTeam2, "\n")] = '\0';

    printf("Enter number of wickets taken by %s: ", match.team1Name);
    scanf("%d", &match.team1.totalWickets);

    printf("Enter number of wickets taken by %s: ", match.team2Name);
    scanf("%d", &match.team2.totalWickets);

    printf("Enter players for %s:\n", match.team1Name);
    inputPlayers(match.team1.players, MAX_PLAYERS);

    printf("Enter players for %s:\n", match.team2Name);
    inputPlayers(match.team2.players, MAX_PLAYERS);

    match.team1.totalRuns = calculateTotalRuns(match.team1.players, MAX_PLAYERS);
    match.team2.totalRuns = calculateTotalRuns(match.team2.players, MAX_PLAYERS);

    if (match.team1.totalRuns > match.team2.totalRuns) {
        sprintf(match.result, "%s won the match by %d runs", match.team1Name, match.team1.totalRuns - match.team2.totalRuns);
    } else if (match.team1.totalRuns < match.team2.totalRuns) {
        sprintf(match.result, "%s won the match by %d runs", match.team2Name, match.team2.totalRuns - match.team1.totalRuns);
    } else {
        sprintf(match.result, "The match ended in a tie");
    }

    printf("\nMatch Details:\n");
    printf("Location: %s\n", match.location);
    printf("Referee for %s: %s\n", match.team1Name, match.refereeTeam1);
    printf("Referee for %s: %s\n", match.team2Name, match.refereeTeam2);
    printf("%s total runs: %d\n", match.team1Name, match.team1.totalRuns);
    printf("%s total runs: %d\n", match.team2Name, match.team2.totalRuns);
    printf("%s total wickets: %d\n", match.team1Name, match.team1.totalWickets);
    printf("%s total wickets: %d\n", match.team2Name, match.team2.totalWickets);
    printf("Result: %s\n", match.result);

    return 0;
}
