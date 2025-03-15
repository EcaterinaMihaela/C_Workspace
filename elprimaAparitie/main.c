#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void aparitie(char enunt[50][50], int nrCuv)
{
    for (int i = 0; i < nrCuv; i++)
    {
        int dimCuv = strlen(enunt[i]);
        for (int j = 0; j < dimCuv; j++)
        {
            int contor = 0;
            for (int m = 0; m < nrCuv; m++)
            {
                for (int n = 0; n < strlen(enunt[m]); n++)
                {
                    if (enunt[i][j] == enunt[m][n])
                    {
                        contor++;
                    }
                }
            }
            printf("Caracterul %c se gaseste de %d ori\n", enunt[i][j], contor);
        }
    }
}

void elimPrimaAparitie(char enunt[50][50], int nrCuv, char repetat[50])
{
    for (int i = 0; i < nrCuv; i++)
    {
        int dimCuv = strlen(enunt[i]);
        for (int j = 0; j < dimCuv; j++)
        {
            if (strcmp(enunt[i], repetat) == 0 && j == 0)
            {
                // Ignorăm cuvantul care se repetă și continuăm cu următorul cuvant
                break;
            }
            else
            {
                enunt[i][j] = enunt[i][j];
            }
        }
    }
}

int main()
{
    char enunt[50][50];
    char enuntNou[50][50];

    int nrCuv;
    printf("Introdu numarul de cuvinte: ");
    scanf("%d", &nrCuv);

    citire(enunt, nrCuv);
    printf("Enuntul este: ");
    afisare(enunt, nrCuv);

    aparitie(enunt, nrCuv);

    char repetat[50];
    printf("Care cuvant sa verificam daca se repeta? ");
    scanf("%s", repetat);

    elimPrimaAparitie(enunt, nrCuv, repetat);

    printf("Enuntul dupa eliminarea primei aparitii a cuvantului '%s' este: ", repetat);
    afisare(enunt, nrCuv);

    return 0;
}
