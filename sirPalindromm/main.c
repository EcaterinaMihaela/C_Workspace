#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sirInvers(char sir[50][50], int nrCuv)
{
    char invers[50][50];
    for (int i = 0; i < nrCuv; i++)
    {
        int dimCuv = strlen(sir[i]);
        for (int j = dimCuv - 1; j >= 0; j--)
        {
            invers[i][j] = sir[i][j];
            printf("%c", invers[i][j]);
        }
    }
    printf("\n");
    if(invers[i][j]==sir[i][j])
    {
        printf("Sirul este palindrom");
    }
    else
    {
        printf("Sirul nu este palindrom");
    }
}

int main()
{
    char sir[50][50];
    int nrCuv;
    printf("introdu nr de cuvinte din sir: ");
    scanf("%d", &nrCuv);

    for(int i=0; i<nrCuv; i++)
    {
        printf("cuvant %d: ", i+1);
        scanf("%s", sir[i]);
    }

    printf("Sirul este: ");
    for(int i=0; i<nrCuv; i++)
    {
        printf("%s ", sir[i]);
    }

    sirInvers(sir,nrCuv);
    return 0;
}
