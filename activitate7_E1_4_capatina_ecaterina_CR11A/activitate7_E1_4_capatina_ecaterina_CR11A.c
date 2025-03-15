#include <stdio.h>
#include <stdlib.h>

void citireVector(int v[], int lungime) {
    printf("Introduceti elementele vectorului:\n");
    for (int i = 0; i < lungime; i++) {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }
}

void afisareVector(int v[], int lungime) {
    printf("Elementele vectorului sunt:\n");
    for (int i = 0; i < lungime; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void adunare(int v1[], int v2[], int rezultat[], int lungime) {
    for (int i = 0; i < lungime; i++) {
        rezultat[i] = v1[i] + v2[i];
    }
}

void scadere(int v1[], int v2[], int rezultat[], int lungime) {
    for (int i = 0; i < lungime; i++) {
        rezultat[i] = v1[i] - v2[i];
    }
}

void inmultire(int v1[], int v2[], int rezultat[], int lungime) {
    for (int i = 0; i < lungime; i++) {
        rezultat[i] = v1[i] * v2[i];
    }
}

void impartire(int v1[], int v2[], float rezultat[], int lungime) {
    for (int i = 0; i < lungime; i++) {
        if (v2[i] != 0) {
            rezultat[i] = (float)v1[i] / v2[i];
        } else {
            printf("Nu se poate efectua impartirea pe pozitia %d. Impartitorul este zero.\n", i);
            rezultat[i] = 0; // Dacă împărțitorul este zero, rezultatul va fi 0
        }
    }
}

int main() {
    int lungime;
    printf("Introduceti lungimea vectorilor: ");
    scanf("%d", &lungime);

    int vector1[lungime], vector2[lungime], rezultat[lungime];
    float rezultatImpartire[lungime];

    printf("Pentru vectorul 1:\n");
    citireVector(vector1, lungime);

    printf("Pentru vectorul 2:\n");
    citireVector(vector2, lungime);

    int operatie;
    printf("Alege operatia:\n");
    printf("1 - Adunare\n2 - Scadere\n3 - Inmultire\n4 - Impartire\n");
    scanf("%d", &operatie);

    switch (operatie) {
        case 1:
            adunare(vector1, vector2, rezultat, lungime);
            printf("Rezultatul adunarii:\n");
            afisareVector(rezultat, lungime);
            break;
        case 2:
            scadere(vector1, vector2, rezultat, lungime);
            printf("Rezultatul scaderii:\n");
            afisareVector(rezultat, lungime);
            break;
        case 3:
            inmultire(vector1, vector2, rezultat, lungime);
            printf("Rezultatul inmultirii:\n");
            afisareVector(rezultat, lungime);
            break;
        case 4:
            impartire(vector1, vector2, rezultatImpartire, lungime);
            printf("Rezultatul impartirii:\n");
            afisareVector(rezultatImpartire, lungime);
            break;
        default:
            printf("Optiune invalida!\n");
    }

    return 0;
}
