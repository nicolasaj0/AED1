typedef struct triangle Triangle;

Triangle* triCreate(float base, float altura);
float triArea(Triangle* triangle);
float triHip(Triangle* triangle);
void triFree(Triangle* triangle);