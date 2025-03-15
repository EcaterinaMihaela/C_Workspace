#include <stdio.h>
#include <stdlib.h>

void concatenare(int array1[], int SIZE1, int array2[], int SIZE2, int newArray[]) {
    for (int i = 0; i < SIZE1; i++) {
        newArray[i] = array1[i];
    }

    for (int i = 0; i < SIZE2; i++) {
        newArray[SIZE1 + i] = array2[i];
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int array[], int SIZE)
{
    for(int i = 0; i < SIZE-1; i++)
    {
        int minindex = i;
        for(int j = i+1 ; j < SIZE; j++)
        {
            if(array[minindex] > array[j])
            {
                minindex = j;
            }
        }
        if(minindex != i)
        {
            swap(array[i], array[minindex]);
        }
    }
}

void displayingArray(int array[], int SIZE)
{
    for(int i = 0; i< SIZE; i++)
    {
        printf("%d ", array[i]);

    }
}

void interclasare(int array1[], int SIZE1,int array2[],int SIZE2, int newArray[])
{
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<SIZE1 && j<SIZE2)
    {
        if(array1[i] <= array2[j])
        {
            newArray[k++] = array1[i++];
        }
        else
        {
            newArray[k++] = array2[j++];
        }
    }

    ///Adaugarea elementelor ramase din vect1
    while(i< SIZE1)
    {
        newArray[k++] = array1[i++];
    }


    ///Adaugarea elementelor ramase din vect2
    while(j<SIZE2)
    {
        newArray[k++] = array2[j++];
    }
}


int main()
{
    int array1[4] = {1,2,3,4};
    int array2[4] = {5,6};
    selectionSort(array1, 4);
    selectionSort(array2, 2);
    printf("Primul vector ordonat este :\n");
    displayingArray(array1, 4);

    printf("\nAl doilea vector ordonat este: ");
    displayingArray(array2, 2);


    ///Interclasarea:
    int newArray[4+2];   ///suma dimensiunilor celor 2 vect
    interclasare(array1,4,array2,2,newArray);
    printf("\nVectorul interclasat este: \n");
    displayingArray(newArray, 6);

    ///CONACTENAREA
    concatenare(array1,4,array2,2,newArray);
    printf("\nconcatenat: \n");
    displayingArray(newArray,6);
    return 0;
}
