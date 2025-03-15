#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void convertString(char string[50][50], int nrCuv)
{
    for (int i = 0; i < nrCuv; i++)
    {
        char result[50]; // New string to store the result
        int dimCuv = strlen(string[i]);

        for (int j = 0; j < dimCuv; j++)
        {
            char currentChar = string[i][j];
            int count = 0;

            for (int k = 0; k < dimCuv; k++)
            {
                if (tolower(string[i][k]) == tolower(currentChar))
                {
                    count++;
                }
            }

            if (count == 1)
            {
                result[j] = '(';
            }
            else
            {
                result[j] = ')';
            }
        }

        result[dimCuv] = '\0'; // Null-terminate the result string
        printf("Converted string for word %d: %s\n", i + 1, result);
    }
}

int main()
{
    char string[50][50];
    int nrCuv;
    printf("Enter the number of words: \n");
    scanf("%d", &nrCuv);

    for (int i = 0; i < nrCuv; i++)
    {
        printf("Word %d: ", i + 1);
        scanf("%s", string[i]);
    }

    convertString(string, nrCuv);

    return 0;
}
