//Exercicio 3 Struct
#include <stdio.h>
#include <math.h>

typedef struct Point
{
    float x;
    float y;
}Point;

int main()
{
    Point p;

    printf("Determine o valor da coordenada X: ");
    scanf("%f", &p.x);
    printf("Determine o valor da coordenada Y: ");
    scanf("%f", &p.y);

    float origin = sqrt(pow((p.x), 2) + pow((p.y), 2));
    printf("A distancia do ponto (%.2f, %.2f) ate a origem: %.2f\n", p.x, p.y, origin);

    return 0;
}