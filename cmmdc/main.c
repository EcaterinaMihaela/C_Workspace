#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int cmmdc(int a, int b)
{
    while(b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int cmmmc(int a, int b)
{
    int produs = a*b;
    int CMMMC = abs(produs)/cmmdc(a,b);
    return CMMMC;
}
int main()
{
    int num1 = 4;
    int num2 = 6;

    printf("cmmdc = %d\n", cmmdc(num1,num2));

    printf("cmmmc = %d", cmmmc(num1, num2));
    return 0;
}
