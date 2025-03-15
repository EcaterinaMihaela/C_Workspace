#include <stdio.h>
#include <stdlib.h>
#define n 3
#define m 3

void citireMatrice(int *ptr)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("matrix[%d][%d]=", i+1, j+1);
            scanf("%d", (ptr+i*m+j));
        }
    }
}
void afisareMatrice(int *ptr)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf(" %d", *(ptr+i*m+j));
        }
        printf("\n");
    }
}
void transpusa(int matrice[n][m])
{
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf(" %d", matrice[j][i]);
        }
        printf("\n");
    }
}

int main()
{
    int array[n][m];
    citireMatrice(array);
    printf("MAtricea este: \n");
    afisareMatrice(array);

    printf("Transpusa este: \n");
    transpusa(array);
    return 0;
}
