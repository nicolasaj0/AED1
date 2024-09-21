#include <stdio.h>
#include <stdlib.h>
#include "cylinder.h"

int main() 
{
    float rad, height;
    Cylinder *cylinder;

    scanf("%f", &rad);
    scanf("%f", &height);
    cylinder = create(rad, height);

    printf("Raio: %.2f, altura: %.2f\n", radiusC(cylinder), heightC(cylinder));
    printf("Area: %.2f\n", area(cylinder));
    printf("Volume: %.2f\n", volume(cylinder));

    free(cylinder);

    return 0;
}