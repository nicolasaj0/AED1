#include <stdio.h>
#include <string.h>
#define N 10

typedef struct {
    int id;
    char assunto[40];
} Ticket;

typedef struct {
    Ticket v[N];
    int in, out, cnt;
} Fila;

void init(Fila *f) 
{
    f->in = 0;
    f->out = 0;
    f->cnt = 0;
}

int vazia(Fila *f) 
{
    return f->cnt == 0;
}

int cheia(Fila *f) 
{
    return f->cnt == N;
}

void enqueue(Fila *f, int id, char *assunto) 
{
    if (!cheia(f)) {
        f->v[f->in].id = id;
        snprintf(f->v[f->in].assunto, 40, "%s", assunto);
        f->in = (f->in + 1) % N;
        f->cnt++;
    }
}

Ticket dequeue(Fila *f) 
{
    Ticket t = {0, ""};
    if (!vazia(f)) {
        t = f->v[f->out];
        f->out = (f->out + 1) % N;
        f->cnt--;
    }
    return t;
}

int main() 
{
    Fila f;
    init(&f);

    enqueue(&f, 1, "Login nao funciona");
    enqueue(&f, 2, "Erro ao imprimir");
    enqueue(&f, 3, "Sistema lento");

    while (!vazia(&f)) {
        Ticket t = dequeue(&f);
        printf("Atendido ticket %d: %s\n", t.id, t.assunto);
    }

    return 0;
}