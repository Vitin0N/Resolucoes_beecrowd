#include <stdio.h>
#include <string.h>

int main(){
    char animal[3][50];

    for(int i=0; i<3; i++){
        fgets(animal[i], 50, stdin);
        animal[i][strcspn(animal[i], "\n")] = '\0'; // tira '\n'
    }

    if(strcmp(animal[0],"vertebrado")==0){
        if(strcmp(animal[1],"ave")==0){
            if(strcmp(animal[2],"carnivoro")==0){
                printf("aguia\n");
            }
            else{
                printf("pomba\n");
            }
        }
        else{
            if(strcmp(animal[2],"onivoro")==0){
                printf("homem\n");
            }
            else{
                printf("vaca\n");
            }
        }   
    }
    else{
         if(strcmp(animal[1],"inseto")==0){
            if(strcmp(animal[2],"hematofago")==0){
                printf("pulga\n");
            }
            else{
                printf("lagarta\n");
            }
        }
        else{
            if(strcmp(animal[2],"hematofago")==0){
                printf("sanguessuga\n");
            }
            else{
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
