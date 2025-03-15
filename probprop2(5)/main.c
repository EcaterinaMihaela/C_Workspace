#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Numarul a este:");
    scanf("%d", &a);

    printf("Numarul b este:");
    scanf("%d", &b);

    printf("Numarul c este:");
    scanf("%d", &c);

    int sum = a+b+c;

    if( a == b ){
        sum = c;
    }else if( a==c ){
    sum = b;
    }else if( b==c ){
    sum = a;
    }

    printf("Returnam, a treia valoare daca cele doua valori sunt aceleasi :%d", sum);
    return 0;
}
