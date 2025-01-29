#include <stdio.h>

int main() {
    int diaInicio, diaFinal, horaInicio, horaFinal, minInicio, minFinal, segInicio, segFinal;
    int totalSegsInicio, totalSegsFinal, TotalSegs;

    // Leitura dos dados
    scanf("Dia %d", &diaInicio);
    scanf("%d : %d : %d", &horaInicio, &minInicio, &segInicio);
    scanf("Dia %d", &diaFinal);
    scanf("%d : %d : %d", &horaFinal, &minFinal, &segFinal);

    // Calcular total de segundos a partir da meia-noite
    totalSegsInicio = (diaInicio - 1) * 86400 + (horaInicio * 3600) + (minInicio * 60) + segInicio; // dia * 86400 (segundos)
    totalSegsFinal = (diaFinal - 1) * 86400 + (horaFinal * 3600) + (minFinal * 60) + segFinal; // dia * 86400 (segundos)

    // Calcular a diferença total em segundos
    TotalSegs = totalSegsFinal - totalSegsInicio;

    // Se a diferença total for negativa, isso significa que a data final é anterior à data inicial
    if (TotalSegs < 0) {
        printf("A data final deve ser posterior à data de início.\n");
        return 1; // Saída com erro
    }

    // Calcular dias, horas, minutos e segundos
    int dias = TotalSegs / 86400;
    TotalSegs %= 86400;
    int horas = TotalSegs / 3600;
    TotalSegs %= 3600;
    int minutos = TotalSegs / 60;
    TotalSegs %= 60;
    int segundos = TotalSegs;

    // Impressão dos resultados
    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);

    return 0;
}
