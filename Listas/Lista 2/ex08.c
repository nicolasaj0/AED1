#include <stdio.h>

struct Retangulo{
    float largura;
    float altura;
};

void Redimensionar(struct Retangulo *r, float fator){
    r->altura *= fator;
    r->largura *= fator;
}

int main()
{
    struct Retangulo r;
    r.altura = 5.0;
    r.largura = 2.0;

    printf("\nArea do retangulo (antes): %.2f\n", r.altura * r.largura);
    Redimensionar(&r, 2.0);
    printf("Area do retangulo (depois): %.2f\n", r.altura * r.largura);

    return 0;
}