 #include <stdio.h>
 #include <stdbool.h>
 #define MAX 100
 
 typedef struct {  
    double v[MAX]; int topo;
 }Stack;
 
 void init(Stack *s)
 { 
    s->topo = -1.0;
 }
 
 bool empty(Stack *s)
 { 
    return s->topo == -1.0; 
 }
 
 bool full(Stack *s)
 { 
    return s->topo == MAX-1.0; 
 }
 
 bool push(Stack *s, double x)
 {
    if(full(s)) return false;
     s->v[++s->topo] = x; return true;
 }
 
 bool pop(Stack *s, double *out)
 {
    if(empty(s)) return false;
    *out = s->v[s->topo--]; return true;
 }
 
 bool top(Stack *s, double *out)
 {
    if(empty(s)) return false;
    *out = s->v[s->topo]; return true;
 }

 int size(Stack *s) //Exercicio 2
 {
    return s->topo+1;
 }
 
 int main()
 {
    Stack s; init(&s);
    
    push(&s, 36.5); push(&s, 37.2); push(&s, 38.0); push(&s, 36.8); push(&s, 37.9);
    
    double x; 
    
    top(&s, &x); 
    
    printf("Topo = %.2lf\n", x);
    
    while(pop(&s,&x)) printf("pop %.2lf\n", x);

    //Exercicio 2
    init(&s); push(&s, 35.5); push(&s, 36.0); push(&s, 37.4);

    printf("Tamnaho: %d\n", size(&s));
    
    pop(&s, &x);
    
    printf("Tamanho: %d\n", size(&s));

    return 0;
}