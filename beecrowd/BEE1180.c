#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int ar[n], menor, pos;

    scanf("%d", &ar[0]);
    menor = ar[0];
    for(int i=1; i<n; i++){
        scanf("%d", &ar[i]);
        if(menor>ar[i]){
            menor = ar[i];
            pos=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d", menor, pos);

    return 0;
}