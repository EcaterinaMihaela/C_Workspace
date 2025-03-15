#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void citireSir(char string[50][50], int nrCuv)
{
    for(int i=0; i<nrCuv; i++)
    {
        printf("cuvant %d: ", i+1);
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

///function for displaying the letters and nrOf tehem
void afisareLitere(char string[50][50], int nrCuv)
{
    for(int i=0;i<nrCuv; i++)
    {
        int dimCuv = strlen(string[i]);
        printf("\nCuvantul %s  are dimensiunea %d si literele: ", string[i], dimCuv);
        for(int j=0; j<dimCuv; j++)
        {
            printf("%c ", string[i][j]);
        }
    }
}

void inlocuireLitere(char string[50][50], int nrCuv)
{
    int pozitie;
    printf("Caracterul de pe care pozitie sa fie inlocuit?");
    scanf("%d", &pozitie);

    int pozitie2;
    printf("In care cuvant sa aibe loc inlocuirea?");
    scanf("%d", &pozitie2);

    for(int i=0; i<nrCuv; i++)
    {
        int dimCuv = strlen(string[i]);
        for(int j=0; j<dimCuv; j++)
        {
            if(j == pozitie && i == pozitie2)
            {
                string[i][j] = '!';
            }
        }
    }
}

void isUpper(const char string[50][50], int nrCuv)
{
    for (int i = 0; i < nrCuv; i++)
    {
        int dimCuv = strlen(string[i]);
        printf("\nCuvantul %s  are dimensiunea %d si literele: ", string[i], dimCuv);
        for (int j = 0; j < dimCuv; j++)
        {
            if (isupper(string[i][j]))
            {
                printf("%c (Uppercase) ", string[i][j]);
            }
            else
            {
                printf("%c (Lowercase) ", string[i][j]);
            }
        }
    }
    printf("\n");
}

void toUpper(const char string[50][50], int nrCuv)
{
    for (int i = 0; i < nrCuv; i++)
    {
        int dimCuv = strlen(string[i]);
        printf("\nCuvantul %s  are dimensiunea %d si literele: ", string[i], dimCuv);
        for (int j = 0; j < dimCuv; j++)
        {
            if (islower(string[i][j]))
            {
                string[i][j] = toupper(string[i][j]);
            }
        }
        printf("%s", string[i]);
    }
    printf("\n");
}

int main()
{
    char string[50][50];
    int nrCuv;
    printf("Enter the number of words: ");
    scanf("%d", &nrCuv);
    citireSir(string, nrCuv);
    afisareSir(string, nrCuv);

    afisareLitere(string,nrCuv);
    inlocuireLitere(string,nrCuv);
    afisareSir(string, nrCuv);
    isUpper(string, nrCuv);
    toUpper(string, nrCuv);
    return 0;
}
