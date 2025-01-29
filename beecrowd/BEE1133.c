#include <stdio.h>

int main(){
    int a, b, menor, i;

    scanf("%d%d", &a, &b);

    if(b<a){
        menor = b;
        b = a;
        a = menor;
    }

    for(i=a+1; i<b; i++){
        if(i%5==2 || i%5==3){
            printf("%d\n", i);
        }
    }



    return 0;
}