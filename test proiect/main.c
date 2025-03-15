#include <stdio.h>

#define MAX_PLAYERS 11
#define MAX_NAME_LENGTH 50

struct Player {
    char name[MAX_NAME_LENGTH];
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
    char refereeTeam1[MAX_NAME_LENGTH];
    char refereeTeam2[MAX_NAME_LENGTH];
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

void inputPlayers(struct Player players[], int numPlayers) {
    for (int i = 0; i < numPlayers; ++i) {
        printf("Enter player %d name: ", i + 1);
        scanf("%s", players[i].name);
        printf("Enter runs scored by %s: ", players[i].name);
        scanf("%d", &players[i].runsScored);
    }
}

void writeMatchDetailsToFile(struct CricketMatch match) {
    FILE *filePtr;

    filePtr = fopen("match_details.txt", "w");

    if (filePtr == NULL) {
        printf("Nu s-a putut deschide fișierul.");
        return;
    }

    fprintf(filePtr, "Location: %s\n", match.location);
    fprintf(filePtr, "Referee for %s: %s\n", match.team1Name, match.refereeTeam1);
    fprintf(filePtr, "Referee for %s: %s\n", match.team2Name, match.refereeTeam2);
    fprintf(filePtr, "%s total runs: %d\n", match.team1Name, match.team1.totalRuns);
    fprintf(filePtr, "%s total runs: %d\n", match.team2Name, match.team2.totalRuns);
    fprintf(filePtr, "%s total wickets: %d\n", match.team1Name, match.team1.totalWickets);
    fprintf(filePtr, "%s total wickets: %d\n", match.team2Name, match.team2.totalWickets);
    fprintf(filePtr, "Result: %s\n", match.result);

    fclose(filePtr);
}

void readMatchDetailsFromFile() {
    FILE *filePtr;
    char buffer[1000];

    filePtr = fopen("match_details.txt", "r");

    if (filePtr == NULL) {
        printf("Nu s-a putut deschide fișierul.");
        return;
    }

    while (fgets(buffer, 1000, filePtr) != NULL) {
        printf("%s", buffer);
    }

    fclose(filePtr);
}

int main() {
    struct CricketMatch match;

    printf("Enter location of the match: ");
    scanf("%s", match.location);

    printf("Enter name of Team 1: ");
    scanf("%s", match.team1Name);

    printf("Enter name of Team 2: ");
    scanf("%s", match.team2Name);

    printf("Enter referee for %s: ", match.team1Name);
    scanf("%s", match.refereeTeam1);

    printf("Enter referee for %s: ", match.team2Name);
    scanf("%s", match.refereeTeam2);

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

    writeMatchDetailsToFile(match);
    readMatchDetailsFromFile();

    return 0;
}
