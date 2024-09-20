typedef struct cube Cube;

Cube* create(float side);

float readSide(Cube* c, float side);

float obtainSide(Cube* c);

void freeC(Cube* c);

float area(Cube* c);

float volume(Cube* c);