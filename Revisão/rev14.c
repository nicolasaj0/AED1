//Exercicio 14 de Revisao

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i, j, m;

    scanf("%d", &m);

    int **tring = malloc(m * sizeof(int *));
    for (i = 0; i < m; i++)
    {
        tring[i] = malloc((i+1) * sizeof(int));
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j <= i; j++)
        {
            scanf("%d", &tring[i][j]);
        }   
    }

    for (i = 0; i < m; i++)
    {
        for (j= 0; j <= i; j++)
        {
            printf("%d ", tring[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < m; i++)
    {
        for (j= 0; j <= i; j++)
        {
            printf("%d ", tring[i][j] * 5);
        }
        printf("\n");
    }

    for (i = 0; i < m; i++)
    {
        free(tring[i]);
    }
    free(tring);

    return 0;
}
