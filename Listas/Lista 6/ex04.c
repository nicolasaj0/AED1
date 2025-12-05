#include <stdio.h>
#define N 10

typedef struct {
    int v[N];
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

void enqueue(Fila *f, int x) 
{
    if (!cheia(f)) {
        f->v[f->in] = x;
        f->in = (f->in + 1) % N;
        f->cnt++;
    }
}

int dequeue(Fila *f) 
{
    int x = -1;
    if (!vazia(f)) {
        x = f->v[f->out];
        f->out = (f->out + 1) % N;
        f->cnt--;
    }
    return x;
}

int main() 
{
    Fila f;
    init(&f);

    enqueue(&f, 10);
    enqueue(&f, 20);
    enqueue(&f, 30);
    enqueue(&f, 40);

    dequeue(&f);
    dequeue(&f);

    enqueue(&f, 50);
    enqueue(&f, 60);
    enqueue(&f, 70);

    while (!vazia(&f)) {
        printf("%d ", dequeue(&f));
    }

    return 0;
}