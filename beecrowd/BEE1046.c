#include <stdio.h>

int main(){
    int hora_inicio, hora_final, total;

    scanf("%d%d", &hora_inicio, &hora_final);

    if(hora_inicio<hora_final){
        total = hora_final-hora_inicio;
    }
    else{
        total = (hora_inicio-24)*-1 + (hora_final);
    }
    if(hora_final==hora_inicio){
        total = 24;
    }
    printf("%d\n", total);


    return 0;
}