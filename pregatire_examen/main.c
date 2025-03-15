#include <stdio.h>
#include <stdlib.h>
#define MAX_NAMES 5
#define MAX_LENGTH 50

// function for displaying the integer array
void displayArray(int array[], int SIZE) {
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// function for displaying the character array
void displayArrayChar(char vector[], int SIZE) {
    for (int i = 0; i < SIZE; i++) {
        printf("%c ", vector[i]);
    }
    printf("\n");
}

int main() {
    int SIZE;
    printf("SIZE = ");
    scanf("%d", &SIZE);

    int array[SIZE];

    for (int i = 0; i < SIZE; i++) {
        printf("array[%d] = ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Vectorul este: ");
    displayArray(array, SIZE);

    // character array input
    char vector[SIZE];

    // Clearing the input buffer
    while (getchar() != '\n');

    for (int i = 0; i < SIZE; i++) {
        printf("vector[%d] = ", i + 1);
        scanf(" %c", &vector[i]); // notice the space before %c to consume any leading whitespace
    }
    printf("Vectorul de caractere este: ");
    displayArrayChar(vector, SIZE);

    ///afisarea unor nume
    char names[MAX_NAMES][MAX_LENGTH];

    printf("Introduceti %d nume:\n", MAX_NAMES);

    // Citirea numelor
    for (int i = 0; i < MAX_NAMES; i++) {
        printf("Nume %d: ", i + 1);
        scanf("%s", names[i]);
    }

    // Afișarea numelor
    printf("\nNumele introduse sunt:\n");
    for (int i = 0; i < MAX_NAMES; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}
