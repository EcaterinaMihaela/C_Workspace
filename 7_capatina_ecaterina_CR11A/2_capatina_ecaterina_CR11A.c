/*
Author:Căpățînă Ecaterina-Mihaela
Date:01.11.2023

Description:Se dau lungimile laturilor unui triunghi ABC. Aflati lungimile bisectoarelor
duse din C, A, B.

INPUT:AB,AC,BC
OUTPUT:bisDinC ,bisDinA , bisDinB

Constraints:Aria nu poate avea doar valori intregi
            Necesar determinarii bisectoarelor,folosim semiperimerul si aria
*/
#include <stdio.h>
#include <math.h>

int main() {
    double AB,AC,BC;
    double s, A, bisDinC ,bisDinA , bisDinB;

    // Introduceți lungimile laturilor triunghiului ABC
    printf("Introduceti lungimile laturilor triunghiului ABC (a, b, c): ");
    scanf("%lf %lf %lf", &AB, &AC, &BC);

    // Calculează semiperimetrul
    s = (AB + AC + BC) / 2.0;

    // Calculează aria triunghiului folosind formula lui Heron
    A = sqrt(s * (s - AB) * (s - AC) * (s - BC));

    // Calculează bisectoarele
    bisDinC = (2 * sqrt(AC * BC * s * (s - AB))) / (AC + BC);
    bisDinA = (2 * sqrt(AC * AB * s * (s - BC))) / (AC + AB);
    bisDinB = (2 * sqrt(AB * BC * s * (s - AC))) / (AB + BC);

    // Afișează lungimile bisectoarelor
    printf("Lungimea bisectoarei duse din C: %.2lf\n", bisDinC);
    printf("Lungimea bisectoarei duse din A: %.2lf\n", bisDinA);
    printf("Lungimea bisectoarei duse din B: %.2lf\n", bisDinB);

    return 0;
}

