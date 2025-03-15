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

void inversareLinii(int array[3][3]) {
    int l1, l2;
    printf("\nCare linii sa fie interschimbate?\n");
    scanf("%d %d", &l1, &l2);

    for (int j = 0; j < 3; j++) {
        swap(&array[l1][j], &array[l2][j]);
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int array[3][3];
    reading(array);

    printf("The matrix is: \n");
    display(array);

    inversareLinii(array);

    printf("The inversed matrix is: \n");
    display(array);

    return 0;
}
