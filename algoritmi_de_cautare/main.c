/*
Author: Capatina Ecaterina-Mihaela
Date: 19.11.2023

Problem: Programul se doreste a gasi un element din interiorul unei matrici cu ajutotul cautarii liniare
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cols,lines;
    printf("Introdu numarul de linii al matricii:");
    scanf("%d", &lines);

    printf("Introdu numarul de coloane al matricii:");
    scanf("%d", &cols);

    int matrix[lines][cols];

    for(int i=0; i<lines; i++)
    {
        for(int j=0; j<cols; j++)
        {
            printf("matrix[ %d %d",i,j);
            printf("]=");
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matricea este: \n");
    for(int i=0; i<lines; i++)
    {
        for(int j=0; j<cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf(" \n");
    }

//declaram si citim elementul cautat:
    int target;
    printf("Introdu elementul care se doreste a fii gasit: ");
    scanf("%d", &target);

//parcurgem matricea
    int found=0;
    for(int i=0; i<lines; i++)
    {
        for(int j=0; j<cols; j++)
        {
            if(matrix[i][j]== target)
            {
                printf("Elementul %d a fost gasit la pozitia [%d][%d].\n", target, i, j);
                found = 1;
                break; // Odată găsit, ieșim din buclă
            }
        }
        if (found)
        {
            break; // Ieșim din buclă când găsim elementul
        }
    }

    if (!found)
    {
        printf("Elementul %d nu a fost gasit in matrice.\n", target);
    }
return 0;
}

