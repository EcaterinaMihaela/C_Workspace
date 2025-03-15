#include <stdio.h>

// Functie recursiva pentru a calcula suma cifrelor
int sumaCifrelor(int numar) {
    if (numar == 0) {
        return 0;
    } else {
        return (numar % 10) + sumaCifrelor(numar / 10);
    }
}

int main() {
    int numar;
    printf("Introduceți numărul: ");
    scanf("%d", &numar);

    int suma = sumaCifrelor(numar);
    printf("Suma cifrelor numărului este: %d\n", suma);

    return 0;
}
