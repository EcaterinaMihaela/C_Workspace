/*
Author:Căpățînă Ecaterina-Mihaela
Date:28.11.2023

Description:Scrieti o functie care sa primeasca ca parametru un numar natural n si
sa returneze cel mai mic numar natural care se poate forma cu cifrele
numarului n.

*/
#include <stdio.h>

// Funcție pentru sortarea cifrelor unui număr în ordine crescătoare
int sorteaza_cifrele(int n) {
    int cifre[10] = {0}; // Inițializăm un vector pentru a număra aparițiile cifrelor

    // Numărăm aparițiile cifrelor din numărul dat
    while (n > 0) {
        cifre[n % 10]++;
        n /= 10;
    }

    // Reconstruim cel mai mic număr posibil din cifrele sortate
    int rezultat = 0;
    for (int i = 1; i <= 9; i++) {
        while (cifre[i] > 0) {
            rezultat = rezultat * 10 + i;
            cifre[i]--;
        }
    }

    return rezultat;
}

int main() {
    int n;
    printf("Introdu un numar natural: ");
    scanf("%d", &n);

    int rezultat = sorteaza_cifrele(n);

    printf("Cel mai mic numar posibil: %d\n", rezultat);

    return 0;
}

