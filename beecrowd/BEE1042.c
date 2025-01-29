#include <stdio.h>

int main(){
    int a,b,c,va,vb,vc,tmp, maior, meio, menor;

    scanf("%d%d%d", &a,&b,&c);

    va = a;
    vb = b;
    vc = c;

    if (a>b && b>c){
        printf("%d\n%d\n%d\n\n", c,b,a);
    }
    if(a>b && b<c && a<c){

        printf("%d\n%d\n%d\n\n", b,a,c);
    }
    if(a>b && b<c && a>c){

        printf("%d\n%d\n%d\n\n", b,c,a);
    }
    if(a<b && b>c && a>c){

        printf("%d\n%d\n%d\n\n", c,a,b);
    }
    if(a<b && b>c && a<c){

        printf("%d\n%d\n%d\n\n", a,c,b);
    }
    if(a<b && b<c && a<c){

        printf("%d\n%d\n%d\n\n", a,b,c);

    }
    if(a<b && b<c && a>c){

        printf("%d\n%d\n%d\n\n", c,b,a);

    }

    printf("%d\n%d\n%d\n", va,vb,vc);

    return 0;
}
