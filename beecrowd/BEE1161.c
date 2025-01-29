#include <stdio.h>

unsigned long long Fatorial(int num){
    if(num==0 || num==1){
        return 1;
    }
    unsigned long long resultado=1;
    for(int i=2; i<=num; i++){
        resultado*=i;
    }
    return resultado;
}

int main(){

    int m, n;

    while(scanf("%d%d", &m, &n)!=EOF){
        unsigned long long soma;

        soma = Fatorial(m)+Fatorial(n);

        printf("%llu\n", soma);
    }

    return 0;
}