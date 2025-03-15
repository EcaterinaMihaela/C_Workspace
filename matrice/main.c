#include <stdio.h>
#include <stdlib.h>

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
        printf("matrice[ %d %d",i,j);
        printf("]=");
        scanf("%d", &matrice[i][j]);
    }
  }

  printf("Matricea este: \n");

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        printf("%d ",matrice[i][j]);
    }
    printf("\n");
  }
  return 0;
}
