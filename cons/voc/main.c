#include <stdio.h>
#include <stdlib.h>

int main()
{
   char c;

   printf("Litera este : "); //scriem si citim caracterul
   scanf("%c", &c);

   if((c>='a') && (c<='z') || (c>='A') && (c<='Z')){  //verificam daca apartine alfabetului,adica daca e litera
    printf("Caracterul introdus este o litera \n");

    if((c=='A') || (c=='a') || (c=='e') || (c=='E') || (c=='i') || (c=='I') || (c=='O') || (c=='o') || (c=='u') || (c=='U')){
    printf("Litera este o vocala \n");    //verificam daca e vocala sau consoana
   }else{
   printf("Litera nu este o vocala ,e o consoana");
   }

   }
    else{
        printf("caracterul introdus nu este o litera ");
    }
return 0;
}
