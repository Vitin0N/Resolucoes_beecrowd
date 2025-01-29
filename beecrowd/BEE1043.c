#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c, perimetro, area;

    scanf("%lf%lf%lf", &a,&b,&c);
    
    if((fabs(a-b)<c && c<a+b)){
        perimetro = a+b+c;
        printf("Perimetro = %.1lf", perimetro);
    }
    else{
        area = ((a+b)*c)/2;
        printf("Area = %.1lf", area);
    }
    
    return 0;
}
