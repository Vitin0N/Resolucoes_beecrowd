#include <stdio.h>

int main(){
    unsigned long long n;

    scanf("%llu", &n);
    while(n--){
        printf("ho%c", n==0 ? '!' : ' ');
    }
    puts("");

    return 0;
}