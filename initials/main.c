#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function for reading
void reading(char string[50][50], int nrCuv)
{
    for (int i = 0; i < nrCuv; i++)
    {
        printf("The word %d: ", i + 1);
        scanf("%s", string[i]);
    }
    printf("\n");
}

// Function for displaying the string
void displayingString(char string[50][50], int nrCuv)
{
    printf("The string is: ");
    for (int i = 0; i < nrCuv; i++)
    {
        printf("%s ", string[i]);
    }
    printf("\n");
}

// Function for keeping uppercase initials with a period
// Function for keeping uppercase initials with a period
void keepInitials(char string[50][50], char newString[50][50], int nrCuv)
{
    for (int i = 0; i < nrCuv; i++)
    {
        newString[i][0] = toupper(string[i][0]); // Uppercase the initial

        // Copy the rest of the word to the newString
        strcpy(newString[i] + 1, string[i] + 1);

        // Append a period after the initial
        strcat(newString[i], ".");
    }
}


int main()
{
    char string[50][50];
    char newString[50][50];
    int nrCuv;

    printf("Enter the number of words: \n");
    scanf("%d", &nrCuv);

    // Check if the number of words is less than or equal to 2
    if (nrCuv > 2)
    {
        printf("The string must have 2 words or fewer.\n");
        return -1;
    }

    reading(string, nrCuv);
    displayingString(string, nrCuv);

    keepInitials(string, newString, nrCuv);

    printf("String with uppercase initials and periods: ");
    for (int i = 0; i < nrCuv; i++)
    {
        printf("%s ", newString[i]);
    }
    printf("\n");

    return 0;
}
