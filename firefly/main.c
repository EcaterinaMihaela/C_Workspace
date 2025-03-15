#include <stdio.h>
#include <limits.h>

int main() {

    int N;  ///Length of the cave
    printf("Enter the length of the cave (even number): \n");
    scanf("%d", &N);

    int H;  ///height of the cave
    printf("Enter the height of the cave: \n");
    scanf("%d", &H);

    printf("We have %d obstacles \n", N);

    int stalagmite[H+1];  /// Array to track stalagmite counts (bottom obstacles)
    int stalactite[H+1];  /// Array to track stalactite counts (top obstacles)

    /// Initialize both arrays with 0
    for (int i = 0; i <= H; i++) {
        stalagmite[i] = 0;
        stalactite[i] = 0;
    }

    /// Read stalagmite heights and store them in the array
    printf("Enter the heights of the stalagmites (bottom obstacles):\n");
    for(int i = 0; i < N / 2; i++) {
        int height;
        scanf("%d", &height);
        stalagmite[height]++;
    }

    /// Read stalactite heights and store them in the array
    printf("Enter the heights of the stalactites (top obstacles):\n");
    for(int i = 0; i < N / 2; i++) {
        int height;
        scanf("%d", &height);
        stalactite[height]++;
    }

    /// Cumulative sums for stalagmites and stalactites
    for (int i = H - 1; i > 0; i--) {
        stalagmite[i] += stalagmite[i + 1];  /// Stalagmites affect lower heights
        stalactite[i] += stalactite[i + 1];  /// Stalactites affect higher heights
    }

    int min_obstacles = INT_MAX;
    int best_levels = 0;

    /// Calculate the number of obstacles the firefly hits at each level and find the minimum
    for (int i = 1; i <= H; i++) {
        int obstacles_destroyed = stalagmite[i] + stalactite[H - i + 1];

        if (obstacles_destroyed < min_obstacles) {
            min_obstacles = obstacles_destroyed;
            best_levels = 1;  /// Start counting levels that have this minimum
        } else if (obstacles_destroyed == min_obstacles) {
            best_levels++;  /// Another level with the same minimum
        }
    }

    ///Dysplaying the results
    printf("%d %d\n", min_obstacles, best_levels);

    return 0;
}
