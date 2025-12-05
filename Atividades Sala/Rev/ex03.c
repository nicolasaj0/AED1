#include <stdio.h>

int main()
{
    int n;
    float sum = 0.0;
    float media;

    printf("Digite quantas notas serao calculadas: ");
    scanf("%d", &n);

    float notas[n];

    printf("Digite %d notas.\n", n);
    for(int i = 0; i < n; i++){
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        sum += notas[i];
    }

    media = sum / n;

    printf("\nSoma das notas: %.2f\n", sum);
    printf("Media das notas: %.2f\n", media);

    return 0;
}