/*
Author:Căpățînă Ecaterina-Mihaela
Date:20.11.2023

Description:Sortarea unui vector cu bubble sort
*/
#include <stdio.h>

// Funcție pentru Bubble Sort
void bubbleSort(int array[], int lungime) {
    for (int i = 0; i < lungime - 1; i++) {
        for (int j = 0; j < lungime - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Schimbă elementele dacă sunt în ordine inversă
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int lungime;
    printf("Introdu lungimea vectorului: ");
    scanf("%d", &lungime);

    int array[lungime];
    printf("Introduceti elementele vectorului:\n");
    for (int i = 0; i < lungime; i++) {
        scanf("%d", &array[i]);
    }

    // Sortează vectorul folosind Bubble Sort
    bubbleSort(array, lungime);

    printf("Vectorul sortat:\n");
    for (int i = 0; i < lungime; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");


    return 0;
}
