#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inlocuireLitera(char sir[50][50], int nrCuv)
{
    char literaVeche, literaNoua;

    printf("Care litera sa fie inlocuita? ");
    scanf(" %c", &literaVeche);

    printf("Cu ce litera sa fie inlocuita? ");
    scanf(" %c", &literaNoua);

    for (int i = 0; i < nrCuv; i++)
    {
        int dimCuv = strlen(sir[i]);
        for (int j = 0; j < dimCuv; j++)
        {
            if (sir[i][j] == literaVeche)
            {
                sir[i][j] = literaNoua;
            }
        }
    }
}

int aparitie(char sir[50][50], int nrCuv)
{
    int frecventa[26] = {0};

    for (int i = 0; i < nrCuv; i++)
    {
        int dimCuv = strlen(sir[i]);
        for (int j = 0; j < dimCuv; j++)
        {
            if (sir[i][j] >= 'a' && sir[i][j] <= 'z')
            {
                frecventa[sir[i][j] - 'a']++;
            }
            else if (sir[i][j] >= 'A' && sir[i][j] <= 'Z')
            {
                frecventa[sir[i][j] - 'A']++;
            }
        }
    }

    for (int i = 0; i < 26; i++)
    {
        printf("Litera %c apare de %d ori.\n", 'a' + i, frecventa[i]);
    }

    int totalAparitii = 0;
    for (int i = 0; i < 26; i++)
    {
        totalAparitii += frecventa[i];
    }

    return totalAparitii;
}

void stergereCuv(char sir[50][50], int dimCuv, int pozitie)
{
    for (int i = 0; i < dimCuv; i++)
    {
        // Găsește prima apariție a cuvântului în șir
        char *pozitieCuvant = strstr(sir[i], sir[pozitie]);

        // Verifică dacă cuvântul a fost găsit
        if (pozitieCuvant != NULL)
        {
            // Calculează lungimea cuvântului
            size_t lungimeCuvant = strlen(sir[pozitie]);

            // Elimină cuvântul prin deplasarea restului șirului
            memmove(pozitieCuvant, pozitieCuvant + lungimeCuvant, strlen(pozitieCuvant + lungimeCuvant) + 1);
        }
    }
}

int main()
{
    char sir[50][50];
    int nrCuv;

    printf("Introdu nr de cuvinte: ");
    scanf("%d", &nrCuv);

    printf("Cuvintele sunt: ");
    for (int i = 0; i < nrCuv; i++)
    {
        printf("cuv %d: ", i + 1);
        scanf("%s", sir[i]);
    }

    printf("Sirul este: ");
    for (int i = 0; i < nrCuv; i++)
    {
        printf(" %s", sir[i]);
    }

    printf("\nLiterele din fiecare cuvant sunt: ");
    for (int i = 0; i < nrCuv; i++)
    {
        int dimCuv = strlen(sir[i]);
        for (int j = 0; j < dimCuv; j++)
        {
            printf(" %c", sir[i][j]);
        }
        printf("\n");
    }

    inlocuireLitera(sir, nrCuv);

    printf("Sirul dupa inlocuirea literei este: ");
    for (int i = 0; i < nrCuv; i++)
    {
        printf(" %s", sir[i]);
    }

    printf("\nNr de aparitii al fiecarei litere este: %d\n", aparitie(sir, nrCuv));

    int pozitie;
    printf("Care cuvant sa fie sters? (zi pozitia acelui cuvant!!)");
    scanf("%d", &pozitie);
    stergereCuv(sir, nrCuv, pozitie - 1);

    printf("Sirul dupa stergerea cuvantului este: ");
    for (int i = 0; i < nrCuv; i++)
    {
        printf(" %s", sir[i]);
    }

    return 0;
}
