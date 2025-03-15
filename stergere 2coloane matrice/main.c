#include <stdio.h>
#include <stdlib.h>

void reading(int array[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("array[%d][%d]=", i + 1, j + 1);
            scanf("%d", &array[i][j]);
        }
    }
}

void display(int array[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

void eliminareColoane(int array[3][3], int newArray[3][2]) {
    int k = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j != 2) {
                newArray[i][k++] = array[i][j];
            }
        }
    }
}

int main() {
    int array[3][3];
    reading(array);

    printf("The matrix is: \n");
    display(array);

    int newArray[3][2]; // Ajustat pentru a corespunde cu eliminareColoane
    eliminareColoane(array, newArray);
    printf("\nThe new matrix is: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", newArray[i][j]);
        }
        printf("\n");
    }
    return 0;
}
