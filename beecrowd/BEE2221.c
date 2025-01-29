#include <stdio.h>

int ValorGolpe(int ata, int def, int lvl, int bonus){
    int valor;
    if(lvl%2==0){
        return valor = ((ata+def)/2) + bonus;
    }
    return valor = ((ata+def)/2);
}

int main(){

    int n, dabriel, guarte, a1,d1,l1, bonus;

    scanf("%d", &n);

    while(n--){
        scanf("%d", &bonus);

        scanf("%d%d%d", &a1, &d1 ,&l1);
        dabriel = ValorGolpe(a1, d1, l1, bonus);
        scanf("%d%d%d", &a1, &d1 ,&l1);
        guarte = ValorGolpe(a1, d1, l1, bonus);

        if(dabriel==guarte){
            printf("Emapte\n");
        }
        else{
            if(dabriel>guarte){
                printf("Dabriel\n");
            }
            else{
                printf("Guarte\n");
            }
        }
    }

    return 0;
}