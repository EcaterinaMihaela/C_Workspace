#include <stdio.h>
#include <stdlib.h>

//FUNCTIE PENTRU CITIREA UNUI VECTOR
void readingArray(int *array, int SIZE) {
    for(int i = 0; i < SIZE; i++) {
        scanf("%d", array + i);
    }
}

//Functie pentru afisarea unui vector
void writingArray(int *array, int SIZE) {
    for(int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

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

    return dp[n][capacity];  ///returneaza valoarea maxima
}

int main() {
    int numOfFishes;
    printf("Enter the number of fishes: \n");
    scanf("%d", &numOfFishes);

    //Declaram un vector de dimensiunea nr de pesti pentru a retine dimensiunea(in cm) fiecarui peste
    int *sizes = (int*)malloc(numOfFishes * sizeof(int));
    if(sizes == NULL) {
        printf("Memory allocation failed!\n");
        return -1;
    }

    printf("Enter the sizes of each fish: (number of sizes should match number of fishes)\n");
    readingArray(sizes, numOfFishes);
    writingArray(sizes, numOfFishes);

    //Declaram un vector de dimensiunea nr de homari pentru a retine valoarea fiecarui peste
    int *values = (int*)malloc(numOfFishes * sizeof(int));
    if(values == NULL) {
        printf("Memory allocation failed!\n");
        return -1;
    }

    printf("Enter the values of each fish: (number of values should match number of fishes)\n");
    readingArray(values, numOfFishes);
    writingArray(values, numOfFishes);

    int capacity;
    printf("Enter the capacity of the bag: ");
    scanf("%d", &capacity);

    int n = numOfFishes;

    printf("The max value is: %d\n", knapsack(capacity, sizes, values, n));

    // Eliberarea memoriei alocate
    free(sizes);
    free(values);

    return 0;
}
