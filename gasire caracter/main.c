#include <stdio.h>
#include <stdlib.h>

void citire(char enunt[50][50], int nrCuv)
{
    for (int i = 0; i < nrCuv; i++)
    {
        printf("cuvant %d: ", i + 1);
        scanf("%s", enunt[i]);
    }
}

void afisare(char enunt[50][50], int nrCuv)
{
    for (int i = 0; i < nrCuv; i++)
    {
        printf("%s ", enunt[i]);
    }
    printf("\n");
}
int aparitie(char sir[50][50],int nrCuv)
{
    char litera;
    printf("Care caracter sa fie gasit");
    scanf(" %c" ,&litera);
    for (int i = 0; i < nrCuv; i++)
    {
        int dimCuv = strlen(sir[i]);
        for (int j = 0; j < dimCuv; j++)
        {
            if(sir[i][j] == litera)
            {
                return j;
            }
        }
    }
    return -1;
}
int main()
{
    char sir[50][50];

    int nrCuv;
    printf("Introdu numarul de cuvinte: ");
    scanf("%d", &nrCuv);

    citire(sir, nrCuv);
    printf("Enuntul este: ");
    afisare(sir, nrCuv);

    int rezultat = aparitie(sir,nrCuv);
    if(rezultat!=-1)
    {
        printf("gasit");
    }
    else
        printf("nu e gasit");
    return 0;
}

