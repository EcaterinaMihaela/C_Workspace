#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define PI 3.14

int main()
{
    char sir[50][50];
    int nrCuv;
    printf("Introdu numarul de cuvinte din sir: ");
    scanf("%d", &nrCuv);

    for(int i=0; i<nrCuv; i++)
    {
        printf("cuavant %d: ", i+1);
        scanf("%s", sir[i]);
    }

    printf("\nSirul este: \n");
    for(int i=0; i<nrCuv; i++)
    {
        printf(" %s", sir[i]);
    }

    #if PI
        printf("AVEM PI CONSTANTA CA DIRECTIVA");
        #else
        printf("NU AVEM DECLARAT PI CA DIRECTIVA");
    #endif

    ///nu e definitia
    #ifndef PI
    printf("NU  e pi ul");
    #else
    printf("E pi");
    #endif // PI

    return 0;
}
