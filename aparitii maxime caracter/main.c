#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void dimCuvinte(char sir[50][50],int nrCuv)
{
    for(int i=0; i<nrCuv; i++)
    {
        int dimCuv = strlen(sir[i]);
        printf("\nDimensiunea fiecarui cuvant este,cuvant %d: %d", i+1,dimCuv);

    }
}

void caracterMax(char sir[50][50], int nrCuv)
{
    printf("\nLiterele din cuvinte sunt: \n");
    for(int i=0; i<nrCuv; i++)
    {
        int dimCuv = strlen(sir[i]);
        printf("\nPentru cuvantul %d: ", i+1);
        for(int j = 0; j<dimCuv; j++)
        {
            printf("%c ", sir[i][j]);
        }
    }
}
void aparitie(char sir[50][50], int nrCuv)
{
    int count = 0;
    int aparitie;
    printf("\nCarui caracter sa i aflam aparitiile? \n");
    scanf(" %c", &aparitie);

    for(int i=0; i<nrCuv; i++)
    {
        int dimCuv = strlen(sir[i]);
        for(int j = 0; j<dimCuv; j++)
        {
            if(sir[i][j] == aparitie)
            {
                count++;
            }
        }
    }
    printf("Caracterul %c apare de : %d ori", aparitie,count);
}

int main()
{
    char sir[50][50];
    int nrCuv;
    printf("Introdu nr de cuv: ");
    scanf("%d", &nrCuv);

    for(int i=0; i<nrCuv; i++)
    {
        printf("Cuvant %d: ", i+1);
        scanf("%s", sir[i]);
    }

    printf("Sirul este: \n");
    for(int i=0; i<nrCuv; i++)
    {
        printf("%s ", sir[i]);
    }

    dimCuvinte(sir, nrCuv);
    caracterMax(sir, nrCuv);
    aparitie(sir, nrCuv);

    return 0;
}
