#include <stdio.h>

int main()
{
    int num,x;  // declaram 2 variabile num pe care l verificam daca e perfect si x care il verifica pe n pana la jumatate
    int sum=0;  // declaram si initializam suma

    printf("Introduceti un numar: \n");   //scriem si citim numarul
    scanf("%d", &num);

    printf("Divizorii numarului %d sunt: \n", num);

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)              //calculam divizorii numarului cu o bucla for si ii adunam la suma
        {
            printf("%d ", i);
            sum = sum + i;
            x = sum-num;              //calculam x format din divizorii numarului adunati pana la jumatatea numarului(cu exceptia lui)
        }
    }
    if(x==num)
    {
        printf("Numarul e perfect");    //verificam conditia ca divizorii fara numar sa fie numarul insusi
    }
    else                                 //testam daca nr e perfect cu structura if else
    {
        printf("Numarul nu e perfect");
    }
    return 0;
}
