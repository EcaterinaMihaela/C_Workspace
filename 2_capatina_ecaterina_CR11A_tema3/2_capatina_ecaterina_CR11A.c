/*
Author:Căpățînă Ecaterina-Mihaela
Date:21.11.2023

Description:Se citeste un vector a cu n elemente numere naturale. Sa se elimine din
toate elementele vectorului cifrele impare si sa se afiseze vectorul astfel
obtinut.

*/

#include <stdio.h>
#include <stdlib.h>

int par(int numar) {
    return numar % 2 == 0;
}

//functie pt elim cif impare
void eliminare_cifre_impare(int vector[], int lungime)
{
    for(int i=0; i<lungime; i++)
    {
        int numar = vector[i];  //nr de elemente
        int numarFiltrat = 0;
        int putere = 1;

        while (numar > 0)
        {
            int cifra = numar % 10;
            numar = numar / 10;     //eliminare cele impare

            if (par(cifra))
            {
                numarFiltrat = cifra * putere + numarFiltrat;
                putere *= 10;
            }
        }

        vector[i] = numarFiltrat;
    }
}

//functie pt afisare vector
void afisare_vector(int vector[], int lungime)
{
    for (int i = 0; i < lungime; i++)
    {
        printf("%d ", vector[i]);
    }
    printf("\n");
}
int main()
{
    int lungime;
    printf("Introdu dimensiunea vectorului:");
    scanf("%d", &lungime);

    int vector[lungime];
    for(int i=0; i<lungime; i++)
    {
        printf("vector[ %d ]=",i);
        scanf("%d", &vector[i]);
    }

    printf("Vectorul este:");
    afisare_vector(vector, lungime);

    eliminare_cifre_impare(vector, lungime);
    printf("Vectorul dupa eliminare elemente impare este:");
    afisare_vector(vector, lungime);
    return 0;
}
