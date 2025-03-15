#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Introduceti numarul a: ");
    scanf("%d", &a);

    printf("Introduceti numarul b: ");
    scanf("%d", &b);

    int sum = a+b;

    if(a == b){
            printf("Cele doua numere sunt egale,returneaza triplul sumei: %d\n", 3*sum);
    }else{
    printf("Valorile sunt diferite,returneaza suma dintre ele: %d", sum);
    }
    return 0;
}
