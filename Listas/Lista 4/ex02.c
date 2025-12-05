#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define N 5 

typedef struct 
{
    char q[N][32]; 
    int in, out, cnt;
}Queue;

void init(Queue *Q)
{
    Q->in = Q->out = Q->cnt = 0;
}

bool full(Queue *Q)
{
    return Q->cnt == N; 
}

bool empty(Queue *Q)
{
    return Q->cnt == 0;
}

bool enqueue(Queue *Q, const char *s)
{
    if(full(Q)) return false;
    strncpy(Q->q[Q->in], s, 31);
    Q->q[Q->in][31]='\0';
    Q->in = (Q->in + 1) % N;
    Q->cnt++;
    return true;
}

bool dequeue(Queue *Q, char *out)
{
    if(empty(Q)) return false;
    strcpy(out, Q->q[Q->out]);
    Q->out = (Q->out + 1) % N;
    Q->cnt--;
    return true;
}

bool front(Queue *Q, char *out)
{ 
    if(empty(Q)) return false;
    strcpy(out, Q->q[Q->out]);
    return true;
}

int main()
{
    Queue Q; init(&Q); char buf[32];
    
    enqueue(&Q,"A");
    enqueue(&Q,"B");
    enqueue(&Q,"C");
    
    if(front(&Q, buf)) printf("Primeiro elemento: %s\n", buf);
    printf("Desenfileirando todos os elementos:\n");
    
    while(dequeue(&Q,buf))
    {
        puts(buf);
    }

    return 0;
}