/*
Author:Căpățînă Ecaterina-Mihaela
Date:03.11.2023

Description: Fie sirul 1, 2, 3, 4, 5, 6, 7, ..., n, ... care ındeplineste regula de mai jos:
• 1 face parte din multimea numerotata cu 1.
• 2, 3 fac parte din multimea numerotata cu 2.
• 4, 5, 6 fac parte din multimea numerotata cu 3.
• 7, 8, 9, 10 fac parte din multimea numerotata cu 4
• Iar n face parte din multimea numerotata cu m.
Stiind numarul n, sa se afle m.

INPUT:n
OUTPUT:m
*/

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int m;

    // Introduceți numărul n
    printf("Introduceti numarul n: ");
    scanf("%d", &n);

    // Rezolvăm ecuația (m * (m + 1)) / 2 = n care e suma unei progresii aritmetice
    m = sqrt(2 * n + 0.25) - 0.5;

    // Afișăm rezultatul
    printf("Nuamrul %d face parte din multimea numerotata cu %d\n", n ,m);

    return 0;
}

