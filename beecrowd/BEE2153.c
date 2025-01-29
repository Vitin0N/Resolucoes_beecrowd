#include <stdio.h>
#include <string.h>

void RemoveRepeticao(char *str, int tam){
    int i;
    char copia[tam];

    for(i=tam-1; i>=0; i--){
        strncpy(copia, str, i);
        copia[i]='\0';
        
        if(strstr(copia, &str[i])==NULL){
            str[i+1]='\0';
            break;
        }
    }
}

int main(){
    char palavra[31];
    int tam;

    while(fgets(palavra, 31, stdin)!=NULL){
        palavra[strcspn(palavra,"\n")]='\0';//tira \n;
        tam = strlen(palavra);

        RemoveRepeticao(palavra, tam);
        printf("%s\n", palavra);
    }

    return 0;
}