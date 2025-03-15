#include <stdio.h>
#include <stdlib.h>

/*programul aşteaptă de la terminal introducerea unei
valori naturale n, după care mai aşteaptă introducerea a n valori reale
(dublă precizie): a0, a1, ..., an−1. În continuare se parcurge această
listă şi se determină produsul valorilor strict pozitive. În final
programul afişează produsul calculat.
*/
int main() {
    int n,i;
    double a[100], p;

    printf("Cate numere sa inmultim?");
    scanf("%d",&n);
    for (i=0; i<n; i++)
        scanf("%lf",&a[i]);
        p = 1;

    for (i=0; i<n; i++)
    if (a[i]>0)
    p *= a[i];

    printf("%lf\n",p);
    return 0;
}
