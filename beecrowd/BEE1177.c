#include <stdio.h>

int main(){
    int n=0, t, i;

    scanf("%d", &t);

    for(i=0; i<1000; i++){
        if(n==t){
            n=0;
            i--;
            continue;
        }

        printf("N[%d] = %d\n", i, n);
        n++;
    }
    
    return 0;
}