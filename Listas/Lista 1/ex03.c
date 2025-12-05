/* Exercicio 3*/
#include <stdio.h>
#include <stdlib.h>

struct Ponto
{
    int x;
    int y;
};

int main()
{
    struct Ponto *ponto = (struct Ponto*)malloc(sizeof(struct Ponto));
    
    /*Verificar se há espaço na memória, pois se não houver o retorno será NULO */
    if(ponto == NULL){

        printf("Erro ao alocar memória!");
        return 1;
    }

    ponto->x = 7;
    ponto->y = 9;

    printf("Coordenadas x: %d ; y: %d", ponto->x, ponto->y);

    free(ponto);
    return 0;
}
