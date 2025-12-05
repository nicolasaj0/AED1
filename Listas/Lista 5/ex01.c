 #include <stdio.h>
 #include <stdbool.h>
 #define MAX 100
 
 typedef struct {  
    int v[MAX]; int topo;
 }Stack;
 
 void init(Stack *s)
 { 
    s->topo = -1;
 }
 
 bool empty(Stack *s)
 { 
    return s->topo == -1; 
 }
 
 bool full(Stack *s)
 { 
    return s->topo == MAX-1; 
 }
 
 bool push(Stack *s, int x)
 {
    if(full(s)) return false;
     s->v[++s->topo] = x; return true;
 }
 
 bool pop(Stack *s, int *out)
 {
    if(empty(s)) return false;
    *out = s->v[s->topo--]; return true;
 }
 
 bool top(Stack *s, int *out) //Ex 02 
 {
    if(empty(s)) return false;
    *out = s->v[s->topo]; return true;
 }
 
 int main()
 {
    Stack s; init(&s);
    push(&s, 7); push(&s, 8); push(&s, 9); push(&s, 6); push(&s, 10);
    int x; 
    top(&s, &x); 
    printf("Topo = %d\n", x);
    
    while(pop(&s,&x)) printf("pop %d\n", x);
    return 0;
}