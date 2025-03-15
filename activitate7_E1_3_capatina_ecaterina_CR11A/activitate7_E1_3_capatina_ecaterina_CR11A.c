/*
Author:Căpățînă Ecaterina-Mihaela
Date:31.10.2023

Description:Scrieti un program ın C pentru a obtine cel mai mare element al unui
tablou folosind functii.

*/
#include <stdio.h>
#include <stdlib.h>

// Funcție pentru afișarea tabloului
void afisare_tab(int array[], int lungime) {
    for(int i = 0; i < lungime; i++) {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

// Funcție pentru ordonarea tabloului în ordine descrescătoare
void ordonare(int array[], int lungime) {
    for(int i = 0; i < lungime - 1; i++) {
        for(int j = i + 1; j < lungime; j++) {
            if(array[j] > array[i]) {
                int aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
}

// Funcție pentru găsirea celui mai mare element
int cel_mai_mare_element(int array[], int lungime) {
    int max = array[0];
    for(int i = 1; i < lungime; i++) {
        if(array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int main() {
    int lungime;
    printf("lungime=");
    scanf("%d", &lungime);

    int array[lungime];
    for(int i = 0; i < lungime; i++) {
        printf("array[%d]=", i);
        scanf("%d", &array[i]);
    }

    printf("Tabloul este: ");
    afisare_tab(array, lungime);

    printf("Tabloul ordonat este: ");
    ordonare(array, lungime);
    afisare_tab(array, lungime);

    int result = cel_mai_mare_element(array, lungime);
    printf("Cel mai mare element din tablou este: %d\n", result);

    return 0;
}
