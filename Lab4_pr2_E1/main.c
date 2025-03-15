#include <stdio.h>
#include <stdlib.h>

int main()
{
   for(char i=32; i<127; i++){                 //afisam codurile ASCII cu coduri cuprinse in interval
    printf("Caracterele ASCII cu coduri cuprinse intre 32 si 127 sunt: %d\n",i);

    if ((i - 32 + 1) % 10 == 0) {             //grupam cate 10 caractere pe linie
            printf("\n");
   }
   }
    return 0;
}
