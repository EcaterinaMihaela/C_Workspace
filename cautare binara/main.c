#include <stdio.h>
#include <stdlib.h>
#define SIZE 7

int cautareaBinara(int array[], int target, int SIZE) {
    int left = 0;
    int right = SIZE - 1;

    while(left <= right) {
        int mid = (left + right) / 2;
        if(array[mid] == target)
            return mid;
        else if(array[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int array[SIZE] = {2, 2, 3, 3, 4, 7, 8}; // Array-ul trebuie să fie sortat
    int target;

    printf("target = ");
    scanf("%d", &target);

    int key = cautareaBinara(array, target, SIZE);
    if(key != -1) {
        printf("Numarul %d a fost gasit la pozitia %d", target, key);
    } else {
        printf("Numarul %d nu a fost gasit", target);
    }

    return 0;
}
