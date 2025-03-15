/*
Author:Căpățînă Ecaterina-Mihaela
Date:05.11.2023

Description:Scrieti un program C pentru a gasi inversul unui sir folosind pointeri.
*/
#include <stdio.h>
#include <stdlib.h>

void inversare_sir(char *sir)
{
    char *start = sir;
    char *stop = sir;

    // Găsim sfârșitul șirului
    while (*stop != '\0') {
        stop++;
    }
    stop--; // Sărim peste terminatorul '\0'

    // Inversăm șirul
    while (start < stop) {
        // Schimbăm caracterele de la început și sfârșit
        char temp = *start;
        *start = *stop;
        *stop = temp;

        // Mergem la următoarele caractere
        start++;
        stop--;
    }
}

int main()
{
    char sir[] = "Marti";
    printf("Sirul este: %s\n", sir);

    printf("Sirul inversat este: ");
    inversare_sir(sir);
    printf("%s\n", sir);

    return 0;
}
