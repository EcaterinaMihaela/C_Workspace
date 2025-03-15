#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 3;
    char s[30] = "ana";
    ///s repetat de n ori
    for(int i = 1; i<=n; i++)
    {
        printf("%s ", s);
    }
    return 0;
}
