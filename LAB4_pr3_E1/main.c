#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    printf("Introdu primul numar: ");
    scanf("%d", &num1);

    printf("Introdu al doilea numar: ");
    scanf("%d", &num2);

    int a=num1;
    int b=num2;

    while(b != 0){
       int aux = b;
        b = a % b;
        a = aux;
    }

    printf("CMMDC al numerelor %d %d este %d", num1, num2, a);
    return 0;
}
