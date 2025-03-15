/*
Author:Căpățînă Ecaterina-Mihaela
Date:04.11.2023

Description:Scrieti un program C pentru a citi doua numere de la tastatura si adunati-
le folosind pointeri.
*/
#include <stdio.h>
#include <stdlib.h>
///functie pt adunarea nr fol pointeri
void adunare_numere(int *a, int *b, int *s)
{
    *s = *a + *b;
}

int main()
{
   int a,b,suma;
   int *s = &suma;

   printf("Introduceti nr a :");
   scanf("%d", &a);
   printf("Introduceti nr b :");
   scanf("%d", &b);

   adunare_numere(&a,&b,s);
   printf("Suma celor doua numere este: %d", suma);
    return 0;
}
