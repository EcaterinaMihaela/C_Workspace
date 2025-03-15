#include <stdio.h>
#include <stdlib.h>
void afisare(int vector[5])
{
    for(int i=0; i<5; i++)
    {
        printf("%d ", vector[i]);
    }
}

void permutareStanga(int vector[5])
{
    int temp = vector[0];
    for(int i=0; i<5; i++)
    {
        vector[i] = vector[i+1];
    }
    vector[4] = temp;
}

void permutareDreapta(int vector[5])
{
    int temp = vector[4];
    for(int i = 4; i>0; i--)
    {
        vector[i] = vector[i-1];
    }
    vector[0] =  temp;
}
int main()
{
    int vector[5] = {1,2,3,4,5};
    printf("Vectorul este: ");
    afisare(vector);

    permutareStanga(vector);
    printf("Vectorul permutat stanga este: ");
    afisare(vector);

    permutareDreapta(vector);
    printf("\nVectorul permutat draepta este: ");
    afisare(vector);
    return 0;
}
