#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vector[4] = {1,2,4,3};
    for(int i=0; i<4; i++)
    {
        printf("%d ", vector[i]);
    }

    int newVector[1];
    for(int i=0; i<1; i++)
    {
        printf("Ce valoare sa fie introdusa la vector?");
        scanf("%d", &newVector[i]);
    }

    for(int i=0; i<1; i++)
    {
        printf("%d ", newVector[i]);
    }

    int vectorAdaugat[5];
    ///concatenarea
    for(int i=0; i<4; i++)
    {
        vectorAdaugat[i] = vector[i];
    }

    for(int i=0; i<1; i++)
    {
        vectorAdaugat[4+i] = newVector[i];
    }

    printf("Vectorul cu noua valoare este: ");
    for(int i=0; i<5; i++)
    {
        printf("%d ", vectorAdaugat[i]);
    }
    return 0;
}
