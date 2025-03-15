/*
Author:Căpățînă Ecaterina-Mihaela
Date:03.11.2023

Description: Intr-o curte sunt gaini si oi. Se cunoaste numarul de capete si numarul de
picioare din curte. Sa se determine numarul de gaini si numarul de oi.

INPUT:numar_capete, numar_picioare
OUTPUT:numar_gaini, numar_oi
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numar_capete, numar_picioare;
    int numar_gaini, numar_oi;

    // Introduceți numărul total de capete și numărul total de picioare
    printf("Introduceti numarul total de capete: ");
    scanf("%d", &numar_capete);
    printf("Introduceti numarul total de picioare: ");
    scanf("%d", &numar_picioare);

    // Rezolvăm sistemul de ecuații
    // s + i = numar_capete
    // 2s + 4i = numar_picioare

    // Folosim prima ecuație pentru a găsi numar_gaini (s) în funcție de numar_oi(i)
    numar_gaini = numar_capete - numar_oi;

    // Folosim a doua ecuație pentru a găsi numar_oi(i)
    numar_oi = (numar_picioare - 2 * numar_gaini) / 4;

    printf("Numarul de gaini este: %d\n", numar_gaini);
    printf("Numarul de oi este: %d\n", numar_oi);

    return 0;
}
