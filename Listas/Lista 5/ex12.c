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

void remove_first(Node** h, int x) 
{
    Node* curr = *h;
    Node* prev = NULL;
    while (curr != NULL) {
        if (curr->v == x) {
            if (prev == NULL) {
                *h = curr->next;
            } else {
                prev->next = curr->next;
            }
            free(curr);
            return;
        }
        prev = curr;
        curr = curr->next;
    }
}

int main() 
{
    Node* h = NULL;

    h = insert_front(h, 5);
    h = insert_front(h, 7);
    h = insert_front(h, 9);

    print(h);

    remove_first(&h, 7);

    print(h);

    while (h != NULL) {
        Node* tmp = h;
        h = h->next;
        free(tmp);
    }

    return 0;
}