//Exercio 1 struct
#include <stdio.h>

typedef struct Address
{
    char region[50];
    char street[50];
    char add[50];
    char city[50];
    char state[50];
    int cep;
    int num;
} Address;

typedef struct Person
{
    char name[50];
    int age;
} Person;

int main()
{
    Address ads;
    Person pes;

    printf("\nDados de endereco:\n");
    printf("Setor: ");
    scanf("%s", ads.region);
    printf("Rua: ");
    scanf("%s", ads.street);
    printf("Complemento: ");
    scanf("%s", ads.add);
    printf("Cidade: ");
    scanf("%s", ads.city);
    printf("Estado: ");
    scanf("%s", ads.state);
    printf("CEP: ");
    scanf("%d", &ads.cep);
    printf("Numero: ");
    scanf("%d", &ads.cep);

    printf("\nDados pessoais:\n");
    printf("Nome completo: ");
    scanf("%s", pes.name);
    printf("Idade: ");
    scanf("%d", &pes.age);

    while (pes.age <= 0 || pes.age >= 120)
    {
        printf("Idade invalida! Digite novamente: ");
        scanf("%d", &pes.age);
    }

    printf("\nFicha do usuario:\n");
    printf(" Setor: %s\n Rua: %s\n Complemento: %s\n Cidade: %s\n Estado: %s\n CEP: %d\n Numero: %d\n Nome: %s\n Idade: %d\n", ads.region, ads.street, ads.add, ads.city, ads.state, ads.cep, ads.num, pes.name, pes.age);

    return 0;
}