typedef struct cylinder Cylinder;

Cylinder* create(float rad, float height);

float radiusC(Cylinder* cylinder);

float heightC(Cylinder* cylinder);

void freeC(Cylinder* cylinder);

float area(Cylinder* cylinder);

float volume(Cylinder* cylinder);
