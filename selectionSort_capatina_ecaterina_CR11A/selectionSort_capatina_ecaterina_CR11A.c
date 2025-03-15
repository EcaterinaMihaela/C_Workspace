/*
Author:Căpățînă Ecaterina-Mihaela
Date:20.11.2023
Description:Ordonare vector prin metoda selectiei
*/
#include <stdio.h>

void selectionSort(int arr[], int lungime) {
    int i, j, minIndex, temp;
    for (i = 0; i < lungime - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < lungime; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Schimbă elementele
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int lungime;
    printf("Introdu lungimea vectorului: ");
    scanf("%d", &lungime);

    int arr[lungime];
    printf("Introduceti elementele vectorului:\n");
    for (int i = 0; i < lungime; i++) {
        scanf("%d", &arr[i]);
    }

    // Sortează vectorul folosind Selection Sort
    selectionSort(arr, lungime);

    printf("Vectorul sortat:\n");
    for (int i = 0; i < lungime; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
return 0;
}






