#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("numere.txt", "w");

    if (file == NULL) {
        printf("EROARE LA DESCHIDEREA FISIERULUI");
        return -1;
    }

    int array[2][3] = {{5, 10, 15}, {20, 25, 30}};

    fprintf(file, "Numerele sunt:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            fprintf(file, "%d ", array[i][j]);
        }
        fprintf(file, "\n");
    }

    int sum = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            sum += array[i][j];
        }
    }

    fprintf(file, "Suma este: %d", sum);
    fclose(file);

    return 0;
}
