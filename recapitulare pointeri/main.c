#include <stdio.h>
#include <stdlib.h>
#define N 3
#define M 3

///fctie pt citire
int citireVectori(int *ptr, int SIZE)
{
     for (int i = 0; i < SIZE; i++) {
        printf("array[%d] = ", i + 1);
        scanf("%d", ptr+i);
    }

}
///functie pt afisarea vect
int afisareVectori(int *ptr, int SIZE)
{
    ///afisarea cu pointeri
    for (int i = 0; i < SIZE; i++) {
       printf("%d " , *(ptr+i));
    }
}
///functie pt citirea matricii
void citireMatrice(int matrice[M][N])
{
    for(size_t i=0; i<M; i++)
    {
        for(size_t j=0; j<N ;j++)
        {
            printf("matrice[%d][%d]=",i,j);
            scanf("%d", &matrice[i][j]);
        }
    }
}

///functie pt afisarea unei matrici
void afisareMatrice(int matrice[M][N])
{
    for(size_t i=0; i<M; i++)
    {
        for(size_t j=0; j<N; j++)
        {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }
}

///functie pt citirea unei matrici cu pointeri
void matricePointer(int *pointer)
{
    for(size_t i=0; i<M; i++)
    {
        for(size_t j=0; j<N ;j++)
        {
            printf("matrice2[%d][%d]=",i,j);
            scanf("%d", (pointer+i*N)+j);
        }
    }
}
///functie pt afisarea unei matrici cu pointeri
void afisMatrPointer(int *pointer)
{
    for(size_t i=0; i<M; i++)
    {
        for(size_t j=0; j<N; j++)
        {
            printf("%d ", *((pointer+i*N)+j));
        }
        printf("\n");
    }
}

int main()
{
    ///afisarea unui vector cu pointerri
    int SIZE;
    printf("SIZE = ");
    scanf("%d", &SIZE);
    int array[SIZE];
    int *ptr;
    ptr = array;
    citireVectori(ptr, SIZE);
    printf("Vectorul este: ");
    afisareVectori(ptr, SIZE);

    ///alt vector:
    int array2[SIZE];
    int *ptr2 = array2;

    citireVectori(ptr2, SIZE);
    printf("Vectorul este: ");
    afisareVectori(ptr2, SIZE);

    ///CITIRE SI AFISARE MATRICE
    int matrice[M][N];

    citireMatrice(matrice);
    printf("asisare matrice :\n");
    afisareMatrice(matrice);

    ///alta matrice tip pointer
    int matrice2[M][N];
    int *pointer = matrice2;
    matricePointer(pointer);
    printf("Matricea de tip pointer este: \n");
     afisMatrPointer(pointer);

    return 0;
}
