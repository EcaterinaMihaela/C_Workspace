#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LENGTH 50
///function for displaying the lenghth of a string
int stringLength(char string[])
{
    int length = 0;
    while(string[length] != '\0')
    {
        length++;
    }
    return length;
}
int main()
{
    ///afisarea unui nume cu maxim 50 de caractere
    char name[NAME_LENGTH];
    printf("The name is:");
    scanf("%s", name);

    printf("The name will be: %s\n", name);

    int result = stringLength(name);
    printf("The name will have %d letters", result);
    return 0;
}
