#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void afisare(char string[50][50], int nrCuv) {
    for (int i = 0; i < nrCuv; i++) {
        printf("%s", string[i]);
    }
}

void eliminare(char string[50][50], char newString[50][50], int nrCuv) {
    for (int i = 0; i < nrCuv; i++) {
        int dimCuv = strlen(string[i]);
        for (int j = 0; j < dimCuv; j++) {
            if (string[i][j] != '-') {
                newString[i][j] = string[i][j];
            }
        }
        newString[i][dimCuv] = '\0';  // Null-terminate the string
    }
}

void inlocuire(char newString[50][50], int nrCuv) {
    // Convert the first word to CamelCase
    int dimCuv = strlen(newString[0]);

    // Make sure the first letter of the first word is uppercase
    if (newString[0][0] >= 'a' && newString[0][0] <= 'z') {
        newString[0][0] = toupper(newString[0][0]);
    }

    for (int j = 1; j < dimCuv; j++) {
        // Convert subsequent letters to lowercase
        if (newString[0][j] >= 'A' && newString[0][j] <= 'Z') {
            newString[0][j] = tolower(newString[0][j]);
        }
    }
}

int main() {
    char string[50][50];
    char newString[50][50];
    int nrCuv;

    printf("Enter the number of words: \n");
    scanf("%d", &nrCuv);

    for (int i = 0; i < nrCuv; i++) {
        printf("Word %d :\n", i + 1);
        scanf("%s", string[i]);
    }

    printf("The string is: \n");
    afisare(string, nrCuv);

    printf("\nAfter eliminating '-' from the string, it looks like this: \n");
    eliminare(string, newString, nrCuv);
    afisare(newString, nrCuv);

    printf("\nThe CamelCase string is: \n");
    inlocuire(newString, nrCuv);
    afisare(newString, nrCuv);

    return 0;
}
