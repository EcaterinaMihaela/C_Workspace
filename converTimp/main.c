#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secunde;

    //scriem/citim numarul de secunde introdus de la tastatura
    printf("Introdu numarul de secunde: ");
    scanf("%d", &secunde);

    int ore = secunde/3600;
    int minute = (secunde%3600)/60;
    int secunde_ramase = (secunde%3600)%60;

    printf("%d secunde inseamna : \n", secunde);
    printf("%d ore, %d minute ,%d secunde_ramase\n" , ore, minute, secunde_ramase);
    return 0;
}

