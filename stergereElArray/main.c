#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[6] = {1,2,3,4,5,6};
    int newArray[6-2];

    ///mereu eliminam de la al doilea element incolo,deci avem 4 ramase
    for(int i=0; i<6; i++)
    {
        newArray[i] = array[i];
    }
    ///afisarea noii matrici
    for(int i=0; i<4; i++)
    {
        printf("%d ", newArray[i]);
    }


    ///invers concatenarii unde in noua matrice adaugam primul vector si de la size+i incolo adaugam pe al doilea
    return 0;
}
