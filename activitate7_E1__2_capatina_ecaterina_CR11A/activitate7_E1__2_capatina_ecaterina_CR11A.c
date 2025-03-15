/*
Author:Căpățînă Ecaterina-Mihaela
Date:28.11.2023

Description:Scrieti un program ın C pentru a verifica daca un anumit numar este par
sau impar folosind functii.
*/

#include <stdio.h>
#include <stdlib.h>

paritate(int num)
{
    if(num%2==0)
    {
        return 0;  //o daca nr e par
    }
    else
    {
        return 1;  //1 daca nr e impar
    }
}

int main()
{
    int num;
    printf("Introduceti numarul: ");
    scanf("%d", &num);

    int result=paritate(num);
    if(result == 0)
        printf("Numarul e par");
    else
        printf("Numarul e impar");
    return 0;
}
