#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
///PROBLEMA CITESTE SI AFISEAZA UN SIR DE N CUVINTE SI VERIFICA DACA LITERELE SUNT MAJUSCULE
///DACA DA AFISEAZA SIRUL ASA CUM E,ALTFEL IL,CONVERTESTE LA MAJUSCULE
//13.02.2024
//Author: Capatina Ecaterina Mihaela

void citireSir(char string[50][50], int nrCuv)
{
    for(int i = 0; i < nrCuv; i++)
    {
        printf("cuvant %d: ", i + 1);
        scanf("%s", string[i]);
    }
}

void afisareSir(char string[50][50], int nrCuv)
{
    printf("Sirul este: ");
    for(int i = 0; i < nrCuv; i++)
    {
        printf("%s ", string[i]);
    }
    printf("\n");
}

void isUpper(char string[50][50], int nrCuv)
{
    for(int i = 0; i < nrCuv; i++)
    {
        int dimCuv = strlen(string[i]);
        printf("\nCuvantul %s are dimensiunea %d si literele: ", string[i], dimCuv);
        for(int j = 0; j < dimCuv; j++)
        {
            if (isupper(string[i][j]))
            {
                ///daca e upper il afiseaza si l lasa asa cum e
                printf("%c (Uppercase) ", string[i][j]);
            }
            else
            {
                ///daca e lower il face upper
                string[i][j] = toupper(string[i][j]);
                printf("%c", string[i][j]);
            }
        }
        printf("\n");
    }
}

int main()
{
    char string[50][50];
    int nrCuv;

    printf("Enter the number of words: ");
    scanf("%d", &nrCuv);

    citireSir(string, nrCuv);
    afisareSir(string, nrCuv);
    isUpper(string, nrCuv);

    return 0;
}
