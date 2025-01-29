#include <stdio.h>

int CalculaLed(char *str, int tam){
    int led[10]={6, 2, 5, 5, 4, 5, 6, 3, 7, 6};//numero de leds por posição 0-9
    int ledstotal=0;//soma *v*

    for(int i=0; i<tam; i++){
        ledstotal += led[str[i]-'0'];//'0' para transformar caracter em letra
    }

    return ledstotal;
}

int main(){
    int n, tamanho;
    char led[101];

    scanf("%d", &n);

    while(n--){

    scanf("%s", led);
    tamanho =0;
    
    while(led[tamanho]!='\0'){
        tamanho++;//ver tamanho exato da string
    }
    printf("%d leds\n", CalculaLed(led, tamanho));

    }

    return 0;
}