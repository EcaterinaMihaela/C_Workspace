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

    int sum=0;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){                //parcurgem matricea si verificam elementele de pe diagonala principala,dupa care le adunam la suma
        if(i==j){
            sum = sum + matrice[i][j];
        }
    }
  }
  printf("Suma elementelor de pe diagonala principala este :%d", sum);   //afisam suma elementelor de pe diagonala principala

  int prod=1;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){                //parcurgem matricea si verificam elementele de pe diagonala secundara,dupa care le adaugam la produs
        if( (i+j) == (n+1) ){
            prod = prod * matrice[i][j];
        }
    }
  }
  printf("Produsul elementelor de pe diagonala secundara este :%d", prod);   //afisam produsul elementelor de pe diagonala secundara

    return 0;
}
