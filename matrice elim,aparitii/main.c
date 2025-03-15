#include <stdio.h>
#include <stdlib.h>
#define N 3
#define M 3

void readingMatrix(int array[N][M])
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            printf("matrix[%d][%d]= " ,i+1, j+1);
            scanf("%d", &array[i][j]);
        }
    }
}

void displayingMatrix(int array[N][M])
{
    for(int i=0; i<N ;i++)
    {
        for(int j=0; j<M; j++)
        {
            printf(" %d", array[i][j]);
        }
        printf("\n");
    }
}

///function for determination the number of the aparitions of the elements in a matrix
void aparitions(int array[N][M])
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            int aparitii = 0;
            for(int m=0; m<N; m++)
            {
                for(int n=0; n<M; n++)
                {
                    if(array[m][n]== array[i][j])
                    {
                        aparitii++;
                    }
                }
            }
            printf("Elementul %d apare de %d ori", array[i][j], aparitii);
        }
    }
}
int main()
{
    int matrix[N][M];
    readingMatrix(matrix);
    printf("The matrix is: \n");
    displayingMatrix(matrix);
    aparitions(matrix);
    return 0;
}
