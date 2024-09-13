//Exercicio de matrizes, alocacao, vetores e ponteiros 2
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

    for (i = 0; i < N; i++) 
    {
        for (j = 0; j < N; j++) {
            if (i == j) {
                mat[i][j] = 0;
            } else if (i < j) {
                mat[i][j] = 1;
            } else {
                mat[i][j] = -1;
            }
        }
    }
    printf("Matriz preenchida:\n");
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