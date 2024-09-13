//Exercicio 2 de Ponteiros
#include <stdio.h>

int main()
{
    int x,y;
    scanf("%d", &x);
    scanf("%d", &y);
    int *pointx = &x;
    int *pointy = &y;

    printf("Endereco de x: %p\n", pointx);
    printf("Endereco de y: %p\n", pointy);
    
    if(pointx > pointy)
    {
        printf("O maior endereco e o de x contendo: %d\n", x);
    }else {
        printf("O maior endereco e o de y contendo: %d\n", y);
    }

    return 0;
}