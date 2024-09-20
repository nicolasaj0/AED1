#include <stdio.h>
#include <stdlib.h>
#include "cube.h"

int main()
{
    Cube *c;
    float side;

    scanf("%f", &side);
    create(side);
    readSide(&c, side);

    printf("%.2f\n", obtainSide(&c));
    printf("%.2f\n", area(&c));
    printf("%.2f\n", volume(&c));

    freeC(&c);

    return 0;
}
