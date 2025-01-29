#include <stdio.h>

int main(){
    int ar[20], i, copia[20], j, aux;

    for(i=0, j=19; i<20;i++, j--){
        scanf("%d", &ar[i]);
        copia[j] = ar[i];
    }
    for(i=0; i<20 ; i++){
        aux=copia[i];
        ar[i]=aux;
        printf("N[%d] = %d\n", i, ar[i]);
    }

    return 0;
}