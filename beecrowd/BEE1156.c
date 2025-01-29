#include <stdio.h>

int main(){
    int i;
    double s=0, j;

    for(i=1, j=1.0; i<=39; i+=2, j*=2){
        s += (i/j);
    }
    printf("%.2lf\n", s);

    return 0;
}