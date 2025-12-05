#include <stdio.h>

int main()
{
    int a = 40;
    int b = 20;

    int soma = a + b;
    int produto = a * b;
    int divisao = a / b;
    int modulo = a % b;

    printf("Resultados:\n 1.Soma: %d\n 2.Produto: %d\n 3.Divisao Inteira: %d\n 4.Modulo: %d\n", soma, produto, divisao, modulo);

    return 0;
}