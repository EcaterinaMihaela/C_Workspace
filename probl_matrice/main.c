#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n;
  printf("Introduceti numarul de linii si coloane:");   //citim numarul de elemete al unei matrici patratice
  scanf("%d", &n);

  int matrice[n][n];
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){           //scriem si citim elemetele matricei
        printf("matrice[ %d %d",i,j);
        printf("]=");
        scanf("%d", &matrice[i][j]);
  }
  }
  printf("Matricea este: \n");

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){             //afisam matricea
        printf("%d ",matrice[i][j]);
    }
    printf("\n");
  }

    return 0;
}
