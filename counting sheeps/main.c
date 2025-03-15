#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;
    printf("Enter the nr of sheeps: ");
    scanf("%d", &count);

    switch(count)
    {
    case 0:
        printf("zeros sheep...");
        break;
    case 1:
        printf("one sheep...");
        break;
    case 2:
        printf("two sheep...");
        break;
        defalt:
            printf("%d sheep", count);
    }
    return 0;
}
