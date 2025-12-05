#include <stdio.h>
#include <string.h>
#define MAX 100

char stack[MAX];
int top = -1;

void push(char c)
{
    if(top < MAX -1){
        stack[++top] = c;
    }
}

char pop() 
{
    if(top >= 0){
        return stack[top--];
    }
    return '\0';
}

int check(char *str)
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        char c = str[i];

        if(c == '(' || c == '[' || c == '{'){
            push(c);
        } else if(c == ')' || c == ']' || c == '}'){
            
            char stackTop = pop();

            if((c == ')' && stackTop != '(') || (c == ']' && stackTop != '[') || (c == '}' && stackTop != '{')) {
                return 0;
            }
        }
    }
    return top == -1;
}

int main()
{
    char ini[MAX];

    printf("\nDigite uma expressao ('(), [], {}'): ");
    fgets(ini, MAX, stdin);

    ini[strcspn(ini, "\n")] = '\0';

    if(check(ini)){
        printf("Valido\n");
    }else{
        printf("Invalido\n");
    }

    return 0;
}