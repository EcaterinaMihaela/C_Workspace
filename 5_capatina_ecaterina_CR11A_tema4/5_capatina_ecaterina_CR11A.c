#include <stdio.h>
#include <stdbool.h>

// Funcție pentru a determina numărul de cifre ale unui număr
int numar_cifre(int numar) {
    int cifre = 0;
    while (numar != 0) {
        numar /= 10;
        cifre++;
    }
    return cifre;
}

// Funcție pentru a verifica dacă un număr poate fi obținut din altul prin eliminarea unei cifre
bool similar(int a, int b) {
    int cifre_a = numar_cifre(a);
    int cifre_b = numar_cifre(b);

    if (cifre_a == cifre_b) {
        int diferente = 0;
        for (int putere = 1; putere <= cifre_a; putere *= 10) {
            int cifra_a = (a / putere) % 10;
            int cifra_b = (b / putere) % 10;
            if (cifra_a != cifra_b) {
                diferente++;
            }
        }
        return (diferente == 1);
    } else if (cifre_a == cifre_b + 1) {
        // Verificare pentru eliminarea unei singure cifre din 'a'
        for (int putere = 1; putere <= cifre_a; putere *= 10) {
            int nou_a = a / (putere * 10) * putere + a % putere;
            if (nou_a == b) {
                return true;
            }
        }
    } else if (cifre_a + 1 == cifre_b) {
        // Verificare pentru inserarea unei singure cifre în 'a'
        for (int putere = 1; putere <= cifre_b; putere *= 10) {
            int nou_a = a / putere * (putere * 10) + b % (putere * 10);
            if (nou_a == b) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int a, b;
    printf("Introdu doua numere naturale: ");
    scanf("%d %d", &a, &b);

    if (similar(a, b)) {
        printf("DA\n");
    } else {
        printf("NU\n");
    }

    return 0;
}
