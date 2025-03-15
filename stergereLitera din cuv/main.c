#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define nrCuv 1

void removeChar(char stringg[50][50], char newString[50][50])
{
    for(int i=0; i<nrCuv; i++)
    {
        int dimCuv = strlen(stringg[i]);
        printf("Dimensiunea cuvantului este %d\n", dimCuv);
        if(dimCuv > 2)
        {

            for(int j=1; j<dimCuv-1; j++)
            {
                newString[i][j-1]= stringg[i][j];
            }
        }
        else{
            printf("Cuvantul are doar doua caractere,asa ca va ramane exact asa cum este ");
            strcpy(newString[i], stringg[i]);
        }
    }
}

int main()
{
    char stringg[50][50];

    ///citire string
    for(int i=0; i<nrCuv; i++)
    {
        printf("Enter a string: ");
        scanf("%s", stringg[i]);
    }

    ///displaying the string
    printf("The string is: ");
    for(int i=0; i<nrCuv; i++)
    {
        printf("%s", stringg[i]);
    }
    printf("\n");

    ///initializying a new string
    char newString[50][50];

    removeChar(stringg, newString);
    ///displaying the  NEEW string
    printf("The string is: ");
    for(int i=0; i<nrCuv; i++)
    {
        printf("%s", newString[i]);
    }
    printf("\n");
    return 0;
}
