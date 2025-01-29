#include <stdio.h>

int main(){

    int i, j, cont=0, k=0;
    double m[12][12],soma=0;
    char c;

    scanf("%c", &c);

    for(i=0;i<12;i++){
        for(j=0;j<12; j++){
            scanf("%lf", &m[i][j]);
        }
    }
    for(i=7 ; i<12 ; i++){
        j = 5;
        j = j-k;
        while(j!=i){
            soma += m[i][j];
            cont++;
            j++;
        }
        k++;
    }

    if(c=='S'){
        printf("%.1lf\n", soma);
    }
    else{
        printf("%.1lf\n", soma/cont);
    }

    return 0;
}