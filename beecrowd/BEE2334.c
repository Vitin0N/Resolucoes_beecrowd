#include <stdio.h>

int main(){

    unsigned long long int patinhos, volta;


    do{
        scanf("%llu", &patinhos);

        if(patinhos==-1){
            break;
        }

        volta = patinhos-1;

        if(volta<0){
            printf("%llu\n", volta*0);
        }
        else{
            printf("%llu\n", volta);
        }

    }while(patinhos>=0);

    return 0;
}
