#include <stdio.h>
/*Programul afiseaza:
Patratul lui 2 e 4
Patratul lui 8 e 64
2 la a 6-a e 64*/

int sqr(int x) {
    printf("Patratul lui %d e %d\n", x, x*x);
    return x * x;
}

int main(void) {
    printf("2 la a 6-a e %d\n",
    sqr(2 * sqr(2)));
    return 0;
}
