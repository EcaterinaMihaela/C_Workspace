#include <stdio.h>

void afisare_vector(int vector[], int lungime)
{
    for (int i = 0; i < lungime; i++)
    {
        printf("%d ", vector[i]);
    }
    printf("\n");
}

void rotire(int vector[],int lungime)
{
    int aux1=vector[0];
    for(int i=0; i<lungime-1; i++)
    {
        vector[i]=vector[i+1];
    }
    vector[lungime-1]=aux1;
}

int main()
{
    int lungime;
    printf("Introdu lungimea vectorului: ");
    scanf("%d", &lungime);
    int vector[lungime];

    for(int i=0; i<lungime; i++)
    {
        printf("vector[%d]=",i);
        scanf("%d",&vector[i]);
    }

    printf("Vectorul este:");
    afisare_vector(vector,lungime);

    printf("Vectorul rotit cu n pozitii stanga este: ");
    rotire(vector,lungime);
    afisare_vector(vector,lungime);


    return 0;
}
