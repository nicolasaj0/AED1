#include <stdio.h>

struct Retangulo{
    float base;
    float altura;
};

void redimensionar(struct Retangulo *retangulo, float fator){
    retangulo->altura = retangulo->altura * fator;
    retangulo->base = retangulo->base * fator;
}

int main()
{
    struct Retangulo retangulo;
    retangulo.altura = 5.0;
    retangulo.base = 2.5;
    printf("\nAntes: %.2f\n", retangulo.altura * retangulo.base);
    redimensionar(&retangulo, 2.0);
    printf("Depois: %.2f", retangulo.altura * retangulo.base);

    return 0;
}