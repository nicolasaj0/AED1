//Exercicio de matrizes, alocacao, vetores e ponteiros 2
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;
    int startN;

    printf("Numeros de elementos da matriz: ");
    scanf("%d", &n);

    printf("Numero inicial: ");
    scanf("%d", &startN);

    int **matTring = (int **)malloc(n * sizeof(int *));
    
    if (matTring == NULL)
    {
        printf("Erro na alocacao para memoria!");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        matTring[i] = (int *)malloc((i+1) * sizeof(int));
        if (matTring[i] == NULL)
        {
            printf("Erro na alocacao para memoria!");
            return 1;
        }

        for (j = 0; j <= i; j++)
        {
            matTring[i][j] = startN;
            startN *= 2;
        }
    }

    printf("\n Resultado: \n");
    for (i = 0; i < n; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("%d ", matTring[i][j]);
        }

        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        free(matTring[i]);
    }

    free(matTring);

    return 0;
}