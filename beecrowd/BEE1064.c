#include <stdio.h>

int main(){
    float num, postivo=0, media=0, soma=0, i;

    for(i=0; i<6; i++){
        scanf("%f", &num);

        if(num>=0){
            soma+=num;
            postivo++;
        }
    }
    media = soma/postivo;
    printf("%.0f valores positivos\n%.1f\n", postivo, media);
    
    return 0;
}