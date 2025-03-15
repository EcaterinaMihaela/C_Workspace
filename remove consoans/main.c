#include <stdio.h>
#include <stdlib.h>
#include <string.h>
///CAPATINA ECATERINA MIHAELA
///18.02.2024
///PROGRAMUL ELIMINA CONSOANELE DINTR-UN SIR DAT DE LA TASTATURA!!!!
///copie a aliminare vocale!
void citireSir(char string[50][50], int nrCuv)
{
    for(int i=0; i<nrCuv; i++)
    {
        printf("cuvant %d:", i+1);
        scanf("%s", string[i]);
    }
}
void afisareSir(char string[50][50], int nrCuv)
{
    printf("Sirul este: ");
    for(int i=0; i<nrCuv; i++)
    {
        printf("%s ", string[i]);
    }
}
void eliminareVocale(char string[50][50], int nrCuv,char newString[50][50])
{
    for(int i=0; i<nrCuv; i++)
    {
        int k = 0;
        int dimCuv = strlen(string[i]);
        for(int j=0; j<dimCuv; j++)
        {
            if(string[i][j] == 'a' || string[i][j] == 'e' || string[i][j] == 'i'|| string[i][j] == 'o'|| string[i][j] == 'u')
            {
                newString[i][k++] = string[i][j];
            }
        }
    }
}

int main()
{
    char string[50][50];
    printf("Enter the nr of words:");
    int nrCuv;
    scanf("%d", &nrCuv);

    citireSir(string,nrCuv);
    afisareSir(string,nrCuv);

    ///SIRUL FARA consoane ESTE:
    char newString[50][50];
    eliminareVocale(string,nrCuv, newString);
    printf("Sirul fara consoane este: ");
    for(int i=0; i<nrCuv; i++)
    {
        printf("%s ", newString[i]);
    }
    return 0;
}
