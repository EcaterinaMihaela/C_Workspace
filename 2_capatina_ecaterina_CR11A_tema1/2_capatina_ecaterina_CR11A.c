/*
Author:Căpățînă Ecaterina-Mihaela
Date:31.10.2023

Description:Fiind date doua numere naturale x si y determinati valoarea care trebuie
adunata la x pentru a obtine triplul lui y.

INPUT:x,y
OUTPUT:z

Constraints:
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    printf("Introduceti primul numar: ");
    scanf("%d", &x);

    printf("Introduceti al doilea numar: ");
    scanf("%d", &y);

    z = 3 * y - x;
    printf("Valoarea care trebuie adunata la x pentru a obtine triplul lui y este: %d\n", z);
    return 0;
}
