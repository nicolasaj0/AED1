#include <stdlib.h>
#include <math.h>
#include "triangle.h"

struct triangle{
    float base;
    float altura;
};

Triangle* triCreate(float base, float altura){
    Triangle *triangle = malloc(sizeof(Triangle));

    if(triangle != NULL){
        triangle->altura = altura;
        triangle->base = base;
        return triangle;
    }
}

void triFree(Triangle* triangle){
    free(triangle);
}

float triArea(Triangle* triangle){

    if(triangle == NULL)
    {
        return -1.0f;
    }

    return(triangle->altura * triangle->base)/2;
}

float triHip(Triangle* triangle){

    if(triangle == NULL)
    {
        return -1.0f;
    }

    return sqrt((triangle->altura * triangle->altura)+(triangle->base * triangle->base));
}