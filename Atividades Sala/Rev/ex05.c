#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno{
    char nome[30];
};

int main()
{
    struct Aluno *aluno = (struct Aluno*)malloc(sizeof(struct Aluno));
    if(aluno == NULL){
        return 1;
    }
    strcpy(aluno->nome, "teste"); //array fixo para guardar o nome, so funciona usando strcpy da string.h
    printf("%s", aluno->nome);
    
    free(aluno);
    
    return 0;
}