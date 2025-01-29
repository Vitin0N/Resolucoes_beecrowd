#include <stdio.h>

int main(){
    int num;

    while(1){
        scanf("%d", &num);
        if(num==0){
            break;
        }
        for(int i=1; i<=num; i++){
            printf("%d%c", i, i==num? '\n': ' ');
        }
    }

    return 0;
}