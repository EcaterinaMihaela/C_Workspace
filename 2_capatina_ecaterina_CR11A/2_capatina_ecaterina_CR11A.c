#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
///functie pt copierea el unui vect in alt vector
void copiere_elemente(int *array, int *array1, size_t size)
{
    size_t i;
    for(i=0; i<size; i++)
    {
     *(array1 + i) = *(array + i);
    }
}
int main()
{
    int array[SIZE];
    int array1[SIZE];
    for(size_t i=0; i<SIZE; i++)
    {
        printf("array[%d]=",i);
        scanf("%d", &array[i]);
    }

    ///afisare vector
    for(size_t i=0; i<SIZE; i++)
    {
        printf("%d ", array[i]);
    }
    copiere_elemente(array, array1, SIZE);

    printf("Vectorul nou va fii: ");
    ///afisarea vectorului nou ce contine aceleasi elemente ca si primul:
     for(size_t i=0; i<SIZE; i++)
    {
        printf("%d ", array1[i]);
    }
    printf("\n");
    return 0;
}
