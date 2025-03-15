#include <stdio.h>
#include <stdlib.h>

int cmmdc(int num1, int num2)
{
    /*
    while( num2 !=0)
    {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    */
    if( num2==0 )
    {
        return num1;
    }
    else
    {
        return cmmdc(num2, num1 % num2);
    }
}
int main()
{
    int a,b;
    printf("a=");
    scanf("%d", &a);

    printf("b=");
    scanf("%d", &b);

    int result = cmmdc(a, b);
    printf("cmmdc=%d ", result);
    return 0;
}
