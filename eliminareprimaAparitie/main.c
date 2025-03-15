#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Sorting(char sir[]) {
    int lungime = strlen(sir);

    for(int i = 0; i < lungime - 1; i++) {
        for(int j = 0; j < lungime - i - 1; j++) {
            if(sir[j] > sir[j + 1]) {
                char aux = sir[j];
                sir[j] = sir[j + 1];
                sir[j + 1] = aux;
            }
        }
    }
}

int main() {
    char sir[20];
    printf("Introdu sirul: ");
    scanf("%s", sir);

    printf("Sirul initial este: %s\n", sir);

    Sorting(sir);

    printf("Sirul ordonat este: %s\n", sir);
    return 0;
}
