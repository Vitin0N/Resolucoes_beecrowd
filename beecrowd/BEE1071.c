#include <stdio.h>

int main(){

    int a, b, soma, i, menor;

    scanf("%d%d", &a, &b);

    if(a>b){
        menor = b;
        b = a;
        a = menor;
    }
    if(a%2!=0){
        a++;
    }
    soma = 0;
    for(i=a ; i<b ; i++){
        if(i%2!=0){
            soma += i;
        }
    }
    printf("%d\n", soma);

    return 0;
}