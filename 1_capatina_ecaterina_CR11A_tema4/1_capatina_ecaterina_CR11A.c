/*
Author:Căpățînă Ecaterina-Mihaela
Date:28.11.2023

Description:Scrieti un program C unde introduceti raza cercului de la tastatura si
gasiti diametrul, circumferinta si aria cercului dat folosind functii.

INPUT:raza
OUTPUT:aria,circumferinta,diametru

*/
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

//functie pentru calcularea diametrului
int diametru(int radius)
{
    int D = 2*radius;
    return D;
}

//functie pt calcularea ariei
float area(int radius)
{
    float A = PI * pow(radius,2);
    return A;
}

//functie pt calcularea circumferintei cercului
float circumference(int radius)
{
    float L = 2*PI*radius;
    return L;
}
int main()
{
    int radius;
    printf("radius= ");
    scanf("%d", &radius);

    int diam = diametru(radius);
    printf("Diametrul este: %d\n", diam);

    float Area = area(radius);
    printf("Aria cercului este: %.2lf\n", Area);

    float Circumference = circumference(radius);
    printf("Circumferinta cercului este: %.2lf", Circumference);

    return 0;
}
