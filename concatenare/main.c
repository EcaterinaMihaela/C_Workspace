#include <stdio.h>
#include <stdlib.h>

const int SIZE1 = 4;
const int SIZE2 = 3;

void reading(int *array, int SIZE)
{
    for(int i = 0; i < SIZE; i++)
    {
        printf("array[%d] = ", i + 1);
        scanf_s("%d", array + i);
    }
}

void displaying(int *array, int SIZE)
{
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ", *(array + i));
    }
}

void concatenare(int array1[], int SIZE1, int array2[], int SIZE2, int newArray[])
{
    for(int i=0; i<SIZE1; i++)
    {
        newArray[i] = array1[i];
    }

    for(int i=0; i<SIZE2; i++)
    {
        newArray[SIZE1+i] = array2[i];
    }
}
int main()
{
    ///Vector1
    int array1[SIZE1];
    reading(array1, SIZE1);
    printf("Primul vector este: \n");
    displaying(array1, SIZE1);

    ///VEctor2
    int array2[SIZE2];
    reading(array2,SIZE2);
    printf("\nAl doilea vector este: \n");
    displaying(array2, SIZE2);

    ///CONCATENARE
    int newArray[SIZE1+SIZE2];
    concatenare(array1, SIZE1,array2,SIZE2, newArray);
    printf("\nVectorul concatenat este: \n");
    displaying(newArray, SIZE1+SIZE2);
    return 0;
}
