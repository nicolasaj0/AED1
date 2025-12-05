#include <stdio.h>
#include <string.h>
#define N 5
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

int full(Fila *f) {
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

void front(Fila *f, char *nome) 
{
    if (!empty(f)) {
        strcpy(nome, f->v[f->out]);
    }
}

int main() 
{
    Fila f;
    char nome[LEN];
    init(&f);

    enqueue(&f, "Ana");
    enqueue(&f, "Beto");
    enqueue(&f, "Clara");

    while (!empty(&f)) {
        dequeue(&f, nome);
        printf("%s atendida\n", nome);
    }

    // Exercício 6
    enqueue(&f, "Lucas");
    enqueue(&f, "Marina");
    enqueue(&f, "Paulo");

    front(&f, nome);
    printf("Próximo a ser atendido: %s\n", nome);

    while (!empty(&f)) {
        dequeue(&f, nome);
        printf("%s atendida\n", nome);
    }

    return 0;
}