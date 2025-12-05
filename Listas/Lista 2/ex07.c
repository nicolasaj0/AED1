#include <stdio.h>
#include <stdlib.h>

struct Ponto{
    int x;
    int y;
};

int main()
{
    struct Ponto *p = (struct Ponto *)malloc(sizeof(struct Ponto));

    if(p == NULL){
        printf("Erro ao alocar memoria!");
        return 1;
    }

    p->x = 10;
    p->y = 20;

    printf("Coordenadas x: %d; y: %d", p->x, p->y);

    free(p);

    return 0;
}