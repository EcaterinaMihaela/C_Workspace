#include <stdio.h>

int main() {
    int n;  // Numărul de rânduri
    printf("Introduceți valoarea lui n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  // Parcurge fiecare rând
        for (int j = 1; j <= i; j++) {  // Parcurge fiecare element pe rândul curent
            if ((i + j) % 2 == 0) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");  // Trecem la următorul rând după ce am terminat un rând
    }

    return 0;
}
