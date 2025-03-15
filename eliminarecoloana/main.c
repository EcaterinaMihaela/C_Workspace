#include <stdio.h>
#include <stdlib.h>
#define N 3
#define M 3

void citire(int array[N][M])
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            printf("array[%d][%d]=", i+1,j+1);
            scanf("%d", &array[i][j]);
        }
    }
}

void afisare(int array[N][M])
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

///function for elimination a col
void eliminareColoane(int array[N][M], int newArray[N][M-1])
{
    int c1;
    int k = 0;
    printf("Care coloana sa fie eliminata? ");
    scanf("%d", &c1);
    for(int i=0; i<N; i++)
    {
        k = 0; // Reset the index for the newArray
        for(int j=0; j<M; j++)
        {
            if(j != c1)
            {
                newArray[i][k++] = array[i][j];
            }
        }
    }
}

void eliminareAparitii(int array[N][M], int arrayNou[N][M])
{
    // Initialize arrayNou to 0
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            arrayNou[i][j] = 0;
        }
    }

    // Check for duplicate elements and mark for elimination
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            int contor = 0;

            // Check for duplicates in other rows as well
            for(int m=0; m<N; m++)
            {
                for(int n=0; n<M; n++)
                {
                    if(array[i][j] == array[m][n])
                    {
                        contor++;
                    }
                }
            }

            // If there are duplicates in other rows, mark for elimination
            if(contor > N)
            {
                arrayNou[i][j] = 1; // Mark for elimination
            }
        }
    }

    // Copy the elements to newArray
    for(int i=0; i<N; i++)
    {
        int k = 0;
        for(int j=0; j<M; j++)
        {
            if(arrayNou[i][j] == 0)
            {
                arrayNou[i][k++] = array[i][j];
            }
        }
    }
}

int main()
{
    int array[N][M];
    citire(array);
    printf("Matricea este: \n");
    afisare(array);

    int newArray[N][M-1];
    eliminareColoane(array, newArray);
    printf("\nMatricea cu o coloana eliminata va fi: \n");
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M-1; j++)
        {
            printf("%d ", newArray[i][j]);
        }
        printf("\n");
    }

    int arrayNou[N][M];  // Corrected: Use arrayNou instead of newArray
    eliminareAparitii(array, arrayNou);
    printf("\nMatricea fara coloane duplicate va fi: \n");
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            printf("%d ", arrayNou[i][j]);
        }
        printf("\n");
    }

    return 0;
}

