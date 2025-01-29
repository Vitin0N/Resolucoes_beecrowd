#include <stdio.h>

int main(){
    int n, m;
    scanf("%d%d", &n, &m);

    int ar[n][m], i, j;

    for(i=0; i<n; i++){//função para atribuir valores ao array.
        for(j = 0 ; j<m ; j++){
            scanf("%d", &ar[i][j]);
        }
    }

    for(i=0; i<n; i++){
        for(j = 0 ; j<m ; j++){
            if(ar[i][j]==42){
                if(ar[i-1][j-1]==7 && ar[i-1][j]==7 && ar[i-1][j+1]==7 && ar[i][j-1]==7 && ar[i][j+1]==7 && ar[i+1][j-1]==7 && ar[i+1][j]==7 && ar[i+1][j+1]==7){
                    printf("%d %d\n", i+1, j+1);//conferir se ele esta cercado por 7's...
                    return 0;
                }
            }
        }
    }
    printf("0 0\n");//se não -\(ºvº)/-...


    return 0;
}