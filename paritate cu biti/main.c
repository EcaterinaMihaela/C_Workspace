#include <stdio.h>
#include <stdlib.h>

void parity(int num)
{
        if(num&1)
            printf("Odd");
        else
            printf("Even");
}
int main()
{
    int num;
    printf("The number is: ");
    scanf("%d", &num);

    parity(num);
    return 0;
}
