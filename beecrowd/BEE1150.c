#include <stdio.h>

int main(){ 
    int x, y, soma=0, cont=0;

    scanf("%d", &x);

    do{
        scanf("%d", &y);
    }while(y<=x);

    for(int i=x; i<y; i++){
        soma += i;
        cont++;
        if(soma>y){
            break;
        }
    }
    printf("%d\n", cont);

    return 0;
}