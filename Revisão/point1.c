#include <stdio.h>

int main()
{
    int x,y;

    int *pointx = &x;
    int *pointy = &y;

    printf("O endereço de x é %p\n", pointx);
    printf("O endereço de y é %p\n", pointy);
    
    if(pointx > pointy)
    {
        printf("O maior endereço é o de x\n");
    }else {
        printf("O maior endereço é o de y\n");
    }

    return 0;
}