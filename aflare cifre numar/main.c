#include <stdio.h>
#include <stdlib.h>
void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void bubbleSort(int array[],int SIZE)
{
    for(int i=0; i<SIZE; i++)
    {
        for(int j=0; j<SIZE-i-1; j++)
        {
            if(array[j]> array[j+1])
            {
                swap(&array[j], &array[j+1]);
            }
        }
    }
}

void aflareCifre(int num)
{
    while(num>0)
    {
        int lastDigit = num % 10;
        printf(" %d", lastDigit);
        num = num/10;
    }
}

int invers(int num)
{
    int invers = 0;
    while(num!=0)
    {
        invers = invers*10 + num%10;
        num = num/10;
    }
    return invers;
}

void isPalindrom(int num)
{
    int inversul =invers(num);
    if(num == inversul)
        printf("Numarul este palindrom\n");
    else
        printf("Numarul nu este palindrom\n");
}
int main()
{
    int n=3;  ///nr de el al vectorului numar
    int numar[n];
    printf("Introdu cifrele numarului: (only <=9)\n");
    for(int i=0; i<n ; i++)
    {
        scanf("%d", &numar[i]);
        if(numar[i] >= 10 )
        {
            printf("Nu ai introdus o cifra,ci un numar!");
            return -1;
        }
    }

    printf("Numarul este: \n");
    for(int i=0; i<n ; i++)
    {
        printf("%d", numar[i]);
    }

    printf("\nNumarul cu cifrele ordonate este: \n");
    bubbleSort(numar , n);
    for(int i=0; i<n ; i++)
    {
        printf("%d", numar[i]);
    }

    for(int i=0; i<n; i++)
    {
        if(numar[i]%2 == 0)
        {
            printf("\nCifra %d e para\n", numar[i]);
        }
        else
            printf("\nCifra %d este impara\n", numar[i]);
    }

    ////////////////////////////////////////////////////////alta metoda////////////////////////////////////////////////

    int num;
    printf("NUMARUL ESTE:\n");
    scanf("%d", &num);

    printf("Cifrele sunt: \n");
    aflareCifre(num);

    int result = invers(num);
    printf("Inversul este: %d\n", result);

    isPalindrom(num);
    return 0;
}
