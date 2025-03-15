#include <stdio.h>
#include <stdlib.h>
void divizoriPropri(int num)
{
    int contor = 0;
    for(int i=1; i<=num; i++)
    {
        if( num % i == 0 )
        {
            printf("%d ", i);
            contor++;
        }
    }
    printf("Numarul %d are %d divizori\n", num,contor);
}
int sumaDivizori(int num)
{
    divizoriPropri(num);
    int sum = 0;
    for(int i=1; i<=num; i++)
    {
        if(num %i ==0)
        {
            sum = sum + i;
        }
    }
    return sum;
}

void nreAmice(int num1, int num2)
{
    int result1 = sumaDivizori(num1);
    int result2 = sumaDivizori(num2);
    printf("Suma divizorilor nr 1 este :%d\n", result1);
    printf("Suma divizorilor nr 2 este :%d\n", result2);
    if( (result1 == num2) && (result2 == num1) )
        printf("\nNumerele sunt amice \n");
    else
        printf("Numerele nu sunt amice");
}

int main()
{
    int num1;
    int num2;

    printf("Numerele sunt: ");
    scanf("%d %d", &num1, &num2);
    nreAmice(num1, num2);
    return 0;
}
