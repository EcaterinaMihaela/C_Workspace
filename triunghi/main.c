#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int a,b,c;
   printf("a= ");   //scriem si citim a
   scanf("%d", &a);

   printf("b= ");
   scanf("%d", &b);  //scriem si citim b

   printf("c= ");
   scanf("%d", &c);   //scriem si citim c

   if(a=b=c){
    printf("triunghiul este echilateral");
   }else if(a=b){
   printf("triunghiul este isoscel");
   }else if( pow(c,2) = (pow(a,2)+pow(b,2)) ){
   printf("triunghiul este dreptunghic ");
   }else{
   printf("triunghiul este oarecare");
   }
    return 0;
}
