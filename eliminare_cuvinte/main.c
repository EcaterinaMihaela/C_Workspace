#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void verifRepetare(char sirDeCuvinte[30][30], int nrCuv)
{
    for(int i = 0; i < nrCuv; i++)
    {
        int dimCuv = strlen(sirDeCuvinte[i]);
        printf("\nDimensiunea cuvantului %d este: %d \n", i + 1, dimCuv);
        printf("Pentru cuvantul %s, aceasta are urmatoarele litere: \n", sirDeCuvinte[i]);

        int k = 1; // Inițializare pentru a număra literele consecutive duplicate
        for(int j = 0; j < dimCuv - 1; j++)
        {
            if(sirDeCuvinte[i][j] == sirDeCuvinte[i][j + 1])
            {
                k++;
            }
            else
            {
                if(k > 1)
                    printf("Litera %c se repeta de %d ori.\n", sirDeCuvinte[i][j], k);
                else
                    printf("Litera %c nu se repeta.\n", sirDeCuvinte[i][j]);
                k = 1; // Resetare număr litere consecutive duplicate
            }
        }
        // Verificarea ultimei litere în cazul în care se repetă
        if (k > 1)
            printf("Litera %c se repeta de %d ori.\n", sirDeCuvinte[i][dimCuv - 1], k);
        else
            printf("Litera %c nu se repeta.\n", sirDeCuvinte[i][dimCuv - 1]);
    }
}
void eliminareRepetari(char sirDeCuvinte[30][30], int nrCuv)
{
    for(int i = 0; i < nrCuv; i++)
    {
        int dimCuv = strlen(sirDeCuvinte[i]);
        int index = 0; // Index pentru noua poziție a caracterului fără repetiție

        for(int j = 0; j < dimCuv; j++)
        {
            if (j == 0 || sirDeCuvinte[i][j] != sirDeCuvinte[i][j - 1])
            {
                sirDeCuvinte[i][index++] = sirDeCuvinte[i][j]; // Adaugă caracterul în șirul nou
            }
        }
        sirDeCuvinte[i][index] = '\0'; // Adăugarea terminatorului de sfârșit de șir
    }

}
int main()
{
    char sirDeCuvinte[30][30];
    int nrCuv;

    int k;
    printf("Introduceti nr de cuvinte: \n");
    scanf("%d", &nrCuv);

    printf("Cuvintele sunt: ");
    for(int i = 0; i < nrCuv; i++)
    {
        scanf("%s", sirDeCuvinte[i]);
    }

    printf("Sirul de cuvinte este:\n");
    for(int i = 0; i < nrCuv; i++)
    {
        printf(" %s", sirDeCuvinte[i]);
    }

    verifRepetare(sirDeCuvinte, nrCuv);
    printf("Sirul fara litere care se repeta este: ");
    eliminareRepetari(sirDeCuvinte, nrCuv);
    for (int i = 0; i < nrCuv; i++)
    {
        printf("%s ", sirDeCuvinte[i]);
    }
    return 0;
}
