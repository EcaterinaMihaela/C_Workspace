/*
Author:Căpățînă Ecaterina-Mihaela
Date:21.11.2023

Description:Interschimbarea primului element cu al doilea,al treilea cu al 4 lea...

Constraints:1.Parcurgerea vectorului a.i sa interschimbam elementele 2 cate 2
            2.Interschimbarea are loc doar pt nr de elem par
*/
#include <stdio.h>
#include <stdlib.h>

// functie pentru interschimbarea valorilor vectorului
void interschimbare(int vector[],int lungime)
{
    for(int i=0; i<lungime-1; i+=2)
    {
        int auxiliara=vector[i];
        vector[i]=vector[i+1];
        vector[i+1]=auxiliara;
    }
}

//functie pentru afisarea vectorului:
void afisare_vector(int vector[],int lungime)
{
    for(int i=0; i<lungime; i++)
    {
        printf("%d", vector[i]);
        printf("\n");
    }
}
int main()
{
    int lungime;
    printf("Introdu dimensiunea vectorului(Vectorul trebuie sa aibe nr par de elemente):");
    scanf("%d", &lungime);

    if(lungime%2 !=0)
    {
        printf("A-ti introdus nr de elemente impar");
    }
    else
    {
        int vector[lungime];
    for(int i=0; i<lungime; i++)
        {
            printf("vector[ %d ]=",i);
            scanf("%d", &vector[i]);
        }

    printf("Vectorul initial este:");
    afisare_vector(vector,lungime);

    interschimbare(vector , lungime);

    printf("Vectorul interschimbat este:");
    afisare_vector(vector,lungime);
    }
    return 0;
}
