#include <stdio.h>
#include <string.h>

void inversare(char string[50])
{
    int dimCuv = strlen(string);
    for (int i = dimCuv - 1; i >= 0; i--)
    {
        printf("%c", string[i]);
    }
    printf("\n");
}

void concatenare(char string1[50], char string2[50], char newString[100]) // Mărimea trebuie să fie suficient de mare pentru a include ambele șiruri concatenate
{
    strcpy(newString, string1); // Copiem primul șir în noul șir
    strcat(newString, string2); // Adăugăm la noul șir conținutul celui de-al doilea șir
}

int main()
{
    char string1[50] = {"Hello"};
    printf("Original: %s\n", string1);
    printf("Invers: ");
    inversare(string1);

    char string2[50] = {"Word"};
    printf("Original: %s\n", string2);
    printf("Invers: ");
    inversare(string2);

    char newString[100]; // Dimensiunea trebuie să fie suficient de mare pentru a include ambele șiruri concatenate
    concatenare(string1, string2, newString);
    printf("Concatenat: %s\n", newString);

    return 0;
}
