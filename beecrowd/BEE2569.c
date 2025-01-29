#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Tira7(char *str){
    char *pos;
    pos = strchr(str, '7');
    while(pos!=NULL){
        *pos = '0';
        pos = strchr(++pos, '7');
    }
}


int main(){
    char sinal, num1[10000], num2[10000], res[10000];
    int a, b, resultado;

    scanf("%s %c %s", num1, &sinal, num2);

    Tira7(num1);
    Tira7(num2);

    
    a=atoi(num1);
    b=atoi(num2);

    switch (sinal)
    {
    case '+':
        resultado = a+b;
        break;
    case 'x':
        resultado = a*b;
        break;
    }

    sprintf(res, "%d", resultado);

    Tira7(res);

    resultado=atoi(res);
    sprintf(res, "%d", resultado);

    printf("%s\n", res);

    return 0;
}