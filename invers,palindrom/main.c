#include <stdio.h>
#include <stdlib.h>
int digits(int number)
{
    int digit = 0;
    while(number>0)
    {
        digit = number % 10;
        printf(" %d", digit);
        number = number / 10;
    }
    return digit;
}

///DYSPLAYING THE OPPOSITE OF THE NUMBER:
int opposite(int number)
{
    int opposite = 0;
    while(number != 0 )
    {
        opposite = opposite * 10 + number % 10;
        number = number / 10;
    }
    return opposite;
}

void isPalindrom(int number)
{
    if(number == opposite(number))
    {
        printf("The number is palindrom");
    }
    else
    {
        printf("The number is not palindrom");
    }
}

int noDigits(int number)
{
    int nrDigits = 0;
    int digit = 0;
    while(number>0)
    {
        digit = number % 10;
        number = number / 10;
        nrDigits++;
    }
    return nrDigits;
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if(num == 0)
        printf("The number is 0");
    else
    {
        printf("The digits are: ");
        digits(num);
    }

    ///THE OPPOSITE
    int oppositeNum = opposite(num);
    printf("\nThe opposite of the number is : %d\n", oppositeNum);

    isPalindrom(num);

    int result = noDigits(num);
    if(num ==0 )
        result=1;
    printf("\nThe number has %d digits", result);

    ///RETINEM CIFRELE NUMARULUI INTR UN VECTOR
    int array[1];
    printf("\nCifrele retinute in vector: ");
    for(int i=0; i<1; i++)
    {
        array[i] = digits(num);
         printf("%d ", array[i]);
    }

    printf("\nCifrele numarului pare sunt: ");
    for(int i=0; i<1; i++)
    {
        if(array[i]%2 == 0)
             printf("%d ", array[i]);
    }

    return 0;
}
