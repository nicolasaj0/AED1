//Exercicio 2 Struct
#include <stdio.h>
#include <math.h>

typedef struct Point 
{
    double a;
    double b;
}Point;

int main()
{
    Point x;
    Point y;
    
    printf("Digite o valor do ponto A (x y): ");
    scanf("%lf %lf", &x.a, &y.a);
    printf("Digite o valor do ponto B (x y): ");
    scanf("%lf %lf", &x.b, &y.b);

    double dist = sqrt(pow((x.b - x.a), 2) + pow((y.b - y.a), 2));
    printf("Distancia entre os pontos A e B: %.2lf\n", dist);
}