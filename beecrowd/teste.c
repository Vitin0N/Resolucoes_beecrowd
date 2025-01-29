#include <stdio.h>
#include <math.h>

int Decimal(long long a){
    int resto, decimal = 0 , i = 0;
    
    while(a!=0){
        resto = a % 10;
        a /= 10;
        decimal += resto * pow(2,i);
        ++i;
    }
    return decimal;
}

int main(){
    long long bin;

    printf("Digite seu numero em binario: ");
    scanf("%lld", &bin);

    printf("Seu numero em decimal eh: %d\n", Decimal(bin));

    return 0;
}