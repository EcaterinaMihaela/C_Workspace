#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
#define N 3
#define M 3

int main()
{
    int array[SIZE];
    for(int i=0; i<SIZE; i++)
    {
        printf("array[%d]=", i+1);
        scanf("%d", &array[i]);
    }

    printf("Vectorul este: ");
    for(int i=0; i<SIZE; i++)
    {
        printf(" %d\n", array[i]);
    }

    int matrix[N][M];
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            printf("matrix[%d][%d]=", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matricea este: \n");
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            printf(" %d", matrix[i][j]);
        }
        printf("\n");
    }

    ///afisarea sumei elementelor de pe diagonala principala
    int sum = 0;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            if(i==j)
            {
                sum = sum + matrix[i][j];
            }
        }
    }
    printf("Suma este: %d\n", sum);

    ///afisarea produsului elementelor de pe diagonala secundara
    int prod = 1;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            if(i+j==N-1)
            {
                prod = prod * matrix[i][j];
            }
        }
    }
    printf("Produsul elementelor de pe diag sec este: %d\n", prod);

    ///afisarea elementelor de sub diag sec
    int vector[3];
    int k=0;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            if(i>j)
            {
                vector[k] = matrix[i][j];
                k++;
            }
        }
    }
    ///si afisarea :
    printf("Vectorul care retine valorile de dedesupt de diag principala sunt: \n");
    for(int i=0; i<3; i++)
    {
        printf(" %d", vector[i]);
    }
    return 0;
}
