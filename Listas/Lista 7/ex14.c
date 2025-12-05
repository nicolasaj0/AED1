#include <stdio.h>

int bsearch_iter(int *v, int n, int x) 
{
    int ini = 0, fim = n - 1, meio, comp = 0;
    while (ini <= fim) {
        meio = (ini + fim) / 2;
        comp++;
        if (v[meio] == x) {
            printf("Comparacoes = %d\n", comp);
            return meio;
        } else if (v[meio] < x)
            ini = meio + 1;
        else
            fim = meio - 1;
    }
    printf("Comparacoes = %d\n", comp);
    return -1;
}

int main() 
{
    int v[] = {1, 3, 5, 7, 9};
    int idx = bsearch_iter(v, 5, 7);
    printf("Indice = %d\n", idx);

    return 0;
}
