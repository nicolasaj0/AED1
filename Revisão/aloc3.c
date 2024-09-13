//Exercicio 3 de Alocacao
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *vet;
    int size;
    int i;

    printf("Tamanho do vetor: ");
    scanf("%d", &size);

    vet = (int*) malloc(size * sizeof(int));

    if (vet == NULL) 
    {
        printf("Erro de alocacao!\n");
        return 1;
    }

    printf("Informe os elementos do vetor:\n");
    for (i = 0; i < size; i++) 
    {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    printf("Resultado:\n");
    for (i = 0; i < size; i++) 
    {
        printf("%d ", vet[i]);
    }
    printf("\n");

    free(vet);

    return 0;
}