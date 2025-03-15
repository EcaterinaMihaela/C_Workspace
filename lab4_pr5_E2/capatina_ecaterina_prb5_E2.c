#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int u=0;
    int a=0;
    int numar_nou=0;

    //Introducem numarul de la tastatura
    printf("num= ");
    scanf("%d", &num);

    //Aflam prima si ultima cifra a sa
    u=num % 10;
    int k=0;
    while(num != 0){
        a=num % 10;
        num = num / 10;
        k++;
    }
    printf("Ultima cifra a numarului este: %d\n", u);
    printf("Numarul are %d cifre", k);
    printf("Prima cifra a numarului este: %d\n", a);

    int putere = 1;
    for (int i = 1; i < k; i++) {
        putere *= 10;
    }

    //Inversam prima si ultima cifra
    numar_nou = u * putere;
    numar_nou += num % putere;
    numar_nou += a;

    printf("Numarul cu prima si ultima cifra inversate este: %d\n", numar_nou);
    return 0;
}
