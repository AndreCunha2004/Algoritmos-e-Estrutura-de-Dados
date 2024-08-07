// Este é um programa que recebe uma nota 0-100 e imprime o conceito
#include <stdio.h>

int main()
{
    float nota;

    // Leitura da variavel
    printf("Digite a nota: ");
    scanf("%f", &nota);
    printf("\n");

    if(nota <= 100 && nota >= 90)
        printf("Conceito A.\n");
    else
        if(nota < 90 && nota>=80)
            printf("Conceito B.\n");
        else
            if(nota < 80 && nota>=70)
                printf("Conceito C.\n");
            else
                if(nota < 70 && nota>=60)
                    printf("Conceito D.\n");
                else
                    if(nota < 60 && nota>=0)
                        printf("Conceito F.\n");
                    else
                        printf("Erro! Nota invalida.\n");
    return 0;
}
