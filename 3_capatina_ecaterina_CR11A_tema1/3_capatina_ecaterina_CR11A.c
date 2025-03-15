/*
Author:Căpățînă Ecaterina-Mihaela
Date:31.10.2023

Description:Pe planeta Marte banii sunt altfel decat la noi. Exista 3 tipuri de monede:
primul tip de moneda valoreaza a lei martieni, al doilea tip valoreaza b lei
martieni, iar al treilea tip de moneda valoreaza c lei martieni. Martianul
Iggle are n monede de primul tip, m monede de al doilea tip si p monede
de al treilea tip. Cati lei martieni are Iggle?

INPUT:n,m,p,a,b,c
OUTPUT:total

Constraints:
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,p,a,b,c;
    printf("Cate monede de primul tip va avea Igle? \n");
    scanf("%d", &n);

    printf("Cate monede va avea Igle de al doilea tip? \n");
    scanf("%d", &m);

    printf("Cate monede va avea Igle de al treilea tip? \n");
    scanf("%d", &p);

    printf("Cati lei martieni valoreaza primul tip de moneda? \n");
    scanf("%d", &a);

    printf("Cati lei martieni valoreaza al doilea tip de moneda? \n");
    scanf("%d", &b);

    printf("Cati lei martieni valoreaza al treilea tip de moneda? \n");
    scanf("%d", &c);

    int total = (n*a) + (m*b) + (p*c);
    printf("Igle va avea in total %d lei martieni", total);
    return 0;
}
