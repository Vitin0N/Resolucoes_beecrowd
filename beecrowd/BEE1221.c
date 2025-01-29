#include <stdio.h>
#include <math.h>

int EhPrimo(int num) {
    float raiz;
    int dividers;

    dividers = 0;
    raiz = sqrt(num);

    for(int j = 2; j <= raiz; j++) {
        if(num%j == 0) {
            dividers++;
        }
    }
    return dividers;
}

int main(void) {
    int casos, number, primo;

    scanf("%d", &casos);

    for(int i = 1; i <= casos; i++) {
        scanf("%d", &number);
        primo = EhPrimo(number);
        if(primo == 0) {
            printf("Prime\n");
        } else {
            printf("Not Prime\n");
        }
    }

    return 0;
}