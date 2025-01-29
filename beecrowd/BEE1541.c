#include <stdio.h>
#include <math.h>

int main(){

    int a, b, c, trunc, deno;
    float areaT, casa, perc;

    while(1){

    scanf("%d", &a);

    if(!a){
        break;
    }

    scanf("%d %d", &b, &c);

    areaT = a*b;
    perc = areaT / (c/100.0);
    casa = sqrt(perc);
    trunc = casa;

    printf("%d\n", trunc);
    
    }      

    return 0;
}