#include <stdio.h>

int main(){

    float n1, n2, n3, n4, media, final1, mediafinal;

    scanf("%f%f%f%f", &n1,&n2,&n3,&n4);

    media = ((n1*2)+(n2*3)+(n3*4)+(n4*1)) / (10);

    printf("Media: %.1f\n", media);

    if(media >= 7.0){
        printf("Aluno aprovado.\n");
        return 0;
    }
    if(media <= 4.9){
        printf("Aluno reprovado.\n");
        return 0;
    }
    if(media >= 5.0 && media < 7.0){
        printf("Aluno em exame.\n");
        scanf("%f", &final1);
        printf("Nota do exame: %.1f\n", final1);
        mediafinal = (final1+media) / 2;
        if(mediafinal > 5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f", mediafinal);

        }
        else{
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f", mediafinal);

        }
    }

    return 0;
}
