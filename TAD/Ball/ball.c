#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ball.h"
#define M_PI 3.14159265358979323846

struct ball 
{
    float radius;
};

Ball* create(float radius)
{
    Ball* b = (Ball*)malloc(sizeof(Ball));
    if (b != NULL)
    {
        b->radius = radius;
    }
    return b;
}

float obtainRadius(Ball* b)
{
    return b->radius;
}

void freeB(Ball* b)
{
    free(b);
}

float area(Ball* b)
{
    return ((4 * M_PI) * pow(b->radius,2));
}

float volume(Ball* b)
{
    return (((4/3) * (M_PI)) * pow(b->radius,3));
}