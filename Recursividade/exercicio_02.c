//Exercicio 2 Recursividade
#include <stdio.h>

int main() 
{
    int n, i;
    int first = 0, second = 1, next;

    printf("Qntd de termos da fibonacci: ");
    scanf("%d", &n);

    printf("Sequencia de Fibonacci com %d termos:\n", n);

    for (i = 0; i <= n; i++) 
    {
        if (i <= 1) 
        {
           next = i;
        } 
        else 
        {
           next = first + second;
           first = second;
           second = next;
        }
        printf(" %d", next);
    }

    return 0;

}