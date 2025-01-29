#include <stdio.h>

int main(){
    int x, i, soma;

    while(1){
        scanf("%d", &x);
        if(x==0){
            break;
        }
        soma = 0;
        for(i=0; i<5; i++, x+=2){
            if(x%2!=0){
                x++;
            }
            soma += x;
        }
        printf("%d\n", soma);
    }

    return 0;
}