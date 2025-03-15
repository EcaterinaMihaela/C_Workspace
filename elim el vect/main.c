#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{
    int array[SIZE]={1,2,3,4,5};
    for(int i=0; i<SIZE; i++)
    {
        printf(" %d", array[i]);
    }
/*
///metoda 1
    int contor = 0;
    printf("\n elemente pare: ");
    for(int i=0; i<SIZE; i++)
    {
        if( array[i] % 2 == 0 )
        {
            printf(" %d", array[i]);
            contor++;
        }
    }

    printf("Vectorul are %d elemente pare", contor);
    */

///metoda 2
    int contor = 0;
    for(int i=0; i<SIZE; i++)
    {
        if( array[i] % 2 == 0 )
        {
            contor++;
        }
    }

    int vectorNou[contor];
    for(int i=0; i<SIZE; i++)
    {
        if( array[i] % 2 == 0 )
        {
            vectorNou[i] = array[i];
            printf(" %d", vectorNou[i]);
        }
    }
    return 0;
}
