#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void eliminare(char sir[50][50],int nrCuv,char newSir[50][50])
{
    for(int i=0; i<nrCuv; i++)
    {
        int dimCuv = strlen(sir[i]);
        for(int j=0; j<dimCuv; j++)
        {
            if(sir[i][j] != 'e')
            {
                newSir[i][j]=sir[i][j];
            }
        }
    }
}
void aparitie(char sir[50][50],int nrCuv)
{
    for(int i=0; i<nrCuv; i++)
    {
        int dimCuv = strlen(sir[i]);
        for(int j=0; j<dimCuv; j++)
        {
            int contor = 0;
            for(int m=0; m<nrCuv; m++)
            {
                for(int n=0; n<dimCuv; n++)
                {
                    if(sir[i][j] == sir[m][n])
                    {
                        contor++;
                    }
                }
            }
            printf("\nscaracterul %c apare de %d ori", sir[i][j], contor);
        }
    }
}

int main()
{
    ///metoda1
//    char string[50];
//    int k = 0;
//
//    for (int i = 0; i < strlen(string); i++) {
//        if (string[i] != 'r') {
//            string[k++] = string[i];
//        }
//    }
//    string[k] = '\0';
//
//    printf("Metoda 1: %s\n", string);

    ///metoda2

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
    char newSir[50][50];
    eliminare(sir,nrCuv,newSir);
    printf("Sirul nou este: ");
    for(int i=0; i<nrCuv; i++)
    {
        printf("%s ", newSir[i]);
    }

    aparitie(sir, nrCuv);
    return 0;
}
