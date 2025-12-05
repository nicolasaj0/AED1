#include <stdio.h>
#include <string.h>
#define N 10
#define LEN 50

typedef struct {
    char v[N][LEN];
    int in, out, cnt;
} Fila;

void init(Fila *f) 
{
    f->in = 0;
    f->out = 0;
    f->cnt = 0;
}

int empty(Fila *f) 
{
    return f->cnt == 0;
}

int full(Fila *f) 
{
    return f->cnt == N;
}

void enqueue(Fila *f, char *nome) 
{
    if (!full(f)) {
        strcpy(f->v[f->in], nome);
        f->in = (f->in + 1) % N;
        f->cnt++;
    }
}

void dequeue(Fila *f, char *nome) 
{
    if (!empty(f)) {
        strcpy(nome, f->v[f->out]);
        f->out = (f->out + 1) % N;
        f->cnt--;
    }
}

int main() 
{
    Fila f;
    char nome[LEN];
    init(&f);

    enqueue(&f, "Ana");
    enqueue(&f, "Bruno");
    enqueue(&f, "Carla");
    enqueue(&f, "Diego");
    enqueue(&f, "Eva");

    for (int i = 0; i < 10; i++) {
        dequeue(&f, nome);
        printf("Atendido: %s\n", nome);
        enqueue(&f, nome);
    }

    return 0;
}