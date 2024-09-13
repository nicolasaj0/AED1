//Exercicio 4 de Alocacao
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    while(N < 2)
    {
        printf("Numero invalido, digite novamente");
        scanf("%d", &N);
    }

    int *vet;
    int i;

    vet = (int *) malloc(N * sizeof(int));

    if (vet == NULL)
    {
        printf("Erro de alocacao!\n");
        return 1;
    }

    for(i = 0; i < N; i++)
    {
        vet[i] = i + 1;
    }

    for(i = 0; i < N; i++)
    {
        printf("%d", vet[i]);
    }
    printf("\n");

    free(vet);

    return 0;
}