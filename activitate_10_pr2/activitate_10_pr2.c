#include <stdio.h>
#include <stdlib.h>

struct Studenti
{
    char nume[50];
    float note[5];
};

int main()
{
    int n;
    FILE *fisier;
    printf("Introduceti numarul de studenti:");
    scanf("%d", &n);

    struct Studenti studenti[n];

    for (int i = 0; i < n; i++)
    {
        printf("Numele studentului %d este: ", i + 1);
        scanf("%s", studenti[i].nume);

        printf("Notele studentului %d sunt: ", i + 1);
        for (int j = 0; j < 5; j++)
        {
            scanf("%f", &studenti[i].note[j]);
        }
    }

    fisier = fopen("studenti.txt", "w");

    if (fisier == NULL)
    {
        printf("Nu s-a putut deschide fisierul");
        return 1;
    }

    // Salvarea datelor in fisier
    fprintf(fisier, "%d\n", n);
    for (int i = 0; i < n; i++)
    {
        fprintf(fisier, "%s ", studenti[i].nume);
        for (int j = 0; j < 5; j++)
        {
            fprintf(fisier, "%.2f ", studenti[i].note[j]);
        }
        fprintf(fisier, "\n");
    }

    fclose(fisier);

    // Afișarea datelor în consolă din fișier
    fisier = fopen("studenti.txt", "r");
    if (fisier == NULL)
    {
        printf("Nu s-a putut deschide fisierul pentru citire");
        return 1;
    }

    fscanf(fisier, "%d", &n); // Citirea numarului de studenti
    printf("\nDatele din fisier:\n");
    for (int i = 0; i < n; i++)
    {
        fscanf(fisier, "%s", studenti[i].nume);
        printf("Numele studentului %d: %s, Notele: ", i + 1, studenti[i].nume);
        for (int j = 0; j < 5; j++)
        {
            fscanf(fisier, "%f", &studenti[i].note[j]);
            printf("%.2f ", studenti[i].note[j]);
        }
        printf("\n");
    }

    fclose(fisier);

    return 0;
}
