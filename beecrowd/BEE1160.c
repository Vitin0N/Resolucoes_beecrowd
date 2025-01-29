#include <stdio.h>

int main(){

    int t, pa, pg;
    float g1, g2;
    int anos;

    scanf("%d", &t);

    while(t--){
        scanf("%d%d%f%f", &pa, &pg, &g1, &g2);
        anos = 0;
        while(1){

            if(pa>pg){
                break;
            }
            if(anos>100){
                break;
            }

            pa += pa*(g1/100);
            pg += pg*(g2/100);
            anos++;
        }
        if(anos>100){
            printf("Mais de 1 seculo.\n");
        }
        else{
            printf("%d anos\n", anos);
        }
    }

    return 0;
}
