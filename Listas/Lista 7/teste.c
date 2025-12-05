#include <stdio.h>

int fatorial(int n) 
{
    int r = 1;
    for (int i = 1; i <= n; i++)
    r *= i;
    return r;
}

int main()
{
    printf("%d",fatorial(6));
    return 0;
}