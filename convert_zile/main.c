#include <stdio.h>
#include <stdlib.h>

int main()
{
    int zile;  //declaram variabila care va retine numarul de zile ulterior convertite

    printf("Introdu numarul de zile: ");  //scriem si citim numarul de zile
    scanf("%d", &zile);

    int ani = zile/365;  //calculam numarul de ani
    int saptamani = (zile%365)/7;  //calculam numarul de saptamani
    int zile_ramase = (zile%365)%7;  //afisam numarul de zile ramase

    printf("%d zile sunt echivalente cu :\n", zile);
    printf("%d ani ,%d saptamani, %d zile_ramase\n", ani, saptamani, zile_ramase); //afisam rezultatele
    return 0;
}

