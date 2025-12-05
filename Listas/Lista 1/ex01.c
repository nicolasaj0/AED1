/* Exercicio 1 e 2 */
#include <stdio.h>

struct Retangulo{
    float altura;
    float largura;
};

float redimensionar(struct Retangulo retangulo, float fator)
{
    return (((retangulo.altura * fator)*(retangulo.largura * fator)));
}

int main()
{
    struct Retangulo retangulo;
    float fator;

    printf("\n Insira a altura e largura do retangulo: ");
    scanf("%f %f", &retangulo.altura, &retangulo.largura);
    float area = retangulo.altura * retangulo.largura;
    printf("\n Agora insira um valor para redimensionar este retangulo: ");
    scanf("%f", &fator);
    printf("\n Valor da area original do retangulo: %.2f\n Valor da area redimensionada: %.2lf\n", area, redimensionar(retangulo, fator));

    return 0;
}