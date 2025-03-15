#include <stdio.h>
#include <stdlib.h>

#define N 3
#define M 3

void citireMatrice(int matrice[N][M])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("matrice[%d][%d]=", i + 1, j + 1);
            scanf("%d", &matrice[i][j]);
        }
    }
}

void afisareMatrice(int matrice[N][M])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", matrice[i][j]);
        }
        printf("\n"); // Add a newline after each row
    }
}

void transpusa(int matrice[N][M], int matriceTr[N][M])
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            matriceTr[j][i]==matrice[i][j];
        }
    }
}
int main()
{
    int matrice[N][M];
    citireMatrice(matrice);
    printf("Matricea este:\n");
    afisareMatrice(matrice);
    int matriceTr[N][M];
    afisareMatrice(matriceTr);
    return 0;
}
