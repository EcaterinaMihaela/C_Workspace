#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

/// Function for the linear search of a number
int linearSearch(int array[], int target) {
    for(int i = 0; i < SIZE; i++) {
        if(array[i] == target) {
            return i;
        }
    }
    return -1;
}

/// Function for the binary search of a number
int binarySearch(int array[], int target) {
    int left = 0;
    int right = SIZE - 1;

    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(array[mid] == target) {
            return mid;
        } else if(array[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int array[SIZE] = {0, 1, 2, 3, 4};
    printf("The array is: ");

    for(int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }

    int target;
    printf("\ntarget = ");
    scanf("%d", &target);

    int verification = linearSearch(array, target);
    if(verification != -1) {
        printf("The number %d was found at the position %d using linear search.\n", target, verification);
    } else {
        printf("The number was not found using linear search.\n");
    }

    int key = binarySearch(array, target);
    if(key != -1) {
        printf("The number %d was found at the position %d using binary search.\n", target, key);
    } else {
        printf("The number was not found using binary search.\n");
    }

    return 0;
}
