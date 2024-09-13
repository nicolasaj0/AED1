//Exercicio 2 de Alocacao
#include <stdio.h>

typedef struct Aluno 
{
    int mat;
    char name[30];
    float tests[3];
}Aluno;

int main()
{
    printf("Tamanho da estrutura: %u\n", sizeof(Aluno));

    return 0;
}