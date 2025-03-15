/*
Author:Căpățînă Ecaterina-Mihaela
Date:20.11.2023

Description:Gasiti un element dintr un vector(citit de la tastatura) cu cautarea liniara

FREQS:

INPUT:
OUTPUT:

Constraints:
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dimensiune;
    printf("Introduceti dimensiunea vectorului\n");
    printf("dimensiune= ");
    scanf("%d", &dimensiune);

    int array[dimensiune];
    for(int i=0; i<dimensiune; i++)
    {
        printf("array[%d",i);
        printf("]=");
        scanf("%d",&array[i]);
    }

    printf("Vectorul este: ");
    //Afisare vector
    for(int i=0; i<dimensiune; i++)
    {
        printf("%d\n", array[i]);
    }

    //GASIM UN ANUMIT ELEMENT DIN VECTOR CU CAUTAREA LINIARA:
    int target;
    printf("Ce element se doreste a fii gasit?");
    scanf("%d", &target);

    //Parcurgem vectorul
    int found=0;
    for(int i=0; i<dimensiune; i++)
    {
            if(array[i]==target)
            {
                printf("Elementul %d se gaseste in vector si se afla pe pozitia %d", target,i);
                found=1;
            }
    }
    if(!found)
    {
            printf("Elementul nu se afla in vector");
    }
    return 0;
}
