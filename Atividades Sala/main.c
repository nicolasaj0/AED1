#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

int main()
{
    float d;
    Ponto *pontoA, *q;
    int a, b;

    pontoA = pto_cria(10,21);
    q = pto_cria(7,25);
    //q->x = 2; //erro
    pto_acessa(pontoA, &a, &b);
    //a = 10
    //b = 21

    pto_atribui(pontoA, 100, 200);
    d = pto_distancia(pontoA,q);
    printf("Distância entre pontos: %f", d);
}