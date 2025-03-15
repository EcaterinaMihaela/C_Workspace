#include <stdio.h>
#include <stdlib.h>

// Functie pentru a interclasa doi vectori sortati in al treilea vector
void interclasare_vectori(int vector1[], int lungime1, int vector2[], int lungime2, int rezultat[]) {
    int index1 = 0, index2 = 0, index_rezultat = 0;

    // Interclasare pana cand unul dintre vectori se termina
    while (index1 < lungime1 && index2 < lungime2) {
        if (vector1[index1] <= vector2[index2]) {
            rezultat[index_rezultat++] = vector1[index1++];
        } else {
            rezultat[index_rezultat++] = vector2[index2++];
        }
    }

    // Adaugarea elementelor ramase din primul vector
    while (index1 < lungime1) {
        rezultat[index_rezultat++] = vector1[index1++];
    }

    // Adaugarea elementelor ramase din al doilea vector
    while (index2 < lungime2) {
        rezultat[index_rezultat++] = vector2[index2++];
    }
}

// Functie pentru afisarea unui vector
void afisare_vector(int vector[], int lungime) {
    for (int i = 0; i < lungime; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");
}

int main() {
    int lungime1, lungime2;

    printf("Introdu lungimea primului vector: ");
    scanf("%d", &lungime1);
    int vector1[lungime1];

    printf("Introdu elementele primului vector (sortate): \n");
    for (int i = 0; i < lungime1; i++) {
        printf("vector1[%d] = ", i);
        scanf("%d", &vector1[i]);
    }

    printf("Introdu lungimea celui de-al doilea vector: ");
    scanf("%d", &lungime2);
    int vector2[lungime2];

    printf("Introdu elementele celui de-al doilea vector (sortate): \n");
    for (int i = 0; i < lungime2; i++) {
        printf("vector2[%d] = ", i);
        scanf("%d", &vector2[i]);
    }

    // Alocare memorie pentru vectorul rezultat
    int lungime_rezultat = lungime1 + lungime2;
    int *rezultat = (int *)malloc(lungime_rezultat * sizeof(int));

    // Interclasare vectori
    interclasare_vectori(vector1, lungime1, vector2, lungime2, rezultat);

    printf("Vectorul interclasat este: \n");
    afisare_vector(rezultat, lungime_rezultat);

    // Eliberare memorie pentru vectorul rezultat
    free(rezultat);

    return 0;
}
