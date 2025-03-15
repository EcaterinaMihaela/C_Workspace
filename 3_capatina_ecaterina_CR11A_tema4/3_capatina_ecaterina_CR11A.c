/*
Author:Căpățînă Ecaterina-Mihaela
Date:28.11.2023

Description:3. Se citesc un numar natural n si o cifra c. Eliminati toate aparitiile cifrei
c din numarul n si afisati numarul astfel obtinut. Se vor folosi functii.
Exemplu: n= 2345324 , c=2 rezulta numarul 34534

*/
#include <stdio.h>
#include <stdlib.h>

// Funcție pentru eliminarea cifrei 'c' din numărul 'n'
int elimina_cifra(int n, int c) {
    int rezultat = 0;
    int putere = 1;

    while (n > 0) {
        int cifra = n % 10; // Extrage ultima cifră din numărul dat
        n /= 10;

        if (cifra != c) {
            rezultat += cifra * putere;
            putere *= 10;
        }
    }

    // Dacă nu s-a găsit nicio cifră diferită de 'c', rezultatul va fi 0
    if (rezultat == 0) {
        return 0;
    }

    // Se revine numărul inversat, de aceea trebuie să-l refacem
    int reversed = 0;
    while (rezultat > 0) {
        reversed = reversed * 10 + rezultat % 10;
        rezultat /= 10;
    }

    return reversed;
}

int main()
{
   int n, c;
    printf("Introdu un numar natural: ");
    scanf("%d", &n);

    printf("Introdu o cifra pentru eliminare: ");
    scanf("%d", &c);

    int rezultat = elimina_cifra(n, c);

    printf("Numarul fara cifra %d este: %d\n", c, rezultat);
    return 0;
}
