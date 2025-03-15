#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
#define N 2

///folosirea pointerilor in afisarea unui vector
void vectorPointer(int *ptrVect)
{
    for(int i=0; i<SIZE; i++)
    {
        printf("vector[%d]=", i+1);
        scanf("%d", ptrVect+i);
    }
}

///afisarea vect cu pointeri:
void afisareVect(int *ptrVect)
{
    for(int i=0; i<SIZE; i++)
    {
        printf(" %d", *ptrVect+i);
    }
}
///functie pt citirea matricei de tip pointer
void citireMatrice(int *matrixP)
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            printf("matrixP[%d][%d]=", i+1, j+1);
            scanf("%d", (matrixP+i*N)+j);
        }
    }
}

///afisarea matricii
void afisareMatrice(int *matrixP)
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            printf(" %d", *((matrixP+i*N)+j));
        }
        printf("\n");
    }
}
int main()
{

    ///pointeri
//    int x = 5;
//    int y = 4;
//    int *ptr = &x;
//
//    printf("x=%d\n", x); ///valoarea lui x
//    printf("adresa lui x : %d\n", &x);
//    printf("y=%d\n", y); ///valoarea lui y
//    printf("adresa lui y : %d\n", &y);
//
//    printf("adresa pointerului %d\n", ptr);
//    printf("valoarea pointerului %d\n", *ptr);
//    printf("adresa pointerului %d\n ", &ptr);

    int *array[SIZE];
    vectorPointer(array);
    printf("Vectorul este: ");
    afisareVect(array);

    printf("\n"); //spatiu intre matrice si vect
    ///matrice cu pointeri
    //declarare matrice de tip pointer cu N linii si N coloane
    int *matrixP[N][N];
    citireMatrice(matrixP);
    printf("MAtricea este :\n");
    afisareMatrice(matrixP);

    return 0;
}
