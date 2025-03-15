#include <stdio.h>

// Functie pentru a calcula maximul a doua numere
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Functie pentru a calcula valoarea maxima a capturii
int knapsack(int capacity, int sizes[], int values[], int n) {
    // Declaram o matrice pentru a stoca valorile intermediare
    int dp[n + 1][capacity + 1];

    // Initializam matricea cu 0
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= capacity; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (sizes[i - 1] <= w)
                dp[i][w] = max(values[i - 1] + dp[i - 1][w - sizes[i - 1]], dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }

    return dp[n][capacity];
}

int main() {
    int sizes[] = {4, 3, 2, 5};
    int values[] = {20, 15, 10, 25};
    int capacity = 10;
    int n = sizeof(values) / sizeof(values[0]);

    printf("Valoarea maxima a capturii este: %d\n", knapsack(capacity, sizes, values, n));

    return 0;
}
