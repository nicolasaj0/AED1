//Exercicio 1 de Ponteiros
#include <stdio.h>

int main()
{
    int x,y;

    int *pointx = &x;
    int *pointy = &y;

    printf("Endereco de x: %p\n", pointx);
    printf("Endereco de y: %p\n", pointy);
    
    if(pointx > pointy)
    {
        printf("O maior endereco e o de x\n");
    }else {
        printf("O maior endereco e o de y\n");
    }

    return 0;
}