#include <stdio.h>

int main(){
    int alc=0, gas=0, die=0, num;

    while(1){
        scanf("%d", &num);

        if(num==1){
            alc++;
        }
        if(num==2){
            gas++;
        }
        if(num==3){
            die++;
        }
        if(num==4){
            break;
        }
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alc, gas, die);
    
    return 0;
}