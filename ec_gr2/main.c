//CALCULATII SOLUTIILE ECUATIEI DE GRADULL 2
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

//forma ecuatiei de gradul 2 este: ax^2+bx+c=0

int a,b,c,delta,x1,x2;

printf("coeficientul din fata lui x patrat este: ");
scanf("%d",&a);

printf("coeficientul din fata lui x este: ");
scanf("%d",&b);

printf("coeficientul liber este : ");
scanf("%d",&c);

delta=b*b-4*a*c; //calculam delta

if(delta >= 0){
x1 = (-b-sqrt(delta))/2*a;
x2 = (-b+sqrt(delta))/2*a; //calculam solutiile reale
printf("solutiile sunt: %d",x1,x2);
}

else{
    printf("ecuatia nu are solutii reale ,are solutii complexe! %d");
}

return 0;



}
