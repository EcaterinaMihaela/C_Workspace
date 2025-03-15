#include <stdio.h>
#include <stdlib.h>

void adunare_matrici(int *matrix1, int *matrix2, int *matrix3, int lines, int cols) {
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < cols; j++) {
            *(matrix3 + i * cols + j) = *(matrix1 + i * cols + j) + *(matrix2 + i * cols + j);
        }
    }
}

int main() {
    int lines, cols;
    printf("Nr de linii din prima matrice & a doua matrice este: ");
    scanf("%d", &lines);
    printf("Nr de coloane din prima matrice & a doua matrice este: ");
    scanf("%d", &cols);

    int *matrix1 = (int *)malloc(lines * cols * sizeof(int));
    int *matrix2 = (int *)malloc(lines * cols * sizeof(int));
    int *matrix3 = (int *)malloc(lines * cols * sizeof(int));

    printf("Introduceți elementele pentru prima matrice:\n");
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < cols; j++) {
            printf("matrix1[%d][%d]=", i, j);
            scanf("%d", &matrix1[i * cols + j]);
        }
    }

    printf("Introduceți elementele pentru a doua matrice:\n");
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < cols; j++) {
            printf("matrix2[%d][%d]=", i, j);
            scanf("%d", &matrix2[i * cols + j]);
        }
    }

    adunare_matrici(matrix1, matrix2, matrix3, lines, cols);

    printf("Matricea rezultat al adunarii celor două matrici este:\n");
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(matrix3 + i * cols + j));
        }
        printf("\n");
    }

    free(matrix1);
    free(matrix2);
    free(matrix3);

    return 0;
}
