#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void aflareLitere(char sir[30][30], int nrCuv) {
    for (int i = 0; i < nrCuv; i++) {
        int dimCuv = strlen(sir[i]);
        printf("\nDimensiunea cuvantului %s este : %d\n", sir[i], dimCuv);

        printf("Cuvantul %s are urmatoarele litere:\n", sir[i]);
        for (int j = 0; j < dimCuv; j++) {
            printf(" %c\n", sir[i][j]);
        }
        printf(" \n");
    }
}

void inlocuireLitera(char sir[30][30], int nrCuv) {
    int pozitie;
    printf("Litera de pe care pozitie sa fie inlocuita? ");
    scanf("%d", &pozitie);

    char litera_noua;
    printf("Care este litera noua de inlocuit? ");
    scanf(" %c", &litera_noua);

    int pozDinCuv;
    printf("In care cuvant sa aiba loc inlocuirea? ");
    scanf("%d", &pozDinCuv);

    printf("\nCuvantul dupa inlocuire:\n");
    for (int j = 0; j < strlen(sir[pozDinCuv]); j++) {
        if (j == pozitie) {
            sir[pozDinCuv][j] = litera_noua;
        }
        printf("%c", sir[pozDinCuv][j]);
    }
    printf("\n");

    printf("Sirul dupa inlocuire este: \n");
    for (int i = 0; i < nrCuv; i++)
    {
        if(i == pozDinCuv)
            printf("%s ", sir[pozDinCuv]);
    else
         printf("%s ", sir[i]);
    }
}

int main() {
    char sir[30][30];
    int nrCuv;
    printf("Introdu nr de cuvinte: ");
    scanf("%d", &nrCuv);

    for (int i = 0; i < nrCuv; i++) {
        scanf(" %s", sir[i]);
    }
    printf("Sirul este :\n");
    for (int i = 0; i < nrCuv; i++) {
        printf("%s ", sir[i]);
    }

    aflareLitere(sir, nrCuv);
    inlocuireLitera(sir, nrCuv);

    return 0;
}
