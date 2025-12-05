#include <stdio.h>

int buscaSequencial(int v[], int n, int chave)
{
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        if(v[i] == chave){
            return i;
        }
    }
    return -1;
}

int buscaBinaria(int v[], int n, int chave)
{
    int inicio = 0, fim = n-1;
    while(inicio <= fim){
        int meio = (inicio + fim)/2;
        if(v[meio] == chave) return meio;
        else if(chave < v[meio]) fim = meio - 1;
        else inicio = meio + 1;
    }
    return -1;
}

void bubbleSort(int v[], int n)
{
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(v[j] > v[j+1]){
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
}

int main() 
{
    int vetor[] = {42, 7, 15, 3, 9, 81, 14};
    int n = 7, chave = 15;
    int pos = buscaSequencial(vetor, n, chave);
    bubbleSort(vetor, n);
    pos = buscaBinaria(vetor, n, chave);
}