/*
Author:Căpățînă Ecaterina-Mihaela

Date:21.11.2023

*/
#include <stdio.h>
#include <stdlib.h>

// Functie pentru afisarea matricei
void afisare_matrice(int **matrice, int linii, int coloane) {
    for (int i = 0; i < linii; i++) {
        for (int j = 0; j < coloane; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }
}

// Functie pentru a inversa fata de linia mediana
void inversare_fata_de_linie_mediana(int **matrice, int linii, int coloane) {
    int linie_mediana = linii / 2;
    for (int i = 0; i < linie_mediana; i++) {
        for (int j = 0; j < coloane; j++) {
            int temp = matrice[i][j];
            matrice[i][j] = matrice[linii - 1 - i][j];
            matrice[linii - 1 - i][j] = temp;
        }
    }
}

// Functie pentru a inversa fata de coloana mediana
void inversare_fata_de_coloana_mediana(int **matrice, int linii, int coloane) {
    int coloana_mediana = coloane / 2;
    for (int i = 0; i < linii; i++) {
        for (int j = 0; j < coloana_mediana; j++) {
            int temp = matrice[i][j];
            matrice[i][j] = matrice[i][coloane - 1 - j];
            matrice[i][coloane - 1 - j] = temp;
        }
    }
}

// Functie pentru a inversa fata de centrul matricii
void inversare_fata_de_centrul_matricii(int **matrice, int linii, int coloane) {
    int mijloc_linii = linii / 2;
    int mijloc_coloane = coloane / 2;

    for (int i = 0; i < mijloc_linii; i++) {
        for (int j = 0; j < mijloc_coloane; j++) {
            int temp = matrice[i][j];
            matrice[i][j] = matrice[linii - 1 - i][coloane - 1 - j];
            matrice[linii - 1 - i][coloane - 1 - j] = temp;
        }
    }
}

// Functie pentru a calcula transpusa unei matrici
void transpusa_matricei(int **matrice, int linii, int coloane) {
    int **matrice_transpusa = (int **)malloc(coloane * sizeof(int *));
    for (int i = 0; i < coloane; i++) {
        matrice_transpusa[i] = (int *)malloc(linii * sizeof(int));
    }

    for (int i = 0; i < linii; i++) {
        for (int j = 0; j < coloane; j++) {
            matrice_transpusa[j][i] = matrice[i][j];
        }
    }

    printf("Transpusa matricii este:\n");
    afisare_matrice(matrice_transpusa, coloane, linii);

    // Eliberarea memoriei pentru matricea transpusa
    for (int i = 0; i < coloane; i++) {
        free(matrice_transpusa[i]);
    }
    free(matrice_transpusa);
}

int main() {
    int linii, coloane;
    printf("Introdu numarul de linii: ");
    scanf("%d", &linii);
    printf("Introdu numarul de coloane: ");
    scanf("%d", &coloane);

    int **matrice = (int **)malloc(linii * sizeof(int *));
    for (int i = 0; i < linii; i++) {
        matrice[i] = (int *)malloc(coloane * sizeof(int));
    }

    printf("Introduceti elementele matricei:\n");
    for (int i = 0; i < linii; i++) {
        for (int j = 0; j < coloane; j++) {
            printf("matrice[%d][%d] = ", i, j);
            scanf("%d", &matrice[i][j]);
        }
    }

    printf("Matricea initiala este:\n");
    afisare_matrice(matrice, linii, coloane);

    inversare_fata_de_linie_mediana(matrice, linii, coloane);
    printf("Matricea dupa inversarea fata de linia mediana este:\n");
    afisare_matrice(matrice, linii, coloane);

    inversare_fata_de_coloana_mediana(matrice, linii, coloane);
    printf("Matricea dupa inversarea fata de coloana mediana este:\n");
    afisare_matrice(matrice, linii, coloane);

    inversare_fata_de_centrul_matricii(matrice, linii, coloane);
    printf("Matricea dupa inversarea fata de centrul matricii este:\n");
    afisare_matrice(matrice, linii, coloane);

    transpusa_matricei(matrice, linii, coloane);

    // Eliberarea memoriei pentru matrice
    for (int i = 0; i < linii; i++) {
        free(matrice[i]);
    }
    free(matrice);

    return 0;
}
