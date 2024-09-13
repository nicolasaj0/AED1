typedef struct ponto Ponto;

//Cria um ponto
Ponto* pto_cria(float x, float y);
//Libera um ponto
void pto_libera(Ponto* p, float* x, float* y);
//Acessa os valores de x e y de um ponto
int pto_acessa(Ponto* p, float x, float y);
//Atribui os valores de x e y a um ponto
int pto_atribui(Ponto* p, float x, float y);
//Calcula a dustancia entre dois pontos
float pto_distancia(Ponto* p1, Ponto* p2);