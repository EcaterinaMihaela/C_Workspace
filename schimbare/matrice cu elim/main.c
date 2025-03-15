#include <stdio.h>
#include <stdlib.h>

#define N 3

int main() {
    int array[N][N] = {{3, 4, 6}, {1, 2, 3}, {9, 8, 6}};

    printf("Matricea este: \n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    int aparitie;
    int k = 0;

    printf("Care apariție? ");
    scanf("%d", &aparitie);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (array[i][j] == aparitie) {
                k++;
            }
        }
    }
    if (k > 0) {
        printf("Elementul %d apare de %d ori in cadrul matricii\n", aparitie, k);
    } else {
        printf("Elementul %d nu apare in cadrul matricii\n", aparitie);
    }

    /// Eliminare Aparitie
    int newArray[N][N];
    int eliminare;
    int m = 0;
    int n = 0;
    printf("\nCare aparitie sa dispara?\n");
    scanf("%d", &eliminare);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (array[i][j] != eliminare) {
                newArray[m][n] = array[i][j];
                n++;
                if (n == N) {
                    n = 0;
                    m++;
                }
            }
        }
    }

    printf("\nMatricea rezultată după eliminare:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", newArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}
