#include <stdio.h>
#define MAX 100

typedef struct {
    int a[MAX];
    int size;
} Lista;

void init(Lista *l) 
{
    l->size = 0;
}

void insert_at(Lista *l, int idx, int x) 
{
    if (l->size < MAX && idx >= 0 && idx <= l->size) {
        for (int i = l->size; i > idx; i--) {
            l->a[i] = l->a[i - 1];
        }
        l->a[idx] = x;
        l->size++;
    }
}

void print(Lista *l) 
{
    for (int i = 0; i < l->size; i++) {
        printf("%d ", l->a[i]);
    }
    printf("\n");
}

int main() 
{
    Lista l;
    init(&l);

    l.a[0] = 10;
    l.a[1] = 20;
    l.a[2] = 30;
    l.size = 3;

    insert_at(&l, 1, 99);

    print(&l);

    return 0;
}