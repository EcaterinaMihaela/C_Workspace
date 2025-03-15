#include <stdio.h>
#include <stdlib.h>
#define SIZE 2
#define N 2
///citire vect
void citireVect(int *ptrArray)
{
    for(int i=0; i<SIZE; i++)
    {
        printf("array[%d]=", i+1);
        scanf("%d", (ptrArray+i));
    }
}
///afisare
void afisareVect(int *ptrArray)
{
    for(int i=0; i<SIZE; i++)
    {
        printf(" %d", *ptrArray+i);
    }
}

///citire
void citireMatrice(int *matrice)
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)

        {
            printf("matrice[%d][%d]=", i+1, j+1);
            scanf("%d", (matrice+i*N)+j);
        }
    }
}
///afisare
void afisareMatrice(int *matrice)
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)

        {
            printf(" %d", *((matrice+i*N)+j));
        }
        printf("\n");
    }
}
int main()
{
    int *ptrArray[SIZE];
    citireVect(ptrArray);
    printf("Vectorul este: \n");
    afisareVect(ptrArray);

    printf("\n");
    int *matrice[N][N];
    citireMatrice(matrice);
        printf("Matricea este: \n");
        afisareMatrice(matrice);
    return 0;
}
