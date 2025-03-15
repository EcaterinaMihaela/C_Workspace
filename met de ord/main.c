#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

void citireVect(int vector[])
{
    for(int i = 0; i < SIZE; i++)
    {
        printf("vector[%d]=", i + 1);
        scanf("%d", &vector[i]);
    }
}

void afisareVect(int vector[])
{
    for(int i = 0; i < SIZE; i++)
    {
        printf(" %d", vector[i]);
    }
}

void Swap(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

///ordonare vector
void ordonareBubble(int vector[])
{
    for(int i = 0; i < SIZE; i++)
    {
        for(int j = 0; j < SIZE - i - 1; j++)
        {
            if(vector[j] > vector[j+1])
            {
                Swap(&vector[j], &vector[j+1]);
            }
        }
    }
}

void ordonareSelection(int array[])
{
    for(int i=0; i<SIZE-1; i++)
    {
        int min = i;
        for(int j=i+1; j<SIZE; j++)
        {
            if(array[j]< array[min])
            {
                min=j;
            }
            if(min==i)
            {
                Swap(&array[min], &array[i]);
            }
        }

    }
}
int main()
{
    int vector[SIZE];
    citireVect(vector);
    afisareVect(vector);

    printf("\nvectorul ordonat este: ");
    ordonareBubble(vector);
    afisareVect(vector);

    printf("selection sort");
    ordonareSelection(vector);
    afisareVect(vector);


    return 0;
}
