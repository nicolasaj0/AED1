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

void push_back(Lista *l, int x) 
{
    if (l->size < MAX) {
        l->a[l->size++] = x;
    }
}

void print(Lista *l) 
{
    for (int i = 0; i < l->size; i++) {
        printf("%d ", l->a[i]);
    }
    printf("\n");
}

void remove_first(Lista *l, int x) 
{
    for (int i = 0; i < l->size; i++) {
        if (l->a[i] == x) {
            for (int j = i; j < l->size - 1; j++) {
                l->a[j] = l->a[j + 1];
            }
            l->size--;
            break;
        }
    }
}

int main() 
{
    Lista l;
    init(&l);

    push_back(&l, 1);
    push_back(&l, 2);
    push_back(&l, 3);

    print(&l);

    remove_first(&l, 2);

    print(&l);

    return 0;
}