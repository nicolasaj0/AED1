//Exercicio de matrizes, alocacao, vetores e ponteiros 1
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int N, i, j;

    printf("Tamanho da matriz: ");
    scanf("%d", &N);

    int **mat = (int **) malloc(N * sizeof(int *));
    for (i = 0; i < N; i++) {
        mat[i] = (int *) malloc(N * sizeof(int));
    }

    if (mat == NULL) 
    {
        printf("Erro na alocacao!\n");
        return 1;
    }

    printf("Valores da matriz:\n");
    for (i = 0; i < N; i++) 
    {
        for (j = 0; j < N; j++) 
        {
            int valor;
            printf("mat[%d][%d]: ", i, j);
            scanf("%d", &valor);
            if (valor % 2 == 0) {
                mat[i][j] = valor;
            } else {
                mat[i][j] = 0;
            }
        }
    }

    printf("Matriz preeenchida:\n");
    for (i = 0; i < N; i++) 
    {
        for (j = 0; j < N; j++) 
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < N; i++) 
    {
        free(mat[i]);
    }
    free(mat);

    return 0;
}