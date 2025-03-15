#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ID_angajat[20];   //declaram id ul,orele totale si suma pe ora angajatului
    int ore_totale;
    float suma_ora;

    printf("ID angajatului este :");   //scriem si citim id ul angajatului
    scanf("%s", &ID_angajat);

    printf("Angajatul a lucrat: ");     //scriem si citim numarul de ore totale
    scanf("%d", &ore_totale);

    printf("Angajatul a primit un salariu/ora de :");    //scriem si citim suma/ora primita
    scanf("%f", &suma_ora);

    float salariu = suma_ora*ore_totale;   //calculam salariul prin formula: suma/h ori ore in total

    printf("Salariul pe o luna a angajatului este : %.2f \n", salariu);   //afisam salariul angajatului intr o anumita luna
    return 0;
}
