#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char enunt[50][50] = {"Eu merg la scoala astazi"};
    int nrCuv = 5;

    printf("Enuntul este: %s", enunt[50][50]);
    for(int i=0; i<nrCuv; i++)
    {
        printf("Cuvintele din enunt sunt: ");
        printf("cuvant[%d]: ", i+1);
        scanf("%s", enunt[i]);
    }

    printf("Literele din enunt sunt: \n");
    for(int i=0; i<nrCuv; i++)
    {
        int dimCuv = strlen(enunt[i]);
        for(int j=0; j<dimCuv; j++)
        {
            printf(" %c", enunt[i][j]);
        }
    }
    return 0;
}
