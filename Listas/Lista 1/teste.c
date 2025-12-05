#include <stdio.h>

struct Produto{
    char nome[50];
    int codigo;
    float valor;
};

 struct Node{
    int dado;
    struct Node *next;
};

int main()
{
    struct Produto produto;

    // Ponteiros
    int nota = 10;
    int* ptr_nota = &nota;
    printf("%d\n", nota);
    printf("%p\n", &nota);
    printf("%d\n", *ptr_nota);

    printf("\n1. Informe o nome do produto: ");
    scanf("%s", produto.nome); // %s para puxar strings de estruturas
    printf("\n2. Informe o codigo do produto para registra-lo: ");
    scanf("%d", &produto.codigo);
    printf("\n3. Informe o valor a ser cobrado pelo produto: ");
    scanf("%f", &produto.valor);

    printf("\n1.Nome:%s\n2.Codigo:%d\n3.Valor:R$ %.2f\n", produto.nome, produto.codigo, produto.valor);

    struct Node *node1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node *node2 = (struct Node*)malloc(sizeof(struct Node));
    
    node1->dado = 10;
    node1->next = node2;

    node2->dado = 20;
    node2->next = NULL;

    free(node1);
    free(node2);
    
    return 0;
}