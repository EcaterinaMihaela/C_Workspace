#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
///PROBLEMA INLOCUIESTE INTR UN STRING CARACTERELE ASEMANATOARE:
///Character recognition software is widely used to digitise printed texts. Thus the texts can be edited, searched and stored on a computer.
///S is misinterpreted as 5
///O is misinterpreted as 0
///I is misinterpreted as 1
///The test cases contain numbers only by mistake.

//14.02.2024
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
void inlocuire(char string[50][50], int nrCuv)
{
    for(int i=0; i<nrCuv; i++)
    {
        int dimCuv = strlen(string[i]);
        for(int j=0; j<dimCuv; j++)
        {
            if(string[i][j] == '5')
                string[i][j] = 'S';
            else if(string[i][j] == '0')
                string[i][j] = 'O';
            else if(string[i][j] == '1')
                string[i][j] = 'I';
        }
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

    inlocuire(string,nrCuv);
    afisareSir(string, nrCuv);

    return 0;
}
