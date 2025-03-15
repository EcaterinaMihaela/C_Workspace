#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void aflareLitere(char sir[30][30], int nrCuv) {
    for (int i = 0; i < nrCuv; i++) {
        int dimCuv = strlen(sir[i]);
        printf("\nThe dimension of the word %s is: %d\n", sir[i], dimCuv);

        printf("The word %s has the following letters:\n", sir[i]);
        for (int j = 0; j < dimCuv; j++) {
            printf(" %c\n", sir[i][j]);
        }
        printf(" \n");
    }
}

void cautareAparitie(char sir[30][30], int nrCuv) {
    char characterToSearch;
    printf("Enter any character to search: ");
    scanf(" %c", &characterToSearch);

    printf("Character %c found in words:\n", characterToSearch);
    for (int i = 0; i < nrCuv; i++) {
        int dimCuv = strlen(sir[i]);
        printf("%s at indices: ", sir[i]);
        int found = 0; // To track if the character was found in the word
        for (int j = 0; j < dimCuv; j++) {
            if (sir[i][j] == characterToSearch) {
                printf("%d ", j);
                found = 1;
            }
        }
        if (found) {
            printf("\n");
        } else {
            printf("Not found\n");
        }
    }
}

int main() {
    char sir[30][30];
    int nrCuv;
    printf("Enter the number of words: ");
    scanf("%d", &nrCuv);

    for (int i = 0; i < nrCuv; i++) {
        scanf(" %s", sir[i]);
    }
    printf("The entered words are: \n");
    for (int i = 0; i < nrCuv; i++) {
        printf("%s ", sir[i]);
    }

    aflareLitere(sir, nrCuv);
    cautareAparitie(sir, nrCuv);

    return 0;
}
