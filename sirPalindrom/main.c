#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_LENGTH 50
///function for verification if a string is palindrom
bool palindromVerify(char Sir[])
{
    int left = 0;
    int right = strlen(Sir) -1;

    while(left<right)
    {
        if(Sir[left++] != Sir[right--])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char Sir[MAX_LENGTH];
    printf("Sirul este: ");
    scanf("%s", Sir);

    if(palindromVerify(Sir))
        printf("The string is palindrom");
    else
        printf("The string is not palindrom");

    return 0;
}
