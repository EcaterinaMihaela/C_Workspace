#include <stdio.h>
#include <stdlib.h>

struct carte
{
    char nume[50];
    int anPublicare;
    long int serie;
    char editura[50];
    char autor[50];
};

int main()
{
    struct carte carte1;
    struct carte carte2;

    printf("Introdu numele cartii 1: \n");
    scanf("%s", carte1.nume);
    printf("Introdu numele cartii 2: \n");
    scanf("%s", carte2.nume);

    printf("Introdu anul publicarii cartii 1: \n");
    scanf("%d", &carte1.anPublicare);
    printf("Introdu anul publicarii cartii 2: \n");
    scanf("%d", &carte2.anPublicare);

    printf("Introdu seria cartii 1: \n");
    scanf("%ld", &carte1.serie);
    printf("Introdu seria cartii 2: \n");
    scanf("%ld", &carte2.serie);

    printf("Introdu editura cartii 1: \n");
    scanf("%s", carte1.editura);
    printf("Introdu editura cartii 2: \n");
    scanf("%s", carte2.editura);

    printf("Introdu autorul cartii 1: \n");
    scanf("%s", carte1.autor);
    printf("Introdu autorul cartii 2: \n");
    scanf("%s", carte2.autor);

    printf("Informatii despre carti: \n");
    printf("Cartea 1: %s, %d, %ld, %s, %s\n", carte1.nume, carte1.anPublicare, carte1.serie, carte1.editura, carte1.autor);
    printf("Cartea 2: %s, %d, %ld, %s, %s\n", carte2.nume, carte2.anPublicare, carte2.serie, carte2.editura, carte2.autor);

    return 0;
}
