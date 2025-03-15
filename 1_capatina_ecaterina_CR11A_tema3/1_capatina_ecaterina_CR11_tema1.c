/*
Author: Căpățînă Ecaterina-Mihaela
Date: 31.10.2023

Description: Scrieti un program care citeste de la tastatura un caracter si afiseaza codul
sau ASCII.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caracter;
    printf("Introdu cararcterul: ");
    scanf("%c", &caracter);

    printf("Caracterul %c scris in ASCII va fii: %d\n", caracter, caracter);
    return 0;
}
