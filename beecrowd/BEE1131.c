#include <stdio.h>

int main(){
    int gremio, inter, repete, grenais=0, vinter=0, vgremio=0, empate=0;

    while (1){

        scanf("%d%d", &inter, &gremio);

        if(gremio>inter){
            vgremio +=1;
        }
        else if(inter>gremio){
            vinter += 1;
        }
        else {
            empate += 1;
        }
        grenais += 1;

        printf("Novo grenal (1 - sim 2 - nao)\n"); 
        scanf("%d", &repete);

        if(repete == 2){
            break;
        }
    }
    printf("%d genais\nInter:%d\nGremio:%d\nEmpates:%d\n", grenais, vinter, vgremio, empate);
    if(vgremio>vinter){
        printf("Gremio venceu mais\n");
    }
    else if(vinter>vgremio){
        printf("Inter venceu mais\n");
    }
    else{
        printf("Nao houve vencedor\n");
    }

    return 0;
}