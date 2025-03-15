#include <stdio.h>

#define lungime 5

// Functie recursiva pentru a gasi elementul maxim dintr-un vector
int maximRecursiv(int vector[], int index, int maxim) {
    if (index >= lungime) {
        return maxim;
    }
    if (vector[index] > maxim) {
        maxim = vector[index];
    }
    return maximRecursiv(vector, index + 1, maxim);
}

int main() {
    int vector[lungime];
    for (size_t i = 0; i < lungime; i++) {
        printf("vector[%d]=", i);
        scanf("%d", &vector[i]);
    }

    int el_max = maximRecursiv(vector, 0, vector[0]);
    printf("Elementul maxim este: %d", el_max);
    return 0;
}
