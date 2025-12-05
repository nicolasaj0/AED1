#include <stdio.h>

int main()
{
    int x,y,z;
    int media;
    scanf("%d %d %d", &x, &y, &z);

    media = (x + y + z) / 3;

    if(media <= 10){
        printf("Nota menor que 10");
    }else{
        printf("Nota maior que 10");
    }

    return 0;
}