//Ex 14
#include <stdio.h>

int buscaBinaria(int vetor[], int n, int chave, int *compara, int *posAnt, int *posProx) 
{
    int inicio = 0;
    int fim = n - 1;
    
    while (inicio <= fim) 
    {
        (*compara)++;
        int meio = inicio + (fim - inicio) / 2;

        if(vetor[meio] == chave){   
            *posAnt = -1;
            *posProx = -1;
            return meio;
        }else if (vetor[meio] < chave){
            inicio = meio + 1;
        }else {
            fim = meio - 1;
        }
 }
 
 *posAnt = fim;
 *posProx = inicio;

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
    int compara = 0;
    
    bubbleSort(vetor, n);
    
    while(1)
    {
        printf("Digite uma chave para buscar no vetor\n(Aperte 0 caso queira sair.) ");
        int chave;
        scanf("%d", &chave);

        if(chave == 0){
            break;
        }

        int anterior, proximo;
        int i = buscaBinaria(vetor, n, chave, &compara, &anterior, &proximo);

        if (i != -1){            
            printf("Chave %d encontrada na posicao %d\nIteracoes: %d\n", chave, i, compara);
        }else {
            printf("Chave %d nao encontrada no vetor\n", chave);

            if(anterior == -1){
                printf("Poderia ser inserido na posicao %d antes de %d\n", proximo, vetor[proximo]);
            }else if(proximo == n){
                printf("Poderia ser inserido na posicao %d apos %d\n", proximo, vetor[anterior]);
            }else{
                printf("Poderia ser inserido entre a posicao %d (%d) e %d (%d)\n", anterior, vetor[anterior], proximo, vetor[proximo]);
            }
        }
    }
    
    return 0;
}