#include <stdio.h>

#define MAX_PLAYERS 11

/// Structure for informations about players
struct Player
{
    char name[50];
    int runsScored;
};

/// Structure for teams results
struct TeamResult
{
    struct Player players[MAX_PLAYERS];
    int totalRuns;
    int totalWickets;
};

/// Structure for the informations about the match
struct CricketMatch
{
    char location[50];
    char referees[50];
    struct TeamResult team1;
    struct TeamResult team2;
    char result[100];
};

int calculateTotalRuns(struct Player players[], int numPlayers)
{
    int totalRuns = 0;
    for (int i = 0; i < numPlayers; ++i)
    {
        totalRuns += players[i].runsScored;
    }
    return totalRuns;
}

int main()
{

    /// Initialization of the structure for the cricket match with many players
    struct CricketMatch match =
    {
        .location = "Sydney Cricket Ground",
        .referees = "John Smith and Emily Johnson",
        .team1 = {
            .players = {{"Rohit Sharma", 78}, {"Virat Kohli", 92}, {"KL Rahul", 45}, {"Rishabh Pant", 30}, {"Hardik Pandya", 12}, {"Shikhar Dhawan", 55}, {"Ajinkya Rahane", 28}, {"Shreyas Iyer", 40}, {"Ravindra Jadeja", 25}, {"Yuzvendra Chahal", 10}, {"Jasprit Bumrah", 5}},
            .totalWickets = 6
        },
        .team2 = {
            .players = {{"David Warner", 105}, {"Steve Smith", 68}, {"Marnus Labuschagne", 42}, {"Glenn Maxwell", 20}, {"Marcus Stoinis", 15}, {"Aaron Finch", 50}, {"Travis Head", 35}, {"Alex Carey", 22}, {"Pat Cummins", 18}, {"Adam Zampa", 12}, {"Mitchell Starc", 8}},
            .totalWickets = 8
        },

        .result = ""
    };

    /// Calculating total runs for each team
    match.team1.totalRuns = calculateTotalRuns(match.team1.players, MAX_PLAYERS);
    match.team2.totalRuns = calculateTotalRuns(match.team2.players, MAX_PLAYERS);

    /// Calculating the winning team
    if (match.team1.totalRuns > match.team2.totalRuns)
    {
        sprintf(match.result, "India won the match by %d runs", match.team1.totalRuns - match.team2.totalRuns);
    }
    else if (match.team1.totalRuns < match.team2.totalRuns)
    {
        sprintf(match.result, "Australia won the match by %d runs", match.team2.totalRuns - match.team1.totalRuns);
    }
    else
    {
        sprintf(match.result, "The match ended in a tie");
    }

    /// Displaying information about the match
    printf("Cricket match: India vs. Australia\n");
    printf("Location: %s\n", match.location);
    printf("Referees: %s\n\n", match.referees);

    printf("India:\n");
    for (int i = 0; i < MAX_PLAYERS; ++i)
    {
        printf("- %s: %d runs\n", match.team1.players[i].name, match.team1.players[i].runsScored);
    }
    printf("\nWickets taken by India bowlers: %d\n\n", match.team1.totalWickets);

    printf("Australia:\n");
    for (int i = 0; i < MAX_PLAYERS; ++i)
    {
        printf("- %s: %d runs\n", match.team2.players[i].name, match.team2.players[i].runsScored);
    }
    printf("\nWickets taken by Australia bowlers: %d\n\n", match.team2.totalWickets);

    printf("Final result: %s\n", match.result);

    return 0;
}
