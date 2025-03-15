/*
Author:Căpățînă Ecaterina-Mihaela
Date:14.11.2023

Description:Scrieti un program C pentru a numara numarul de zerouri finale dintr-un
numar intreg dat.

FREQS:

INPUT:Valoarea introdusa
OUTPUT:Nr de zerouri

Constraints:
*/

#include <stdio.h>

int main() {
    int numar;
    printf("Introduceti numarul intreg: ");
    scanf("%d", &numar);

    int count = 0;

    // Iterăm prin zerourile finale
    while ((numar & 1) == 0) {  // Verificam daca ultimul bit al nr e 0 sau nu
        count++;                 // Il numaram
        numar = numar >> 1; // Deplasăm numărul către dreapta pentru a verifica următorul bit
    }

    printf("Numarul de zerouri finale din %d este: %d\n", numar, count);

    return 0;
}
