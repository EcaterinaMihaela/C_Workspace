#include <stdio.h>
#include <stdlib.h>

/// function for displaying the matrix
void afisareMatrice(char matrice[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", matrice[i][j]);
        }
        printf("\n");
    }
}

/// function for replacing a character
void replacing(char matrice[3][3], char newMatrix[3][3]) {
    char inlocuit;
    printf("Care caracter sa fie inlocuit? ");
    scanf(" %c", &inlocuit);

    char inlocuitor;
    printf("Cu cine sa fie inlocuit? ");
    scanf(" %c", &inlocuitor);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrice[i][j] == inlocuit) {
                newMatrix[i][j] = inlocuitor;
            } else {
                newMatrix[i][j] = matrice[i][j];
            }
        }
    }
}

/// function for eliminating a character
void eliminare(char matrice[3][3], char newMatrix[3][3]) {
    char elimin;
    printf("Care caracter sa fie eliminat din matrice? ");
    scanf(" %c", &elimin);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrice[i][j] != elimin) {
                newMatrix[i][j] = matrice[i][j];
            }
        }
    }
}

int main() {
    char matrice[3][3] = {{'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'}};
    printf("Matricea initiala este: \n");
    afisareMatrice(matrice);

    char newMatrix[3][3] = {{'\0'}};
    replacing(matrice, newMatrix);
    printf("\nMatricea dupa inlocuire: \n");
    afisareMatrice(newMatrix);

    char finalMatrix[3][3] = {{'\0'}};
    eliminare(newMatrix, finalMatrix);
    printf("\nMatricea finala dupa eliminare: \n");
    afisareMatrice(finalMatrix);

    return 0;
}
