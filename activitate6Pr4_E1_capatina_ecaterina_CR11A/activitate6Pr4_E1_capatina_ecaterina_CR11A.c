#include <stdio.h>
#include <stdlib.h>

// Functie pt afisarea matricii
void afisare_matrice(int matrix[][3], int n, int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Funcție pentru ștergerea unei linii din matrice
void stergereLinie(int matrix[][3],int n,int m, int rowToDelete)
{
    if (rowToDelete < 0 || rowToDelete >= n)
    {
        printf("Indicele liniei de șters este invalid.");
        return;
    }

    for (int i = rowToDelete; i < n - 1; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j] = matrix[i + 1][j];
        }
    }
}
int main()
{
    int n,m;
    printf("Introdu numarul de linii: ");
    scanf("%d", &n);
    printf("Introdu numarul de coloane: ");
    scanf("%d", &m);

    int matrix[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("matrix[%d][%d]=", i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    int rowToDelete;
    printf("Matricea este: \n");
    afisare_matrice(matrix, n,m);
    stergereLinie(matrix, n,m, rowToDelete);

    return 0;
}
