//Ex 12
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

void bubbleSort(int vetor[], int n)
{
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1; j++){
            if(vetor[j] > vetor[j+1]){
                int temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }
}

int main() 
{

    int vetor[] = {33, 12, 74, 25, 98, 16, 26, 43, 57, 71, 29, 64, 91, 45, 2};
    int n = sizeof(vetor) / sizeof(vetor[0]);
    
    bubbleSort(vetor, n);
    
    while(1)
    {
        printf("Digite uma chave para buscar no vetor\n(Aperte 0 caso queira sair.) ");
        int chave;
        scanf("%d", &chave);

        if(chave == 0){
            break;
        }

        int i = buscaBinaria(vetor, n, chave);

        if (i != -1){            
            printf("Chave %d encontrada na posicao %d\n", chave, i);
        }else {
            printf("Chave %d nao encontrada no vetor\n", chave);
        }
    }
    
    return 0;
}