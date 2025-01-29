#include <stdio.h>
#include <string.h>

int main(){
    int n, produto, p;
    double resultado;
    

    scanf("%d", &n);

    while(n--){
        resultado = 0;
        scanf("%d", &produto);

        char comida[produto][51];
        float preco[produto];

        for(int i=0; i<produto; i++){
            scanf("%s %f", comida[i], &preco[i]);
        }

        scanf("%d", &p);

        char copia[p][51];
        int copiap[p];

        for(int i=0; i<p; i++){
            scanf("%s %d", copia[i], &copiap[i]);
        }

        for(int i=0; i<p; i++){
            for(int j=0; j<produto; j++){
                if(strcmp(copia[i], comida[j])==0){
                    resultado += copiap[i]*preco[j];
                    break;
                }
            }   
        }
        printf("R$ %.2lf\n", resultado);
    }
    
    

    return 0;
}