#include <stdio.h>

// Se afiseaza cifra sub formă de cuvânt
void afiseazaCifra(int cifra) {
    switch (cifra) {
        case 0:
            printf("zero ");
            break;
        case 1:
            printf("unu ");
            break;
        case 2:
            printf("doi ");
            break;
        case 3:
            printf("trei ");
            break;
        case 4:
            printf("patru ");
            break;
        case 5:
            printf("cinci ");
            break;
        case 6:
            printf("șase ");
            break;
        case 7:
            printf("șapte ");
            break;
        case 8:
            printf("opt ");
            break;
        case 9:
            printf("nouă ");
            break;
        default:
            printf("cifra invalida ");
    }
}

int main() {
    long long numar;
    printf("Introduceti un numar: ");
    scanf("%lld", &numar);

    if (numar < 0) {
        printf("Numarul trebuie sa fie pozitiv.");
        return 1;
    }

    if (numar == 0) {
        printf("zero");
    } else {
        while (numar > 0) {
            int cifra = numar % 10;
            afiseazaCifra(cifra);
            numar /= 10;
        }
    }

    printf("\n");

    return 0;
}
