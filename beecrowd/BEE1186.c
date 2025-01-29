#include <stdio.h>

int main(){
    double soma=0, m[12][12];
    int linha, coluna;
    char c;

    scanf("%c", &c);
    for(linha=0; linha<12; linha++){
        for(coluna=0; coluna<12; coluna++){
            scanf("%lf", &m[linha][coluna]);
        }
    }
    for(linha=12; linha>0; linha--){
        for(coluna=12;linha>0; coluna--){
            
        }
    }
    if(c=='S'){
        printf("%.1lf\n", soma);
    }
    else{
        printf("%.1lf\n", soma/66);
    }

    return 0;
}