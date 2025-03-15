/*
Author:Căpățînă Ecaterina-Mihaela
Date:21.11.2023
Description:Se citeste o matrice cu n linii si m coloane cu elemente numere intregi. Sa
se stearga din matrice toate coloanele care au primul element egal cu 1 si
sa se afiseze matricea rezultata.

Constraints: Eroare la realocarea memoriei
*/

#include <stdio.h>
#include <stdlib.h>

// Funcție pentru afișarea matricei
void afisare_matrice(int **matrice, int linii, int coloane) {
    for (int i = 0; i < linii; i++) {
        for (int j = 0; j < coloane; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n, m;
    printf("Introdu numarul de linii: ");
    scanf("%d", &n);
    printf("Introdu numarul de coloane: ");
    scanf("%d", &m);

    int **matrice = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        matrice[i] = (int *)malloc(m * sizeof(int));
    }

    printf("Introduceti elementele matricei:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("matrice[%d][%d] = ", i, j);
            scanf("%d", &matrice[i][j]);
        }
    }

    printf("Matricea initiala este:\n");
    afisare_matrice(matrice, n, m);

    // Eliminarea coloanelor cu primul element egal cu 1
    int coloane_eliminate = 0;
    for (int j = 0; j < m; j++) {
        if (matrice[0][j - coloane_eliminate] == 1) {
            for (int i = 0; i < n; i++) {
                for (int k = j - coloane_eliminate; k < m - 1; k++) {
                    matrice[i][k] = matrice[i][k + 1];
                }
            }
            coloane_eliminate++;
        }
    }

    // Realocarea matricei pentru a ține cont de coloanele eliminate
    int **matrice_rezultata = (int **)realloc(matrice, n * sizeof(int *));
    if (matrice_rezultata == NULL) {
        // Eșuare la realocare, eliberăm matricea inițială și ieșim cu eroare
        for (int i = 0; i < n; i++) {
            free(matrice[i]);
        }
        free(matrice);
        printf("Eroare la realocare! Memorie insuficienta.\n");
        return -1;
    }

    for (int i = 0; i < n; i++) {
        matrice_rezultata[i] = (int *)realloc(matrice_rezultata[i], (m - coloane_eliminate) * sizeof(int));
        if (matrice_rezultata[i] == NULL) {
            // Eșuare la realocare, eliberăm memoria alocată și ieșim cu eroare
            for (int j = 0; j < i; j++) {
                free(matrice_rezultata[j]);
            }
            free(matrice_rezultata);
            printf("Eroare la realocare! Memorie insuficienta.\n");
            return -1;
        }
    }

    printf("Matricea rezultata este:\n");
    afisare_matrice(matrice_rezultata, n, m - coloane_eliminate);

    // Eliberarea memoriei
    for (int i = 0; i < n; i++) {
        free(matrice_rezultata[i]);
    }
    free(matrice_rezultata);

    return 0;
}
