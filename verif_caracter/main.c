#include <stdio.h>
#include <stdlib.h>

int main()
{
   char c;

   printf("caracterul este : "); //scriem si citim litera
   scanf("%c", &c);

   if((c>='a') && (c<='z') || (c>='A') && (c<='Z')){  //verificam daca apartine alfabetului
    printf("caracterul introdus este o litera ");
   }
    else{
        printf("caracterul introdus nu este o litera ");
    }
    return 0;
}
