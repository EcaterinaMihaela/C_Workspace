#include <stdio.h>
#include <stdlib.h>

struct Punct {
    int x;
    int y;
};

int coliniaritate(struct Punct A, struct Punct B, struct Punct C) {
    int m1, m2;
    m1 = (B.y - A.y) * (C.x - B.x);
    m2 = (C.y - B.y) * (B.x - A.x);

    if (m1 == m2) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    struct Punct A, B, C;

    printf("Coordonatele punctelor: \n");
    printf("Coordonatele punctului A sunt: \n");
    printf("x=");
    scanf("%d", &A.x);
    printf("y=");
    scanf("%d", &A.y);

    printf("Coordonatele punctului B sunt: \n");
    printf("x=");
    scanf("%d", &B.x);
    printf("y=");
    scanf("%d", &B.y);

    printf("Coordonatele punctului C sunt: \n");
    printf("x=");
    scanf("%d", &C.x);
    printf("y=");
    scanf("%d", &C.y);

    printf("Punctele sunt :\n");
    printf("A(%d,%d) ", A.x, A.y);
    printf("B(%d,%d) ", B.x, B.y);
    printf("C(%d,%d)\n", C.x, C.y);

    if (coliniaritate(A, B, C)) {
        printf("Punctele sunt coliniare.\n");
    } else {
        printf("Punctele nu sunt coliniare.\n");
    }

    return 0;
}
