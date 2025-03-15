#include <stdio.h>
#include <stdlib.h>
#include <string.h>
///programul construieste o piramida de stele(sau orice,doar inlocuiesti elementul :))
int main()
{
    int n;
    printf("Introdu numarul de etaje: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {

        ///PRINT SPACE
        for(int j = 0; j < n-i; j++)
        {
            printf(" ");
        }

        ///PRINT STARS
        for(int k = 0; k < 2*i-1; k++)
        {

            printf("$");
        }

        printf("\n");
    }
    return 0;
}
