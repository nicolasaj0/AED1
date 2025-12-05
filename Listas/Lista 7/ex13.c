#include <stdio.h>

void somaVetor(int v[], int n) 
{
    int soma = 0, cont = 0;
    for (int i = 0; i < n; i++) {
        soma += v[i];
        cont++;
    }
    printf("Soma = %d\nContagem = %d\n", soma, cont);
}

int main() 
{
    int v[] = {1, 2, 3, 4, 5};
    somaVetor(v, 5);

    return 0;
}