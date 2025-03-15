#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Scriem si citim laturile triunghiului
    //aria= radical din p(p-a)(p-b)(p-c)  p=(a+b+c)/2
    float AB;
    float BC;
    float AC;

    printf("Prima latura a triunghiului are lungimea de: ");
    scanf("%f", &AB);

    printf("A doua latura a triunghiului are lungimea de: ");
    scanf("%f", &BC);

    printf("A treia latura a triunghiului are lungimea de: ");
    scanf("%f", &AC);

    float sp = (AB+AC+BC)/2; //sp-semiperimeter
    float area = sqrt(sp*(sp-AB)*(sp-AC)*(sp-BC));

    printf("aria este : %f\n", area);
    return 0;
}
