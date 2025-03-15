#include <stdio.h>

int main() {
    int num;
    printf("Introduceti numarul zecimal: ");
    scanf("%d", &num);

    int binaryNum[32];
    int i = 0;

    while (num > 0) {
        binaryNum[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Reprezentarea binara este: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }

    return 0;
}
