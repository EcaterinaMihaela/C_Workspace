#include <stdio.h>
#include <stdlib.h>

void citireMatrice(int matrice[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matrice[%d][%d]= ", i + 1, j + 1);
            scanf("%d", &matrice[i][j]);
        }
    }
}

void afisareMatrice(int matrice[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void interschimbareColoane(int matrice[3][3]) {
    int c1, c2;
    printf("Care coloane sa fie interschimbate? (doua) ");
    scanf("%d", &c1);
    scanf("%d", &c2);

    for (int i = 0; i < 3; i++) {
        // Folosim adresele elementelor pentru a le interschimba
        swap(&matrice[i][c1], &matrice[i][c2]);
    }
}

int main() {
    int matrice[3][3];
    citireMatrice(matrice);

    printf("Matricea este: \n");
    afisareMatrice(matrice);

    printf("Matricea dupa interschimbare este: \n");
    interschimbareColoane(matrice);
    afisareMatrice(matrice);

    return 0;
}
