//Ex 15
#include <stdio.h>
#include <string.h>

int buscaBinaria(const char* vetor[], int n, char* chave) 
{
    int inicio = 0;
    int fim = n - 1;
    
    while (inicio <= fim) 
    {
        int meio = inicio + (fim - inicio) / 2;

        int compara = strcmp(vetor[meio], chave);

        if(compara == 0){
            return meio;
        }else if (compara < 0){
            inicio = meio + 1;
        }else {
            fim = meio - 1;
        }
 }
 
 return -1;

}

int main() 
{

    const char *vetor[] = {"Joao", "Rafael", "Nicolas", "Alice", "Laura", "Debora"};
    int n = sizeof(vetor) / sizeof(vetor[0]);
    char chave[30];
    printf("\nProcure um nome no vetor: ");
    scanf("%s", chave);
    
    int i = buscaBinaria(vetor, n, chave);

    if (i != -1){
        printf("Chave %s encontrada na posicao %d\n", chave, i);
    }else {
        printf("Chave %s nao encontrada no vetor\n", chave);
    }

    return 0;
}