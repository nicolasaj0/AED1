#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    printf("Soma: %d\nProduto: %d\n", x + y, x * y);
    if(x > y){
        printf("X e maior");
    }else if(x < y){
        printf("Y e maior");
    }else{
        printf("Ambos sao iguais");
    }

    return 0;
}