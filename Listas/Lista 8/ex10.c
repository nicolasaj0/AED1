//Ex 10
#include <stdio.h>

void bubbleSort(float notas[], int n)
{
    for(int i = 0; i < n - 1; i++){

         int trocou = 0;

        for(int j = 0; j < n - 1; j++){
            if(notas[j] > notas[j+1]){
                float temp = notas[j];
                notas[j] = notas[j+1];
                notas[j+1] = temp;
                
                trocou = 1;
            }    
        }

        if(trocou == 0){
            break;
        }
    }
}

int main() 
{

    float notas[] = {7.1, 6.9, 9.5, 5.8, 7.3, 8.7};
    int n = 6;
    
    bubbleSort(notas, n);
    
    for(int i = n - 1; i >= n - 3; i--)
    {
        printf("%.2f ", notas[i]);
    }
    printf("\n");

    return 0;

}