#include <stdio.h>
#include <string.h>

int main(void){
    char senha[100];

    while (fgets(senha, sizeof(senha), stdin) != NULL){
    senha[strcspn(senha,"\n")] = '\0';//tirar \n

        if (strlen(senha) < 6 || strlen(senha) > 32){
            puts("Senha invalida.");
        } else {
            int a = 0;
            int flagmaisc = 0, flagminsc = 0, flagnum = 0;
            int flagspchar = 1;

            while (senha[a] != '\0'){
                if (senha[a] >= '0' && senha[a] <= '9'){
                    flagnum = 1;
                } else if (senha[a] >= 'a' && senha[a] <='z'){
                    flagminsc = 1;
                } else if (senha[a] >= 'A' && senha[a] <= 'Z'){
                    flagmaisc = 1;
                } else {
                    flagspchar = 0;
                }
                    a++;
                }


                if (flagmaisc && flagminsc && flagnum && flagspchar){
                    puts("Senha valida.");
                } else {
                    puts("Senha invalida.");
                }
        }
    }

    return 0;
}