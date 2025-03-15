
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("cele 3 numere sunt:\n");
    printf("a=");
    scanf("%d", &a);

    printf("b=");
    scanf("%d", &b);

    printf("c=");
    scanf("%d", &c);

    if( (a<b) && (a<c) && (b<c)){
        printf("a e cel mai mic numar,b e mijlociu,c e cel mai mare: %d %d %d\n", a, b, c);
    }else if( (a<b) && (a<c) && (b>c)){
        printf("a e cel mai mic numar,b e cel mai mare,c e mijlociu: %d %d %d\n", a, c, b);
    }else if( (b<a) && (b<c) && (a<c) ){
        printf("b e cel mai mic,a e mijlociu, c e cel mai mare: %d %d %d\n",b ,a ,c);
    }else if( (b<c) && (c<a) && (b<a) ){
        printf("b e cel mai mic,c e mijlociu,a e cel mai mare: %d %d %d\n",b ,c ,a);
    }else if( (c<a) && (a<b) && (c<b) ){
        printf("c e cel mai mic,a e mijlociu,b e cel mai mic: %d %d %d\n",c ,a ,b);
    }else{
        printf("c e cel mai mic,b e mijlociu,a e cel mai mare: %d %d %d\n",c ,b, a);
    }
    return 0;
}
