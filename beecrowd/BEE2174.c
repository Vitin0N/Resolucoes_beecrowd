#include <stdio.h>//vi na internet
#include <string.h>

char pomekon[1001][101];

int Busca(char *pokemon, int n){
    for(int i=0; i<n; i++){
        if(!strcmp(pomekon[i], pokemon)){//compra todos os itens do array
            return i;
        }
    }
    return -1;
}

int main(){
    char s[1001];
    int n, p=0;

    memset(pomekon, '\0', sizeof(pomekon));//preenche todo o array com /0

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%s", s);

        if(Busca(s,n)==-1){
            strcpy(pomekon[p++],s);
        }
    }

    printf("Falta(m) %d pomekon(s).\n", 151-p);


    /*
    Exemplo da matriz de char:

    i = 0: "vitin"
    i = 1: "joge"
    i = 2: "da"
    i = 3: "vitcadfin"
    i = 4: "ccvcbvcb"
    i = 5: "fdsfdg"
    i = 6: "bvbbvcb"
    i = 7: "vitin"
    i = 8: "vitin"
    i = 9: "asasas"
    ...
    i = n-1: "12212213d"

    como se fosse uma lista (muito pika)
    */


    return 0;
}