#include <stdio.h>
#include <string.h>

int main() {
    char answer[10] = "";
    FILE *fisier;

    fisier = fopen("love.vbs", "w"); // Deschiderea fișierului pentru scriere

    if (fisier == NULL) {
        printf("Eroare la deschiderea fisierului.\n");
        return 1;
    }

    while (strcmp(answer, "yes") != 0) {
        printf("Do you love me? (yes/no): ");
        scanf("%s", answer);

        // Conversia răspunsului la litere mici
        for (int i = 0; answer[i]; i++) {
            answer[i] = tolower(answer[i]);
        }
    }

    if (strcmp(answer, "yes") == 0) {
        printf("You're a liar!!\n");
        fprintf(fisier, "%s", answer); // Scrierea în fișier
    }

    fclose(fisier); // Închiderea fișierului

    return 0;
}
