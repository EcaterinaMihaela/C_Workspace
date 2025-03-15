#include <stdio.h>

// Functie pentru citirea matricei
void citeste_matrice(int matrice[][100], int linii, int coloane) {
    printf("Introduceti elementele matricei:\n");
    for (int i = 0; i < linii; i++) {
        for (int j = 0; j < coloane; j++) {
            printf("matrice[%d][%d] = ", i, j);
            scanf("%d", &matrice[i][j]);
        }
    }
}

// Functie pentru inversarea liniilor matricei
void inverseaza_linii(int matrice[][100], int linii, int coloane) {
    for (int i = 0; i < linii; i++) {
        int stanga = 0;
        int dreapta = coloane - 1;
        while (stanga < dreapta) {
            int temp = matrice[i][stanga];
            matrice[i][stanga] = matrice[i][dreapta];
            matrice[i][dreapta] = temp;
            stanga++;
            dreapta--;
        }
    }
}

// Functie pentru afisarea matricei
void afiseaza_matrice(int matrice[][100], int linii, int coloane) {
    printf("Matricea obtinuta este:\n");
    for (int i = 0; i < linii * 2; i++) {
        for (int j = 0; j < coloane; j++) {
            printf("%d ", matrice[i / 2][j]);
        }
        printf("\n");
        if (i % 2 == 0) {
            inverseaza_linii(matrice, linii, coloane);
        }
    }
}

int main() {
    int linii, coloane;
    printf("Introdu numarul de linii: ");
    scanf("%d", &linii);
    printf("Introdu numarul de coloane: ");
    scanf("%d", &coloane);

    int matrice[100][100]; // Definirea matricei cu o dimensiune maximă (100x100)

    citeste_matrice(matrice, linii, coloane);
    afiseaza_matrice(matrice, linii, coloane);

    return 0;
}
