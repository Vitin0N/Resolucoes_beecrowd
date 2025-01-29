#include <stdio.h>
#include <math.h>

int main(){
    int n;
    double CalculoDeRaparigaDoCarai;
    
    scanf("%d", &n);

    CalculoDeRaparigaDoCarai = (pow(((1+sqrt(5))/2),n)-pow(((1-sqrt(5))/2),n)) / (sqrt(5));

    printf("%.1lf\n", CalculoDeRaparigaDoCarai);

    return 0;
}