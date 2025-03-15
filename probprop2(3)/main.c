#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,b;

    printf("Prima valoare este: ");
    scanf("%d" ,&a);

    printf("A doua valoare este: ");
    scanf("%d" ,&b);

    if( ((a>=20) && (a<=30)) || ((b>=20) && (b<=30)) ){
       if(a<=b){
         printf("Valoarea cea mai mare este:%d", b);
         }else{
           printf("Valoarea cea mai mare este:%d", a);
        }
    }else{
        printf("Negasit");
        }
    return 0;
}
