#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //formula distantei dintre doua puncte(A si B) este radical din xb-xa la patrat +yb-ya la patrat
    float xb,xa,yb,ya;  //unde xb,xa,yb,ya sunt coordonatele punctelor A si B: A(xb,yb) si B(yb,ya)

    printf("Introdu coordonatele punctelor A si B \n");
    scanf("%f", &xa);
    scanf("%f", &xb);
    scanf("%f", &ya);
    scanf("%f", &yb);

    float AB = sqrt(pow(xb-xa,2) + pow(yb-ya,2));

    printf("Distanta dintre punctele A bi B este : %.2f\n", AB);
    return 0;
}
