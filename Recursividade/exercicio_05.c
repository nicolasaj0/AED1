//Exercicio 5 Recursividade
#include <stdio.h>

void binary(int n) 
{
    if (n > 1) 
    {
      binary(n / 2);
    }
    printf("%d", n % 2);
}

int main() 
{
    int i, c, n;
    
    scanf("%d", &c);

    for (i = 0; i < c; i++)
    {
      scanf("%d", &n);
      binary(n);
      printf("\n");
    }

    return 0;
}