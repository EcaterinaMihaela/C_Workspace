#include <stdio.h>
#include <stdlib.h>
void afisare(char vector[3])
{
    for(int i=0; i<3; i++)
    {
       printf("%c ", vector[i]);
    }
}

void eliminare(char vector[3], char newVector[2])
{
    char elim;
    printf("Care element sa fie eliminat?");
    scanf("%c ", &elim);

    for(int i=0; i<3; i++)
    {
        if(vector[i] != elim )
        {
            newVector[i] = vector[i];
        }
    }
}
int main()
{
    char vector[3] = {'A','B','C'};
    printf("Vectorul este: ");
    afisare(vector);

    char newVector[2];
    eliminare(vector, newVector);

    printf("vectorul dupa eliminarea elem este :");
    afisare(newVector);
    return 0;
}
