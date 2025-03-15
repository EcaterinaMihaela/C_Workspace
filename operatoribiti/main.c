#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("number=");
    scanf("%d", &number);
    int lungime = sizeof(int)*8;
int zeroes,ones=0;
    for(int i=lungime-1; i>=0; i--)
    {
        int bit = (number >>i)&1;
        printf("%d", bit);

        if(i%4 == 0)
            printf("  ");

        if(bit == 0)
            zeroes++;
            else
                ones++;
    }

    printf("\nNr are %d biti 0\n", zeroes);
    printf("NR are %d biti 1", ones);
    if(number &1)
        printf("\nNr este impar");
    else
        printf("\nNr este par");

    return 0;
}
