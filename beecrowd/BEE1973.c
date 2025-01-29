#include <stdio.h>

int main(){

    unsigned long long n, soma=0;
    scanf("%llu", &n);
    int ar[n], estrelas=1, i, par, maior;

    for(i=0; i < n ; i++){
        scanf("%d", &ar[i]);
        soma+=ar[i];
    }
    
    i = 0;
    maior =i;
    while(i>=0 && i < n){
        if(ar[i] == 0){
            break;
        }

        if(i>maior){
            maior=i;
            estrelas++;
        }

        par = ar[i]%2==0 ? 1 : 0;
        
        soma--;
        ar[i]--;
        
        if(par){
            i--;
        }
        else{
            i++;
        }
    }
    printf("%d %llu\n", estrelas, soma);

    return 0;
}