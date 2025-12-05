#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct {
    char v[MAX];
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

void push(Pilha *p, char c) 
{
    if (!cheia(p)) {
        p->v[++p->topo] = c;
    }
}

char pop(Pilha *p) 
{
    if (!vazia(p)) {
        return p->v[p->topo--];
    }
    return '\0';
}

int main() 
{
    Pilha p;
    char palavra[MAX];
    init(&p);

    scanf("%s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        push(&p, palavra[i]);
    }

    while (!vazia(&p)) {
        printf("%c", pop(&p));
    }

    return 0;
}