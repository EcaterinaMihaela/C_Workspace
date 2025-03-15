#include <stdio.h>
#include <stdlib.h>

/*programul aşteaptă de la terminal introducerea unor
numere întregi nenule şi determină suma lor. În momentul în care se
introduce o valoare zero, programul afişează suma calculată
*/
int main()
{
    int a;
    int sum;
    sum = 0;

    do{
        printf(" a= ");
        scanf("%d", &a);
        sum += a;
    }while( a!= 0);

    printf("suma este: %d\n", sum);
return 0;
}
