#include <stdio.h>

int main(){

    int horai, minutoi, horaf, minutof;
    int totali, totalf, total, horat, mint;

    scanf("%d%d%d%d", &horai, &minutoi, &horaf, &minutof);

    if(horai == horaf && minutof == minutoi){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        return 0;
    }

    if(horai == horaf && minutof<minutoi){
         mint = (minutoi-60)*-1 + minutof;
        printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n", mint);
        return 0;
    }

    if(horaf<horai){
        horat = (horai-24)*-1;
        horai = horaf+horat;
        total = (horai*60)+minutof-minutoi;
        horat = total/60;
        mint = total%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", horat, mint);

    }
    else{

    totali = (horai*60)+minutoi;
    totalf = (horaf*60)+minutof;
    total = totalf-totali;

    horat = total/60;
    mint = total%60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", horat, mint);
    }


    return 0;
}
