/*
Author:Căpățînă Ecaterina-Mihaela
Date:07.11.2023

Description: Tiparirea modelului un dreptunghi format din stelute cu gol in mijloc

INPUT:
OUTPUT:

REQS: 1.Dreptunghiul are infatisarea unei matrici cu linii si coloane
      2.Astfel se va afisa dreptunghiul conform afisarii unei matrici
      3.Vom folosi indicii matriciali i si j

Constraints: 1.Tiparirea doar a marginilor dreptunghiului
             2.Neumplerea mijlocului dreptunghiului
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;  //nr de linii
    int m = 5;  //nr de coloane

    int matrix[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                printf("* ");
            } else {
                printf("  "); // Spațiu gol pentru interior
            }
        }
        printf("\n");
    }

    return 0;
}
