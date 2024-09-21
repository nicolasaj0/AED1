#include <stdio.h>
#include <stdlib.h>
#include "cube.h"

int main()
{
    Cube *cube;
    float side;

    scanf("%f", &side);
    cube = create(side);

    printf("Cubo com lado: %.2f\n", obtainSide(cube));
    printf("Area do cubo: %.2f\n", area(cube));
    printf("Volume do cubo: %.2f\n", volume(cube));

    freeC(cube);

    return 0;
}