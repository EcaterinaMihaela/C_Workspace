/*
Author:Căpățînă Ecaterina-Mihaela
Date:14.11.2023

Description:Se considera un numar natural n. Sa se realizeze un program C care
afiseaza reprezentarea lui n in baza 2.

FREQS:Folosirea operatorilor pe biti

INPUT:Scriem si citim un numar
OUTPUT:Afisam reprezentarea sa in baza 2

Constraints:Conversia din baza 10 in baza 2 prin folosirea operatorului sizeof
            Redarea numarului de biti in contextul in care sizeof reda numarul de octeti

*/

#include <stdio.h>

int main()
{
    int numar;
    printf("Introduceti numarul: ");
    scanf("%d", &numar);

    int lungime = sizeof(int) * 8; // Numarul de biti într-un int
    int i;

    printf("Reprezentarea binara a lui %d este: ", numar);

    // Iterăm prin fiecare bit și îl afișăm
    for (i = lungime - 1; i >= 0; i--)
    {
        int bit = (numar >> i) & 1; // Obținem bitul la poziția i(ultimul bit al numarului impartit la i)
        printf("%d", bit);
    }
    printf("\n");


    return 0;
}
