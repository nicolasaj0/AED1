#include <stdlib.h>
#include <math.h>
#include "complex.h"

struct complex
{
    float a; //Real
    float b; //Imaginario
};

Comp* create(float a, float b)
{
    Comp* c = (Comp*)malloc(sizeof(Comp));
    if (c != NULL)
    {
        c->a = a;
        c->b = b;
    }
    return c;
}

float sumComp(Comp* c1, Comp* c2)
{
    return (c1->a + c2->a) + (c1->b + c2->b); 
}

float minComp(Comp* c1, Comp* c2)
{
    return (c1->a - c2->a) - (c1->b - c2->b);
}

float timComp(Comp* c1, Comp* c2)
{
    return (c1->a * c2->a - c1->b * c2->b) + (c1->a * c2->b + c2->a * c1->b);
}

void freeC(Comp* c)
{
    free(c);
}