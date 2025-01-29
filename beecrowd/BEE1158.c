#include <stdio.h>

int main(){
    int n, x, y, soma;

    scanf("%d", &n);
    for(int j=0; j<n; j++){
        scanf("%d%d", &x, &y);
        soma=0;
        for(int i=0; i<y; i++, x+=2){
            if(x%2==0){
                x++;
            }
            soma += x;
        } 
        printf("%d\n", soma);
    }

    return 0;
}