//Ex 11
#include <stdio.h>

int buscaBinaria(int vetor[], int n, int chave) 
{
    int inicio = 0;
    int fim = n - 1;
    
    while (inicio <= fim) 
    {
        int meio = inicio + (fim - inicio) / 2;

        if(vetor[meio] == chave){
            return meio;
        }else if (vetor[meio] < chave){
            inicio = meio + 1;
        }else {
            fim = meio - 1;
        }
 }
 
 return -1;

}

int main() 
{

    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(vetor) / sizeof(vetor[0]);
    int chave = 6;
    
    int i = buscaBinaria(vetor, n, chave);

    if (i != -1){
        printf("Chave %d encontrada na posicao %d\n", chave, i);
    }else {
        printf("Chave %d nao encontrada no vetor\n", chave);
    }

    return 0;
}