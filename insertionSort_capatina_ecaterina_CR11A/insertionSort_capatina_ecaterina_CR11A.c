#include <stdio.h>
#include <stdlib.h>

void insertionSort(int array, int lungime)
{
    int i,j,key;
    for(i=1; i<lungime-1; i++)
    {
        key = array[i];
        j = i-1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

int main()
{
    int lungime;
    printf("Introdu lungimea vectorului: ");
    scanf("%d", &lungime);

    int array[lungime];
    printf("Introduceti elementele vectorului:\n");
    for (int i = 0; i < lungime; i++) {
        scanf("%d", &array[i]);
    }

    insertionSort(array[lungime]);
    printf("Vectorul sortat e:");

    //Afisam vectorul:
    for(int i=0; i<lungime; i++)
    {
            printf("%d",array[i]);
            printf("\n");
    }

    return 0;
}
