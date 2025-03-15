#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Introduceti numarul de elemente al vectorului:");
    scanf("%d", &n);

    int vector[n];
    for(int i=0; i<n; i++){
        printf("vector[%d",i);  //scriem fiecare element al vectorului
        printf("]=");
        scanf("%d", &vector[i]);
    }

    printf("Vectorul este:");

    for(int i=0; i<n; i++){
        printf("%d \n",vector[i]);  //afisam vectorul
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(vector[i]<vector[j]){   //ordonam vectorul
               int aux=vector[i];
               vector[i]=vector[j];
               vector[j]=aux;
            }
        }
    }

    printf("Vectorul ordonat este:");
     for(int i=0; i<n; i++){             //afisam vectorul ordonat
        printf("%d \n",vector[i]);
    }
    return 0;
}
