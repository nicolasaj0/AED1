#include <stdio.h>
#include <stdlib.h>
#include "complex.h"

int main()
{
    Comp *c1, *c2;
    float a, b;

    printf("Real do primeiro numero: ");
    scanf("%f", &a);
    printf("Imaginario do primeiro numero: ");
    scanf("%f", &b);
    c1 = create(a,b);

    printf("Real do segundo numero: ");
    scanf("%f", &a);
    printf("Imaginario do segundo numero: ");
    scanf("%f", &b);
    c2 = create(a,b);

    printf("Soma: %.2f\n", sumComp(c1,c2));
    printf("Subtracao: %.2f\n", minComp(c1,c2));
    printf("Produto: %.2f\n", timComp(c1,c2));

    freeC(c1);
    freeC(c2);
    
    return 0;
}