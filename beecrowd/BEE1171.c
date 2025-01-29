#include <stdio.h>

void Repete(int n, int ar[], int num){
    int i, repete = 0;
    for(i=0; i<n; i++){
        if(num == ar[i]){
            repete++;
        }
    }
    printf("%d aparece %d vez(es)\n", num, repete);
}

int main(){
    int n;
    scanf("%d", &n);

    int ar[n];

    for(int i =0; i < n; i++){
        scanf("%d", &ar[i]);
    }

    Repete(n, ar, ar[w])

    return 0;
}