#include <stdio.h>
#include <stdlib.h>

int make_it_nagative(int num)
{
    int k = 0;
    if(num<0)
    {
        k = num;
        printf("%d", k);
    }
    else if(num>0)
    {
        k = -num;
        printf("%d", k);
    }
    else
    {
        k = 0;
        printf("%d", k);
    }
    return k;
}
int main()
{
    int num;
    printf("num= ");
    scanf("%d", &num);
    make_it_nagative(num);

    return 0;
}
