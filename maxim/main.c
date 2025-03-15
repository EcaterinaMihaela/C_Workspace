#include <stdio.h>
#include <stdlib.h>

int main()
{   //se citesc 3 valori
    int a,b,c;

    printf("a= ");
    scanf("%d", &a);

    printf("b= ");
    scanf("%d", &b);

    printf("c= ");
    scanf("%d", &c);

    //se compara valorile si returneaza valoarea cea mai mare
    if((a>b) && (a>c)){
        printf("a ul este maxim");
    }else if((b>a) && (b>c)){
    printf("b-ul este maxim");
    }else{
    printf("c ul este maxim");
    }
    return 0;
}
