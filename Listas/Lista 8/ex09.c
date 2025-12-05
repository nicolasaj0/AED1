//Ex 09
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int vetor[], int n, int *compara, int *trocas)
{
    for(int i = 0; i < n - 1; i++){

         int trocou = 0;

        for(int j = 0; j < n - 1; j++){

            (*compara)++;

            if(vetor[j] > vetor[j+1]){
                int temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
                
                trocou = 1;
                (*trocas)++;
            }    
        }

        if(trocou == 0){
            break;
        }
    }
}

int main() 
{
    int n = 30;
    int vetor[n];
    int compara = 0;
    int trocas = 0;

    srand(time(NULL));
    
    for(int i = 0; i < n; i++){
        vetor[i] = (rand() % (99 - 1 + 1)) + 1;
    }
    
    bubbleSort(vetor, n, &compara, &trocas);
    
    for(int i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Comparacoes: %d\nTrocas: %d\n", compara, trocas);

    return 0;

}