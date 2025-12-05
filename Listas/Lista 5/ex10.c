#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int v;
    struct Node* next;
} Node;

Node* insert_front(Node* h, int x) 
{
    Node* n = malloc(sizeof(Node));
    n->v = x;
    n->next = h;
    return n;
}

void print(Node* h) 
{
    for (Node* p = h; p != NULL; p = p->next) {
        printf("%d ", p->v);
    }
    printf("\n");
}

Node* find(Node* h, int x) //Exercicio 11
{
    for (Node* p = h; p != NULL; p = p->next) {
        if (p->v == x) return p;
    }
    return NULL;
}

int main() 
{
    Node* h = NULL;

    h = insert_front(h, 5);
    h = insert_front(h, 7);
    h = insert_front(h, 9);

    print(h);

    Node* f = find(h, 7);
    if (f != NULL) {
        printf("Valor %d encontrado\n", f->v);
    } else {
        printf("Valor não encontrado\n");
    }

    while (h != NULL) {
        Node* tmp = h;
        h = h->next;
        free(tmp);
    }

    return 0;
}