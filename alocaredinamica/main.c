#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
void citire(int array[SIZE])
{
    for(int i=0; i<SIZE; i++)
    {
        printf("array[%d]=",i+1);
        scanf("%d", &array[i]);
    }
}
void afisare(int array[SIZE])
{
    for(int i=0; i<SIZE; i++)
    {
        printf("%d ", array[i]);
    }
}

int main()
{
    int *array = (int *)malloc(SIZE*sizeof(int));
    if(array == NULL)
    {
        printf("Eroare la alocarea de memorie");
        return -1;
    }
    citire(array);
    printf("Vectorul este: \n");
    afisare(array);
    free(array);
    return 0;
}
