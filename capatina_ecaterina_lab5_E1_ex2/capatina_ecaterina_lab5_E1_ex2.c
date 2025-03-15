/*
Author:Căpățînă Ecaterina-Mihaela
Date:14.11.2023

Description:2. Se citeste un numar natural k. Sa se realizeze un program C care afiseaza
valoarea 2 la k.

FREQS:Utilizarea operatorilor pe biti

INPUT:Introducem numarul k
OUTPUT:Primim 2 la k

Constraints:Operatorul(putem folosi operatorul de stanga, <<, care realizează operația de shiftare la stânga )
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k;
    printf("Introduceti numarul k:");
    scanf("%d", &k);

    int result = 1 << k;

    printf("Rezultatul 2 la k ,folosind operatorii pe biti este: %d", result);

    return 0;
}
