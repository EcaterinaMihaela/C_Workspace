#include <stdio.h>
#include <stdlib.h>
void citireVector(int array[], int SIZE)
{
    for(int i=0; i<SIZE; i++)
    {
        printf("array[%d]=", i+1);
        scanf("%d", &array[i]);
    }
}

void afisareVector(int array[], int SIZE)
{
    for(int i=0; i<SIZE; i++)
    {
        printf("%d ", array[i]);
    }
}

///cautarea liniara
void cautareaLiniara(int array[], int target)
{
    int SIZE;
    for(int i=0; i<SIZE-1; i++)
    {
        if(array[i] == target)
        {
            return i;
        }
        return -1;
    }
}

int main()
{
   int n;
   //int A[n];

   printf("n= ");
   scanf("%d", &n);

   ///alocare de memorie
   int *A = (int *)malloc(n * sizeof(int));
   if(A == NULL)
   {
       printf("Memory allocation failled");
       return -1;
   }
   citireVector(A, n);
   afisareVector(A , n);

   free (A);

   int target;
   printf("target=");
   scanf("%d", &target);
   cautareaLiniara(A, n);

   int pozitie = cautareaLiniara(A ,target);
   if(pozitie != -1)
   {
       printf("Numarul a fost gasit la pozitia %d", pozitie+1)

   }
   else
   {
       printf("Numarul nu a fost gasit");
   }
    return 0;
}
