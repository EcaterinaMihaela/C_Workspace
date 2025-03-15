#include <stdio.h>
#include <stdlib.h>

void citire_vector(int array[], int SIZE, int *pt) {
    for (size_t i = 0; i < SIZE; i++) {
        printf("vector[%d]=", i);
        scanf("%d", (pt + i));
    }
}

void afisare_vector(int array[], int SIZE, int *pt) {
    for (size_t i = 0; i < SIZE; i++) {
        printf("%d ", *(pt + i));
    }
    printf("\n");
}

int main() {
    int SIZE;
    int *pt;
    printf("SIZE=");
    scanf("%d", &SIZE);

    pt = (int *)malloc(SIZE * sizeof(int)); // Alocare de memorie pentru pointerul pt

    if (pt == NULL) {
        printf("Alocarea memoriei a esuat!");
        return -1;
    }

    int array[SIZE];

    citire_vector(array, SIZE, pt);
    printf("Vectorul initial este:");
    afisare_vector(array, SIZE, pt);

    // Inversarea vectorului
    int *pStart = pt;
    int *pStop = pt + SIZE - 1;

    while (pStart < pStop) {
        int temp = *pStart;
        *pStart = *pStop;
        *pStop = temp;

        pStart++;
        pStop--;
    }

    printf("Vectorul inversat este:");
    afisare_vector(array, SIZE, pt);

    free(pt); // Eliberare memorie alocată dinamic pentru pt

    return 0;
}
