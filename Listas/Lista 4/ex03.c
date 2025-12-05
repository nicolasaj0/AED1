#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *next;
}Node;

typedef struct {
    Node *front;
    Node *rear;
}Queue;

void init(Queue *q){
    q->front = NULL;
    q->rear = NULL;
}

int empty(Queue *q){
    return q->front == NULL;
}

void enqueue(Queue* q, int x){
    Node *new = (Node*)malloc(sizeof(Node));
    new->value = x;
    new->next = NULL;

    if(q->rear == NULL){
        q->front = new;
        q->rear = new;
    }else{
        q->rear->next = new;
        q->rear = new;
    }
}

int dequeue(Queue *q, int *remove){
    if(empty(q)) return 0;

    Node *temp = q->front;
    *remove = temp->value;
    q->front = q->front->next;

    if(q->front == NULL){
        q->rear = NULL;
    }

    free(temp);
    return 1;
}

int main()
{
    Queue q;
    init(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    int value;
    while (dequeue(&q, &value)){
        printf("Removido: %d\n", value);
    }
    return 0;
}