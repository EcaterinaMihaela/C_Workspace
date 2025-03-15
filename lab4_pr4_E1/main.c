#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[4][4];

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
           printf("* ");
        }
        printf("\n");
    }
    return 0;
}
