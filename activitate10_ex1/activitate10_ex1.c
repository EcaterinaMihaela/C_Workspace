#include <stdio.h>
#include <stdlib.h>

struct Info_Studenti
{
    int n;
    char nume[50];
    float note[5];
};

int main()
{
   int n;
   FILE *fptr;
   struct Info_Studenti studenti;

   fptr = fopen("studenti.txt", "a+");

   if(fptr == NULL)
   {
       printf("Nu s-a putut deschide fisierul");
       return 1;
   }

   printf("Introduceti numarul de studenti: ");
   scanf("%d", &n);
   studenti.n = n;

   for(int i = 0; i < n; i++)
   {
       printf("Numele studentului %d este: ", i + 1);
       scanf("%s", studenti.nume);

       printf("Nota studentului %d este: ", i + 1);
       scanf("%f", &studenti.note[i]);

       // Adăugarea datelor în fișier
       fprintf(fptr, "%s %.2f\n", studenti.nume, studenti.note[i]);
   }

   fclose(fptr);
   return 0;
}
