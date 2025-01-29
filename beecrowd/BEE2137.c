#include <stdio.h>
#include <string.h>

void OrdenaArray(int ar[], int tam){
    int j, i, temp;

    for(i=0; i<tam-1; i++){
        for(j=0; j<tam-i-1;j++){
            if(ar[j]>ar[j+1]){
                temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }
}

int main(){

        int n;
        

        while(scanf("%d", &n)!=EOF){
            
            int ar[n];
            
            for(int i=0; i<n; i++){
                scanf("%d", &ar[i]);
            }
            OrdenaArray(ar, n);
            for(int i=0; i<n; i++){
                printf("%.4d\n", ar[i]);
            }
        }

    return 0;
}