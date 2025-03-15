/*
Author:Căpățînă Ecaterina-Mihaela
Date:03.11.2023

Description: Intr-un grup sunt N prieteni. Cand se ıntalnesc se saluta, fiecare dand
mana cu toti ceilalti. Cate stangeri de mana au loc?

INPUT:nr_prieteni
OUTPUT:total_strangeri

CONSTRAINTS:fiecare strângere de mână este numărată de două ori (o dată pentru fiecare din cei doi prieteni care se strâng de mână)
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nr_prieteni,total_strangeri;

    printf("Introdu numarul de prieteni din grup: \n");
    scanf("%d", &nr_prieteni);

    //Calculam formula :Număr total de strângeri de mână = N * (N - 1) / 2,unde N este numarul de prieteni

    total_strangeri = nr_prieteni * ( nr_prieteni - 1 ) / 2;

    printf("Numarul total de strangeri de mana este :%d", total_strangeri);
    return 0;
}
