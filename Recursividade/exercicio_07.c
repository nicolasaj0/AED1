//Exercicio 7 Recursividade
#include <stdio.h>

typedef struct Cash
{
    int value;
    int qntd;
}Cash;

int main()
{
    int n, i, j, k;
    Cash cash[6] = {{2,0}, {5,0}, {10,0}, {20,0}, {50,0}, {100,0}};
    int cases[5001] = {0};

    scanf("%d", &n);
    
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &cash[i].qntd);
    }

    cases[0] = 1;

    for (i = 0; i < 6; i++)
    {
        int value = cash[i].value;
        int qntd = cash[i].qntd;

        for (j = n; j >= value; j--)
        {
            for (k = 1; k <= qntd && k * value <= j; k++)
            {
                cases[j] += cases[j - k * value];
            }
        }
    }
    printf("%d\n", cases[n]);
    return 0;
}