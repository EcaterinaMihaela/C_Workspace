#include <stdio.h>

#define SIZE 3

// Funcție pentru afișarea cubului Rubik
void displayCube(int cube[SIZE][SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            for (int k = 0; k < SIZE; ++k) {
                printf("%d ", cube[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

// Funcție pentru a realiza o mișcare de rotație la stânga pentru o față specifică a cubului
void rotateLeft(int face[SIZE][SIZE]) {
    // Algoritmul de rotație la stânga
    // Acesta este doar un exemplu simplificat și nu rezolvă cubul, doar efectuează o mișcare de rotație la stânga pentru o față specifică
    // Puteți implementa algoritmii mai complexi pentru a rezolva un cub Rubik complet

    int temp[SIZE][SIZE];

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            temp[i][j] = face[j][SIZE - i - 1];
        }
    }

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            face[i][j] = temp[i][j];
        }
    }
}

int main() {
    // Inițializare unei matrice 3x3x3 pentru reprezentarea cubului Rubik
    int rubikCube[SIZE][SIZE][SIZE] = {
        {
            {1, 1, 1},
            {1, 1, 1},
            {1, 1, 1}
        },
        {
            {2, 2, 2},
            {2, 2, 2},
            {2, 2, 2}
        },
        // ... alte fețe ale cubului Rubik
    };

    printf("Cubul Rubik initial:\n");
    displayCube(rubikCube);

    // Exemplu de mișcare: Rotație la stânga pentru o față specifică
    rotateLeft(rubikCube[0]); // Se rotește fața de sus la stânga

    printf("\nCubul Rubik dupa rotatie la stanga:\n");
    displayCube(rubikCube);

    return 0;
}

