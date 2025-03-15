/*
Author:Căpățînă Ecaterina-Mihaela
Date:28.11.2023

Description: Scrieti un program ın C pentru a gasi patratul oricarui numar folosind
functii.

INPUT:num
OUTPUT:num*num
*/
#include <stdio.h>
#include <stdlib.h>

square_num(int num){
return num*num;
}

int main()
{
    int num;
    printf("Introduceti numarul: ");
    scanf("%d", &num);

    int result = square_num(num);
    printf("Patratul numarului este: %d", result);
    return 0;
}
