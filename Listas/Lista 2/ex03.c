#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if(num == 0){
        printf("O numero e zero\n");
    }else if(num < 0){
        printf("O numero e negativo\n");
    }else{
        printf("O numero e positivo\n");
    }

    if(num % 2 == 0){
        printf("O numero e par\n");
    }else{
        printf("O numero e impar\n");
    }

    return 0;

}