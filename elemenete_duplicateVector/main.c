#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vector[4] = {4, 4, 6, 8};

    // Print the original vector
    printf("Original Vector: ");
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", vector[i]);
    }

    int contor = 0;
    for (int i = 0; i < 3; i++)  // Fix: Use i < 3 to avoid accessing vector[i+1] in the last iteration
    {
        if (vector[i] == vector[i + 1])
        {
            contor++; // Number of repeated elements
        }
    }

    int newVector[4 - contor];

    int j = 0; // Index for newVector
    for (int i = 0; i < 3; i++)  // Fix: Use i < 3 to avoid accessing vector[i+1] in the last iteration
    {
        if (vector[i] != vector[i + 1])
        {
            newVector[j] = vector[i];
            j++;
        }
    }
    newVector[j] = vector[3]; // Fix: Add the last element to newVector

    // Print the new vector without duplicates
    printf("\nNew Vector: ");
    for (int i = 0; i < 4 - contor; i++)
    {
        printf("%d ", newVector[i]);
    }

    return 0;
}
