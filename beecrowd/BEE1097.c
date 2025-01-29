#include <stdio.h>
 
int main() {
 
    int i, j, n;
    
    for(i=1; i<=9; i+=2){

        j = 7+ (i-1);
        n = j;

        for(; j<=n-2; j--){
            printf("I=%d J=%d\n", i, j);
        }
        
    }
 
    return 0;
}