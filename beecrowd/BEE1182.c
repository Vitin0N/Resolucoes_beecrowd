#include <stdio.h>

int main(){
    int coluna, i, j, cont=0;
    float matriz[12][12], soma=0;
    char c;

    scanf("%d%*c", &coluna);
    scanf("%c", &c);

    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%f", &matriz[i][j]);
        }
    }
    for(i=0; i<12; i++){
       j=11;
        while(i!=12-j-1){
            soma += m[i][j];
            j--;
            cont++;
        }
    }

    if(c=='S'){
        printf("%.1f\n", soma);
    }
    else{
        printf("%.1f\n", soma/cont);
    }

    return 0;
}