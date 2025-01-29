#include <stdio.h>

int main(){
    int a, n, soma=0;

    scanf("%d", &a);
    while(1){
        scanf("%d", &n);
        if(n>0){
            break;
        }
    }
    
    for(int i=0; i<n; i++){
        soma += a+i;
    }
    printf("%d\n", soma);

    return 0;
}