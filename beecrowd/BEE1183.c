#include <stdio.h>

int main(){

    char c;
    double m[12][12], soma=0; 

    scanf("%c", &c);
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            scanf("%lf", &m[i][j]);
        }
    }
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            if(j>i){
                soma += m[i][j];
            }
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