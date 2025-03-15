/*
Author:Căpățînă Ecaterina-Mihaela
Date:14.11.2023

Description:Realizati un program C pentru a numara de cate ori apare zero si unu
ıntr-o reprezentare binara a unui numar.

FREQS:Utilizarea calcului cu biti
      Afisarea nr in binar
      Numararea bitilor,o si 1

INPUT:numarul
OUTPUT:Nr de zerouri si nr de 1-uri

*/

#include <stdio.h>

int main() {
    int numar;
    printf("Introduceti numarul: ");
    scanf("%d", &numar);

    printf("Reprezentarea binara a lui %d este: ", numar);

    int zeros = 0;
    int ones = 0;

    int lungime = sizeof(int) * 8; // Numărul de biți într-un int

    // Iterăm prin fiecare bit și numărăm zerourile și unurile
    for (int i = lungime - 1; i >= 0; i--) {
        int bit = (numar >> i) & 1; // Obținem bitul la poziția i
        printf("%d", bit);

        if (bit == 0) {
            zeros++;
        } else {
            ones++;
        }
    }

    printf("\nNumarul de zerouri: %d\n", zeros);
    printf("Numarul de unu-uri: %d\n", ones);

    return 0;
}
