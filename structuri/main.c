#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 3

struct Student
{
    char nume[30];
    int note[SIZE];
};

int main()
{
    struct Student profilUman;

    printf("Enter the name: ");
    scanf("%s", profilUman.nume);

    for (int i = 0; i < SIZE; i++)
    {
        printf("Nota %d: ", i + 1);
        scanf("%d", &profilUman.note[i]);
    }

    printf("Informatii:\n");
    printf("Numele este: %s\n", profilUman.nume);
    printf("Notele sunt:");
    for (int i = 0; i < SIZE; i++)
    {
        printf(" %d", profilUman.note[i]);
    }
    printf("\n");

    /// Stringuri
    char sir[30][30];
    int nrCuv;

    printf("Nr cuvinte: ");
    scanf("%d", &nrCuv);

    for (int i = 0; i < nrCuv; i++)
    {
        scanf("%s", sir[i]);
    }

    printf("Sirul de cuvinte este:\n");
    for (int i = 0; i < nrCuv; i++)
    {
        int dimCuv = strlen(sir[i]);
        for (int j = 0; j < dimCuv; j++)
        {
            printf("%c", sir[i][j]);
        }
        printf("\n");
    }

    return 0;
}
