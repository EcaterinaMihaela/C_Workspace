#include <stdio.h>
#include <stdlib.h>
#define SIZE 2
///functie pt citirea unui vector
void citireVector(int array[])
{
    for(int i=0; i<SIZE; i++)
    {
        printf("array[%d]=", i+1);
        scanf("%d", &array[i]);
    }
}

///functie pt afisarea unui vector
void afisareVector(int array[])
{
    for(int i=0; i<SIZE; i++)
    {
        printf(" %d", array[i]);
    }
}

int main()
{
    ///Vector declarat in main
    int array[SIZE];
    printf("Introduceti elementele vectorului 1: \n");
    for(size_t i=0; i<SIZE; i++)
    {
        printf("array[%d]=", i+1);
        scanf("%d", &array[i]);
    }

    printf("Vectorul 1 este: ");
    for(size_t i=0; i<SIZE; i++)
    {
        printf(" %d", array[i]);
    }
    printf("\n");    ///pt spatiu intre cei doi vectori

    printf("\nIntroduceti elementele vectorului 2: \n");
    ///Vector format din functii si apelat in main:
    citireVector(array);
    printf("Vectorul 2 este: ");
    afisareVector(array);
    return 0;
}
