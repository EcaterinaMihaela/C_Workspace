#include <stdio.h>
#include <stdlib.h>

#define SIZE 3
#define ROW 3
#define COLS 3

/// citire cu pointer
void citireVector(int *ptr)
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("vector[%d] = ", i + 1);
        scanf("%d", ptr + i);
    }
}

/// afisare vector cu pointer
void afisareVector(int *ptr)
{
    for (int i = 0; i < SIZE; i++)
    {
        printf(" %d", *(ptr + i));
    }
}

/// permutare vector la stanga
void permutare(int vector[])
{
    for (int i = 0; i < SIZE; i++)
    {
        int temp = vector[0];
        for (int j = 0; j < SIZE - 1; j++)
        {
            vector[j] = vector[j + 1];
        }
        vector[SIZE - 1] = temp;
    }
}

/// permutare vector la dreapta
void permutaredr(int vector[])
{
    for (int i = 0; i < SIZE; i++)
    {
        int temp = vector[SIZE - 1];
        for (int j = SIZE - 1; j > 0; j--)
        {
            vector[j] = vector[j - 1];
        }
        vector[0] = temp;
    }
}

int main()
{
    int vector[SIZE];

    // Citirea si afisarea initiala a vectorului
    printf("Introduceti valorile pentru vector:\n");
    citireVector(vector);
    printf("Vectorul initial este: ");
    afisareVector(vector);
    printf("\n");

    // Permutare la stanga
    printf("Permutare la stanga:\n");
    permutare(vector);
    printf("Vectorul permutat la stanga este: ");
    afisareVector(vector);
    printf("\n");

    // Permutare la dreapta
    printf("Permutare la dreapta:\n");
    permutaredr(vector);
    printf("Vectorul permutat la dreapta este: ");
    afisareVector(vector);
    printf("\n");

    return 0;
}
