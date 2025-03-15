#include <stdio.h>

int main() {
    int numar;
    printf("Introduceti un numar intreg: ");
    scanf("%d", &numar);

    // Verificăm LSB-ul
    int lsb = numar & 1; // Folosim & cu 1 pentru a extrage LSB-ul

    if (lsb == 1) {
        printf("LSB-ul numarului %d este setat (1).\n", numar);
    } else {
        printf("LSB-ul numarului %d nu este setat (0).\n", numar);
    }

    return 0;
}
