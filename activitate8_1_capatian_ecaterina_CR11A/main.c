#include <stdio.h>
#include <stdlib.h>
void inversare(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a,b;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);

    printf("Valorile interschimbate sunt:\n");
    inversare(&a, &b);
    printf("%d\n", a);
    printf("%d", b);
    return 0;
}
