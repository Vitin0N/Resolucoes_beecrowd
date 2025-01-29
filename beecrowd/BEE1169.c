#include <stdio.h>
#include <math.h>

int main(){
    unsigned long long  n, x, graos;

    scanf("%llu", &n);

    while(n--){
        graos = 0;
        scanf("%llu", &x);

        for(int i=0; i<x; i++){
            if(i < 63) {
            graos += pow(2, i);
            }
        }
        
        graos = graos/12000;
        
        if(x == 64)
            graos += (pow(2, 63)/12000) + 1;
            
        printf("%llu kg\n", graos);
    }

    return 0;
}