#include <stdio.h>
#include <stdlib.h>

void cifre(int num, int vector[10])
{
    if (num == 0)
    {
        printf("numarul e 0\n");
        vector[0] = 0;
        return;
    }

    printf("Cifrele numarului sunt: ");
    int k = 0;
    while (num > 0)
    {
        int digit = num % 10;
        printf("%d ", digit);
        vector[k++] = digit;
        num = num / 10;
    }
    printf("\n");
}

int nrCifre(int num)
{
    int k = 0;
    while (num > 0)
    {
        num = num / 10;
        k++;
    }
    return k;
}

void bubbleSort(int vector[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (vector[j] < vector[j + 1])
            {
                // swap the elements if they are in the wrong order
                int temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int num, k;
    printf("num = ");
    scanf("%d", &num);

    // Get the number of digits
    k = nrCifre(num);

    // Check if the number is 0
    if (k == 0)
    {
        return 0;
    }

    int vector[10]; // Assuming the number has at most 10 digits

    // Extract and display the digits
    cifre(num, vector);

    // Display the digits stored in the vector
    printf("Digits stored in the vector: ");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", vector[i]);
    }

    // Sort the vector in descending order using Bubble Sort
    bubbleSort(vector, k);

    // Display the sorted vector
    printf("\nSorted vector in descending order: ");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", vector[i]);
    }

    return 0;
}
