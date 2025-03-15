#include <stdio.h>
#include <stdlib.h>
#include <string.h>
///function for reading
void reading(char string[50][50],int nrCuv)
{
    for(int i=0; i<nrCuv; i++)
    {
        printf("The word %d: ", i+1);
        scanf("%s", string[i]);
    }
        printf("\n");

}

///function for displaying the string
void displayingString(char string[50][50],int nrCuv)
{
    printf("The string is :");
    for(int i=0; i<nrCuv; i++)
    {
        printf("%s ", string[i]);
    }
    printf("\n");
}

///function for replasing the string
void replace(char string[50][50], int nrCuv)
{
    char k = '0';
    for(int i=0; i<nrCuv; i++)
    {
        int dimCuv = strlen(string[i]);
        for(int j=0; j<dimCuv; j++)
        {
            string[i][j] = k;
            k++;
        }
    }
}
void inversareCuvinte(char string[50][50],int nrCuv)
{
    printf("The reversed string is(words): \n");
    for(int i= nrCuv-1; i>=0; i--)
    {
        printf("%s ", string[i]);
    }
    printf("\n");
}

void inversareLitere(char string[50][50],int nrCuv)
{
    printf("The reversed string is:(letters) \n");
    for(int i=0; i<nrCuv; i++)
    {
        int dimCuv = strlen(string[i]);
        for(int j=dimCuv-1; j>=0; j--)
        {
            printf("%c", string[i][j]);
        }
        printf(" ");
    }
    printf("\n");
}
int main()
{
    char string[50][50];
    int nrCuv;
    printf("Enter the number of words: \n");
    scanf("%d", &nrCuv);

    reading(string,nrCuv);
    displayingString(string,nrCuv);

    char newString[50][50];
    for(int i=0; i<nrCuv; i++)
    {
        int dimCuv = strlen(string[i]);
        for(int j=0; j<dimCuv; j++)
        {
            newString[i][j]=string[i][j];
        }
    }
    printf("Un sir care retine valorile sirului initial este: \n");
    displayingString(newString, nrCuv);

    //replace(string, nrCuv);
    printf("Noul string este: \n");
    displayingString(newString,nrCuv);

    inversareCuvinte(newString, nrCuv);

    inversareLitere(newString,nrCuv);


    return 0;
}
