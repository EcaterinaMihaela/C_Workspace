#include <stdio.h>
#include <stdlib.h>

int main()
{
   int SIZE, *p;
   printf("Size=");
   scanf("%d", &SIZE);

   p = (int *)malloc(SIZE * sizeof(int)); // Alocare de memorie pentru pointerul p

    if (p == NULL) {
        printf("Alocarea memoriei a esuat!");
        return -1;
    }

   for(size_t i=0; i<SIZE; i++)
   {
       printf("vector[%d]=", i);
       scanf("%d", (p+i));
   }

   for(size_t i=0; i<SIZE; i++)
   {
       printf("%d ",*(p+i));
   }
   printf("\n");

   free(p);
    return 0;
}
