#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "circle.h"
#define PI 3.14

int main()
{
    float rad;
    Circle *circle;
    scanf("%f", &rad);
    if(rad <= 0.0){
        return 1;
    }

    circle = createC(rad);
    printf("\nArea: %.2f", areaC(circle));
    printf("\nDiametro: %.2f\n", diamC(circle));
    freeC(circle);

    return 0;
}