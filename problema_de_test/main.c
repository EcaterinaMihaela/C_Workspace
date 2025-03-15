#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    x=10;
    y=2;
    z=2;

    z=y=x++ + ++y*2;
    printf("%d\n",z);
    printf("%d\n",x);
    printf("%d",y);
    return 0;
}
