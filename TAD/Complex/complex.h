typedef struct complex Comp;

Comp* create(float a, float b);

float sumComp(Comp* c1, Comp* c2);

float minComp(Comp* c1, Comp* c2);

float timComp(Comp* c1, Comp* c2);

void freeC(Comp* c);
