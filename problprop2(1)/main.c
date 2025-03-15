#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a, b, c;

    printf("Introduceți cele trei numere: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        if (b >= c) {
            printf("Al doilea cel mai mare număr este: %d\n", b);
        } else {
            printf("Al doilea cel mai mare număr este: %d\n", c);
        }
    } else if (b >= a && b >= c) {
        if (a >= c) {
            printf("Al doilea cel mai mare număr este: %d\n", a);
        } else {
            printf("Al doilea cel mai mare număr este: %d\n", c);
        }
    } else {
        if (a >= b) {
            printf("Al doilea cel mai mare număr este: %d\n", a);
        } else {
            printf("Al doilea cel mai mare număr este: %d\n", b);
        }
    }

    return 0;
}
