#include <stdio.h>

int main(){
    int i, ar[10], n;

    scanf("%d", &n);
    
    for(i=0;i<10;i++, n*=2){
        ar[i]=n;
        printf("N[%d] = %d\n", i, ar[i]);
    }

    return 0;
}