#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;
    printf("rows=");
    scanf("%d", &rows);
    printf("cols=");
    scanf("%d", &cols);

    int *p;
    int tab[rows][cols];

    p = (int *)tab; // Pointer către începutul matricei

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("tab[%d][%d]: ", i, j);
            scanf("%d", p + i * cols + j); // Folosește aritmetica pointerilor pentru a accesa matricea
        }
    }

    printf("Matricea este:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(p + i * cols + j)); // Afișează valorile folosind pointerii
        }
        printf("\n");
    }

    return 0;
}

