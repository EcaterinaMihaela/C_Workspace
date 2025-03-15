#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sir[50][50] = {"Ana are mere"};
    printf("%s", sir[0]);

    int dimSir = strlen(sir[0]);
    printf("\n%d", dimSir);

    int contor = 0;
    int esteInCuvant = 0;  // 0 - nu suntem într-un cuvânt, 1 - suntem într-un cuvânt

    for (int i = 0; i < dimSir; i++) {
        if (isspace(sir[0][i])) {
            esteInCuvant = 0;  // Am găsit un spațiu, nu suntem într-un cuvânt
        } else {
            if (esteInCuvant == 0) {
                esteInCuvant = 1;  // Am găsit începutul unui cuvânt
                contor++;
            }
        }
    }

    if (contor > 0) {
        printf("\nSirul are %d cuvinte\n", contor);
    } else {
        printf("\nSirul are un singur cuvant\n");
    }

    return 0;
}
