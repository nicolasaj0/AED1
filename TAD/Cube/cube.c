#include <stdlib.h>
#include "cube.h"

struct cube
{
    float side;
};

Cube* create(float side)
{
    Cube* c = (Cube*)malloc(sizeof(Cube));
    if (c != NULL){
        c->side = side;
    }
    return c;
}

float readSide(Cube* c, float side)
{
    return c->side = side;
}

float obtainSide(Cube* c)
{
    return c->side;
}

void freeC(Cube* c)
{
    free(c);
}

float area(Cube* c)
{
    return 6 * (c->side * c->side);
}

float volume(Cube* c)
{
    return c->side * c->side * c->side;
}