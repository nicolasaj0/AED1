//Ex 07
#include <stdio.h>

void bubbleSort(int vetor[], int n)
{
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1; j++){
            if(vetor[j] < vetor[j+1]){
                int temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }
}

int main() 
{

    int vetor[] = {42, 7, 15, 3, 9, 81, 14};
    int n = sizeof(vetor) / sizeof(vetor[0]);
    
    bubbleSort(vetor, n);
    
    for(int i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;

}