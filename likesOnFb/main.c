#include <stdio.h>

int main() {
    int nrPeople;
    printf("Enter the number of people who liked the post: \n");
    scanf("%d", &nrPeople);

    char string[50][50];

    FILE *file = fopen("likes.txt", "w");  // Open file for writing

    if (file == NULL) {
        printf("Error opening the file");
        return -1;
    }

    // no one liked
    if (nrPeople == 0) {
        fprintf(file, "No one liked this.\n");
    }
    // few liked
    else if (nrPeople <= 3) {
        for (int i = 0; i < nrPeople; i++) {
            printf("Name %d :\n", i + 1);
            scanf("%s", string[i]);
            fprintf(file, "%s ", string[i]);
        }
        fprintf(file, "liked the post.\n");
    }
    // many liked
    else {
        for (int i = 0; i < 2; i++) {
            printf("Name %d :\n", i + 1);
            scanf("%s", string[i]);
            fprintf(file, "%s ", string[i]);
        }
        int many = nrPeople - 2;
        fprintf(file, "and %d more liked the post.\n", many);
    }

    fclose(file);  // Close the file
    return 0;
}
