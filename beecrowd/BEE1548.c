#include <stdio.h>

int Troca(int ar[], int copia[], int tam, int m){
    int aux;

    for(int i = 0; i<tam; i++){
        for(int j = i+1; j< tam; j++){
            if(ar[i]<ar[j]){
                aux = ar[i];
                ar[i]=ar[j];
                ar[j]=aux;
            }
        }
    }
    for(int i =0; i<tam; i++){
        if(ar[i]!=copia[i]){
            m--;
        }
    }
    return m;
}

int main(){
    int n;
    scanf("%d", &n);

    while(n--){
        int m;
        scanf("%d", &m);
        int notas[m], copia[m], tam = m;

        for(int i=0; i<m; i++){
            scanf("%d", &notas[i]);
            copia[i] = notas[i];
        }

        printf("%d\n", Troca(notas, copia, tam, tam));
    }

    return 0;
}