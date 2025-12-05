//Ex 01 e 02 
#include <stdio.h>

int buscaSequencial(int* arr, int n, int chave)
{
    for (int i = 0; i < n; i++){
        if(arr[i] == chave){
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = { 10, 50, 30, 70, 80, 60, 20, 90, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int chave = 30;

    int i = buscaSequencial(arr, n, chave);

    if(i == -1)
      printf("\nChave nao encontrada\n");
    else
      printf("\nChave encontrada na posicao: %d\nComparacoes feitas: %d\n", i, i+1);
    
    return 0;
}