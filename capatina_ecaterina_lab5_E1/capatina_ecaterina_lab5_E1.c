/*
Author:Căpățînă Ecaterina-Mihaela
Date:14.11.2023

Description:1. Se considera un numar natural n. Sa se realizeze un program C care
verifica daca n este par sau impar.

FREQS:Folosirea operatorilor pe biti

INPUT:Introducerea numarului
OUTPUT:Verificarea paritatii

Constraints:Operatorul care returneaza ultimul bit
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Intoduceti numarul:");
    scanf("%d", &num);

    if( num&1 )
    {
        printf("Numarul %d este impar", num);
    }
    else
    {
        printf("Numarul %d este par", num);
    }
    return 0;
}
