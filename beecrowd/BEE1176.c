#include <stdio.h>

unsigned long long Fib(int n, unsigned long long ar[], unsigned long long tam){
    ar[0]=0;
    ar[1]=1;
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    unsigned long long i;
    for(i=2; i<=n; i++){
        ar[i]=ar[i-1]+ar[i-2];
    }
    return ar[n];
}

int main(){

    unsigned long long t;
    scanf("%llu", &t);
    unsigned long long ar[t];
    
    while(t--){
        int n;

        scanf("%d", &n);

        printf("Fib(%d) = %llu\n", n, Fib(n, ar, t));
        }
    return 0;
}