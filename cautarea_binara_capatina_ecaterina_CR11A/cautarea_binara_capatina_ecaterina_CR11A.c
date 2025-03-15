/*
Author:Căpățînă Ecaterina-Mihaela
Date:20.11.2023

Description:Cautarea binara-gasirea unui element dintr un vector dat de la tastatura
*/
#include <stdio.h>

// Funcție pentru căutarea binară
int cautareBinara(int array[], int lungime, int elementCautat) {
    int left = 0;
    int right = lungime - 1;

    while (left <= right) {
        int mid = left+(right- left) / 2;

        // Dacă elementul este pe mijloc
        if (array[mid] == elementCautat)
            return mid;

        // Dacă elementul este mai mic decât mijlocul, caută în partea stângă a tabloului
        if (array[mid] < elementCautat)
            left = mid + 1;
        else
            right = mid - 1;
    }

    // Dacă elementul nu este prezent în tablou
    return -1;
}

int main() {
    int lungime;
    printf("Introdu lungimea vectorului: ");
    scanf("%d", &lungime);

    int array[lungime];
    printf("Introduceti elementele vectorului sortat:\n");
    for (int i = 0; i < lungime; i++) {
        scanf("%d", &array[i]);
    }

    int elementCautat;
    printf("Introduceti elementul pe care doriti sa-l cautati: ");
    scanf("%d", &elementCautat);

    int rezultat = cautareBinara(array, lungime, elementCautat);
    if (rezultat == -1) {
        printf("Elementul nu a fost gasit in tablou.\n");
    } else {
        printf("Elementul a fost gasit la indexul: %d\n", rezultat);
    }
    return 0;
}
