//Ex 04
#include <stdio.h>

int buscaSequencial(int* arr, int n)
{
    for (int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            printf("\nChave encontrada na posicao: %d\n", i);
        }
    }
    return 0;
}

int main()
{
    int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    buscaSequencial(arr, n);
}