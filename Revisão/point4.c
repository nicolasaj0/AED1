//Exercicio 4 de ponteiros
#include <stdio.h>

int main() 
{
    int var;
    int *ptr1;
    int **ptr2;
    int ***ptr3;

    scanf("%d", &var);

    ptr1 = &var;
    ptr2 = &ptr1;
    ptr3 = &ptr2;

    printf("2x de %d: %d\n", var, 2 * (*ptr1));
    printf("3x de %d: %d\n", var, 3 * (**ptr2));
    printf("4x de %d: %d\n", var, 4 * (***ptr3));

    return 0;
}