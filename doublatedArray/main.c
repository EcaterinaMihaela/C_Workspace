#include <stdio.h>
#include <stdlib.h>
///Given an array of integers, return a new array with each value doubled.

///For example:

///[1, 2, 3] --> [2, 4, 6]

int doubledElement(int array[3], int newArray[3])
{
    for(int i=0; i<3; i++)
    {
        newArray[i] = 2 * array[i];
    }

    for(int i=0; i<3 ; i++)
    {
        printf("%d ", newArray[i]);
    }
}

int main()
{
    int array[3] = {1,2,3};
    int newArray[3];

    printf("The array is: \n");
    for(int i=0; i<3; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\nThe array with each element doubled is: \n");
    doubledElement(array,newArray);
    return 0;
}
