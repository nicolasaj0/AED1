#include <stdio.h>
#include <string.h>
#define MAX 10
#define LEN 50

typedef struct 
{
    char v[MAX][LEN];
    int topo;
} Pilha;

void init(Pilha *p) 
{
    p->topo = -1;
}

int vazia(Pilha *p) 
{
    return p->topo == -1;
}

int cheia(Pilha *p) 
{
    return p->topo == MAX - 1;
}

void push(Pilha *p, char *s) 
{
    if (!cheia(p)) {
        strcpy(p->v[++p->topo], s);
    }
}

void pop(Pilha *p, char *s) 
{
    if (!vazia(p)) {
        strcpy(s, p->v[p->topo--]);
    }
}

int main() 
{
    Pilha p;
    char comando[LEN];
    init(&p);

    for (int i = 0; i < 3; i++) {
        scanf("%s", comando);
        push(&p, comando);
    }

    while (!vazia(&p)) {
        pop(&p, comando);
        printf("Desfazer: %s\n", comando);
    }

    return 0;
}