#include <stdio.h>
#include <math.h> // Para utilizar a função fabs()

/*Selection Sort*/
void ordenarEngajamento(int v[], int n) 
{
    /*Percorre o vetor até a penúltima posiçaõ*/
    for (int i = 0; i < n - 1; i++) 
    {
        /* Assumindo que a posição atual 
        contém o elemento mínimo */
        int menor = i;
        
        /*Loop que percorre o vetor não ordenado
        para encontrar o valor mínimo*/
        for (int j = i + 1; j < n; j++) 
        {
            if (v[j] < v[menor]) 
            {
                menor = j;
                /*Se o menor for encontrado
            o índice menor é atualizado*/
            }           
        }
        /*Move o elemento para a posição adequada*/
        int aux = v[i];
        v[i] = v[menor];
        v[menor] = aux;
    }
}

int acharDiscrepante(int v[], int n) 
{
    /*Calculando a média dos valores*/
    float soma = 0;
    for (int i = 0; i < n; i++) 
    {
        soma += v[i];
    }
    float media = soma / n;

    /*Assumindo que o primeiro valor é discrepante*/
    int discrepante = v[0];
    
    /*Calculando a distância do primeiro valor em
    relação a média, fabs() garante que seja positivo*/
    float maiorDist = fabs(v[0] - media);

    /*Percorrendo o vetor a partir do segundo elemento*/
    for (int i = 1; i < n; i++) 
    {
        /*Calculando a distância deste valor até a média*/
        float dist = fabs(v[i] - media);
        
        /*Se a distância for maior que a encontrada,
        logo o valor é mais discrepante que o anterior*/
        if (dist > maiorDist) 
        {
            /*Atualiza a maior distância e guarda 
            o valor que mais se afastou da média*/
            maiorDist = dist;
            discrepante = v[i];
        }
    }
    return discrepante;
}

/*Imprimindo vetor*/
void mostrar(int v[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() 
{
    /*Definição dos elementos presentes no vetor, e seu tamanho*/
    int engajamento[] = {120, 88, 540, 95, 110, 600, 102};
    int n = sizeof(engajamento) / sizeof(engajamento[0]);
    
    /*Chamando as funções de impressão e 
    ordenação do vetor de engajamento*/
    printf("\n1.Levantamento de engajamento: ");
    mostrar(engajamento, n);

    ordenarEngajamento(engajamento, n);

    printf("\n2.Dados organizados: ");
    mostrar(engajamento, n);
    
    /*Indicando o elemento anômalo presente no vetor analisado*/
    int discrepante = acharDiscrepante(engajamento, n);
    printf("\nDiscrepancia detectada: %d\n", discrepante);

    return 0;
}