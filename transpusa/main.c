#include <stdio.h>
#include <stdlib.h>
#define N 3
#define M 3

void citire(int **array)
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            printf("array[%d][%d]=", i+1,j+1);
            scanf("%d", &array[i][j]);
        }
    }
}
void afisare(int **array)
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

void transpusa(int **array)
{
    for(int i=0; i<M; i++)
    {
        for(int j=0; j<N; j++)
        {
            printf("%d ", array[j][i]);
        }
        printf("\n");
    }
}
int main()
{
    int **array = (int **)calloc(N,sizeof(int *));
    for(int i=0; i<N;i++)
    {
        array[i] = (int *)calloc(M,sizeof(int));
    }
    citire(array);
    printf("\nThe array is: \n");
    afisare(array);
    transpusa(array);
    for(int i=0; i<N; i++)
    {
        free(array[i]);
    }
    free(array);
    return 0;
}
