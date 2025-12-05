#include <stdio.h>
#include <stdlib.h>

void f()
{
    int *p = malloc(100*sizeof(int));
}

/* O problema desta linha de código, é que como ela não retorna nada,
e não há um free(p) na mesma, a memória alocada será perdida, e seu propósito
será nulo. */

/* O  modo correto seria este: */

void p()
{
    int *f = malloc(200*sizeof(int));
    if (f == NULL){
        return 1;
    }

    return f;
    
    // Daí usa o free(f) na função main()
}

/* Ou ... */

void a()
{
    int *b = malloc(300*sizeof(int));

    // ... 

    free(b);
}