/*
Author:Căpățînă Ecaterina-Mihaela
Date:22.11.2023
Description:Se citeste un vector cu n elemente numere intregi, n fiind cel mult egal cu
1000. Calculati si afisati cate dintre elementele vectorului sunt egale cu
diferenta dintre cel mai mare si cel mai mic element din vector.

FREQS:Ordonarea vectorului pt gasirea elementelor
Constraints:
*/

#include <stdio.h>
#include <stdlib.h>

void afisare_vector(int vector[], int lungime) {
    for (int i = 0; i < lungime; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");
}
//functie pt ordonarea descrescatoare
void ordonare(int vector[],int lungime){
for(int i=0; i<lungime -1; i++){
    for(int j=i+ 1; j<lungime; j++){
        if(vector[j]>vector[i]){
            int aux=vector[i];
            vector[i]=vector[j];
            vector[j]=aux;
        }
    }
}

}

int main()
{
    int lungime;
    printf("Introdu lungimea vectorului: ");
    scanf("%d", &lungime);
    int vector[lungime];

    for(int i=0; i<lungime; i++){
        printf("vector[%d]=",i);
        scanf("%d",&vector[i]);
    }

    printf("Vectorul este:");
    afisare_vector(vector,lungime);

    ordonare(vector,lungime);
    printf("Vectorul ordonat este:");
    afisare_vector(vector,lungime);

    int max=vector[0];
    int min=vector[lungime-1];

    printf("max=%d\n", max);
    printf("min=%d\n", min);
    int k=0;
    for(int i=0; i<lungime; i++){
        if(vector[i]== (max-min)){
            k=k+1;
        }
    }
    printf("%d elemente sunt egale cu diferenta dintre cel mai mare si cel mai mic element al vectorului",k);


    return 0;
}
