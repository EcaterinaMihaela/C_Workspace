#include <stdio.h>
#include <stdlib.h>
void paritate(int num)
{
        if ((num&1)==0)
        {
            printf("par");
        }
        else
        {
            printf("impar");
        }
}

int main()
{
    int num = 897;
    paritate(num);
    return 0;
}
