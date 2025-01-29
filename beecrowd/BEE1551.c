#include <stdio.h>
#include <string.h>

void TiraBarra(char *str, int tam){
    if(str[tam-1]=='\n'){
        str[tam-1]='\0';
    }
}

int ContaABC(char str[], int tam){
    int cont=0, i, fabio;
    int alfabeto[26]={0};

    for(i=0;i<tam; i++){
        if(str[i]>='a' && str[i]<='z'){
            fabio = str[i]-'a';
            alfabeto[fabio]=1;
        }
     }

    for(i=0; i<26; i++){
        if(alfabeto[i]>0){
            cont++;
        }
    }
    return cont;
}


int main(){

    int n, tam, fabio;
    char frase[1002];

    scanf("%d", &n);
    getchar();

    while(n--){

        fgets(frase, 1002, stdin);
        tam = strlen(frase);
        TiraBarra(frase, tam);

        fabio = ContaABC(frase, tam);
        
        if(fabio==26){
            printf("frase completa\n");
        }else if(fabio>=13){
            printf("frase quase completa\n");
        }else{
            printf("frase mal elaborada\n");
        }
    }

    return 0;
}