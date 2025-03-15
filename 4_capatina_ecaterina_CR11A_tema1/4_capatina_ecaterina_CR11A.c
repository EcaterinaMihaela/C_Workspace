/*
Author:Căpățînă Ecaterina-Mihaela
Date:31.10.2023

Description:Daca x si y sunt doua numere naturale cu x ≤ y, atunci notam cu s(x,y)
suma numerelor naturale cuprinse ıntre x si y. De exemplu, s(3,6) =
3+4+5+6 = 18, iar s(7,7) = 7. Se dau numerele naturale a, b s, i c, unde
a ≤ b ≤ c. Calculati s(a,b), s(b,c) s, i s(a,c).

INPUT:a,b,c
OUTPUT:sum_ab ,sum_ac ,sum_bc

Constraints:x<=y
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Introduceti numerele: \n");

    printf("Introduceti valoarea lui a: ");
    scanf("%d", &a);

    printf("Introduceti valoarea lui b: ");
    scanf("%d", &b);

    printf("Introduceti valoarea lui c: ");
    scanf("%d", &c);

    int sum_ab = 0;
    int sum_ac = 0;
    int sum_bc = 0;

    for(int i=a; i<=b; i++){          //pentru a<=b calculam suma s(a,b)
        sum_ab = sum_ab + i;
    }

    for(int i=a; i<=c; i++){          //pentru a<=c calculam suma s(a,c)
        sum_ac = sum_ac + i;
    }

    for(int i=b; i<=c; i++){          //pentru b<=c calculam suma s(b,c)
        sum_bc = sum_bc +i;
    }

    printf("Sumele sunt: %d %d %d", sum_ab ,sum_ac ,sum_bc);      //afisam sumele
    return 0;
}
