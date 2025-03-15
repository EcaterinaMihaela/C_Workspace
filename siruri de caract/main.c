#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE_MAX 4

int main()
{
    char nume[50];
    FILE *fisier;
    fisier = fopen("URAAAA.txt", "a"); // Deschiderea fișierului în modul de scriere ("w")

    if (fisier == NULL) {
        printf("Eroare la deschiderea fisierului.\n");
        return 1;
    }
    printf("Introdu numele: ");
    scanf("%s", nume);

    printf("Numele este : %s", nume);
     fprintf(fisier, "Cuvantul introdus este: %s\n", nume);

    fclose(fisier);

    return 0;
}
