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

    int aux=vector[1];
    for(int i=0; i<n-1; i++){
        vector[i]=vector[i+1];
    }
    vector[n]=aux;

    printf("Vectorul permutat stanga cu o pozitie este:");
     for(int i=0; i<n; i++){
        printf("%d \n", vector[i]);
    }
    return 0;
}
