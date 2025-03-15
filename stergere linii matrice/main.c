#include <stdio.h>
#include <stdlib.h>
#define N 3
#define M 3

void afisareMatrice(int array[N][M])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf(" %d", array[i][j]);
        }
        printf("\n");
    }
}

void stergereLinie(int array[N][M],int newArray[N-1][M])
{
    for (int i = 0,k=0; i < N; i++)
    {
        if(i!=0)
        {
            for (int j = 0; j < M; j++)
            {
                newArray[k][j]=array[i][j];
            }
            k++;
        }
        else
            for (int j = 0; j < M; j++)
            {
                newArray[k][j]=array[i][j];
            }
            k++;
    }
}
int main()
{
    int array[N][M] = {{1, 2, 4}, {2, 3, 4}, {3, 6, 4}};

    printf("Matricea este: \n");
    afisareMatrice(array);

    // MATRICEA NOUA:
    int newArray[N-1][M];
    stergereLinie(array,newArray);
    printf("MAtricea noua este:\n");
    afisareMatrice(newArray);
    return 0;
}
