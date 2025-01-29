#include <stdio.h>

int main(){
    int qnt, fim, i;

    scanf("%d%d", &qnt, &fim);

    for(i=1; i<=fim; i++){
        printf("%d%c", i, i%qnt==0 ? '\n' : ' ');
    }

    return 0;
}