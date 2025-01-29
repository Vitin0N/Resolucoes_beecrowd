#include <stdio.h>

int main(){
    int n, a, b, i, j, soma, menor;

    scanf("%d", &n);

    for(i=1; i<=n; i++){
        scanf("%d%d", &a, &b);
        if(a>b){
            menor = b;
            b = a;
            a = menor;
        }

        soma = 0;
        for(j=a+1; j<b; j++){
            if(j%2!=0){
                soma+=j;
            }
        }
        printf("%d\n", soma);

    }

    return 0;
}