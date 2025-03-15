#include <stdio.h>
#include <string.h>

void aflareLitere(char sir[30][30], int nrCuv)
{
    for (int i = 0; i < nrCuv; i++)
    {
        int dimCuv = strlen(sir[i]);
        printf("\nDimensiunea cuvantului %s este : %d\n", sir[i], dimCuv);

        printf("Cuvantul %s are urmatoarele litere:\n", sir[i]);
        for (int j = 0; j < dimCuv; j++)
        {
            printf(" %c\n", sir[i][j]);
        }
        printf(" \n");
    }
}

void repetareCuv(char sirDeCuvinte[30][30], int nrCuv)
{
    for (int i = 0; i < nrCuv; i++)
    {
        int dimCuv = strlen(sirDeCuvinte[i]);
        printf("\nDimensiunea cuvantului %d este: %d \n", i + 1, dimCuv);
        printf("Pentru cuvantul %s, aceasta are urmatoarele litere: \n", sirDeCuvinte[i]);

        int k = 1; // Inițializare pentru a număra literele consecutive duplicate
        for (int j = 0; j < dimCuv - 1; j++)
        {
            if (sirDeCuvinte[i][j] == sirDeCuvinte[i][j + 1])
            {
                k++;
            }
            else
            {
                if (k > 1)
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

void caracterMaxim(char sir[30][30], int nrCuv)
{
    for (int i = 0; i < nrCuv; i++)
    {
        int dimCuv = strlen(sir[i]);
        char maxChar = sir[i][0]; // Assume first character is the maximum

        for (int j = 1; j < dimCuv; j++)
        {
            if (sir[i][j] > maxChar)
            {
                maxChar = sir[i][j];
            }
        }

        printf("In cadrul cuvantului %s, litera maxima este: %c\n", sir[i], maxChar);
    }
}

int main()
{
    char sir[30][30];
    int nrCuv;
    printf("Introdu nr de cuvinte: ");
    scanf("%d", &nrCuv);

    for (int i = 0; i < nrCuv; i++)
    {
        scanf(" %s", sir[i]);
    }
    printf("Sirul este :\n");
    for (int i = 0; i < nrCuv; i++)
    {
        printf("%s ", sir[i]);
    }

    aflareLitere(sir, nrCuv);
    repetareCuv(sir, nrCuv);
    caracterMaxim(sir, nrCuv);

    return 0;
}
