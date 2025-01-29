#include <stdio.h>

int main(){
    float nota, soma=0, cont=0;

    while(1){

        scanf("%f", &nota);
        if(nota<0 || nota>10){
            printf("nota invalida\n");
        }
        else{
            soma += nota;
            cont++;
        }
        if(cont == 2){
            break;
        }
    }
    printf("media = %.2f\n", soma/cont);

    return 0;
}