#include <stdio.h>

int main(){
    int i, num, par=0, impar=0, positivo=0, negativo=0;

    for(i=0; i<5; i++){
        scanf("%d", &num);

        if(num%2==0){
            par++;
        }
        else{
            impar++;
        }
        if(num>0){
            positivo++;
        }
        else if(num<0){
            negativo++;
        }

    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, impar, positivo, negativo);

    return 0;
}