/*
Author:Căpățînă Ecaterina-Mihaela
Date:28.11.2023
Description:Se citeste un vector V cu n elemente numere naturale. Verificati daca
elementele vectorului alterneaza ca paritate, adica oricare doua elemente
alaturate au paritati diferite. Raspunsul va fi DA in caz afirmativ, altfel
va fi NU. Folositi minim 2 functii in afara de functia main.
Exemple: n=6, V=34, 56, 77, 733, 44, 3 =¿ NU
n=6, V=33, 56, 77, 734, 45, 34 =¿ DA
*/


#include <stdio.h>
#include <stdlib.h>
void afisare_vector(int vector[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", vector[i]);
    }
    printf("\n");
}

int verificare_alternare(int vector[], int n)
{
    for(int i=0; i<n; i++)
    {
        if((vector[i]%2==0 && vector[i-1]%2==0) || (vector[i]%2!=0 && vector[i]%2!=0))
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    printf("Introdu numarul de elemente: ");
    scanf("%d", &n);

    int vector[n];
    printf("Introdu elementele vectorului:\n");
    for (int i = 0; i < n; i++)
    {
        printf("vector[%d]=", i);
        scanf("%d", &vector[i]);
    }

    printf("Vectorul este:");
    afisare_vector(vector,n);
    int rezultat = verificare_alternare(vector,n);
    if (rezultat == 1)
    {
        printf("DA\n");
    }
    else
    {
        printf("NU\n");
    }

    return 0;
}
