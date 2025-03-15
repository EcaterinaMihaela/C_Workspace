#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int numar_cifre(int numar) {
    return (int)log10(numar) + 1;
}

int numar_total_cifre(int numar_pagini) {
    int cifre_totale = 0;

    for (int pagina = 1; pagina <= numar_pagini; pagina++) {
        cifre_totale += numar_cifre(pagina);
    }

    return cifre_totale;
}

int main() {
    int numar_pagini_carte = 125;
    int rezultat = numar_total_cifre(numar_pagini_carte);
    printf("Numarul total de cifre pentru numerotarea a %d pagini este: %d\n", numar_pagini_carte, rezultat);

    return 0;
}
