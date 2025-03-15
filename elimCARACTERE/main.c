#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NRCUV 1
void afisareCuvant(char word[50][50])
{
    for(int i=0; i<NRCUV; i++)
    {
        printf("%s", word[i]);
    }
}

void eliminareCuv(char word[50][50], char newWord[50][50])
{
    for(int i=0; i<NRCUV; i++)
    {
        int dimCuv = strlen(word[i]);
        for(int j=1; j<dimCuv-1; j++)
        {
            newWord[i][j-1] = word[i][j];
        }
        newWord[i][dimCuv - 2] = '\0';
    }
}

void inlocuire(char word[50][50])
{
    int k;
    printf("\nCuv de pe care pozitie sa fie inlocuit? \n");
    scanf("%d", &k);
    int inlocuitor;
        printf("Cu ce caracter sa fie inlocuita litera? \n");
        scanf("%c ", &inlocuitor);

    for(int i=0; i<NRCUV; i++)
    {
        int dimCuv = strlen(word[i]);
        for(int j=0; j< dimCuv; j++)
        {
            if(j== k)
            {
                word[i][j] = inlocuitor;

            }
        }
    }
}
int main()
{
    char word[50][50] = {"tataie"};
    printf("The word is :\n");
    afisareCuvant(word);

    char newWord[50][50];
    printf("\nThe new word is :\n");
    eliminareCuv(word, newWord);
    afisareCuvant(newWord);

    inlocuire(word);
    afisareCuvant(word);
    return 0;
}
