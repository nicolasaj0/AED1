//Exercicio 3 de Ponteiros
#include <stdio.h>

int main() 
{
    int arr[5];
    int *ptr = arr;

    printf("Insira 5 numeros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++) {
        *(ptr + i) += 10;
    }

    printf("\nNovo array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: %d\n", i + 1, *(ptr + i));
    }

    return 0;
}