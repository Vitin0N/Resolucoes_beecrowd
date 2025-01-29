#include <stdio.h>
#include <string.h>

void Verifica(char *str, int tam){
    if(tam>3){
        return;
    }
    else if(str[0]=='U' && str[1]=='R'){
        str[2]='I';
    }
    else if(str[0]=='O' && str[1]=='B'){
        str[2]='I';
    }
}

int main(){
    int n;

    scanf("%d", &n);
    getchar();

    while(n--){
        char a[100];
        int tam;

        scanf("%s", a);
        tam = strlen(a);
        Verifica(a, tam);

        printf("%s%c", a, n==0 ? '\n' : ' ');
    }

    return 0;
}