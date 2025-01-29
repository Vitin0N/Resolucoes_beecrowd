#include <stdio.h>

int main(){

    int n;

    while (scanf("%d", &n)!=EOF){
        int v, n1=0, n2=0, n3=0;
        for(int i=1; i<=n; i++){
            scanf("%d", &v);

            if(v<10){
                n1++;
            }
            if(v>=10 && v<20){
                n2++;
            }
            if(v>=20){
                n3++;
            }
        }
        if(n3>0){
            puts("3");
        }
        else if(n2>0){
            puts("2");
        }
        else{
            puts("1");
        }
    }
    

    return 0;
}