#include <stdio.h>

int main(){
    int linha, i, j;
    float matriz[12][12], soma=0;
    char c;

    scanf("%d%*c", &linha);
    scanf("%c", &c);

    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%f", &matriz[i][j]);
        }
    }
    for(i=0; i<12; i++){
        soma += matriz[linha][i];
    }

    if(c=='S'){
        printf("%.1f\n", soma);
    }
    else{
        printf("%.1f\n", soma/12);
    }

    return 0;
}