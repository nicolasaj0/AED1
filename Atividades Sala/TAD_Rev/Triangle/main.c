#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "triangle.h"

int main()
{
    float base, altura;
    Triangle *triangle;

    scanf("%f %f", &base, &altura);
    
    if(base <= 0.0 || altura <= 0.0)
    {
        return 1;
    }
    
    triangle = triCreate(base, altura);

    printf("\nArea: %.2f\n", triArea(triangle));
    printf("Hipotenusa: %.2f\n", triHip(triangle));

    triFree(triangle);

    return 0;
}