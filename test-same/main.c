#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("num = ");
    scanf("%d", &num);

    int ultima_cifra = num % 10;
    int k = 0;
    int cifra = 0;
    int numar_nou = 0;

    while (num != 0) {
        cifra = num % 10;
        num = num / 10;
        k++;
    }

    int putere = 1;
    for (int i = 1; i < k; i++) {
        putere *= 10;
    }

    numar_nou = ultima_cifra * putere;
    numar_nou += num % putere;
    numar_nou += cifra;

    printf("Numarul cu prima si ultima cifra inversate este: %d\n", numar_nou);

    return 0;
}
