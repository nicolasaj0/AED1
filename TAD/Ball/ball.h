typedef struct ball Ball;

Ball* create(float radius);

float obtainRadius(Ball* b);

void freeB(Ball* b);

float area(Ball* b);

float volume(Ball* b);
