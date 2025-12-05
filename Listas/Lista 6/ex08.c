#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int v;
    struct Node* next;
} Node;

Node* insert_back(Node* h, int x) 
{
    Node* n = malloc(sizeof(Node));
    n->v = x;
    n->next = NULL;

    if (h == NULL) return n;

    Node* p = h;
    while (p->next != NULL) {
        p = p->next;
    }
    p->next = n;
    return h;
}

void print(Node* h) 
{
    for (Node* p = h; p != NULL; p = p->next) {
        printf("%d ", p->v);
    }
    printf("\n");
}

int main() 
{
    Node* h = NULL;

    h = insert_back(h, 4);
    h = insert_back(h, 6);
    h = insert_back(h, 8);

    print(h);

    while (h != NULL) {
        Node* tmp = h;
        h = h->next;
        free(tmp);
    }

    return 0;
}