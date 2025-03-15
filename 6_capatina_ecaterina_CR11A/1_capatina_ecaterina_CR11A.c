/*
Author:Căpățînă Ecaterina-Mihaela
Date:31.10.2023

Description:Se da un poligon regulat cu n laturi cu l lungimea unei laturi. Aflati aria
poligonului.

INPUT:nrLaturi,lungimeLat
OUTPUT:aria

Constraints:Aria nu poate avea doar valori intregi
*/

#include <stdio.h>
#include <math.h>

int main() {
    int nrLaturi;  // Numarul de laturi ale poligonului
    double lungimeLat; // Lungimea unei laturi
    double aria; // Aria poligonului

    // Citim numarul de laturi și lungimea laturii
    printf("Introduceti numarul de laturi ale poligonului: ");
    scanf("%d", &nrLaturi);

    printf("Introduceti lungimea unei laturi a poligonului: ");
    scanf("%lf", &lungimeLat);

    // Calculăm aria poligonului folosind formula:
    aria = (nrLaturi * pow(lungimeLat, 2)) / (4 * tan(M_PI / nrLaturi));

    // Afișăm rezultatul
    printf("Aria poligonului cu %d laturi si lungimea laturii %.2lf este: %.2lf\n", nrLaturi, lungimeLat, aria);

    return 0;
}
