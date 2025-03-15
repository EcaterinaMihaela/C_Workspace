#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Introduceti numarul de elemente al vectorului:");
    scanf("%d", &n);

    int vector[n];
    for(int i=0; i<n; i++){
        printf("vector[%d",i);
        printf("]=");
        scanf("%d", &vector[i]);
    }
    printf("vectorul este: ");

    for(int i=0; i<n; i++){
        printf("%d \n", vector[i]);
    }

    int aux=vector[n];
    for(int i=n; i>2; i--){
        vector[i]=vector[i-1];
    }
    vector[1]=aux;

    printf("Vectorul permutat dreapta cu o pozitie este:");
     for(int i=0; i<n; i++){
        printf("%d \n", vector[i]);
    }
    return 0;
}
