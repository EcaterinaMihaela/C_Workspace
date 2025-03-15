#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
void citireVector(int *array)
{
    for(int i=0; i<SIZE; i++)
    {
        printf("array[%d]= ", i+1);
        scanf("%d", (array+i));
    }
}
void afisareVector(int *array)
{
    for(int i=0; i<SIZE; i++)
    {
        printf(" %d", *(array+i));
    }
}
void aparitii(int *array) {
    for (int i = 0; i < SIZE; i++) {
        int contor = 0;  // Contor pentru numărul de apariții
        for (int j = 0; j < SIZE; j++) {
            if (array[j] == array[i]) {
                contor++;
            }
        }
        printf("Elementul %d apare de %d ori\n", array[i], contor);
    }
}
int main()
{
    int vector[SIZE];
    citireVector(vector);
    printf("Vectorul este: ");
    afisareVector(vector);

    ///aflare cifre pare din vectorul vechi
    int k=0;
    for(int i=0; i<SIZE; i++)
    {
        if(vector[i]%2==0)
        {
            k++;
        }
    }

    ///eliminare cifre pare din vector
    int vectorNou[k];
    printf("\nVectorul nou este:");
    for(int i=0; i<SIZE; i++)
    {
        if(vector[i]%2 == 0)
        {
            vectorNou[i]=vector[i];
        }
    }
    afisareVector(vectorNou);

    ///aflare cifre impare din vector
    int h = 0;
    for(int i=0; i<SIZE; i++)
    {
        if(vector[i]%2 != 0)
        {
            h++;
        }
    }

    int vectorImp[h];
    for(int i=0; i<h; i++)
    {
        if(vector[i]%2 != 0)
        {
            vectorImp[i]=vector[i];
        }
    }
    printf("\nVectorul cu elemente impare este:");
    afisareVector(vectorImp);
    aparitii(vector);
    return 0;
}
