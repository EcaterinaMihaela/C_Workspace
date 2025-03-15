#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///intervalul:
    printf("Numerele din interval sunt:\n");
    for (int i = 3; i <= 10; i++)
    {
        printf("%d\n", i);
    }
    for (int i = 3; i <= 10; i++)
    {
        printf("Divizorii numarului %d sunt: ", i);

        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                printf("%d ", j);
            }
        }
        printf("\n\n");
    }

    return 0;
}
