#include <stdio.h>
#include <stdlib.h>
/*
void inversareCuvinte(char sir[30][30], int nrCuv)
{
    for(int i=0; i<nrCuv; i++)
    {
        int dimCuv = strlen(sir[i]);
        for(int j=0; j<dimCuv-1; j++)
        {
            char aux = sir[i][j];
            sir[i][j] = sir[nrCuv][j];
            sir[nrCuv][j]= aux;
        }
    }
    ///afisarea inversata
    for(int i=0; i<nrCuv; i++)
    {
        int dimCuv = strlen(sir[i]);
        for(int j=0; j<dimCuv-1; j++)
        {
            printf("%s", sir[i][j]);
        }
    }
}
asta e esec si pierdere de timp si memorie pt ca e foarte simplu
*/
void inversareCuvinte(char sir[30][30], int nrCuv)
{
    for(int i=nrCuv-1; i>=0; i--)
    {
        printf(" %s", sir[i]);
    }
}
int main()
{
    char sir[30][30];
    int nrCuv;
    printf("Introdu nr de cuvinte din sir:");
    scanf(" %d",&nrCuv);

    for(int i=0; i<nrCuv; i++)
    {
        scanf("%s", sir[i]);
    }

    printf("Cuvintele sunt :\n");
    for(int i=0; i<nrCuv; i++)
    {
        printf(" %s", sir[i]);
    }
    printf("\nSirul inversat este: \n");
    inversareCuvinte(sir,nrCuv);
    return 0;
}
