#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "cylinder.h"
#define M_PI 3.14159265358979323846

struct cylinder 
{
    float rad;
    float height;
};

Cylinder* create(float rad, float height) 
{
    Cylinder *cylinder = malloc(sizeof(Cylinder));
    if (cylinder != NULL) 
    {
       cylinder->rad = rad;
       cylinder->height = height;
       return cylinder;
    }
    
}

void freeC(Cylinder* cylinder) 
{
    free(cylinder);
}

float radiusC(Cylinder* cylinder) 
{
    return cylinder->rad;
}

float heightC(Cylinder* cylinder) 
{
    return cylinder->height;
}

float area(Cylinder* cylinder) 
{
    return 2 * M_PI * cylinder->rad * (cylinder->rad + cylinder->height);
}

float volume(Cylinder* cylinder) 
{
    return M_PI * cylinder->rad * cylinder->rad * cylinder->height;
}