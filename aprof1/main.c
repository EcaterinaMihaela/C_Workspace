#include <stdio.h>
#include <stdlib.h>

void afiseaza_matrice_transpusa(int matrice[][n], int linii, int coloane){
    for(int j=0; j < coloane; j++){
        for(int i=0; i < linii; i++){
            printf("%d", matrice[i][j]);
        }
        print("\n");
    }
}
int main()
{
  int n,m;
  printf("Introduceti numarul de linii:");
  scanf("%d", &n);

  printf("Introduceti numarul de coloane:");
  scanf("%d", &m);

  int matrice[n][m];
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        printf("matrice[ %d %d",i,j);     //parcurgerea matricei
        printf("]=");
        scanf("%d", &matrice[i][j]);
    }
  }

  printf("Matricea este: \n");

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){            //afisarea matricei
        printf("%d ",matrice[i][j]);
    }
    printf("\n");
  }

  for(int i = 0; i < n; i++) {
    for (int j = 0; j < m / 2; j++) {
            int aux = matrice[i][j];
            matrice[i][j] = matrice[i][m - 1 - j];
            matrice[i][m - 1 - j] = aux;
        }
    }

  printf("Matricea dupa inversarea fata de coloana mediana este:\n");
  for(int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < n; i++) {
    for (int j = 0; j < m / 2; j++) {
            int aux = matrice[i][j];
            matrice[i][j] = matrice[i][m - 1 - j];
            matrice[i][m - 1 - j] = aux;
        }
    }

    printf(" transpusa este: ");
    afiseaza_matrice_transpusa(matrice, m, n);
    return 0;
}
