#include <stdio.h>
#include <string.h>

int main(){
    char dna[101], bac[101];

    while(scanf("%s %s", dna, bac)!=EOF){

        if(strstr(dna,bac)){
            printf("Resistente\n");
        }
        else{
            printf("Nao resistente\n");
        }
    }
    
    return 0;
}