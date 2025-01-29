#include <stdio.h>

int main(){
    int codigo, quant;
    float mult;

    scanf("%d", &codigo);

    switch(codigo)
    {
        case 1 :
        scanf("%d", &quant);
        mult = quant * 4;
        printf("Total: R$%.2f", mult);
        break;

        case 2 :
        scanf("%d", &quant);
        mult = quant * 4.5;
        printf("Total: R$%.2f", mult);
        break;

        case 3 :
        scanf("%d", &quant);
        mult = quant * 5;
        printf("Total: R$%.2f", mult);
        break;

        case 4 :
        scanf("%d", &quant);
        mult = quant * 2;
        printf("Total: R$%.2f", mult);
        break;

        case 5 :
        scanf("%d", &quant);
        mult = quant * 1.5;
        printf("Total: R$%.2f", mult);
        break;


    }

    return 0;
}
