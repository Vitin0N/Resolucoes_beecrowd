#include <stdio.h>
#include <string.h>

int Vogal(char letra){
    switch(letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': return 1;
        default: return 0; 
    }
}

int main(){
    char risada[51];
    int final, inicial, engracada;

    scanf("%s", risada);
    
    final = strlen(risada)-1;
    inicial = 0;
    engracada = 1;

    while(inicial<final){
        if(Vogal(risada[inicial]) && Vogal(risada[final])){//compara as vogais
            if(risada[inicial]!=risada[final]){//ve se as vogais são diferentes
                engracada =0;
                break;
            }
            inicial++;
            final--;
        }
        else{//avança se não tiver vogal
            if(!Vogal(risada[inicial])){//se não tiver vogal no inicio
                inicial++;
            }
            if(!Vogal(risada[final])){//se não tiver vogal no final
                final--;
            }
        }
    }

    printf("%c\n", engracada ? 'S' : 'N');

    return 0;
}