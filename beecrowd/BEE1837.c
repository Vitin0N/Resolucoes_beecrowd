#include <stdio.h>

int main(){
    
    int a, b, jorge, mod;

    scanf("%d %d", &a, &b);

    if(a>0){
        printf("%d %d\n", a/b, a%b);
    }
    else{
        jorge = (a/b)-1;
        mod = -1*(b*jorge)+a;
        
        printf("%d %d\n", jorge, mod);
    }

    return 0;
}