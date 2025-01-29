#include <stdio.h>

int main(){

    int diaInicio, diaFinal, horaInicio, horaFinal, minInicio, minFinal, segInicio, segFinal;
    int totalSegsInicio, totalSegsFinal, TotalSegs;

    scanf("Dia %d", &diaInicio);
    scanf("%d : %d : %d", &horaInicio, &minInicio, &segInicio);
    scanf("Dia %d", &diaFinal);
    scanf("%d : %d : %d", &horaFinal, &minFinal, &segFinal);

    totalSegsInicio = (diaInicio*86400)+(horaInicio*3600)+(minInicio*60)+segInicio;
    totalSegsFinal = (diaFinal*86400)+(horaFinal*3600)+(minFinal*60)+segFinal;
    TotalSegs = totalSegsFinal - totalSegsInicio;
   

    printf("%d dia(s)\n", TotalSegs/86400);
    TotalSegs %= 86400;
    printf("%d hora(s)\n", TotalSegs/3600);
    TotalSegs %= 3600;
    printf("%d minuto(s)\n", TotalSegs/60);
    TotalSegs %= 60;
    printf("%d segundo(s)\n", TotalSegs);

    return 0;
}