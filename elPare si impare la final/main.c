#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vector[4] = {1,2,3,4};
    int vectorNou[4];
    int k = 0;

    for(int i = 0; i<4; i++)
    {
        if(vector[i]%2==0)
        {
            vectorNou[k++] = vector[i];
        }

    }

    for(int i = 0; i<k; i++)
    {
        printf("%d ", vectorNou[i]);
    }
    return 0;
}
