#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaram si initializam coordonatele unui punct A(xa,ya) pentru a afla  cadranul in care se afla punctul
    int xa;
    int ya;

    printf("Prima coordonata a punctului este :");
    scanf("%d", &xa);

    printf("A doua coordonata a punctului este :");
    scanf("%d", &ya);

    if((xa>0) && (ya>0)){
    printf("Punctul apartine cadranului 1 ");
    }else if((xa<0) && (ya>0)){
    printf("Punctul apartine cadranului 2");
    }else if((xa<0) && (ya<0)){
    printf("Punctul apartine cadranului 3");
    }else{
    printf("Punctul apartine cadranului 4");
    }
    return 0;
}
