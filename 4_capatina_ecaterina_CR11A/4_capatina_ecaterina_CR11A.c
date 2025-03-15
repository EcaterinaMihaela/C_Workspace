/*
Author:Căpățînă Ecaterina-Mihaela
Date:05.11.2023

Description:Scrieti un program C pentru a afla lungimea unui sir folosind pointeri.
*/
#include <stdio.h>

/// Functie pentru a calcula lungimea unui sir de caractere
int lungime_sir(const char *sir) {
    int lungime = 0;

    while (*sir != '\0') {
        lungime++;
        sir++;
    }

    return lungime;
}

int main() {
    char sir[] = "examen"; // Schimba sirul aici pentru a calcula lungimea altui sir

    int lungime = lungime_sir(sir);
    printf("Lungimea sirului '%s' este: %d\n", sir, lungime);

    return 0;
}
