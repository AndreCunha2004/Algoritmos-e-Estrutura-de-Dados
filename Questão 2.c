// Este programa recebe os lados de um triangulo e confirma se é triangulo e qual tipo de triangulo.
    // Autor: André Cunha - Engenharia de Produção - IFES Cariacica - Engenharia de Produção
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado_1, lado_2, lado_3;

    // Leitura das variaveis
    printf("Digite o primeiro lado:\n");
    scanf("%f", &lado_1);
    printf("\n");

    printf("Digite o segundo lado:\n");
    scanf("%f", &lado_2);
    printf("\n");

    printf("Digite o terceiro lado:\n");
    scanf("%f", &lado_3);
    printf("\n");

    // Verifica se dois lados são maiores do que o terceiro
    if((lado_1+lado_2) > lado_3 && (lado_1+lado_3) > lado_2 && (lado_2+lado_3) > lado_1){
        printf("Estes valores formam um triangulo!\n");
        printf("\n");

        if(lado_1 == lado_2 && lado_2 == lado_3)
            printf("Este eh um triangulo equilatero!\n\n");

        else if(lado_1 != lado_2 && lado_2 != lado_3)
            printf("Este eh um triangulo escaleno!\n\n");

        else // if(lado_1 == lado_2 || lado_1 == lado_3 || lado_2 == lado_3)
            printf("Este eh um triangulo isosceles!\n\n");

    }else
        printf("Esses valores nao formam um triangulo!\n\n");

    return 0;
}
