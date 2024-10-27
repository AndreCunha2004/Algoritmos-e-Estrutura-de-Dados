#include <stdio.h>
#include <math.h>

void quadrado_perfeito(float num){

    int i, posicao = -1;

    if(num > 0){
        for(i = 1; i <= num; i++){
            if(num == pow(i,2)){
                posicao = i;
                break;
            }
        }
        if(posicao != -1)
            printf("%.0f = %i * %i -> Quadrado perfeito\n", num, i, i);
        else
            printf("Nao eh um quadrado perfeito :( \n");
    }else
        printf("Numero inválido! Tente novamente...\n");
}
