#include <stdlib.h>
#include <math.h>
#include "circle.h"
#define PI 3.14

struct circle{
    float rad;
};

Circle* createC(float rad){
    Circle *circle = malloc(sizeof(circle));

    if (circle != NULL){
        circle->rad = rad;

        return circle;
    }
}

void freeC(Circle* circle){
    free(circle);
}

float areaC(Circle* circle){
    
    if(circle == NULL){
        return -1.0f;
    }

    return(PI * (circle->rad * circle->rad));
}

float diamC(Circle* circle){

    if (circle == NULL){
        return -1.0f;
    }

    return(2.0 * circle->rad);
}