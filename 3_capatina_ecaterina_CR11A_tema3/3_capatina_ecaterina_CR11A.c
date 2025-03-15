#include <stdio.h>

/*
Author:Căpățînă Ecaterina-Mihaela
Date:21.11.2023

Description:Se citeste un vector a cu n elemente numere naturale. Sa se afiseze el-
ementele din vector care sunt mai mici decat rasturnatul lor. Exemplu:

238, 67, 419 sunt numere mai mici decat rasturnatul lor.

*/

// Funcție pentru a răsturna un număr întreg
int rasturnat_f(int numar) {
    int rasturnat = 0;
    while (numar > 0) {
        int cifra = numar % 10;
        rasturnat = rasturnat * 10 + cifra;
        numar = numar / 10;
    }
    return rasturnat;
}

// Funcție pentru a afișa elementele unui vector
void afisare_vector(int vector[], int lungime) {
    for(int i = 0; i < lungime; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");
}

int main() {
    int lungime;
    printf("Introdu dimensiunea vectorului: ");
    scanf("%d", &lungime);

    int vector[lungime];
    for(int i = 0; i < lungime; i++) {
        printf("vector[ %d ] = ", i);
        scanf("%d", &vector[i]);
    }

    printf("Vectorul initial este: ");
    afisare_vector(vector, lungime);

    printf("Elementele mai mici decat rasturnatul lor sunt: ");
    for (int i = 0; i < lungime; i++) {
        int rasturnat = rasturnat_f(vector[i]);
        if (vector[i] < rasturnat) {
            printf("%d ", vector[i]);
        }
    }
    printf("\n");

    return 0;
}
