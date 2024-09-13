//Exercicio Struct 4
#include <stdio.h>
#include <string.h>

#define limit 50

typedef struct Employee
{
    char name[50];
    char role[30];
    float wage;
    char cpf[15];
    char dpt[30];
}Employee;

float finalWage(Employee final)
{
    float wageF = final.wage;

    if (strcmp(final.role, "Assistente") == 0){
        wageF += final.wage * 0.05;
    } else if (strcmp(final.role, "Supervisor") == 0){
        wageF += final.wage * 0.10;
    } else if (strcmp(final.role, "Gerente") == 0){
        wageF += final.wage * 0.15;
    } else {
        wageF += final.wage * 0.02; //Outro cargo
    }

    return wageF;
}

int main()
{
    int n, i;
    float sum = 0.0;
    float avg;
    Employee employee[limit];

    printf("Informe o quantitativo de funcionarios: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nFuncionario %d\n", i + 1);
        printf("Nome: ");
        scanf("%s", employee[i].name);
        printf("Cargo: ");
        scanf("%s", employee[i].role);
        printf("Salario base: ");
        scanf("%f", &employee[i].wage);
        printf("CPF: ");
        scanf("%s", employee[i].cpf);
        printf("Departamento: ");
        scanf("%s", employee[i].dpt);

        float wageF = finalWage(employee[i]);
        sum += wageF;
    }

    avg = sum / n;

    printf("O salario medio dos funcionarios e: %.2f\n", avg);

    return 0;
}