//Exercício 13 da Lista 

#include <stdio.h>

typedef struct Dept 
{ 
    char name[30]; //Nome do departamento
    int workers; //Qntd de funcionários
    int exist; //Tempo de existência do departamento
} Dept;

typedef struct Operator 
{
    char op[60]; //Nome do funcionário
    int reg; //Matrícula
    int time; //Tempo trabalhado
} Operator;

int main() 

{

int i, n, limit;

printf("Informe o numero maximo de funcionarios da empresa: ");
scanf("%d", &limit);

printf("Informe a quantidade de funcionarios atuando na empresa: ");
scanf("%d", &n);

if (n > limit) 
    {
       printf("Numero de funcionarios excede o limite estabelecido pela empresa!\n");
       return 1;
    }

struct Operator ops[limit];
struct Dept dps[limit];

    //Leitura dos funcionários

for (i = 0; i < n; i++)
{
    printf("\nRegistro do Funcionario %d:\n", i+1);
    printf("Nome do funcionario: ");
    scanf(" %[^\n]%*c", ops[i].op);
    printf("Insira a matricula deste funcionario: ");
    scanf("%d", &ops[i].reg);
    printf("Tempo trabalhado: ");
    scanf("%d", &ops[i].time);
    printf("Nome do departamento: ");
    scanf(" %[^\n]%*c", dps[i].name);
    printf("Quantidade de funcionarios deste departamento: ");
    scanf("%d", &dps[i].workers);
    printf("Tempo de existencia do departamento: ");
    scanf("%d", &dps[i].exist);
}

    //Ficha dos Funcionários

printf("\nCadastro dos funcionarios:\n");
for (i = 0; i < n; i++) 
{
    printf("\nFicha do Funcionario %d\n", i+1);
    printf("Nome do funcionario: %s\n", ops[i].op);
    printf("Matricula: %d\n", ops[i].reg);
    printf("Tempo trabalhado: %d\n", ops[i].time);
    printf("Departamento: %s\n", dps[i].name);
    printf("Numero de funcionarios neste departamento: %d\n", dps[i].workers);
    printf("Tempo de existencia deste departamento: %d\n", dps[i].exist);

    if(ops[i].time >= 30)
    {
        printf("\nEste funcionario pode solicitar a aposentadoria!\n");
    }
}

return 0;

}
