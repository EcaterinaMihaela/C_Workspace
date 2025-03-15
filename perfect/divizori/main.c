#include <stdio.h>
#include <stdlib.h>
void divizori(int num)
{
    int contor = 0;
    for(int i=1; i <= num; i++)
    {
        if(num % i == 0)
        {
            printf("%d ", i);
            contor++;
        }
    }
    printf("\nNumarul are %d divizori \n", contor);
}

void prim(int num , int contor)
{
    if(contor == 2)
    {
        printf("Numarul este prim");
    }
    else
    {
      printf("Numarul nu este prim ");
    }
}
void perfect(int num)
{
    int sum = 0;
    for(int i=1; i <= num; i++)
    {
        if( num % i == 0 )
        {
            sum = sum + i;
        }
    }
    if( sum == 2*num )
        {
            printf("\nNumarul este perfect");
        }
        else
            printf("Numarul nu este perfect");
}
int main()
{
    int num, contor;
    printf("Numarul este: ");
    scanf("%d", &num);

    divizori(num);
    prim(num,contor);
    perfect(num);
    return 0;
}
