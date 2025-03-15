#include <stdio.h>
#include <stdlib.h>

#define N 3

void citireMatrice(int array[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("array[%d][%d]= ", i + 1, j + 1);
            scanf("%d", &array[i][j]);
        }
    }
}

void afisareMatrice(int array[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

void interschimbareDiagonale(int array[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j || i + j == N - 1)
            {
                int temp = array[i][j];
                array[i][j] = array[i][N - 1 - i];
                array[i][N - 1 - i] = temp;
            }
        }
    }
}

int main()
{
    int array[N][N];

    citireMatrice(array);
    printf("Matricea initiala este: \n");
    afisareMatrice(array);

    interschimbareDiagonale(array);

    printf("\nMatricea dupa schimbarea diagonalelor este: \n");
    afisareMatrice(array);

    return 0;
}
