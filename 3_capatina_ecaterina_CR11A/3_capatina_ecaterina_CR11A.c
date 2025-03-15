/*
Author:Căpățînă Ecaterina-Mihaela
Date:05.11.2023

Description:Scrieti un program C pentru a cauta un element ıntr-un vector folosind
pointeri.
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

/// functie pt cautarea unui element in vector
void cautare(int *array, int k, int size)
{
    int gasit = 0;
    for (int *p = array; p < array + size; p++)
    {
        if (*p == k)
        {
            gasit = 1;
            break;
        }
    }

    if (gasit)
    {
        printf("Elementul a fost gasit.\n");
    }
    else
    {
        printf("Elementul nu a fost gasit.\n");
    }
}

int main() {
    int k = 0;
    int array[SIZE] = {1, 3, 5, 7, 8};

    printf("Din vectorul :\n");
    for (size_t i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\nIntroduceti valoarea pe care doriti sa o cautati: ");
    scanf("%d", &k);

    cautare(array, k, SIZE);
    return 0;
}
