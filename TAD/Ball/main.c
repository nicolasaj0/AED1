#include <stdio.h>
#include <stdlib.h>
#include "ball.h"

int main()
{
    Ball *ball;
    float radius;

    scanf("%f", &radius);
    ball = create(radius);

    printf("Bola com raio: %.2f\n", obtainRadius(ball));
    printf("Bola com area: %.2f\n", area(ball));
    printf("Bola com volume: %.2f\n", volume(ball));

    freeB(ball);

    return 0;
}