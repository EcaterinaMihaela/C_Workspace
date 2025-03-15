#include <stdio.h>
#include <stdlib.h>
void divizori(int num)
{
    for(int i=1; i<=num; i++)
    {
        if(num %i == 0)
        {
            printf("%d ", i);
        }
    }
}

void perfect(int num)
{
    int sum = 0;
    for(int i=1; i<=num; i++)
    {
        if(num %i == 0)
        {
            sum = sum+i;
        }
    }

    if(sum == 2*num)
        printf("perfect");
    else
        printf("imperfect");

}
int prim(int num)
{
    int contor = 0;
    for(int i=1; i<=num; i++)
    {
        if(num %i == 0)
        {
            contor++;  ///numaram divizorii
        }
    }
    if(contor == 2)
        printf("prim");
    else
        printf("not prim");
}
int main()
{
    int num = 6;

    printf("Divizorii nr sunt :" );
    divizori(num);
    perfect(num);

    prim(num);
    return 0;
}
