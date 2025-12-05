#include <stdio.h>

struct Aluno{
    char nome[50];
    int matricula;
    float IRA;
};

int main()
{
    struct Aluno aluno;

    scanf("%s", aluno.nome);
    aluno.matricula = 202504577;
    aluno.IRA = 7.5;

    printf("\n1.Nome: %s\n 2.Matricula: %d\n 3.IRA: %f", aluno.nome, aluno.matricula, aluno.IRA);

    return 0;

}