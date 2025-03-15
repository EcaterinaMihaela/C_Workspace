#include <stdio.h>
#include <stdlib.h>
struct punct
{
    int x;
    int y;
};

struct studenti
{
    char nume[50];
    int varsta;
};

int main()
{
    struct punct A;
    struct punct B;
    scanf("%d %d", &A.x, &A.y);
    scanf("%d %d", &B.x, &B.y);

    printf("Coordonatele punctului A sunt : ");
    printf("A(%d, %d)\n",A.x, A.y);
    printf("Coordonatele punctului B sunt : ");
    printf("B(%d, %d)",B.x, B.y);

    struct studenti student1;
    struct studenti student2;

    printf("Introduceti numele studentului 1: ");
    scanf("%s", student1.nume);
    printf("Introduceti varsta studentului 1: ");
    scanf("%d", &student1.varsta);

    printf("Introduceti numele studentului 2: ");
    scanf("%s", student2.nume);
    printf("Introduceti varsta studentului 2: ");
    scanf("%d", &student2.varsta);

    printf("\nInformatii despre studentul 1:\n");
    printf("Nume: %s\nVarsta: %d\n", student1.nume, student1.varsta);

    printf("\nInformatii despre studentul 2:\n");
    printf("Nume: %s\nVarsta: %d\n", student2.nume, student2.varsta);
    return 0;
}
