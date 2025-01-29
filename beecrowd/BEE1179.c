#include <stdio.h>

void PreencherArray(int ar[], int o, int num){
    ar[o]=num;
}

int main(){
    int n, v, contimpar=0, contpar=0, j=0, o=0;
    int par[5], impar[5];

    for(int i=0; i<15; i++){
        if(o==5){
            for(v=0; v<5; v++){
                printf("par[%d] = %d\n",v, par[v]);
                o=0;
                contpar=0;
            }
        }
        if(j==5){
            for(v=0; v<5; v++){
                printf("impar[%d] = %d\n",v, impar[v]);
                j=0;
                contimpar=0;
            }
        }
        scanf("%d", &n);
        if(n%2==0){
            PreencherArray(par, o, n);
            o++;
            contpar++;
        }
        else{
            PreencherArray(impar, j, n);
            j++;
            contimpar++;
        }
    }

    if(contimpar>0){
        for(v=0; v<contimpar; v++){
            printf("impar[%d] = %d\n",v, impar[v]);
        }
    }
    if(contpar>0){
        for(v=0; v<contpar; v++){
            printf("par[%d] = %d\n",v, par[v]);
        }
    }

    return 0;
}