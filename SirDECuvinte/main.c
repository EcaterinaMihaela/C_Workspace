#include <stdio.h>
#include <string.h>

void swap(char a[], char b[]) {
    char temp[50];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void bubbleSort(char sirDeCuvinte[][50], int NrOfWords) {
    for (int i = 0; i < NrOfWords - 1; i++) {
        for (int j = 0; j < NrOfWords - i - 1; j++) {
            if (strcmp(sirDeCuvinte[j], sirDeCuvinte[j + 1]) > 0) {
                swap(sirDeCuvinte[j], sirDeCuvinte[j + 1]);
            }
        }
    }
}

int main() {
    char sirDeCuvinte[30][50];
    int NrOfWords = 0;

    printf("Introdu nr de cuvinte: ");
    scanf("%d", &NrOfWords);

    printf("Introdu sirul de cuvinte:\n");
    for (int i = 0; i < NrOfWords; i++) {
        scanf("%s", sirDeCuvinte[i]);
    }

    printf("Sirul de cuvinte este:\n");
    for (int i = 0; i < NrOfWords; i++) {
        printf("%s ", sirDeCuvinte[i]);
    }

    printf("\nSirul are urmatoarele litere: ");
    for (int i = 0; i < NrOfWords; i++) {
        int dimCuv = strlen(sirDeCuvinte[i]);
        for (int j = 0; j < dimCuv; j++) {
            printf("  %c", sirDeCuvinte[i][j]);
        }
    }

    bubbleSort(sirDeCuvinte, NrOfWords);

    printf("\nSirul de cuvinte ordonat este:\n");
    for (int i = 0; i < NrOfWords; i++) {
        printf("%s ", sirDeCuvinte[i]);
    }

    return 0;
}
