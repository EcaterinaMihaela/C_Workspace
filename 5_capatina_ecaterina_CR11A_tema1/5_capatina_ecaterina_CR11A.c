/*
Author:Căpățînă Ecaterina-Mihaela
Date:31.10.2023

Description:Daca elevii unei clase se aseaza cate n ıntr-o banca, vor ramane e elevi
ın picioare, iar daca se aseaza cate m ıntr-o banca, vor ramane b banci
neocupate.
Care este numarul de elevi, respectiv de banci, din clasa respectiva?

INPUT:e,b
OUTPUT:e,b

Constraints:
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int e; // Numărul de elevi
    int b; // Numărul de bănci

    // Citim informațiile din enunț
    printf("Introduceti numarul de elevi care raman in picioare cand se aseaza cate unul pe banca: ");
    scanf("%d", &e);

    printf("Introduceti numarul de banci care raman neocupate cand se aseaza cate un elev pe banca: ");
    scanf("%d", &b);

    e = e + 1;
    b = b + 1;

    // Afișăm rezultatele
    printf("Numarul de elevi este: %d\n", e);
    printf("Numarul de banci este: %d\n", b);

    return 0;
}
