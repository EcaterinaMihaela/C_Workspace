#include <stdio.h>
#include <stdlib.h>

void afisare_matrice(int matrix[][3], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void suma(int matrix[][3], int n, int m) {
    int sum1[n], sum2[m];

    for (int i = 0; i < n; i++) {
        sum1[i] = 0;
        for (int j = 0; j < m; j++) {
            sum1[i] += matrix[i][j];
            sum2[j] = (j == 0) ? matrix[i][j] : sum2[j] + matrix[i][j];
        }
    }

    printf("Suma pe fiecare linie:\n");
    for (int i = 0; i < n; i++) {
        printf("Linia %d: %d\n", i + 1, sum1[i]);
    }

    printf("\nSuma pe fiecare coloana:\n");
    for (int j = 0; j < m; j++) {
        printf("Coloana %d: %d\n", j + 1, sum2[j]);
    }
}

int main() {
    int n, m;
    printf("Introdu numarul de linii: ");
    scanf("%d", &n);
    printf("Introdu numarul de coloane: ");
    scanf("%d", &m);

    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matricea este:\n");
    afisare_matrice(matrix, n, m);

    suma(matrix, n, m);

    return 0;
}
