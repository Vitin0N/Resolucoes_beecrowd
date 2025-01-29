#include <stdio.h>

int main() {
    float i, j;

    for(i=0; i<2.1; i+=0.2){  // Agora I vai de 0 até 2 com incrementos de 0.2
        for(j=1; j<=3; j++){
            if (i == 0 || i == 1 || i > 1.9)  // Verifica se I é 0, 1 ou 2
                printf("I=%d J=%d\n", (int)i, (int)(j+i));
            else
                printf("I=%.1f J=%.1f\n", i, j+i);
        }
    }

    return 0;
}
