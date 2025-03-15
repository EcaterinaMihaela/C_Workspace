#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,u,v;
    printf("Primul numar este:");
    scanf("%d", &a);

    printf("Al doilea numar este:");
    scanf("%d", &b);

    u = a % 10;
    printf("Ultima cifra a lui a este: %d\n", u);

    v = b % 10;
    printf("Ultima cifra a lui a este: %d\n", u);

    if( u==v ){
        printf("Numerele au aceasi ultima cifra");
    }else{
        printf("Numerele nu au aceasi ultima cifra");
    }
    return 0;
}
