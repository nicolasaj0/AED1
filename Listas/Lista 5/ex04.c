#include <stdio.h>
#include <string.h>
#define SIZE 10
#define LEN 50

typedef struct {
    char v[SIZE][LEN];
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
    return p->topo == SIZE - 1;
}

void push(Pilha *p, char *nome) 
{
    if (!cheia(p)) {
        strcpy(p->v[++p->topo], nome);
        printf("Entrou em %s\n", nome);
    }
}

void pop(Pilha *p) 
{
    if (!vazia(p)) {
        printf("Saiu de %s\n", p->v[p->topo--]);
    }
}

void f2(Pilha *p) 
{
    push(p, "f2");
    pop(p);
}

void f1(Pilha *p) 
{
    push(p, "f1");
    f2(p);
    pop(p);
}

int main() 
{
    Pilha p;
    init(&p);
    push(&p, "main");
    f1(&p);
    pop(&p);
    return 0;
}