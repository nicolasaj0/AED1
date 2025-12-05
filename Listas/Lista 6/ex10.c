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
    while (p->next != NULL) p = p->next;
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

int min_value(Node* h, int* out) //Exercicio 9
{
    if (h == NULL) return 0;
    int min = h->v;
    for (Node* p = h; p != NULL; p = p->next) {
        if (p->v < min) min = p->v;
    }
    *out = min;
    return 1;
}

void remove_all(Node** h, int x) //Exercicio 10
{
    while (*h != NULL && (*h)->v == x) {
        Node* tmp = *h;
        *h = (*h)->next;
        free(tmp);
    }
    Node* curr = *h;
    Node* prev = NULL;
    while (curr != NULL) {
        if (curr->v == x) {
            prev->next = curr->next;
            free(curr);
            curr = prev->next;
        } else {
            prev = curr;
            curr = curr->next;
        }
    }
}

int main() 
{
    Node* h = NULL;
    int m;

    h = insert_back(h, 1);
    h = insert_back(h, 2);
    h = insert_back(h, 2);
    h = insert_back(h, 3);
    h = insert_back(h, 2);
    h = insert_back(h, 4);

    if (min_value(h, &m)) printf("Menor valor: %d\n", m);

    remove_all(&h, 2);

    print(h);

    while (h != NULL) {
        Node* tmp = h;
        h = h->next;
        free(tmp);
    }

    return 0;
}