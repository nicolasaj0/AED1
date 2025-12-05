#include <stdio.h>

float media(int a, int b){
    return (a+b)/2;
}

int main(){
    printf("%.2f", media(6,9));

    return 0;

    /*O erro neste código, é que na função 'média' os parâmetros estão
    em tipo inteiro, então o valor retornado será desta tipagem, mesmo 
    com a função sendo do tipo flutuante.*/
}