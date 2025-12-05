//Ex 03
#include <stdio.h>
#include <string.h>

int buscaSequencial(const char* arr[], int n, char* chave)
{
    for (int i = 0; i < n; i++){
        if(strcmp(arr[i], chave) == 0){
            return i;
        }
    }
    return -1;
}

int main()
{
    const char *arr[] = { "Carlos", "Joao", "Rafael", "Nicolas", "Gabriel", "Alice", "Mariana", "Vitoria"};
    int n = sizeof(arr) / sizeof(arr[0]);
    char chave[30];
    printf("\nDigite um nome para procurar: ");
    scanf("%s", chave);

    int i = buscaSequencial(arr, n, chave);

    if(i == -1)
      printf("\nChave nao encontrada\n");
    else
      printf("\nChave encontrada na posicao: %d\nComparacoes feitas: %d\n", i, i+1);
    
    return 0;
}